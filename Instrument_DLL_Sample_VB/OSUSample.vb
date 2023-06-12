Imports Santec
Public Class OSUSample
    Private osu As New OSU
    Private spu As New SPU

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        '-------------------------------------------------------------
        '       Form Load
        '-------------------------------------------------------------
        Dim dev() As String = Nothing
        Dim usb_resource() As String = Nothing
        Dim errorcord As Integer
        Dim loop1 As Integer

        usb_resource = Communication.MainCommunication.Get_USB_Resouce()

        '---Add Item to combobox for usb resource
        For loop1 = 0 To UBound(usb_resource)
            Me.cmbosu_usb.Items.Add(usb_resource(loop1))
        Next

        errorcord = spu.Get_Device_ID(dev)

        If errorcord <> 0 Then
            Show_Error(errorcord)
            Exit Sub
        End If

        '---Add Item to combobox for device name
        For loop1 = 0 To UBound(dev)
            Me.cmbdevname.Items.Add(dev(loop1))
        Next

    End Sub
    Private Sub Show_Error(ByVal errordata As Integer)
        '------------------------------------
        '       Show error code
        '------------------------------------


        Dim errorstring() As String = [Enum].GetNames(GetType(Santec.ExceptionCode))
        Dim errorvale() As Integer = [Enum].GetValues(GetType(Santec.ExceptionCode))
        Dim loop1 As Integer

        For loop1 = 0 To UBound(errorvale)

            If errorvale(loop1) = errordata Then
                MsgBox(errorstring(loop1))
                Exit For
            End If

        Next

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        '-------------------------------------------------------
        '       Connect to OSU
        '-------------------------------------------------------
        Dim errorcord As Integer
        Dim comm_method As Santec.Communication.CommunicationMethod
        Dim address As String = Me.txtAddress.Text
        Dim osu_dev As String = String.Empty                'osu control device
        Dim ans As String = String.Empty                    'answer for the device


        If rdo110.Checked Then
            'OSU-110

            osu.Terminator = CommunicationTerminator.Cr

            If rdiUSB.Checked = True Then
                '' USB Communication
                '' USB 通信

                If Me.cmbosu_usb.Text = "" Then
                    MsgBox("Please enter to the OSU USB Resource", vbOKOnly)
                    Exit Sub
                End If

                comm_method = Santec.Communication.CommunicationMethod.USB
                osu.DeviceID = CInt(Me.cmbosu_usb.SelectedIndex)
            ElseIf rdoLAN.Checked = True Then

                ' LAN Communication
                ' LAN 通信
                comm_method = Santec.Communication.CommunicationMethod.TCPIP
                osu.Port = Integer.Parse(txtPort.Text)
                osu.IPAddress = address
            Else
                '' GPIB Communication
                '' GPIB通信
                comm_method = Communication.CommunicationMethod.GPIB

                Dim gpibmethod As Santec.Communication.GPIBConnectType
                If rdikysightvisa.Checked = True Then
                    gpibmethod = Communication.GPIBConnectType.KeysightIO
                ElseIf rdiNI488.Checked = True Then
                    gpibmethod = Communication.GPIBConnectType.NI4882
                Else
                    gpibmethod = Communication.GPIBConnectType.NIVisa
                End If

                osu.GPIBAddress = CInt(address)
                osu.GPIBBoard = 0
                osu.GPIBConnectType = gpibmethod
            End If

            errorcord = osu.Connect(comm_method)
        Else
            'OSU-100

            If Me.cmbdevname.Text = "" Then
                MsgBox("Please enter to the OSU device Resource", vbOKOnly)
                Exit Sub
            End If

            osu.DeviceName = Me.cmbdevname.Text
            errorcord = osu.Connect()
        End If

        If errorcord <> 0 Then
            Show_Error(errorcord)
            Exit Sub
        End If

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        '--------------------------------------------------------
        '       switch for  OSU ch
        '--------------------------------------------------------
        Dim errorcord As Integer               'errorcord
        Dim ch As Integer


        '---check Combobox text 

        If Me.cmbch.Text = "" Then
            MsgBox("Please enter the osu switch channel number.")
            Exit Sub
        End If


        Select Case Me.cmbch.Text
            Case "Ch1"
                ch = 1
            Case = "Ch2"
                ch = 2
            Case = "Ch3"
                ch = 3
            Case = "Ch4"
                ch = 4
        End Select

        errorcord = osu.Set_Switch(ch)

        If errorcord <> 0 Then
            Show_Error(errorcord)
            Exit Sub
        End If

    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        '-----------------------------------------------
        '       Disconnect 
        '-----------------------------------------------
        Dim errorcord As Integer


        errorcord = osu.DisConnect

        If errorcord <> 0 Then
            Show_Error(errorcord)
            Exit Sub
        End If

        Me.cmbdevname.Text = ""
    End Sub

    Private Sub rdo100_CheckedChanged(sender As Object, e As EventArgs) Handles rdo100.CheckedChanged

        If Me.rdo100.Checked = True Then
            'OSU-100
            Me.Group100.Enabled = True
            Me.Group110.Enabled = False
        Else
            'OSU-110
            Me.Group100.Enabled = False
            Me.Group110.Enabled = True
        End If

    End Sub

    Private Sub rdo110_CheckedChanged(sender As Object, e As EventArgs) Handles rdo110.CheckedChanged

        If Me.rdo110.Checked = True Then
            'OSU-110
            Me.Group100.Enabled = False
            Me.Group110.Enabled = True
        Else
            'OSU-100
            Me.Group100.Enabled = True
            Me.Group110.Enabled = False
        End If

    End Sub

    Private Sub rdoLAN_CheckedChanged(sender As Object, e As EventArgs) Handles rdoLAN.CheckedChanged
        If rdoLAN.Checked = True Then
            txtPort.Text = "5000"
        Else
            txtPort.Text = ""
        End If
    End Sub
End Class
