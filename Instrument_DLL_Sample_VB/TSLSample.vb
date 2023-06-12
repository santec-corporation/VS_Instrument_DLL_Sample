Imports Santec

Public Class TSLSample

    Private TSL As TSL
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

        TSL = New TSL


    End Sub
    Private Sub Show_Error(ByVal errordata As Integer)
        '' ------------------------------------
        '' Show error code
        '' 显示错误代码
        '' ------------------------------------

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
    Private Sub Set_Sweep_parameter()
        '' ---------------------------------------------------------
        '' Set Sweep parameters 
        '' 设置扫描参数
        '' ---------------------------------------------------------
        Dim smode As TSL.Sweep_Mode
        Dim tr_inp_mode As TSL.Trigger_Input_Mode
        Dim tr_out_mode As TSL.Trigger_Output_Mode
        Dim start_mode As TSL.Sweep_Start_Mode
        Dim source As TSL.TriggerOut_Source

        If (Me.cmbsm.Text = "") Or (Me.cmbtin.Text = "") Or (Me.cmbtout.Text = "") Or (Me.cmbst_mod.Text = "") Then
            MsgBox("Please enter the value")
            Exit Sub
        End If

        '' ---Sweep mode
        '' --- 扫描模式
        Select Case Me.cmbsm.SelectedIndex
            Case 0
                smode = TSL.Sweep_Mode.Step_Oneway
            Case 1
                smode = TSL.Sweep_Mode.Continuous_Oneway
            Case 2
                smode = TSL.Sweep_Mode.Step_Twoway
            Case 3
                smode = TSL.Sweep_Mode.Continuous_Twoway
        End Select

        '' ----Trigger input mode
        '' ----触发输入模式
        If Me.cmbtin.Text = "Disable" Then
            tr_inp_mode = TSL.Trigger_Input_Mode.Disable
        Else
            tr_inp_mode = TSL.Trigger_Input_Mode.Enable
        End If

        '' -----Trigger output mode
        '' -----触发输出模式
        Select Case Me.cmbtout.SelectedIndex
            Case 0
                tr_out_mode = TSL.Trigger_Output_Mode.None
            Case 1
                tr_out_mode = TSL.Trigger_Output_Mode.Stop
            Case 2
                tr_out_mode = TSL.Trigger_Output_Mode.Start
            Case 3
                tr_out_mode = TSL.Trigger_Output_Mode.Step
        End Select

        '' ----Startmode
        '' ---- 启动模式

        If Me.cmbst_mod.Text = "Normal" Then
            start_mode = TSL.Sweep_Start_Mode.Normal
        Else
            start_mode = TSL.Sweep_Start_Mode.WaitingforTrigger
        End If



        Dim errorcode As Integer

        errorcode = TSL.Set_Sweep_Mode_Parameters(smode, tr_out_mode, tr_inp_mode, start_mode)


        If errorcode <> 0 Then
            Show_Error(errorcode)
        End If

        If cmbTrigger_Source.Text = "Wavelength" Then
            source = TSL.TriggerOut_Source.Wavelength
        Else
            source = TSL.TriggerOut_Source.Time
        End If

        If rdo570.Checked Or rdo770.Checked = True Then
            errorcode = TSL.Set_TriggerOutput_Source(source)

            If errorcode <> 0 Then
                Show_Error(errorcode)
                Return
            End If
        End If

    End Sub
    Private Sub BtnConnect_Click(sender As Object, e As EventArgs) Handles BtnConnect.Click
        '' --------------------------------------------------------
        '' connect
        '' 连接
        '' --------------------------------------------------------

        Dim address As String = Me.TextBox1.Text
        Dim terminator As CommunicationTerminator
        Dim comm_method As Santec.Communication.CommunicationMethod
        If rdiUSB.Checked = True Then
            '' USB Communication
            '' USB 通信
            comm_method = Santec.Communication.CommunicationMethod.USB
            TSL.DeviceID = address
        ElseIf rdoLAN.Checked = True Then

            ' LAN Communication
            ' LAN 通信
            comm_method = Santec.Communication.CommunicationMethod.TCPIP
            TSL.Port = Integer.Parse(txtPort.Text)
            TSL.IPAddress = address
            TSL.Waittime = 20
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

            TSL.GPIBAddress = CInt(address)
            If (txtboad.Text = "") Then
                TSL.GPIBBoard = 0
            Else
                TSL.GPIBBoard = CInt(txtboad.Text)
            End If
            TSL.GPIBConnectType = gpibmethod
        End If
        '' ----------------Common
        '' ---------------- 常见的
        '' Terminator
        '' 终止符
        If rdiCr.Checked = True Then
            terminator = CommunicationTerminator.Cr
        ElseIf rdiLf.Checked = True Then
            terminator = CommunicationTerminator.Lf
        Else
            terminator = CommunicationTerminator.CrLf
        End If

        TSL.Terminator = terminator
        TSL.TimeOut = 2000 '' Communication timeout 2000msec''通信超时2000msec


        Dim ans As String = String.Empty
        Dim errorcode As Integer

        errorcode = TSL.Connect(comm_method)

        If errorcode <> 0 Then
            TSL.DisConnect()
            Show_Error(errorcode)
            Exit Sub
        End If

        '' --TSL information
        '' --TSL信息
        Me.lblproductname.Text = TSL.Information.ProductName
        Me.lblserial.Text = TSL.Information.SerialNumber
        Me.lblfwversion.Text = TSL.Information.FWversion
        Me.lblwave.Text = TSL.Information.MinimunWavelength & "-" & TSL.Information.MaximumWavelength
        Me.lblfreq.Text = TSL.Information.MinimunFrequency & "-" & TSL.Information.MaximumFrequency
        Me.lblATTrange.Text = TSL.Information.MinimumATTValue & "-" & TSL.Information.MaximumATTValue
        Me.lblAPC1.Text = TSL.Information.MinimumAPCPower_dBm & "-" & TSL.Information.MaximumAPCPower_dBm
        Me.lblACP2.Text = TSL.Information.MinimumAPCPower_mW & "-" & TSL.Information.MaximumAPCPower_mW
        lblSweepSpeed_Range.Text = TSL.Information.MinimumSpeed & "-" & TSL.Information.MaximumSpeed

    End Sub

    Private Sub BtnDisConnect_Click(sender As Object, e As EventArgs) Handles BtnDisConnect.Click
        ''-------------------------------------------------------
        ''       Disconnect
        ''       断开连接
        ''--------------------------------------------------------

        Dim errorcode As Integer

        errorcode = TSL.DisConnect()

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If
        '' --TSL information
        '' --TSL信息
        lblproductname.Text = "Product"
        lblserial.Text = "Product"
        lblfwversion.Text = "Product"
        lblwave.Text = "Product"
        lblfreq.Text = "Product"
        lblATTrange.Text = "Product"
        lblAPC1.Text = "Product"
        lblACP2.Text = "Product"
        lblSweepSpeed_Range.Text = "Product"
    End Sub

    Private Sub BtnLD_ON_Click(sender As Object, e As EventArgs) Handles BtnLD_ON.Click
        '' ---------------------------------------------------
        '' LD ON
        '' LD 开
        '' ---------------------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_LD_Status(TSL.LD_Status.LD_ON)

        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub BtnLD_OFF_Click(sender As Object, e As EventArgs) Handles BtnLD_OFF.Click
        '' ---------------------------------------------------
        '' LD OFF
        '' LD 关
        '' ---------------------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_LD_Status(TSL.LD_Status.LD_OFF)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub BtnCoh_ON_Click(sender As Object, e As EventArgs) Handles BtnCoh_ON.Click
        '' -----------------------------------------------
        '' Coh on
        '' Coh 开
        '' ----------------------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_Coh_Control_Status(TSL.Coh_Status.Coh_ON)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub BtnCoh_OFF_Click(sender As Object, e As EventArgs) Handles BtnCoh_OFF.Click
        '' -----------------------------------------------
        '' Coh oFF
        '' Coh 关
        '' ----------------------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_Coh_Control_Status(TSL.Coh_Status.Coh_OFF)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub BtnShutter_Open_Click(sender As Object, e As EventArgs) Handles BtnShutter_Open.Click
        '' -------------------------------------------
        '' shutter Open
        '' 遮挡状态开启
        '' -------------------------------------------
        Dim errorcode As Integer


        errorcode = TSL.Set_Shutter_Status(TSL.Shutter_Status.Shutter_Open)

        If errorcode <> 0 Then
            Show_Error(errorcode)
        End If

    End Sub

    Private Sub BtnShutter_Close_Click(sender As Object, e As EventArgs) Handles BtnShutter_Close.Click
        '' -------------------------------------------
        '' shutter Close
        '' 遮挡状态关闭
        '' -------------------------------------------
        Dim errorcode As Integer


        errorcode = TSL.Set_Shutter_Status(TSL.Shutter_Status.Shutter_Close)

        If errorcode <> 0 Then
            Show_Error(errorcode)
        End If

    End Sub

    Private Sub BtnAPC_Click(sender As Object, e As EventArgs) Handles BtnAPC.Click
        '' -----------------------------------------------
        '' Set Power mode to APC
        '' 设置功率模式为自动
        '' ----------------------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_Power_Mode(TSL.Power_Mode.APC)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub BtnACC_Click(sender As Object, e As EventArgs) Handles BtnACC.Click
        '' -----------------------------------------------
        '' Set Power mode to ACC
        '' 设置功率模式为手动
        '' ----------------------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_Power_Mode(TSL.Power_Mode.ACC)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub BtndBm_Click(sender As Object, e As EventArgs) Handles BtndBm.Click
        '' -----------------------------------------------
        '' Set Power unit to dBm
        '' 设置功率单位dBm
        '' ----------------------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_Power_Unit(TSL.Power_Unit.dBm)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub BtnmW_Click(sender As Object, e As EventArgs) Handles BtnmW.Click
        '' -----------------------------------------------
        '' Set Power unit to mW
        '' 设置功率单位mW
        '' ----------------------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_Power_Unit(TSL.Power_Unit.mW)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub Btn_SetATT_Click(sender As Object, e As EventArgs) Handles Btn_SetATT.Click
        '' -----------------------------------------
        '' SetATT
        '' 设置ATT数值
        '' -----------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_ATT_Value(Me.txtatt.Text)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub Btn_SetdBm_Click(sender As Object, e As EventArgs) Handles Btn_SetdBm.Click
        '' -----------------------------------------
        '' Set Power dBm
        '' 设置功率（dBm）
        '' -----------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_APC_Power_dBm(Me.txtpow.Text)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub Btn_SetmW_Click(sender As Object, e As EventArgs) Handles Btn_SetmW.Click
        '' -----------------------------------------
        '' Set Power mW
        '' 设置功率（mW）
        '' -----------------------------------------
        Dim errcord As Integer

        errcord = TSL.Set_APC_Power_mW(Me.txtpow.Text)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

    End Sub

    Private Sub Btn_SetWavelenth_Click(sender As Object, e As EventArgs) Handles Btn_SetWavelenth.Click
        '' ------------------------------------------------------------------
        '' set Wavelength
        '' 设置波长
        '' ------------------------------------------------------------------
        Dim wavelength As Double
        Dim errorcode As Integer

        wavelength = Me.txtsetwave.Text


        errorcode = TSL.Set_Wavelength(wavelength)
        If errorcode <> 0 Then
            Show_Error(errorcode)
        End If

    End Sub

    Private Sub Btn_SetFrequency_Click(sender As Object, e As EventArgs) Handles Btn_SetFrequency.Click
        '' --------------------------------------------------------
        '' set Frequency
        '' 设置频率
        '' -------------------------------------------------------

        Dim frequency As Double
        Dim errorcode As Integer

        frequency = Me.txtsetfreq.Text

        errorcode = TSL.Set_Frequency(frequency)

        If errorcode <> 0 Then
            Show_Error(errorcode)
        End If

    End Sub

    Private Sub Btn_SetFinetuning_Click(sender As Object, e As EventArgs) Handles Btn_SetFinetuning.Click
        '' --------------------------------------------------
        '' Set Finetuning
        '' 设置微调
        '' --------------------------------------------------
        Dim errorcode As Integer
        Dim ftvalue As Double

        ftvalue = Me.txtsetft.Text

        errorcode = TSL.Set_Finetuning(ftvalue)

        If errorcode <> 0 Then
            Show_Error(errorcode)
        End If

    End Sub

    Private Sub Btn_GetLD_Click(sender As Object, e As EventArgs) Handles Btn_GetLD.Click
        '' ------------------------------------------------
        '' Get LD Status
        '' 获取LD状态
        '' ------------------------------------------------
        Dim errcord As Integer
        Dim LD_status As TSL.LD_Status

        errcord = TSL.Get_LD_Status(LD_status)
        If errcord <> 0 Then
            Show_Error(errcord)
        End If

        If LD_status = TSL.LD_Status.LD_OFF Then
            Me.txtlds.Text = "OFF"
        Else
            Me.txtlds.Text = "ON"
        End If

    End Sub

    Private Sub BtnAtt_value_Click(sender As Object, e As EventArgs) Handles BtnAtt_value.Click
        '' -------------------------------------------------------
        '' Get Att value
        '' 获取Att值
        '' -------------------------------------------------------

        Dim errorcode As Integer
        Dim att_value As Double


        errorcode = TSL.Get_ATT_Value(att_value)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtreadatt.Text = att_value

    End Sub

    Private Sub BtnPower_mode_Click(sender As Object, e As EventArgs) Handles BtnPower_mode.Click
        '' ----------------------------------------------
        '' Get Power Mode
        '' 获取功率模式
        '' -----------------------------------------------
        Dim errcode As Integer
        Dim powermode As TSL.Power_Mode

        errcode = TSL.Get_Power_Mode(powermode)
        If errcode <> 0 Then
            Show_Error(errcode)
            Exit Sub
        End If

        If powermode = TSL.Power_Mode.ACC Then
            Me.txtpms.Text = "ACC"
        Else
            Me.txtpms.Text = "APC"
        End If

    End Sub


    Private Sub BtnShutter_Status_Click(sender As Object, e As EventArgs) Handles BtnShutter_Status.Click
        '' ---------------------------------------------
        '' Get  shutter status
        '' 获取遮挡状态
        '' ---------------------------------------------
        Dim errorcode As Integer
        Dim shutter_su As TSL.Shutter_Status

        errorcode = TSL.Get_Shutter_Status(shutter_su)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        If shutter_su = TSL.Shutter_Status.Shutter_Open Then
            Me.txtshutter_su.Text = "Open"
        Else
            Me.txtshutter_su.Text = "Close"
        End If

    End Sub

    Private Sub BtnUnit_Click(sender As Object, e As EventArgs) Handles BtnUnit.Click
        '' ---------------------------------------------------
        '' Get Unit
        '' 获得单位
        '' --------------------------------------------------
        Dim errorcode As Integer
        Dim unit As TSL.Power_Unit


        errorcode = TSL.Get_Power_Unit(unit)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        If unit = TSL.Power_Unit.dBm Then
            Me.txtunit.Text = "dBm"
        Else
            Me.txtunit.Text = "mW"

        End If

    End Sub

    Private Sub BtnPower_dBm_Click(sender As Object, e As EventArgs) Handles BtnPower_dBm.Click
        '' ---------------------------------------------
        '' Get Setting power dBm
        '' 获取设置功率（dBm）
        '' ---------------------------------------------
        Dim errorcode As Integer
        Dim set_pow As Double

        errorcode = TSL.Get_Setting_Power_dBm(set_pow)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtreadpow.Text = set_pow

    End Sub

    Private Sub BtnPower_mW_Click(sender As Object, e As EventArgs) Handles BtnPower_mW.Click
        '' ---------------------------------------------
        '' Get Setting power mW
        '' 获取设置功率（mW）
        '' ---------------------------------------------
        Dim errorcode As Integer
        Dim set_pow As Double

        errorcode = TSL.Get_Setting_Power_mW(set_pow)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtreadmw.Text = set_pow

    End Sub

    Private Sub Btnmonitor_dBm_Click(sender As Object, e As EventArgs) Handles Btnmonitor_dBm.Click
        '' -------------------------------------------------------
        '' Get Monitor power dBm
        '' 读取现在的监控功率（ｄBm）
        '' ------------------------------------------------------
        Dim errorcode As Integer
        Dim moni_pow As Double

        errorcode = TSL.Get_Monitor_Power_dBm(moni_pow)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtreadmoni.Text = moni_pow

    End Sub

    Private Sub Btnmonitor_mW_Click(sender As Object, e As EventArgs) Handles Btnmonitor_mW.Click
        '' -------------------------------------------------------
        '' Get Monitor power mW
        '' 读取现在的监控功率（mW）
        '' ------------------------------------------------------
        Dim errorcode As Integer
        Dim moni_pow As Double

        errorcode = TSL.Get_Monitor_Power_mW(moni_pow)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtradmoni_mw.Text = moni_pow

    End Sub

    Private Sub Btn_Wavelength_Click(sender As Object, e As EventArgs) Handles Btn_Wavelength.Click
        '' ----------------------------------------------------------
        '' Get Setting Wavelength Value
        '' 获取设置波长的值
        '' ----------------------------------------------------------
        Dim errorcode As Integer
        Dim wavelength As Double


        errorcode = TSL.Get_Wavelength(wavelength)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtwave.Text = wavelength

    End Sub

    Private Sub Btn_Freuency_Click(sender As Object, e As EventArgs) Handles Btn_Freuency.Click
        '' -------------------------------------------------
        '' Get Setting Frequency 
        '' 获取设置频率
        '' ------------------------------------------------
        Dim errorcode As Integer
        Dim frequency As Double

        errorcode = TSL.Get_Frequency(frequency)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If


        Me.txtfreq.Text = frequency

    End Sub

    Private Sub Btn_Fine_Click(sender As Object, e As EventArgs) Handles Btn_Fine.Click
        '' ---------------------------------------
        '' Get Fine tuning value
        '' 获取微调值
        '' ---------------------------------------
        Dim errorcode As Integer
        Dim ftval As Double


        errorcode = TSL.Get_Finetuning(ftval)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtfine.Text = ftval

    End Sub

    Private Sub Btn_Busy_Click(sender As Object, e As EventArgs) Handles Btn_Busy.Click
        '' ---------------------------------------------
        '' Get Busy status
        '' 获取繁忙状态
        '' ---------------------------------------------

        Dim errorcord As Integer
        Dim busy As Boolean

        errorcord = TSL.Get_Busy_Status(busy)

        If errorcord <> 0 Then
            Show_Error(errorcord)
            Exit Sub
        End If

        If busy = True Then
            Me.txtbusy.Text = "Busy"
        Else
            Me.txtbusy.Text = "Standby"
        End If

    End Sub

    Private Sub Btn_Stangby_Click(sender As Object, e As EventArgs) Handles Btn_Stangby.Click
        '' ------------------------------------------------------------
        '' Waiting for standby until wait time
        '' 等待待机直到等待时间
        '' -----------------------------------------------------------
        Dim waittime As Double
        Dim errorcode As Integer
        Dim st As New Stopwatch
        Dim busy_time As Double

        waittime = Me.txtwait.Text

        st.Start()
        errorcode = TSL.TSL_Busy_Check(waittime)
        busy_time = st.ElapsedMilliseconds

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        MsgBox("Busy time :" & CStr(busy_time) & "ms")

    End Sub

    Private Sub Btn_error_Click(sender As Object, e As EventArgs) Handles Btn_error.Click
        '' ----------------------------------------------------
        '' Get TSL error code
        '' 获取TSL错误代码
        '' ----------------------------------------------------

        Dim errorcode As Integer
        Dim TSL_error As String = String.Empty

        errorcode = TSL.Get_System_Error(TSL_error)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If


        Me.txttsl_err.Text = TSL_error

    End Sub

    Private Sub Btn_SetWavelength_Click(sender As Object, e As EventArgs) Handles Btn_SetWavelength.Click
        '' ----------------------------------------------------------------------
        '' set Sweep  Wavelength parameters
        '' 设置扫描波长参数
        '' ----------------------------------------------------------------------
        Dim startwavelength As Double
        Dim stopwavelength As Double
        Dim wavestep As Double
        Dim errorcode As Integer

        '' -----Set wavelength
        '' ----- 设置波长
        startwavelength = Me.txtstart.Text
        stopwavelength = Me.txtstop.Text

        errorcode = TSL.Set_Sweep_Wavelength(startwavelength, stopwavelength)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        '' ------Trigger & wavelength Step
        '' ------触发和波长步长
        wavestep = Me.txtstep.Text

        errorcode = TSL.Set_Trigger_Step(wavestep)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        errorcode = TSL.Set_Wavelength_Step(wavestep)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

    End Sub

    Private Sub Btn_Other_Click(sender As Object, e As EventArgs) Handles Btn_Other.Click
        '' --------------------------------------------------------
        '' Set Sweep Parameters
        '' 设置扫描参数
        '' --------------------------------------------------------
        Dim errorcode As Integer

        '' -----Set Speed 
        '' -----设定的速度
        Dim speed As Double
        speed = Me.txtspeed.Text

        errorcode = TSL.Set_Sweep_Speed(speed)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        '' ----Set Sweep Delay
        '' ----设置扫描延时
        Dim delay As Double

        delay = Me.txtdelay.Text

        errorcode = TSL.Set_Sweep_Delay(delay)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If


        '' -----Set Sweep cycle 
        '' -----设置扫描周期
        Dim cycle As Double
        cycle = Me.txtcycle.Text

        errorcode = TSL.Set_Sweep_Cycle(cycle)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        '' ----Set Sweep mode parameters
        '' ----设置扫描模式参数
        Set_Sweep_parameter()

    End Sub

    Private Sub BtnGet_setting_Click(sender As Object, e As EventArgs) Handles BtnGet_setting.Click
        '' -----------------------------------------------
        '' get sweep paremters
        '' 获取扫描参数
        '' -----------------------------------------------
        Dim s_mode As TSL.Sweep_Mode
        Dim tr_outputmode As TSL.Trigger_Output_Mode
        Dim tr_inputmode As TSL.Trigger_Input_Mode
        Dim start_mode As TSL.Sweep_Start_Mode
        Dim source As TSL.TriggerOut_Source

        Dim errorcode As Integer


        '' ----get Sweep mode
        '' ----获取扫描模式
        errorcode = TSL.Get_Sweep_Mode(s_mode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        If s_mode = TSL.Sweep_Mode.Continuous_Oneway Then
            Me.txtg_smod.Text = "Continuous Oneway"
        ElseIf s_mode = TSL.Sweep_Mode.Continuous_Twoway Then
            Me.txtg_smod.Text = "Continuous Round trip"
        ElseIf s_mode = TSL.Sweep_Mode.Step_Oneway Then
            Me.txtg_smod.Text = "Step Oneway"
        Else
            Me.txtg_smod.Text = "Step Round trip"
        End If

        '' ---Trigger input mode 
        '' ---触发输入模式
        errorcode = TSL.Get_Input_Trigger_Mode(tr_inputmode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        If tr_inputmode = TSL.Trigger_Input_Mode.Disable Then
            Me.txtg_tr_inp.Text = "Disable"
        Else
            Me.txtg_tr_inp.Text = "Enable"
        End If

        '' ----Trigger output mode 
        '' ----触发输出模式
        errorcode = TSL.Get_Trigger_Output_Mode(tr_outputmode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        If tr_outputmode = TSL.Trigger_Output_Mode.None Then
            Me.txtg_tri_out.Text = "None"
        ElseIf tr_outputmode = TSL.Trigger_Output_Mode.Start Then
            Me.txtg_tri_out.Text = "Start"
        ElseIf tr_outputmode = TSL.Trigger_Output_Mode.Step Then
            Me.txtg_tri_out.Text = "Step"
        Else
            Me.txtg_tri_out.Text = "Stop"
        End If


        '' ----start mode
        '' ---- 启动模式

        errorcode = TSL.Get_Sweep_Start_Mode(start_mode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        If start_mode = TSL.Sweep_Start_Mode.Normal Then
            Me.txtg_startmode.Text = "Normal"
        Else
            Me.txtg_startmode.Text = "Waiting for trigger"
        End If


        '' ----Stop& Start wavelength
        '' ----Stop& Start波长
        Dim startwave As Double
        Dim stopwave As Double

        errorcode = TSL.Get_Sweep_Wavelength(startwave, stopwave)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtg_startwave.Text = startwave
        Me.txtg_stopwave.Text = stopwave

        '' ---Sweep delay
        '' --- 扫描延迟
        Dim delay As Double

        errorcode = TSL.Get_Sweep_Delay(delay)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtg_delay.Text = delay

        '' -----Sweep Cycle
        '' ----- 扫描周期
        Dim cycle As Double

        errorcode = TSL.Get_Sweep_Cycle(cycle)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtg_cycle.Text = cycle

        '' ----wavelength Step 
        '' ---- 波长的步长
        Dim wavestep As Double

        errorcode = TSL.Get_Wavelength_Step(wavestep)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtg_wavestep.Text = wavestep


        '' -----Trigger step 
        '' ----- 触发步长

        errorcode = TSL.Get_Trigger_Step(wavestep)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtg_triggerstep.Text = wavestep

        '' ----Sweep Speed 
        '' ---- 扫描速度
        Dim speed As Double

        errorcode = TSL.Get_Sweep_Speed(speed)
        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        Me.txtg_speed.Text = speed

        If rdo570.Checked Or rdo770.Checked = True Then

            errorcode = TSL.Get_TriggerOutput_Source(source)
            If errorcode <> 0 Then

                Show_Error(errorcode)
                Return
            End If

            If source = TSL.TriggerOut_Source.Wavelength Then
                txtTrigger_Source.Text = "Wavelength"
            Else
                txtTrigger_Source.Text = "Time"
            End If
        End If



    End Sub

    Private Sub Btn_GetLogg_Click(sender As Object, e As EventArgs) Handles Btn_GetLogg.Click
        '' ---------------------------------------------------------------
        '' Get Sweep Loggdata
        '' 获取日志数据
        '' ---------------------------------------------------------------
        Dim errorcord As Integer
        Dim logcount As Integer
        Dim logdata() As Double = Nothing


        errorcord = TSL.Get_Logging_Data(logcount, logdata)

        If errorcord <> 0 Then
            Show_Error(errorcord)
            Exit Sub
        End If

        Dim fpath As String = String.Empty
        Dim writer As System.IO.StreamWriter
        Dim loop1 As Integer

        Me.SaveFileDialog1.ShowDialog()
        If SaveFileDialog1.FileName <> "" Then

            fpath = Me.SaveFileDialog1.FileName

            writer = New System.IO.StreamWriter(fpath)

            For loop1 = 0 To UBound(logdata)
                writer.WriteLine(logdata(loop1))
            Next

            writer.Close()

            MsgBox("Logg data read completed.")
        Else
            MsgBox("Save data cancelled")
        End If
    End Sub

    Private Sub Btn_Minstep_Click(sender As Object, e As EventArgs) Handles Btn_Minstep.Click
        '' -----------------------------------------------------------------
        '' Calcurate Trigger minimum step form sweep speed
        '' 从扫描速度计算触发最小步长
        '' ------------------------------------------------------------------
        Dim tr_step As Double
        Dim speed As Double
        Dim errorcode As Integer

        speed = txtminstep.Text

        errorcode = TSL.Cal_MinimumTriggerStep_from_SweepSpeed(speed, tr_step)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        MsgBox("Minimum trigger step = " & CStr(tr_step) & "nm")


    End Sub

    Private Sub Btn_Current_Click(sender As Object, e As EventArgs) Handles Btn_Current.Click
        '' ---------------------------------------------------
        '' Get current cycles
        '' 获取当前周期
        '' ---------------------------------------------------
        Dim errorcode As Integer
        Dim cycles As Integer

        errorcode = TSL.Get_Sweep_Count(cycles)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If


        Me.txtcurrentc.Text = cycles

    End Sub

    Private Sub Btn_Waiting_Click(sender As Object, e As EventArgs) Handles Btn_Waiting.Click
        '' -----------------------------------------------------------
        '' Waititng for sweep status
        '' 等待扫描状态
        '' -----------------------------------------------------------

        Dim errorcode As Integer
        Dim sweep_su As TSL.Sweep_Status
        Dim wait_time As Double
        Dim st As New Stopwatch
        Dim timed As Double

        wait_time = Me.txtsw_wait.Text


        If Me.cmbsweep_su.Text = "Standby" Then
            sweep_su = TSL.Sweep_Status.Standby
        ElseIf Me.cmbsweep_su.Text = "Running" Then
            sweep_su = TSL.Sweep_Status.Running
        ElseIf Me.cmbsweep_su.Text = "Pausing" Then
            sweep_su = TSL.Sweep_Status.Pausing
        ElseIf Me.cmbsweep_su.Text = "WaitingforTrigger" Then
            sweep_su = TSL.Sweep_Status.WaitingforTrigger
        Else
            sweep_su = TSL.Sweep_Status.Returning
        End If


        st.Start()
        errorcode = TSL.Waiting_For_Sweep_Status(wait_time, sweep_su)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If

        timed = st.ElapsedMilliseconds

        MsgBox("waiting time:" & CStr(timed) & "msec")

    End Sub

    Private Sub Btn_Start_Click(sender As Object, e As EventArgs) Handles Btn_Start.Click
        '' -------------------------------------------------
        '' Sweep Start
        '' 扫描开始
        '' -------------------------------------------------
        Dim errorcode As Integer

        errorcode = TSL.Sweep_Start()

        If errorcode <> 0 Then
            Show_Error(errorcode)
        End If

    End Sub

    Private Sub Btn_Pause_Click(sender As Object, e As EventArgs) Handles Btn_Pause.Click

        '' -------------------------------------------------
        '' Sweep Pause
        '' 扫描暂停
        '' -------------------------------------------------
        Dim errorcode As Integer

        errorcode = TSL.Sweep_Pause()


        If errorcode <> 0 Then
            Show_Error(errorcode)

        End If

    End Sub

    Private Sub Btn_ReStart_Click(sender As Object, e As EventArgs) Handles Btn_ReStart.Click
        '' -------------------------------------------------
        '' Sweep Restart
        '' 扫描继续
        '' -------------------------------------------------
        Dim errorcod As Integer

        errorcod = TSL.Sweep_Restart()

        If errorcod <> 0 Then
            Show_Error(errorcod)
        End If

    End Sub

    Private Sub Btn_Stop_Click(sender As Object, e As EventArgs) Handles Btn_Stop.Click
        '' ------------------------------------------------------
        '' Sweep Stop
        '' 扫描停止
        '' -----------------------------------------------------

        Dim errorcode As Integer
        If lblproductname.Text.IndexOf("TSL-570") > -1 Then
            Dim Status As TSL.Sweep_Status
            System.Threading.Thread.Sleep(50)
            TSL.Get_Sweep_Status(Status)
            If Status <> TSL.Sweep_Status.Standby Then

                errorcode = TSL.Sweep_Stop()
                If errorcode <> 0 Then
                    Show_Error(errorcode)
                End If
            End If
        Else

            errorcode = TSL.Sweep_Pause()

            If errorcode <> 0 Then

                Show_Error(errorcode)
                Exit Sub
            End If

            errorcode = TSL.Sweep_Stop()

            If errorcode <> 0 Then
                Show_Error(errorcode)
            End If
        End If

    End Sub

    Private Sub Btn_SoftwareTrigger_Click(sender As Object, e As EventArgs) Handles Btn_SoftwareTrigger.Click
        '' ------------------------------------------------------
        '' software trigger
        '' 软件触发
        '' ------------------------------------------------------
        Dim errorcode As Integer


        errorcode = TSL.Set_Software_Trigger()

        If errorcode <> 0 Then
            Show_Error(errorcode)
        End If

    End Sub

    Private Sub Btn_Status_Click(sender As Object, e As EventArgs) Handles Btn_Status.Click
        '' ---------------------------------------------------------------
        '' Get Sweep Loggdata
        '' 获取日志数据
        '' ---------------------------------------------------------------

        Dim errorcode As Integer
        Dim sweep_su As TSL.Sweep_Status


        errorcode = TSL.Get_Sweep_Status(sweep_su)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Exit Sub
        End If


        If sweep_su = TSL.Sweep_Status.Pausing Then
            Me.txtg_sweep_su.Text = "Pause"
        ElseIf sweep_su = TSL.Sweep_Status.Returning Then
            Me.txtg_sweep_su.Text = "Returning"
        ElseIf sweep_su = TSL.Sweep_Status.Running Then
            Me.txtg_sweep_su.Text = "Runing"
        ElseIf sweep_su = TSL.Sweep_Status.Standby Then
            Me.txtg_sweep_su.Text = "Standby"
        Else
            Me.txtg_sweep_su.Text = "Waiting for Trigger"

        End If

    End Sub

    Private Sub BtnCoh_Status_Click(sender As Object, e As EventArgs) Handles BtnCoh_Status.Click
        '' ------------------------------------------------------
        '' Get coh Status
        '' 获取coh状态
        '' ------------------------------------------------------
        Dim errcode As Integer
        Dim coh_status As TSL.Coh_Status

        errcode = TSL.Get_Coh_Control_Status(coh_status)
        If errcode <> 0 Then
            Show_Error(errcode)
            Exit Sub
        End If


        If coh_status = TSL.Coh_Status.Coh_ON Then
            Me.txtcoh.Text = "ON"
        Else
            Me.txtcoh.Text = "OFF"
        End If

    End Sub

    Private Sub btnGet_Visa_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnGet_Visa.Click
        '----------------------------------------------
        '  Get GPIB resouce
        '  获取GPIB资源
        '  This function need to instlle NIVisa.Dll
        '  这个函数需要安装NIVisa.Dll
        '----------------------------------------------

        Dim resouce As String() = Nothing
        resouce = Santec.Communication.MainCommunication.Get_GPIB_Resources()

        If resouce.Length = 0 Then
            Return
        End If

        For loop1 As Integer = 0 To resouce.Length - 1
            cmbgpib_resouce.Items.Add(resouce(loop1))
        Next
    End Sub

    Private Sub btnSplit_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSplit.Click
        ' -----------------------------------------------------
        '  Split Visa resouce string 
        '  将字符串分割
        ' -----------------------------------------------------

        If cmbgpib_resouce.Text = "" Then
            MessageBox.Show("Please enter the visa string for GPIB resouce commbbox")
            Return
        End If

        Dim sp As String() = Nothing
        Dim board_number As Integer
        Dim address As Integer
        sp = cmbgpib_resouce.Text.Split(New Char(1) {":"c, ":"c})
        board_number = Convert.ToInt32(sp(0).Substring(4))
        address = Convert.ToInt32(sp(2))
        txtboad.Text = board_number.ToString()
        txtaddressnum.Text = address.ToString()
    End Sub

    Private Sub btnUsb_resouce_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnUsb_resouce.Click
        ' ------------------------------------------------------
        ' Get usb resouce
        ' 获取usb资源
        ' ------------------------------------------------------

        Dim resouce As String() = Nothing
        resouce = Santec.Communication.MainCommunication.Get_USB_Resouce()
        If resouce.Length = 0 Then Return
        Dim loop1 As Integer

        For loop1 = 0 To resouce.Length - 1
            cmbusbresouce.Items.Add(resouce(loop1))
        Next
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

    Private Sub btnSpeed_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSpeed.Click
        ' ------------------------------------------------------
        ' Get SweepSpeed table
        ' 获取SweepSpeed表
        ' ------------------------------------------------------

        Dim errorcode As Integer
        Dim table As Double() = Nothing
        cmb570_Speed.Items.Clear()

        If rdo570.Checked Or rdo770.Checked = True Then
            errorcode = TSL.Get_Sweep_Speed_table(table)
            Dim loop1 As Integer

            For loop1 = 0 To table.Length - 1
                cmb570_Speed.Items.Add(table(loop1))
            Next

            If errorcode <> 0 Then
                Show_Error(errorcode)
                Return
            End If
        End If
    End Sub

    Private Sub rdo550_CheckedChanged(sender As Object, e As EventArgs) Handles rdo550.CheckedChanged
        ' ------------------------------------------------
        ' target TSL-550 checked
        ' 选择目标为TSL-550
        ' ------------------------------------------------

        If rdo550.Checked = True Then
            rdiUSB.Enabled = False
            rdoLAN.Enabled = False
            btnGetIP.Enabled = False
            btnGetPort.Enabled = False
            btnSpeed.Enabled = False
            Btn_Pause.Enabled = True
            Btn_ReStart.Enabled = True
            txtPort.Enabled = False
            Btn_SetATT.Enabled = True
            BtnAtt_value.Enabled = True

        End If
    End Sub

    Private Sub rdo570_CheckedChanged(sender As Object, e As EventArgs) Handles rdo570.CheckedChanged
        ' ------------------------------------------------
        ' target TSL-570 checked
        ' 选择目标为TSL-570
        ' ------------------------------------------------

        If rdo570.Checked = True Then
            rdiUSB.Enabled = True
            rdoLAN.Enabled = True
            btnGetIP.Enabled = True
            btnGetPort.Enabled = True
            btnSpeed.Enabled = True
            Btn_Pause.Enabled = False
            Btn_ReStart.Enabled = False
            txtPort.Enabled = True
            Btn_SetATT.Enabled = True
            BtnAtt_value.Enabled = True

        End If
    End Sub

    Private Sub rdoLAN_CheckedChanged(sender As Object, e As EventArgs) Handles rdoLAN.CheckedChanged
        If rdoLAN.Checked = True Then
            txtPort.Enabled = True
            txtPort.Text = "5000"
        End If
    End Sub

    Private Sub btnGetIP_Click(sender As Object, e As EventArgs) Handles btnGetIP.Click
        ' -----------------------------------------------
        ' Get IP Address
        ' this function only support for TSL-570
        ' 获取IP地址
        ' 这个功能只支持TSL-570
        ' ------------------------------------------------
        Dim errorcode As Integer
        Dim address As String = Nothing

        errorcode = TSL.Get_IPAddress(address)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If
        txtip_add.Text = address

    End Sub

    Private Sub btnGetPort_Click(sender As Object, e As EventArgs) Handles btnGetPort.Click
        ' -----------------------------------------------
        ' Get Port
        ' this function only support for TSL-570
        ' 获取端口
        ' 这个功能只支持TSL-570
        ' ------------------------------------------------
        Dim errorcode As Integer
        Dim Port As Integer

        errorcode = TSL.Get_LAN_Portnumber(Port)

        If errorcode <> 0 Then

            Show_Error(errorcode)
            Return
        End If
        txtlan_port.Text = Port.ToString()

    End Sub

    Private Sub rdo770_CheckedChanged(sender As Object, e As EventArgs) Handles rdo770.CheckedChanged
        ' ------------------------------------------------
        ' target TSL-770 checked
        ' 选择目标为TSL-770
        ' ------------------------------------------------

        If rdo770.Checked = True Then
            rdiUSB.Enabled = True
            rdoLAN.Enabled = True
            btnGetIP.Enabled = True
            btnGetPort.Enabled = True
            btnSpeed.Enabled = True
            Btn_Pause.Enabled = False
            Btn_ReStart.Enabled = False
            txtPort.Enabled = True
            Btn_SetATT.Enabled = False
            BtnAtt_value.Enabled = False
        End If

    End Sub

    Private Sub rdiUSB_CheckedChanged(sender As Object, e As EventArgs) Handles rdiUSB.CheckedChanged
        '//  --------------------------------------------------------------
        '//  USB communcation checked
        '//  选择USB 通讯
        '// --------------------------------------------------------------

        If rdiUSB.Checked = True Then
            TextBox1.Text = txtdev_num.Text      ' // USB Control Device ID //USB控制设备ID
            txtPort.Enabled = True
            txtPort.Text = "5000"
        End If


    End Sub
End Class
