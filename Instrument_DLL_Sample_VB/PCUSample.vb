Imports Santec
Public Class PCUSample
    Private PCU As New PCU                     'pcu control Class/ / pcu控制类
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        ' --------------------------------------------------------------
        ' Form Load
        ' 窗体载入
        ' --------------------------------------------------------------

        ' ----PCU-100　check
        ' ----选择 PCU-100　
        Me.rdo100.Checked = True


    End Sub

    Private Sub Show_Error(ByVal errordata As Integer)
        ' ------------------------------------
        ' Show error code
        ' 显示错误编号
        ' ------------------------------------

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

    Private Sub rdousb_CheckedChanged(sender As Object, e As EventArgs) Handles rdousb.CheckedChanged
        ' --------------------------------------------------------------
        ' USB communcation checked
        ' 选择USB 通讯
        ' --------------------------------------------------------------

        ' USB can control Only PCU-110
        ' USB只能控制PCU-110
        If Me.rdousb.Checked = True Then

            Me.txtaddress.Text = Me.txtdev_num.Text ' USB Control Device ID 'USB控制设备ID
            Me.rdocrlf.Enabled = False ' USB Tarminerter must be "Cr"   'USB 终止符必须是“Cr” 
            Me.rdolf.Enabled = False

        End If

    End Sub

    Private Sub rdolan_CheckedChanged(sender As Object, e As EventArgs) Handles rdolan.CheckedChanged
        ' --------------------------------------------------------------
        ' LAN Commnuncation Checked
        ' 选择 LAN 通讯
        ' --------------------------------------------------------------

        ' LAN communication can control ONLY PCU-110
        ' LAN通讯只能控制PCU-110
        If Me.rdolan.Checked = True Then
            Me.txt100controlid.Enabled = False
            Me.txtport.Enabled = True
            Me.rdolf.Enabled = True
            Me.rdocrlf.Enabled = True
            Me.rdocr.Enabled = True
        End If

    End Sub

    Private Sub rdo100_CheckedChanged(sender As Object, e As EventArgs) Handles rdo100.CheckedChanged
        ' ------------------------------------------------
        ' target PCU-100 checked
        ' 选择目标为PCU-100
        ' ------------------------------------------------

        If rdo100.Checked = True Then
            ' PCU-100 can't Control from LAN & USB
            ' PCU-100不能从LAN和USB控制
            ' PCU-100 need to  device number of DAQ
            ' PCU-100需要设备的DAQ编号
            Me.txt100controlid.Enabled = True
            Me.rdolan.Enabled = False
            Me.txtport.Enabled = False
            Me.rdousb.Enabled = False
        End If

    End Sub

    Private Sub rdo110_CheckedChanged(sender As Object, e As EventArgs) Handles rdo110.CheckedChanged
        ' -------------------------------------------------
        ' target PCU-110 Checked
        ' 选择目标为PCU-110
        ' 
        ' PCU-110 can control from LAN & USB & GPIB
        ' PCU-110可以通过LAN、USB和GPIB进行控制
        ' PCU-110 Not need to device number of DAQ
        ' PCU-110不需要设备的DAQ编号
        ' -------------------------------------------------

        If rdo110.Checked = True Then

            Me.txt100controlid.Enabled = False
            Me.rdolan.Enabled = True
            Me.rdousb.Enabled = True

        End If

    End Sub

    Private Sub cmbusbresouce_SelectedIndexChanged(sender As Object, e As EventArgs) Handles cmbusbresouce.SelectedIndexChanged
        ' -------------------------------------------------------
        ' Select usb  resouce & Show deveice number
        ' 选择usb资源并显示设备号
        ' -------------------------------------------------------

        If Me.cmbusbresouce.Text = "" Then
            Exit Sub
        End If


        Me.txtdev_num.Text = Me.cmbusbresouce.SelectedIndex


    End Sub

    Private Sub rdo488_CheckedChanged(sender As Object, e As EventArgs) Handles rdo488.CheckedChanged
        ' -----------------------------------------------------
        ' 488.2　checked
        ' 选中 488.2
        ' -----------------------------------------------------

        If rdo488.Checked = True Then
            Me.txtaddress.Text = Me.txtaddressnum.Text
            Me.rdolf.Enabled = True
            Me.rdocrlf.Enabled = True
            Me.rdocr.Enabled = True
        End If

    End Sub
    Private Sub rdonivisa_CheckedChanged(sender As Object, e As EventArgs) Handles rdonivisa.CheckedChanged
        ' ------------------------------------------------------------------------
        ' NI Visa Communication Checked
        ' 选中 NI Visa 通讯 
        ' ------------------------------------------------------------------------

        If Me.rdonivisa.Checked = True Then
            Me.txtaddress.Text = Me.txtaddressnum.Text
            Me.rdolf.Enabled = True
            Me.rdocrlf.Enabled = True
            Me.rdocr.Enabled = True
        End If

    End Sub
    Private Sub rdokeysightvisa_CheckedChanged(sender As Object, e As EventArgs) Handles rdokeysightvisa.CheckedChanged
        ' ----------------------------------------------------
        ' keysigth visa communication checked
        ' 选中keysigth visa 通讯
        ' ----------------------------------------------------

        If Me.rdokeysightvisa.Checked = True Then
            Me.txtaddress.Text = Me.txtaddressnum.Text
            Me.rdolf.Enabled = True
            Me.rdocrlf.Enabled = True
            Me.rdocr.Enabled = True
        End If


    End Sub

    Private Sub cmb100controlid_SelectedIndexChanged(sender As Object, e As EventArgs) Handles cmb100controlid.SelectedIndexChanged
        '------------------------------------------------
        '      Select control device number for PCU-100 
        '      选择PCU-100的控制设备号
        '------------------------------------------------

        Me.txt100controlid.Text = Me.cmb100controlid.Text

    End Sub

    Private Sub btnGet_resouce_Click(sender As Object, e As EventArgs) Handles btnGet_resouce.Click
        '----------------------------------------------
        '  Get GPIB resouce
        '  获取GPIB资源
        '  This function need to instlle NIVisa.Dll
        '  这个函数需要安装NIVisa.Dll
        '----------------------------------------------
        Dim resouce() As String = Nothing

        resouce = Communication.MainCommunication.Get_GPIB_Resources

        If resouce.Length = 0 Then
            Exit Sub
        End If

        Dim loop1 As Integer

        For loop1 = 0 To UBound(resouce)
            Me.cmbgpib_resouce.Items.Add(resouce(loop1))
        Next

    End Sub

    Private Sub btnSplit_Click(sender As Object, e As EventArgs) Handles btnSplit.Click
        ' -----------------------------------------------------
        '  Split Visa resouce string 
        '  将字符串分割
        ' -----------------------------------------------------

        If Me.cmbgpib_resouce.Text = "" Then
            MsgBox("Please enter the visa string for GPIB resouce commbbox")
            Exit Sub
        End If


        Dim sp() As String = Nothing
        Dim board_number As Integer
        Dim address As Integer

        sp = Split(Me.cmbgpib_resouce.Text, "::")

        board_number = CInt(sp(0).Substring(4))
        address = CInt(sp(1))

        Me.txtboad.Text = board_number
        Me.txtaddressnum.Text = address

    End Sub

    Private Sub btnControl_ID_Click(sender As Object, e As EventArgs) Handles btnControl_ID.Click
        ' -------------------------------------------------------
        ' Get PCU-100 Control device id
        ' 获取PCU-100控制设备id
        ' -------------------------------------------------------
        Dim id() As String = Nothing
        Dim errorcode As Integer
        Dim loop1 As Integer


        errorcode = PCU.Get_Device_ID(id)

        If errorcode <> 0 Or id.Length = 0 Then
            Exit Sub
        End If
        For loop1 = 0 To UBound(id)
            Me.cmb100controlid.Items.Add(id(loop1))
        Next

    End Sub

    Private Sub btnConnect_Click(sender As Object, e As EventArgs) Handles btnConnect.Click
        ' -----------------------------------------------------------------
        ' Connect
        ' 连接
        ' ------------------------------------------------------------------
        Dim address As String = Me.txtaddress.Text
        Dim port As String = String.Empty
        Dim gpib_type As Santec.Communication.GPIBConnectType
        Dim com_method As Communication.CommunicationMethod

        ' -------Communication Method
        ' -------连接的方法

        If Me.rdokeysightvisa.Checked = True Or Me.rdo488.Checked = True Or Me.rdonivisa.Checked = True Then
            ' ---GPIB communiction
            ' ---GPIB通讯
            com_method = Communication.CommunicationMethod.GPIB

            ' --GPIB type
            ' --GPIB类型
            If Me.rdokeysightvisa.Checked = True Then
                gpib_type = Communication.GPIBConnectType.KeysightIO
            ElseIf Me.rdonivisa.Checked = True Then
                gpib_type = Communication.GPIBConnectType.NIVisa
            Else
                gpib_type = Communication.GPIBConnectType.NI4882
            End If

            PCU.GPIBAddress = Me.txtaddress.Text
            If (txtboad.Text = "") Then
                PCU.GPIBBoard = 0
            Else
                PCU.GPIBBoard = CInt(txtboad.Text)
            End If

        End If


        If Me.rdolan.Checked = True Then
            ' -----LAN Communication
            ' -----LAN通讯
            com_method = Communication.CommunicationMethod.TCPIP
            PCU.IPAddress = Me.txtaddress.Text
            PCU.Port = Me.txtport.Text
            PCU.Waittime = 20

        End If


        If Me.rdousb.Checked = True Then
            ' -----USB communucation
            ' -----USB通讯
            com_method = Communication.CommunicationMethod.USB
            PCU.DeviceID = Me.txtaddress.Text ' USB control device id' USB控制设备id
            PCU.TimeOut = 5000
        End If


        If Me.rdo100.Checked = True Then
            ' ---Target PCU-100
            ' ---目标 PCU-100
            PCU.DeviceName = Me.txt100controlid.Text
        End If

        ' ---Tarminater
        ' ---终止符
        Dim termineter As CommunicationTerminator

        If Me.rdocr.Checked = True Then
            termineter = CommunicationTerminator.Cr
        ElseIf Me.rdolf.Checked = True Then
            termineter = CommunicationTerminator.Lf
        Else
            termineter = CommunicationTerminator.CrLf
        End If

        PCU.Terminator = termineter

        Dim ans As String = String.Empty
        Dim errorcode As Integer
        ' --Connect
        ' --连接
        errorcode = PCU.Connect(com_method)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        ' -----Show information
        ' -----显示信息
        Me.lblprduct.Text = PCU.Information.ProductName
        Me.lblserial.Text = PCU.Information.SerialNumber
        Me.lblvesion.Text = PCU.Information.FWversion
        Me.lblwavelength.Text = PCU.Information.Band

        ' -----Add set SOP to combbox
        ' -----添加set SOP到combbox

        If PCU.Information.ProductName = "PCU-110" Then

            Me.cmbsop.Items.Add("LVP")
            Me.cmbsop.Items.Add("LHP")
            Me.cmbsop.Items.Add("LP45")
            Me.cmbsop.Items.Add("LN45")
            Me.cmbsop.Items.Add("RCP")
            Me.cmbsop.Items.Add("LCP")
        Else
            Me.cmbsop.Items.Add("LVP")
            Me.cmbsop.Items.Add("LHP")
            Me.cmbsop.Items.Add("LP45")
            Me.cmbsop.Items.Add("RCP")

        End If

    End Sub

    Private Sub btnDisConnect_Click(sender As Object, e As EventArgs) Handles btnDisConnect.Click
        ' -----------------------------------------------------------
        ' Dis Connect
        ' 断开连接
        ' -----------------------------------------------------------

        PCU.DisConnect()

        lblprduct.Text = ""
        lblserial.Text = ""
        lblvesion.Text = ""
        lblwavelength.Text = ""

        Me.cmbsop.Items.Clear()
        Me.cmbsop.Text = ""

    End Sub

    Private Sub btnSet_SOP_Click(sender As Object, e As EventArgs) Handles btnSet_SOP.Click
        ' ------------------------------------------------
        ' Set SOP
        ' 设置SOP
        ' ------------------------------------------------
        Dim errorcode As Integer
        Dim sop_stauts As PCU.SOP_Stauts

        If Me.cmbsop.Text = "" Then
            MsgBox("Please enter the value.", vbOKOnly)
            Exit Sub
        End If

        Select Case Me.cmbsop.Text
            Case "LVP"
                sop_stauts = PCU.SOP_Stauts.LVP
            Case "LHP"
                sop_stauts = PCU.SOP_Stauts.LHP
            Case "LP45"
                sop_stauts = PCU.SOP_Stauts.LP45
            Case "LN45"
                sop_stauts = PCU.SOP_Stauts.LN45
            Case "RCP"
                sop_stauts = PCU.SOP_Stauts.RCP
            Case "LCP"
                sop_stauts = PCU.SOP_Stauts.LCP
        End Select

        errorcode = PCU.Set_SOP_Stauts(sop_stauts)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

    End Sub

    Private Sub btnAdjust_Range_Click(sender As Object, e As EventArgs) Handles btnAdjust_Range.Click
        '---------------------------------------------------
        '  Power monitor Range adjust
        '  功率监控范围调整
        '---------------------------------------------------
        Dim errorcode As Integer

        errorcode = PCU.Range_Adjust()

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

    End Sub

    Private Sub btnGet_Range_Click(sender As Object, e As EventArgs) Handles btnGet_Range.Click
        '------------------------------------------------------
        '  Get Current Range
        '  获取当前范围
        '------------------------------------------------------

        Dim errorcode As Integer
        Dim range As Integer

        errorcode = PCU.Get_Power_Range(range)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If
        Me.txtcurrentrange.Text = range
    End Sub

    Private Sub btnUsb_resouce_Click(sender As Object, e As EventArgs) Handles btnUsb_resouce.Click
        '------------------------------------------------------
        '       Get usb resouce
        '------------------------------------------------------
        Dim resouce() As String = Nothing


        resouce = Communication.MainCommunication.Get_USB_Resouce


        If resouce.Length = 0 Then
            Exit Sub
        End If

        Dim loop1 As Integer

        For loop1 = 0 To UBound(resouce)

            Me.cmbusbresouce.Items.Add(resouce(loop1))
        Next
    End Sub

    Private Sub btnGetIP_Click(sender As Object, e As EventArgs) Handles btnGetIP.Click
        '-----------------------------------------------
        '       Get IP Address
        '       this function only support for PCU-110
        '       获取IP地址
        '       这个功能只支持PCU-110
        '------------------------------------------------
        Dim errorcode As Integer
        Dim address As String = String.Empty

        errorcode = PCU.Get_IPAddress(address)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtip_add.Text = address

    End Sub

    Private Sub btnGetPort_Click(sender As Object, e As EventArgs) Handles btnGetPort.Click
        '-----------------------------------------------------
        '       Get LAN Port number
        '       this function only support for PCU-110
        '获取LAN端口号
        '这个功能只支持PCU-110
        '-----------------------------------------------------
        Dim errorcode As Integer
        Dim port As Integer


        errorcode = PCU.Get_LAN_Portnumber(port)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If
        Me.txtlan_port.Text = port

    End Sub
End Class
