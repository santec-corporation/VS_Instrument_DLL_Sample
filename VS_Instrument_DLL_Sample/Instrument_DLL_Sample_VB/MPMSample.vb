Imports Santec

Public Class MPMSample
    Private mpm As New MPM                  ' MPM Control Class’ MPM控制类
    Private lbl_sn(4) As Label
    Private lbl_type(4) As Label
    Private lbl_version(4) As Label
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        ' ---- set index for label
        ' ----为标签设置索引
        lbl_sn(0) = Me.lblseri0
        lbl_sn(1) = Me.lblseri1
        lbl_sn(2) = Me.lblseri2
        lbl_sn(3) = Me.lblseri3
        lbl_sn(4) = Me.lblseri4

        lbl_type(0) = Me.lbltype0
        lbl_type(1) = Me.lbltype1
        lbl_type(2) = Me.lbltype2
        lbl_type(3) = Me.lbltype3
        lbl_type(4) = Me.lbltype4

        lbl_version(0) = Me.lblver0
        lbl_version(1) = Me.lblver1
        lbl_version(2) = Me.lblver2
        lbl_version(3) = Me.lblver3
        lbl_version(4) = Me.lblver4

    End Sub

    Private Sub rdolan_CheckedChanged(sender As Object, e As EventArgs) Handles rdolan.CheckedChanged
        '---------------------------------------------------------
        '       LAN Checked
        '----------------------------------------------------------

        Me.txtport.Enabled = True

    End Sub

    Private Sub rdo488_CheckedChanged(sender As Object, e As EventArgs) Handles rdo488.CheckedChanged
        '-------------------------------------------
        '       488.2 Checked
        '-------------------------------------------
        Me.txtport.Enabled = False
        Me.txtaddress.Text = txtsp_add.Text

    End Sub

    Private Sub rdokeysightvisa_CheckedChanged(sender As Object, e As EventArgs) Handles rdokeysightvisa.CheckedChanged
        '--------------------------------------
        '       Keysight visa checked
        '--------------------------------------

        Me.txtport.Enabled = False
        Me.txtaddress.Text = txtsp_add.Text

    End Sub

    Private Sub rdo232C_CheckedChanged(sender As Object, e As EventArgs) Handles rdo232C.CheckedChanged
        '-----------------------------------
        '       232C checked 
        '-----------------------------------
        Me.txtport.Enabled = False
        Me.txtaddress.Text = Me.cmbcomport.Text
    End Sub

    Private Sub rdovisa_CheckedChanged(sender As Object, e As EventArgs) Handles rdovisa.CheckedChanged
        '--------------------------------------
        '       NI visa checked
        '--------------------------------------

        Me.txtport.Enabled = False
        Me.txtaddress.Text = txtsp_add.Text
    End Sub

    Private Sub btnVisa_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnVisa.Click
        ' ----------------------------------------------------------
        ' Get Visa GPIB Visa resouce 
        ' 获取Visa GPIB资源
        ' ----------------------------------------------------------
        Dim resouce As String() = Nothing
        resouce = Santec.Communication.MainCommunication.Get_GPIB_Resources()
        If resouce.Length = 0 Then Return
        Dim loop1 As Integer

        For loop1 = 0 To resouce.GetUpperBound(0)
            cmbvisaresouce.Items.Add(resouce(loop1))
        Next
    End Sub

    Private Sub btnSplit_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSplit.Click
        ' --------------------------------------------------
        ' Split visa string 
        ' 分割字符串
        ' --------------------------------------------------
        Dim visa_str As String = String.Empty
        Dim split_st As String() = Nothing ' Split() String array’拆分字符串数组
        visa_str = cmbvisaresouce.Text
        split_st = visa_str.Split(New Char(1) {":"c, ":"c})
        txtboard_num.Text = split_st(0).Substring(4)
        txtsp_add.Text = split_st(2)
    End Sub

    Private Sub GetComport_Click(ByVal sender As Object, ByVal e As EventArgs) Handles GetComport.Click
        ' ---------------------------------------------------
        ' Get Comport on PC
        ' 在PC上获取Comport
        ' ---------------------------------------------------
        Dim portname As String() = Nothing
        portname = Santec.Communication.MainCommunication.Get_Serial_Port()
        If portname.Length = 0 Then Return
        Dim loop1 As Integer

        For loop1 = 0 To portname.GetUpperBound(0)
            cmbcomport.Items.Add(portname(loop1))
        Next
    End Sub

    Private Sub btnConnect_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnConnect.Click
        ' ----------------------------------------------------------------
        ' Connect
        ' 连接
        ' ----------------------------------------------------------------
        Dim communication_method As Santec.Communication.CommunicationMethod = New Santec.Communication.CommunicationMethod()
        Dim gpib_type As Santec.Communication.GPIBConnectType = New Santec.Communication.GPIBConnectType()
        ' ----GPIB Connection
        ' ----GPIB连接

        If rdo488.Checked = True Or rdokeysightvisa.Checked = True Or rdovisa.Checked = True Then
            communication_method = Santec.Communication.CommunicationMethod.GPIB
            If rdo488.Checked = True Then gpib_type = Santec.Communication.GPIBConnectType.NI4882
            If rdokeysightvisa.Checked = True Then gpib_type = Santec.Communication.GPIBConnectType.KeysightIO
            If rdovisa.Checked = True Then gpib_type = Santec.Communication.GPIBConnectType.NIVisa
            mpm.GPIBConnectType = gpib_type ' Gpib type ’通用接口总线类型
            mpm.GPIBAddress = Integer.Parse(txtaddress.Text) ' gpib address ’ gpib地址
            If (txtboard_num.Text = "") Then ' board　number ’GPIB板卡板号
                mpm.GPIBBoard = 0
            Else
                mpm.GPIBBoard = CInt(txtboard_num.Text)
            End If
            TabPage3.Enabled = True
            TabPage4.Enabled = True
        End If
        ' ------LAN　Communication
        ' ------ 局域网通信

        If rdolan.Checked = True Then
            communication_method = Santec.Communication.CommunicationMethod.TCPIP
            mpm.IPAddress = txtaddress.Text ' IP Address/ / IP地址
            mpm.Port = Integer.Parse(txtport.Text) ' LAN Port number’ LAN端口号
            TabPage3.Enabled = True
            TabPage4.Enabled = True
        End If
        ' ------232C Communication
        ' ------ 232 c通信

        If rdo232C.Checked = True Then
            communication_method = Santec.Communication.CommunicationMethod.C232C
            mpm.ComPort = txtaddress.Text
            mpm.BaudRate = 115200
            ' 232C communication can't use Logging mode
            ' 232C通信不能使用测量模式
            TabPage3.Enabled = False
            TabPage4.Enabled = False
        End If
        ' -----Connect 
        ' -----连接

        Dim errorcode As Integer ' errorcode ’错误代码 
        Dim ans As String = String.Empty ' return string ’返回字符串
        errorcode = mpm.Connect(communication_method)

        If errorcode <> 0 Then
            ' show errorcord
            ' 显示错误信息

            Show_Error(errorcode)
            Return
        End If
        ' -----show information 
        ' -----显示信息

        lblproduct.Text = mpm.Information.ProductName ' Main frameProduct name’产品名称
        lblserial.Text = mpm.Information.SerialNumber ' Main frame Serial number’序列号
        lblversion.Text = mpm.Information.FWversion ' Main frame F/W version’F/W版本
        lblmodulecount.Text = mpm.Information.NumberofModule.ToString() ' Main frame inserted Module count ’插入模块数
        Dim loop1 As Integer ' Loop counter ’循环计数器

        For loop1 = 0 To 4
            lbl_type(loop1).Text = mpm.Information.ModuleType(loop1) ' Module type / /模块类型 
            lbl_sn(loop1).Text = mpm.Information.ModuelSerial(loop1) ' module serial / /模块序列号
            lbl_version(loop1).Text = mpm.Information.ModuleFW(loop1) ' module F/W version ’模块F/W版本

            If mpm.Information.ModuleEnable(loop1) = False Then
                lbl_type(loop1).Enabled = False
                lbl_sn(loop1).Enabled = False
                lbl_version(loop1).Enabled = False
            End If
        Next
    End Sub

    Private Sub btnDisconnect_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnDisconnect.Click
        ' --------------------------------------------------------
        ' Disconnect
        ' 断开连接
        ' ---------------------------------------------------------
        Dim errorcode As Integer
        errorcode = mpm.DisConnect()

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If
        ' -----Clear Information
        ' -----清除信息

        lblproduct.Text = ""
        lblserial.Text = ""
        lblversion.Text = ""
        lblmodulecount.Text = ""
        Dim loop1 As Integer

        For loop1 = 0 To 4
            lbl_sn(loop1).Text = ""
            lbl_type(loop1).Text = ""
            lbl_version(loop1).Text = ""
        Next
        ' ----Tab page show
        ' ----页签显示

        TabPage3.Enabled = True
        TabPage4.Enabled = True
    End Sub
    Private Sub Show_Error(ByVal errordata As Integer)
        ' ------------------------------------
        ' Show error code
        ' 显示错误代码
        ' ------------------------------------
        Dim errorstring As String() = [Enum].GetNames(GetType(ExceptionCode))
        Dim errorvale As Integer() = CType([Enum].GetValues(GetType(ExceptionCode)), Integer())
        Dim loop1 As Integer

        For loop1 = 0 To errorvale.GetUpperBound(0)

            If errorvale(loop1) = errordata Then
                MessageBox.Show(errorstring(loop1))
                Exit For
            End If
        Next
    End Sub

    Private Sub btnSetRangeMode_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSetRangeMode.Click
        ' --------------------------------------------------
        ' Set Range Mode for "READ"
        ' 设置“READ”的范围模式
        ' --------------------------------------------------
        Dim range_mode As MPM.READ_Range_Mode
        Dim errorcode As Integer

        If cmbset_rangemode.Text = "Auto" Then
            ' Auto Range
            ' 自动调整范围
            range_mode = MPM.READ_Range_Mode.Auto
            txtsetrange.Enabled = False
            txte_range.Enabled = False
            txtr_slot.Enabled = False
            txtr_ch.Enabled = False
        Else
            ' Manual range
            ' 手动调整范围
            range_mode = MPM.READ_Range_Mode.Manual
            txtsetrange.Enabled = True
            txte_range.Enabled = True
            txtr_slot.Enabled = True
            txtr_ch.Enabled = True
        End If

        errorcode = mpm.Set_READ_Range_Mode(range_mode) ' set Range mode for all slot ’设置所有模块的范围模式
        If errorcode <> 0 Then Show_Error(errorcode)
    End Sub

    Private Sub btnSlot_Ch_Power_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSlot_Ch_Power.Click
        ' -----------------------------------------------------------
        ' Read Power for each ch
        ' 读取每个通道的功率
        ' -----------------------------------------------------------
        Dim slot As Integer ' Slot 0 ～4’槽位号0 ~4
        Dim ch As Integer ' ch 1～4 ’ 通道 1 ~ 4
        Dim power As Double = New Double()
        Dim errorcode As Integer
        slot = Integer.Parse(txtread_slot.Text)
        ch = Integer.Parse(txtread_ch.Text)
        errorcode = mpm.Get_READ_Power_Channel(slot, ch, power)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        txt_readp_ch.Text = power.ToString()
    End Sub

    Private Sub btnSetWavelength_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSetWavelength.Click
        ' ---------------------------------------------------------------
        ' Set Wavelength(nm)
        ' 设置波长(nm)
        ' ---------------------------------------------------------------
        Dim wavelength As Double
        Dim errorcode As Integer
        wavelength = Double.Parse(txtsetwave.Text)
        errorcode = mpm.Set_Wavelength(wavelength)
        If errorcode <> 0 Then Show_Error(errorcode)
    End Sub

    Private Sub btnSetAveraging_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSetAveraging.Click
        ' ------------------------------------------------------------------
        ' Set Averaging Time(mse)
        ' MPM can set 0.01msec～10000msec
        ' 设置平均时间(mse)
        ' MPM可设置0.01 ~10000msec
        ' -------------------------------------------------------------------
        Dim ave_time As Double
        Dim errorcode As Integer
        ave_time = Double.Parse(txtsetavg.Text)
        errorcode = mpm.Set_Averaging_Time(ave_time)
        If errorcode <> 0 Then Show_Error(errorcode)
    End Sub

    Private Sub btnSetRangeAll_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSetRangeAll.Click
        ' -----------------------------------------------------------------
        ' Set range for munal range
        ' MPM-211/212 : 1～5 MPM213 : 1～4　　MPM215 : Nothing　　
        ' 设置munal范围
        ' mpm -211: 1~5 MPM213: 1~4 MPM215:无
        ' ----------------------------------------------------------------
        Dim range As Integer
        Dim errorcode As Integer
        range = Integer.Parse(txtsetrange.Text)
        errorcode = mpm.Set_Range(range)
        If errorcode <> 0 Then Show_Error(errorcode)
    End Sub

    Private Sub btnSetUnit_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSetUnit.Click
        ' ---------------------------------------------------
        ' Set Power unit
        ' 设置功率单位
        ' ---------------------------------------------------
        Dim unit As MPM.Power_Unit
        Dim errorcode As Integer

        If cmbunit.Text = "dBm" Then
            unit = MPM.Power_Unit.dBm
        Else
            unit = MPM.Power_Unit.mA
        End If

        errorcode = mpm.Set_Unit(unit)
        If errorcode <> 0 Then Show_Error(errorcode)
    End Sub

    Private Sub btnSetSlot_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSetSlot.Click
        ' ----------------------------------------------------------
        ' Set Range for each ch
        ' 为每个通道设置范围
        ' ----------------------------------------------------------
        Dim slot As Integer
        Dim ch As Integer
        Dim errorcode As Integer
        Dim range As Integer
        slot = Integer.Parse(txtr_slot.Text) ' slot number 0 ～4’槽位号0 ~4
        ch = Integer.Parse(txtr_ch.Text)
        range = Integer.Parse(txte_range.Text)
        errorcode = mpm.Set_Range_Each_Channel(slot, ch, range)
        If errorcode <> 0 Then Show_Error(errorcode)
    End Sub

    Private Sub btnGet_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnGet.Click
        ' ------------------------------------------------------------
        ' Get normal function parameter
        ' 获取正常模式的函数参数
        ' -----------------------------------------------------------
        Dim rangemode As MPM.READ_Range_Mode = New MPM.READ_Range_Mode()
        Dim range As Integer = New Integer()
        Dim wavelength As Double = New Double()
        Dim averaging_time As Double = New Double()
        Dim errorcode As Integer
        Dim unit As MPM.Power_Unit = New MPM.Power_Unit()
        ' ---get "READ"range mode
        ' ---获取Range模式
        errorcode = mpm.Get_READ_Range_Mode(rangemode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        If rangemode = MPM.READ_Range_Mode.Auto Then
            txtgetrmode.Text = "Auto"
        Else
            txtgetrmode.Text = "Manual"
        End If
        ' -----get setting range for all slot
        ' -----获取所有槽位的设置范围

        errorcode = mpm.Get_Range(range)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        txtgetrang.Text = range.ToString()
        ' ---get setting wavelength(nm)
        ' ---获取设置波长
        errorcode = mpm.Get_Wavelength(wavelength)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        txtget_wave.Text = wavelength.ToString()
        ' ---get setting averaging time(msec)
        ' ---获取设置平均时间
        errorcode = mpm.Get_Averaging_Time(averaging_time)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        txtget_avg.Text = averaging_time.ToString()

        ' ----get setting unit
        ' ----获取设置单位
        errorcode = mpm.Get_Unit(unit)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        If unit = MPM.Power_Unit.dBm Or unit = MPM.Power_Unit.dBmA Then
            txtget_unit.Text = "dBm"
        Else
            txtget_unit.Text = "mW"
        End If
    End Sub

    Private Sub btnSlot_Ch_Range_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSlot_Ch_Range.Click
        ' ----------------------------------------------------------
        ' Get Range for each ch
        ' 获取每个通道的范围
        ' ----------------------------------------------------------
        Dim slot As Integer ' Slot 0～
        Dim ch As Integer ' Ch 1～
        Dim range As Integer = New Integer()
        Dim errorcode As Integer = 0
        slot = Integer.Parse(txtget_rangeslot.Text) ' slot 0～
        ch = Integer.Parse(txtget_rangech.Text)
        errorcode = mpm.Get_Range_Each_Channel(slot, ch, range)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        txtget_erange.Text = range.ToString()
    End Sub

    Private Sub btnSlot_Power_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSlot_Power.Click
        ' ----------------------------------------------------------
        ' Read Power for Slot
        ' 读取槽位功率
        ' ----------------------------------------------------------
        Dim slot As Integer ' Slot 0～
        Dim power As Double() = Nothing
        Dim errorcode As Integer
        Dim loop1 As Integer
        Dim pow_string As String = String.Empty
        slot = Integer.Parse(txtread_slotall.Text)
        errorcode = mpm.Get_READ_Power_for_Module(slot, power)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        For loop1 = 0 To power.GetUpperBound(0)

            If loop1 = 0 Then
                pow_string = System.Convert.ToString(power(loop1))
            Else
                pow_string = pow_string & "," & System.Convert.ToString(power(loop1))
            End If
        Next

        txtreadp_all.Text = pow_string
    End Sub

    Private Sub btnZeroing_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnZeroing.Click
        ' ------------------------------------------------------
        ' Zeroing function
        ' 归零功能
        ' -----------------------------------------------------
        Dim errorcode As Integer
        errorcode = mpm.Zeroing()
        If errorcode <> 0 Then Show_Error(errorcode)
    End Sub

    Private Sub btnGetWavelength_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnGetWavelength.Click
        ' --------------------------------------------------------------------
        ' Get Wavelength Sencitvity data for each ch
        ' 获取每个通道的波长灵敏度数据
        ' --------------------------------------------------------------------
        Dim slot As Integer
        Dim ch As Integer
        Dim sence_data As Single() = Nothing
        Dim wave_data As Double() = Nothing
        Dim errorcode As Integer
        slot = Integer.Parse(txtwave_slot.Text) ' slot　0～
        ch = Integer.Parse(txtwave_ch.Text) ' ch 1～
        errorcode = mpm.Get_Wavelength_Senctivity_Data(slot, ch, wave_data, sence_data)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        Dim filepath As String = String.Empty ' file path ’文件路径
        Dim writer As System.IO.StreamWriter ' writer
        SaveFileDialog1.ShowDialog()
        filepath = SaveFileDialog1.FileName
        writer = New System.IO.StreamWriter(filepath)
        writer.WriteLine("Wavelength,Senctivity")

        For loop1 = 0 To wave_data.GetUpperBound(0)
            writer.WriteLine(System.Convert.ToString(wave_data(loop1)) & "," & System.Convert.ToString(sence_data(loop1)))
        Next

        writer.Close()
    End Sub

    Private Sub btnGetError_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnGetError.Click
        ' ------------------------------------------------------------------
        ' Get MPM System Error
        ' 获取MPM系统错误
        ' ------------------------------------------------------------------
        Dim errorcode As Integer
        Dim error_string As String = String.Empty
        errorcode = mpm.Get_System_Error(error_string)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        txtsyst_error.Text = error_string
    End Sub

    Private Sub btnGetIP_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnGetIP.Click
        ' ------------------------------------------------------------
        ' Get MPM IP Address
        ' 获取MPM IP地址
        ' ------------------------------------------------------------
        Dim errorcod As Integer
        Dim ip As String = String.Empty
        errorcod = mpm.Get_IPAddress(ip)

        If errorcod <> 0 Then
            Show_Error(errorcod)
            Return
        End If

        txtipaddress.Text = ip
    End Sub

    Private Sub btnGetPort_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnGetPort.Click
        ' ----------------------------------------------------
        ' Get MPM LAN Port number
        ' 获取MPM LAN端口号
        ' ---------------------------------------------------
        Dim errorcod As Integer
        Dim port As Integer = New Integer()
        errorcod = mpm.Get_LAN_Portnumber(port)

        If errorcod <> 0 Then
            Show_Error(errorcod)
            Return
        End If

        txtlan_port.Text = port.ToString()
    End Sub

    Private Sub btnSetConst_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSetConst.Click
        ' ------------------------------------------------------------------------
        ' Set Const Mode parameter
        ' 设置Const模式参数
        ' ------------------------------------------------------------------------
        Dim ave As Double ' Averaging time(msec) ’平均时间(毫秒)
        Dim point As Integer ' number Of logging point ’测试数据点个数
        Dim wave As Double ' wavelength(nm)’波长(nm)
        Dim trigger_input_mode As MPM.Trigger_Input_Mode ' trigger input mode     ’触发输入模式
        Dim logg_mode As MPM.Measurement_Mode ' Logging mode  / /测试模式
        Dim errorcode As Integer ' errorcode / /错误代码
        Dim range As Integer ' Range

        ' -----1.Setting for logging mode 
        ' -----1.测试模式设置
        If cmbcon_rangemode.Text = "Auto" Then
            ' Auto range mode
            logg_mode = MPM.Measurement_Mode.AutoRangeConstant
        Else
            ' manual range mode 
            logg_mode = MPM.Measurement_Mode.ManualRangeConstant
        End If

        errorcode = mpm.Set_Mode(logg_mode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' -----2.Setting for averaging time (msec)
        ' -----2.设置平均时间(msec)
        ave = Double.Parse(txtcon_ave.Text)
        errorcode = mpm.Set_Averaging_Time(ave)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' -----3. Setting for logging number of point 
        ' -----3. 设置测试点数
        point = Integer.Parse(txtcon_point.Text)
        errorcode = mpm.Set_Logging_Data_Point(point)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ----4. Setting for wavelength(nm)
        ' ----4. 设置波长(nm)
        wave = Integer.Parse(txtcon_wave.Text)
        errorcode = mpm.Set_Wavelength(wave)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ----5. Setting for range(Manual range mode )
        ' ----5. 范围设置(手动范围模式)
        If cmbset_rangemode.Text = "Manual" Then
            range = Integer.Parse(txtcon_range.Text)
            errorcode = mpm.Set_Range(range)

            If errorcode <> 0 Then
                Show_Error(errorcode)
                Return
            End If
        End If

        ' ----6. Setting for trigger input mode
        ' ----6. 触发输入模式设置
        errorcode = mpm.Set_Trigger_Input_Mode(MPM.Trigger_Input_Mode.Extarnal)
        If errorcode <> 0 Then Show_Error(errorcode)
    End Sub

    Private Sub btnSetSweep_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSetSweep.Click
        ' ------------------------------------------------------------------
        ' Set Sweep mode parameter
        ' 设置扫描模式参数
        ' ------------------------------------------------------------------
        Dim logg_mode As MPM.Measurement_Mode ' logging mode/ /测试模式
        Dim startwave As Double ' start wavelength(nm) ’开始波长(nm)
        Dim stopwave As Double ' Stop wavelength(nm) ’停止波长(nm)
        Dim wavestep As Double ' wavelength Step(nm) ’步进波长(nm)
        Dim speed As Double ' sweep speed(nm/sec) ’扫描速度(nm /秒)
        Dim range As Integer ' power range ’功率范围
        Dim errorcode As Integer ' errorcode / /错误代码

        ' ----1. Setting for logging mode 
        ' -----1.测试模式设置
        If cmbsm_rangemode.Text = "Auto" Then
            ' Auto range mode
            logg_mode = MPM.Measurement_Mode.AutoRangeSweep
        Else
            ' Manual range mode
            logg_mode = MPM.Measurement_Mode.ManualRangeSweep
        End If

        errorcode = mpm.Set_Mode(logg_mode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ---2.Setting for Trigger input mode to Extarnal
        ' Sweep mode cant' use internal trigger mode
        ' ---2.设置触发输入模式为外部触发
        ' 扫描模式不能使用内部触发模式
        ' -------------------------------------------------
        errorcode = mpm.Set_Trigger_Input_Mode(MPM.Trigger_Input_Mode.Extarnal)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If
        ' ---3. Setting for wavelength parameter
        ' ---3. 波长参数设置

        startwave = Double.Parse(txtstartwave.Text)
        stopwave = Double.Parse(txtstopwave.Text)
        wavestep = Double.Parse(txtwavestep.Text)
        errorcode = mpm.Set_Sweep_Wavelength(startwave, stopwave, wavestep)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ----4. Setting for sweep speed 
        ' ----4. 扫描速度设置
        speed = Double.Parse(txtspeed.Text)
        errorcode = mpm.Set_Sweep_Speed(speed)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ----5. Setting for Range with Maunal range
        ' ----5. 设置rang范围
        If cmbsm_rangemode.Text = "Manual" Then
            range = Integer.Parse(txtsm_range.Text)
            errorcode = mpm.Set_Range(range)

            If errorcode <> 0 Then
                Show_Error(errorcode)
                Return
            End If
        End If
    End Sub

    Private Sub btnSetFreerun_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnSetFreerun.Click
        ' --------------------------------------------------------------------
        ' Set Freerun mode parameter
        ' 设置Freerun模式参数
        ' -------------------------------------------------------------------
        Dim ave As Double ' averaging time(msec)/ /平均时间(毫秒)
        Dim point As Integer ' number Of sampling point ’采样点个数
        Dim logg_mode As MPM.Measurement_Mode ' logging mode / /测试模式
        Dim wave As Double ' Wavelength(nm)/ /波长(nm)
        Dim range As Integer ' range
        Dim errorcode As Integer ' errorcode / /错误代码
        Dim t_inmode As MPM.Trigger_Input_Mode ' Trigger input mode’触发输入模式

        ' ----1. Setting for logging mode
        ' Freerun can set only manual range mode
        ' ----1. 测试模式设置
        ' Freerun只能设置手动范围模式
        ' --------------------------------------------
        logg_mode = MPM.Measurement_Mode.Freerun
        errorcode = mpm.Set_Mode(logg_mode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ----2.Setting for  Range
        ' ----2.设置Range
        range = Integer.Parse(txtfr_range.Text)
        errorcode = mpm.Set_Range(range)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ----3.Setting for averaging time 
        ' ----3.平均时间设置
        ave = Double.Parse(txtfr_ave.Text)
        errorcode = mpm.Set_Averaging_Time(ave)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ---4.Setting for number of logging point 
        ' ---4.设置测试点的数量
        point = Integer.Parse(txtfr_point.Text)
        errorcode = mpm.Set_Logging_Data_Point(point)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ---5.Setting for wavelength
        ' ---5.设置波长
        wave = Double.Parse(txtfr_wave.Text)
        errorcode = mpm.Set_Wavelength(wave)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ----6.setting for trigger input mode
        ' ----6.触发输入模式设置
        If cmbfr_tin_mode.Text = "Internal" Then
            t_inmode = MPM.Trigger_Input_Mode.Internal
        Else
            t_inmode = MPM.Trigger_Input_Mode.Extarnal
        End If

        errorcode = mpm.Set_Trigger_Input_Mode(t_inmode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If
    End Sub

    Private Sub btnStart_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnStart.Click
        ' --------------------------------------------------------
        ' Logging Start
        ' 测试开始
        ' --------------------------------------------------------
        Dim errorcode As Integer
        errorcode = mpm.Logging_Start()

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If
    End Sub

    Private Sub btnStatus_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnStatus.Click
        ' -------------------------------------------------------
        ' Get logging status
        ' 获取测试状态
        ' -------------------------------------------------------
        Dim errorcode As Integer
        Dim status As Integer = New Integer() ' Logging status  0: Not completed 1: completed -1: stopped ’ 测试状态 0:未完成。1:已完成 -1: 停止
        Dim count As Integer = New Integer() ' finished count Of logging ’完成测试计数
        errorcode = mpm.Get_Logging_Status(status, count)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        txtlog_status.Text = System.Convert.ToString(status) & "," & System.Convert.ToString(count)
    End Sub

    Private Sub btnStop_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnStop.Click
        ' ----------------------------------------------------------
        ' logging stop
        ' 测试停止
        ' ----------------------------------------------------------
        Dim errorcode As Integer
        errorcode = mpm.Logging_Stop()
        If errorcode <> 0 Then Show_Error(errorcode)
    End Sub

    Private Sub btnGetch_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnGetch.Click
        ' ---------------------------------------------------------
        ' Get Logging data
        ' 获取日志数据
        ' ---------------------------------------------------------
        Dim errorcode As Integer
        Dim slot As Integer ' Slot 0～
        Dim ch As Integer ' ch　1～
        Dim logdata As Single() = Nothing ' Logging data/ /日志数据
        slot = Integer.Parse(txtlog_slot.Text)
        ch = Integer.Parse(txtlog_ch.Text)
        errorcode = mpm.Get_Each_Channel_Logdata(slot, ch, logdata)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ----Save data for csv file
        ' ----保存数据为csv文件
        Dim filepath As String = String.Empty ' save file path’保存文件路径
        Dim writer As System.IO.StreamWriter
        Dim loop1 As Integer
        SaveFileDialog1.ShowDialog()
        filepath = SaveFileDialog1.FileName
        writer = New System.IO.StreamWriter(filepath)

        For loop1 = 0 To logdata.GetUpperBound(0)
            writer.WriteLine(logdata(loop1))
        Next

        writer.Close()
    End Sub

    Private Sub btnGetSlot_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnGetSlot.Click
        ' ------------------------------------------------------------------------
        ' Get Logging data for slot
        ' 获取模块的日志数据
        ' -----------------------------------------------------------------------
        Dim errorcode As Integer
        Dim logdata As Single(,) = Nothing
        Dim slot As Integer
        slot = Integer.Parse(txte_slot.Text)
        errorcode = mpm.Get_Each_Module_Loggdata(slot, logdata)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        ' ----Save data for csv file
        ' ----保存数据为csv文件
        Dim filepath As String = String.Empty ' save file path’保存文件路径
        Dim writer As System.IO.StreamWriter
        Dim numberofch As Integer ' number Of channel’通道数
        Dim loop1 As Integer
        Dim loop2 As Integer
        Dim write_st As String = String.Empty
        numberofch = logdata.GetLength(0) - 1
        SaveFileDialog1.ShowDialog()
        filepath = SaveFileDialog1.FileName
        writer = New System.IO.StreamWriter(filepath, False, System.Text.Encoding.GetEncoding("Shift-jis"))

        For loop1 = 0 To numberofch
            write_st = write_st & ",Ch" & System.Convert.ToString(loop1 + 1)
        Next

        writer.WriteLine(write_st)

        ' heddrer write
        For loop1 = 0 To logdata.GetLength(1) - 1
            write_st = System.Convert.ToString(loop1 + 1)

            For loop2 = 0 To numberofch
                write_st = write_st & "," & System.Convert.ToString(logdata(loop2, loop1))
            Next

            writer.WriteLine(write_st)
        Next

        writer.Close()
    End Sub

    Private Sub btnGetParameter_Click(ByVal sender As Object, ByVal e As EventArgs) Handles btnGetParameter.Click
        ' ------------------------------------------------------------------------
        ' Get Logging mode parameter
        ' 获取测试模式参数
        ' -----------------------------------------------------------------------
        Dim logmode As MPM.Measurement_Mode = New MPM.Measurement_Mode()
        Dim errorcode As Integer

        ' --Get logging mode
        ' --获取测试模式
        errorcode = mpm.Get_Mode(logmode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        If logmode = MPM.Measurement_Mode.AutoRangeConstant Then
            txtg_rangemode.Text = "Auto"
            txtlog_mode.Text = "Const2"
        ElseIf logmode = MPM.Measurement_Mode.ManualRangeConstant Then
            txtg_rangemode.Text = "Manual"
            txtlog_mode.Text = "Const1"
        ElseIf logmode = MPM.Measurement_Mode.AutoRangeSweep Then
            txtg_rangemode.Text = "Auto"
            txtlog_mode.Text = "Sweep2"
        ElseIf logmode = MPM.Measurement_Mode.ManualRangeSweep Then
            txtlog_mode.Text = "Sweep1"
            txtg_rangemode.Text = "Manual"
        Else
            txtlog_mode.Text = "Freerun"
            txtg_rangemode.Text = "Manual"
        End If


        ' ----Get averaging time(msec)
        ' ----获取平均时间(msec)
        Dim ave As Double = New Double()
        errorcode = mpm.Get_Averaging_Time(ave)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        txtg_ave.Text = ave.ToString()
        If InStr(Me.txtlog_mode.Text, "Sweep") <> 0 Then
            ' if WMOD Is Sweep , Get_Averaging_Time function Is Not available.
            '如果WMOD是Sweep, Get_Averaging_Time函数不可用。
            txtg_ave.Text = ""
        End If

        ' ----Get logging nubmer of point 
        ' ----获取测试点数
        Dim point As Integer = New Integer()
        errorcode = mpm.Get_Logging_Data_Point(point)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        txtg_point.Text = point.ToString()
        Dim wave As Double = New Double()

        ' ---Get Wavelength            
        ' ---获取波长
        errorcode = mpm.Get_Wavelength(wave)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        txtg_wavelength.Text = wave.ToString()

        ' ----Get Trigger input mode 
        ' ----获取触发器输入模式
        Dim inputmode As MPM.Trigger_Input_Mode = New MPM.Trigger_Input_Mode()
        errorcode = mpm.Get_Trigger_Input_Mode(inputmode)

        If errorcode <> 0 Then
            Show_Error(errorcode)
            Return
        End If

        If inputmode = MPM.Trigger_Input_Mode.Extarnal Then
            txtg_tinmode.Text = "Extarnal"
        Else
            txtg_tinmode.Text = "Internal"
        End If


        ' ----Get Setting range 
        ' ----获取设置rane
        If txtg_rangemode.Text = "Manual" Then
            Dim range As Integer = New Integer()
            errorcode = mpm.Get_Range(range)

            If errorcode <> 0 Then
                Show_Error(errorcode)
                Return
            End If

            txtg_settingrange.Text = range.ToString()
        Else
            txtg_settingrange.Text = ""
        End If
        ' -----Sweep mode parameter 
        ' -----扫描模式参数

        If InStr(Me.txtlog_mode.Text, "Sweep") > 0 Then
            Dim startwave As Double = New Double()
            Dim stopwave As Double = New Double()
            Dim wavestep As Double = New Double()
            Dim speed As Double = New Double()

            ' wavelength parameter
            ' 波长参数
            errorcode = mpm.Get_Sweep_Wavelength(startwave, stopwave, wavestep)

            If errorcode <> 0 Then
                Show_Error(errorcode)
                Return
            End If

            txtg_statwave.Text = startwave.ToString()
            txtg_stopwave.Text = stopwave.ToString()
            txtg_stepwave.Text = wavestep.ToString()
            errorcode = mpm.Get_Sweep_Speed(speed)

            If errorcode <> 0 Then
                Show_Error(errorcode)
                Return
            End If

            txtg_speed.Text = speed.ToString()
        End If
    End Sub
End Class
