<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class TSLSample
    Inherits System.Windows.Forms.Form

    'フォームがコンポーネントの一覧をクリーンアップするために dispose をオーバーライドします。
    <System.Diagnostics.DebuggerNonUserCode()>
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Windows フォーム デザイナーで必要です。
    Private components As System.ComponentModel.IContainer

    'メモ: 以下のプロシージャは Windows フォーム デザイナーで必要です。
    'Windows フォーム デザイナーを使用して変更できます。  
    'コード エディターを使って変更しないでください。
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.BtnDisConnect = New System.Windows.Forms.Button()
        Me.GroupBox6 = New System.Windows.Forms.GroupBox()
        Me.rdiCr = New System.Windows.Forms.RadioButton()
        Me.rdiCrLF = New System.Windows.Forms.RadioButton()
        Me.rdiLf = New System.Windows.Forms.RadioButton()
        Me.rdiUSB = New System.Windows.Forms.RadioButton()
        Me.rdiNI488 = New System.Windows.Forms.RadioButton()
        Me.rdikysightvisa = New System.Windows.Forms.RadioButton()
        Me.rdiNIvisa = New System.Windows.Forms.RadioButton()
        Me.lblACP2 = New System.Windows.Forms.Label()
        Me.lblATTrange = New System.Windows.Forms.Label()
        Me.Label15 = New System.Windows.Forms.Label()
        Me.Label14 = New System.Windows.Forms.Label()
        Me.lblAPC1 = New System.Windows.Forms.Label()
        Me.Label12 = New System.Windows.Forms.Label()
        Me.lblfreq = New System.Windows.Forms.Label()
        Me.Label10 = New System.Windows.Forms.Label()
        Me.lblwave = New System.Windows.Forms.Label()
        Me.lblfwversion = New System.Windows.Forms.Label()
        Me.lblserial = New System.Windows.Forms.Label()
        Me.lblproductname = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.BtnConnect = New System.Windows.Forms.Button()
        Me.TextBox1 = New System.Windows.Forms.TextBox()
        Me.GroupBox11 = New System.Windows.Forms.GroupBox()
        Me.Btn_Fine = New System.Windows.Forms.Button()
        Me.txtfine = New System.Windows.Forms.TextBox()
        Me.Btn_Freuency = New System.Windows.Forms.Button()
        Me.txtfreq = New System.Windows.Forms.TextBox()
        Me.Btn_Wavelength = New System.Windows.Forms.Button()
        Me.txtwave = New System.Windows.Forms.TextBox()
        Me.GroupBox10 = New System.Windows.Forms.GroupBox()
        Me.txtsetft = New System.Windows.Forms.TextBox()
        Me.Btn_SetFinetuning = New System.Windows.Forms.Button()
        Me.txtsetfreq = New System.Windows.Forms.TextBox()
        Me.Btn_SetFrequency = New System.Windows.Forms.Button()
        Me.Btn_SetWavelenth = New System.Windows.Forms.Button()
        Me.txtsetwave = New System.Windows.Forms.TextBox()
        Me.Label8 = New System.Windows.Forms.Label()
        Me.txttsl_err = New System.Windows.Forms.TextBox()
        Me.Btn_error = New System.Windows.Forms.Button()
        Me.txtwait = New System.Windows.Forms.TextBox()
        Me.Btn_Stangby = New System.Windows.Forms.Button()
        Me.txtbusy = New System.Windows.Forms.TextBox()
        Me.Btn_Busy = New System.Windows.Forms.Button()
        Me.GroupBox8 = New System.Windows.Forms.GroupBox()
        Me.BtnShutter_Status = New System.Windows.Forms.Button()
        Me.txtshutter_su = New System.Windows.Forms.TextBox()
        Me.txtcoh = New System.Windows.Forms.TextBox()
        Me.BtnCoh_Status = New System.Windows.Forms.Button()
        Me.Btnmonitor_mW = New System.Windows.Forms.Button()
        Me.txtradmoni_mw = New System.Windows.Forms.TextBox()
        Me.Btnmonitor_dBm = New System.Windows.Forms.Button()
        Me.txtreadmoni = New System.Windows.Forms.TextBox()
        Me.txtreadmw = New System.Windows.Forms.TextBox()
        Me.BtnPower_mW = New System.Windows.Forms.Button()
        Me.BtnPower_dBm = New System.Windows.Forms.Button()
        Me.txtreadpow = New System.Windows.Forms.TextBox()
        Me.BtnAtt_value = New System.Windows.Forms.Button()
        Me.txtreadatt = New System.Windows.Forms.TextBox()
        Me.txtunit = New System.Windows.Forms.TextBox()
        Me.BtnUnit = New System.Windows.Forms.Button()
        Me.BtnPower_mode = New System.Windows.Forms.Button()
        Me.txtpms = New System.Windows.Forms.TextBox()
        Me.Btn_GetLD = New System.Windows.Forms.Button()
        Me.txtlds = New System.Windows.Forms.TextBox()
        Me.GroupBox7 = New System.Windows.Forms.GroupBox()
        Me.BtnShutter_Close = New System.Windows.Forms.Button()
        Me.BtnShutter_Open = New System.Windows.Forms.Button()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.Btn_SetmW = New System.Windows.Forms.Button()
        Me.txtpow = New System.Windows.Forms.TextBox()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.Btn_SetdBm = New System.Windows.Forms.Button()
        Me.Btn_SetATT = New System.Windows.Forms.Button()
        Me.txtatt = New System.Windows.Forms.TextBox()
        Me.BtnmW = New System.Windows.Forms.Button()
        Me.BtndBm = New System.Windows.Forms.Button()
        Me.BtnACC = New System.Windows.Forms.Button()
        Me.BtnAPC = New System.Windows.Forms.Button()
        Me.BtnCoh_OFF = New System.Windows.Forms.Button()
        Me.BtnCoh_ON = New System.Windows.Forms.Button()
        Me.BtnLD_OFF = New System.Windows.Forms.Button()
        Me.BtnLD_ON = New System.Windows.Forms.Button()
        Me.cmbsm = New System.Windows.Forms.ComboBox()
        Me.Label16 = New System.Windows.Forms.Label()
        Me.txtminstep = New System.Windows.Forms.TextBox()
        Me.Btn_Minstep = New System.Windows.Forms.Button()
        Me.Label35 = New System.Windows.Forms.Label()
        Me.Btn_Start = New System.Windows.Forms.Button()
        Me.txtsw_wait = New System.Windows.Forms.TextBox()
        Me.Btn_Pause = New System.Windows.Forms.Button()
        Me.Btn_Waiting = New System.Windows.Forms.Button()
        Me.cmbsweep_su = New System.Windows.Forms.ComboBox()
        Me.Btn_Stop = New System.Windows.Forms.Button()
        Me.Label36 = New System.Windows.Forms.Label()
        Me.txtcurrentc = New System.Windows.Forms.TextBox()
        Me.Btn_SoftwareTrigger = New System.Windows.Forms.Button()
        Me.Btn_Current = New System.Windows.Forms.Button()
        Me.Btn_ReStart = New System.Windows.Forms.Button()
        Me.Btn_GetLogg = New System.Windows.Forms.Button()
        Me.Btn_Status = New System.Windows.Forms.Button()
        Me.txtg_sweep_su = New System.Windows.Forms.TextBox()
        Me.GroupBox13 = New System.Windows.Forms.GroupBox()
        Me.Label79 = New System.Windows.Forms.Label()
        Me.BtnGet_setting = New System.Windows.Forms.Button()
        Me.txtTrigger_Source = New System.Windows.Forms.TextBox()
        Me.Label13 = New System.Windows.Forms.Label()
        Me.Label11 = New System.Windows.Forms.Label()
        Me.Label9 = New System.Windows.Forms.Label()
        Me.txtg_cycle = New System.Windows.Forms.TextBox()
        Me.txtg_delay = New System.Windows.Forms.TextBox()
        Me.txtg_speed = New System.Windows.Forms.TextBox()
        Me.Label34 = New System.Windows.Forms.Label()
        Me.txtg_triggerstep = New System.Windows.Forms.TextBox()
        Me.Label33 = New System.Windows.Forms.Label()
        Me.txtg_wavestep = New System.Windows.Forms.TextBox()
        Me.Label29 = New System.Windows.Forms.Label()
        Me.Label28 = New System.Windows.Forms.Label()
        Me.txtg_stopwave = New System.Windows.Forms.TextBox()
        Me.Label27 = New System.Windows.Forms.Label()
        Me.txtg_startmode = New System.Windows.Forms.TextBox()
        Me.Label26 = New System.Windows.Forms.Label()
        Me.txtg_tri_out = New System.Windows.Forms.TextBox()
        Me.txtg_startwave = New System.Windows.Forms.TextBox()
        Me.txtg_tr_inp = New System.Windows.Forms.TextBox()
        Me.Label24 = New System.Windows.Forms.Label()
        Me.Label23 = New System.Windows.Forms.Label()
        Me.txtg_smod = New System.Windows.Forms.TextBox()
        Me.GroupBox15 = New System.Windows.Forms.GroupBox()
        Me.cmbTrigger_Source = New System.Windows.Forms.ComboBox()
        Me.Label68 = New System.Windows.Forms.Label()
        Me.Btn_Other = New System.Windows.Forms.Button()
        Me.Label32 = New System.Windows.Forms.Label()
        Me.cmbtin = New System.Windows.Forms.ComboBox()
        Me.txtdelay = New System.Windows.Forms.TextBox()
        Me.Label17 = New System.Windows.Forms.Label()
        Me.Label31 = New System.Windows.Forms.Label()
        Me.cmbtout = New System.Windows.Forms.ComboBox()
        Me.txtcycle = New System.Windows.Forms.TextBox()
        Me.Label18 = New System.Windows.Forms.Label()
        Me.Label30 = New System.Windows.Forms.Label()
        Me.cmbst_mod = New System.Windows.Forms.ComboBox()
        Me.txtspeed = New System.Windows.Forms.TextBox()
        Me.Label25 = New System.Windows.Forms.Label()
        Me.GroupBox14 = New System.Windows.Forms.GroupBox()
        Me.txtstart = New System.Windows.Forms.TextBox()
        Me.Label19 = New System.Windows.Forms.Label()
        Me.txtstop = New System.Windows.Forms.TextBox()
        Me.Label20 = New System.Windows.Forms.Label()
        Me.txtstep = New System.Windows.Forms.TextBox()
        Me.Label21 = New System.Windows.Forms.Label()
        Me.Btn_SetWavelength = New System.Windows.Forms.Button()
        Me.SaveFileDialog1 = New System.Windows.Forms.SaveFileDialog()
        Me.tabControl1 = New System.Windows.Forms.TabControl()
        Me.tabPage1 = New System.Windows.Forms.TabPage()
        Me.groupBox16 = New System.Windows.Forms.GroupBox()
        Me.label37 = New System.Windows.Forms.Label()
        Me.txtdev_num = New System.Windows.Forms.TextBox()
        Me.label38 = New System.Windows.Forms.Label()
        Me.label39 = New System.Windows.Forms.Label()
        Me.txtaddressnum = New System.Windows.Forms.TextBox()
        Me.txtboad = New System.Windows.Forms.TextBox()
        Me.btnSplit = New System.Windows.Forms.Button()
        Me.btnGet_Visa = New System.Windows.Forms.Button()
        Me.label40 = New System.Windows.Forms.Label()
        Me.label41 = New System.Windows.Forms.Label()
        Me.btnUsb_resouce = New System.Windows.Forms.Button()
        Me.cmbusbresouce = New System.Windows.Forms.ComboBox()
        Me.cmbgpib_resouce = New System.Windows.Forms.ComboBox()
        Me.GroupBox17 = New System.Windows.Forms.GroupBox()
        Me.GroupBox18 = New System.Windows.Forms.GroupBox()
        Me.rdo770 = New System.Windows.Forms.RadioButton()
        Me.rdo570 = New System.Windows.Forms.RadioButton()
        Me.rdo550 = New System.Windows.Forms.RadioButton()
        Me.GroupBox20 = New System.Windows.Forms.GroupBox()
        Me.lblSweepSpeed_Range = New System.Windows.Forms.Label()
        Me.label42 = New System.Windows.Forms.Label()
        Me.GroupBox21 = New System.Windows.Forms.GroupBox()
        Me.Label58 = New System.Windows.Forms.Label()
        Me.txtPort = New System.Windows.Forms.TextBox()
        Me.rdoLAN = New System.Windows.Forms.RadioButton()
        Me.Label59 = New System.Windows.Forms.Label()
        Me.tabPage2 = New System.Windows.Forms.TabPage()
        Me.GroupBox26 = New System.Windows.Forms.GroupBox()
        Me.btnGetPort = New System.Windows.Forms.Button()
        Me.Label62 = New System.Windows.Forms.Label()
        Me.txtlan_port = New System.Windows.Forms.TextBox()
        Me.Label63 = New System.Windows.Forms.Label()
        Me.txtip_add = New System.Windows.Forms.TextBox()
        Me.btnGetIP = New System.Windows.Forms.Button()
        Me.tabPage3 = New System.Windows.Forms.TabPage()
        Me.GroupBox27 = New System.Windows.Forms.GroupBox()
        Me.cmb570_Speed = New System.Windows.Forms.ComboBox()
        Me.Label65 = New System.Windows.Forms.Label()
        Me.btnSpeed = New System.Windows.Forms.Button()
        Me.GroupBox28 = New System.Windows.Forms.GroupBox()
        Me.GroupBox6.SuspendLayout()
        Me.GroupBox11.SuspendLayout()
        Me.GroupBox10.SuspendLayout()
        Me.GroupBox8.SuspendLayout()
        Me.GroupBox7.SuspendLayout()
        Me.GroupBox13.SuspendLayout()
        Me.GroupBox15.SuspendLayout()
        Me.GroupBox14.SuspendLayout()
        Me.tabControl1.SuspendLayout()
        Me.tabPage1.SuspendLayout()
        Me.groupBox16.SuspendLayout()
        Me.GroupBox17.SuspendLayout()
        Me.GroupBox18.SuspendLayout()
        Me.GroupBox20.SuspendLayout()
        Me.GroupBox21.SuspendLayout()
        Me.tabPage2.SuspendLayout()
        Me.GroupBox26.SuspendLayout()
        Me.tabPage3.SuspendLayout()
        Me.GroupBox27.SuspendLayout()
        Me.GroupBox28.SuspendLayout()
        Me.SuspendLayout()
        '
        'BtnDisConnect
        '
        Me.BtnDisConnect.Location = New System.Drawing.Point(293, 158)
        Me.BtnDisConnect.Name = "BtnDisConnect"
        Me.BtnDisConnect.Size = New System.Drawing.Size(77, 26)
        Me.BtnDisConnect.TabIndex = 21
        Me.BtnDisConnect.Text = "DisConnect"
        Me.BtnDisConnect.UseVisualStyleBackColor = True
        '
        'GroupBox6
        '
        Me.GroupBox6.Controls.Add(Me.rdiCr)
        Me.GroupBox6.Controls.Add(Me.rdiCrLF)
        Me.GroupBox6.Controls.Add(Me.rdiLf)
        Me.GroupBox6.Location = New System.Drawing.Point(508, 37)
        Me.GroupBox6.Name = "GroupBox6"
        Me.GroupBox6.Size = New System.Drawing.Size(185, 80)
        Me.GroupBox6.TabIndex = 20
        Me.GroupBox6.TabStop = False
        Me.GroupBox6.Text = "Terminator"
        '
        'rdiCr
        '
        Me.rdiCr.AutoSize = True
        Me.rdiCr.Checked = True
        Me.rdiCr.Location = New System.Drawing.Point(14, 33)
        Me.rdiCr.Name = "rdiCr"
        Me.rdiCr.Size = New System.Drawing.Size(35, 17)
        Me.rdiCr.TabIndex = 16
        Me.rdiCr.TabStop = True
        Me.rdiCr.Text = "Cr"
        Me.rdiCr.UseVisualStyleBackColor = True
        '
        'rdiCrLF
        '
        Me.rdiCrLF.AutoSize = True
        Me.rdiCrLF.Location = New System.Drawing.Point(115, 33)
        Me.rdiCrLF.Name = "rdiCrLF"
        Me.rdiCrLF.Size = New System.Drawing.Size(44, 17)
        Me.rdiCrLF.TabIndex = 18
        Me.rdiCrLF.Text = "CrLf"
        Me.rdiCrLF.UseVisualStyleBackColor = True
        '
        'rdiLf
        '
        Me.rdiLf.AutoSize = True
        Me.rdiLf.Location = New System.Drawing.Point(70, 33)
        Me.rdiLf.Name = "rdiLf"
        Me.rdiLf.Size = New System.Drawing.Size(34, 17)
        Me.rdiLf.TabIndex = 17
        Me.rdiLf.Text = "Lf"
        Me.rdiLf.UseVisualStyleBackColor = True
        '
        'rdiUSB
        '
        Me.rdiUSB.AutoSize = True
        Me.rdiUSB.Enabled = False
        Me.rdiUSB.Location = New System.Drawing.Point(235, 22)
        Me.rdiUSB.Name = "rdiUSB"
        Me.rdiUSB.Size = New System.Drawing.Size(47, 17)
        Me.rdiUSB.TabIndex = 19
        Me.rdiUSB.Text = "USB"
        Me.rdiUSB.UseVisualStyleBackColor = True
        '
        'rdiNI488
        '
        Me.rdiNI488.AutoSize = True
        Me.rdiNI488.Checked = True
        Me.rdiNI488.Location = New System.Drawing.Point(6, 22)
        Me.rdiNI488.Name = "rdiNI488"
        Me.rdiNI488.Size = New System.Drawing.Size(63, 17)
        Me.rdiNI488.TabIndex = 16
        Me.rdiNI488.TabStop = True
        Me.rdiNI488.Text = "NI488.2"
        Me.rdiNI488.UseVisualStyleBackColor = True
        '
        'rdikysightvisa
        '
        Me.rdikysightvisa.AutoSize = True
        Me.rdikysightvisa.Location = New System.Drawing.Point(144, 22)
        Me.rdikysightvisa.Name = "rdikysightvisa"
        Me.rdikysightvisa.Size = New System.Drawing.Size(85, 17)
        Me.rdikysightvisa.TabIndex = 18
        Me.rdikysightvisa.Text = "KeysightVisa"
        Me.rdikysightvisa.UseVisualStyleBackColor = True
        '
        'rdiNIvisa
        '
        Me.rdiNIvisa.AutoSize = True
        Me.rdiNIvisa.Location = New System.Drawing.Point(81, 22)
        Me.rdiNIvisa.Name = "rdiNIvisa"
        Me.rdiNIvisa.Size = New System.Drawing.Size(56, 17)
        Me.rdiNIvisa.TabIndex = 17
        Me.rdiNIvisa.Text = "NIVisa"
        Me.rdiNIvisa.UseVisualStyleBackColor = True
        '
        'lblACP2
        '
        Me.lblACP2.AutoSize = True
        Me.lblACP2.Location = New System.Drawing.Point(135, 101)
        Me.lblACP2.Name = "lblACP2"
        Me.lblACP2.Size = New System.Drawing.Size(44, 13)
        Me.lblACP2.TabIndex = 21
        Me.lblACP2.Text = "Product"
        '
        'lblATTrange
        '
        Me.lblATTrange.AutoSize = True
        Me.lblATTrange.Location = New System.Drawing.Point(364, 101)
        Me.lblATTrange.Name = "lblATTrange"
        Me.lblATTrange.Size = New System.Drawing.Size(44, 13)
        Me.lblATTrange.TabIndex = 20
        Me.lblATTrange.Text = "Product"
        '
        'Label15
        '
        Me.Label15.AutoSize = True
        Me.Label15.ForeColor = System.Drawing.Color.Blue
        Me.Label15.Location = New System.Drawing.Point(251, 101)
        Me.Label15.Name = "Label15"
        Me.Label15.Size = New System.Drawing.Size(58, 13)
        Me.Label15.TabIndex = 19
        Me.Label15.Text = "ATT range"
        '
        'Label14
        '
        Me.Label14.AutoSize = True
        Me.Label14.ForeColor = System.Drawing.Color.Blue
        Me.Label14.Location = New System.Drawing.Point(20, 101)
        Me.Label14.Name = "Label14"
        Me.Label14.Size = New System.Drawing.Size(77, 13)
        Me.Label14.TabIndex = 18
        Me.Label14.Text = "APC Limit(mW)"
        '
        'lblAPC1
        '
        Me.lblAPC1.AutoSize = True
        Me.lblAPC1.Location = New System.Drawing.Point(601, 57)
        Me.lblAPC1.Name = "lblAPC1"
        Me.lblAPC1.Size = New System.Drawing.Size(44, 13)
        Me.lblAPC1.TabIndex = 17
        Me.lblAPC1.Text = "Product"
        '
        'Label12
        '
        Me.Label12.AutoSize = True
        Me.Label12.ForeColor = System.Drawing.Color.Blue
        Me.Label12.Location = New System.Drawing.Point(479, 57)
        Me.Label12.Name = "Label12"
        Me.Label12.Size = New System.Drawing.Size(79, 13)
        Me.Label12.TabIndex = 16
        Me.Label12.Text = "APC Limit(dBm)"
        '
        'lblfreq
        '
        Me.lblfreq.AutoSize = True
        Me.lblfreq.Location = New System.Drawing.Point(364, 54)
        Me.lblfreq.Name = "lblfreq"
        Me.lblfreq.Size = New System.Drawing.Size(44, 13)
        Me.lblfreq.TabIndex = 15
        Me.lblfreq.Text = "Product"
        '
        'Label10
        '
        Me.Label10.AutoSize = True
        Me.Label10.ForeColor = System.Drawing.Color.Blue
        Me.Label10.Location = New System.Drawing.Point(251, 55)
        Me.Label10.Name = "Label10"
        Me.Label10.Size = New System.Drawing.Size(87, 13)
        Me.Label10.TabIndex = 14
        Me.Label10.Text = "Frequency range"
        '
        'lblwave
        '
        Me.lblwave.AutoSize = True
        Me.lblwave.Location = New System.Drawing.Point(135, 58)
        Me.lblwave.Name = "lblwave"
        Me.lblwave.Size = New System.Drawing.Size(44, 13)
        Me.lblwave.TabIndex = 13
        Me.lblwave.Text = "Product"
        '
        'lblfwversion
        '
        Me.lblfwversion.AutoSize = True
        Me.lblfwversion.Location = New System.Drawing.Point(601, 21)
        Me.lblfwversion.Name = "lblfwversion"
        Me.lblfwversion.Size = New System.Drawing.Size(44, 13)
        Me.lblfwversion.TabIndex = 12
        Me.lblfwversion.Text = "Product"
        '
        'lblserial
        '
        Me.lblserial.AutoSize = True
        Me.lblserial.Location = New System.Drawing.Point(364, 18)
        Me.lblserial.Name = "lblserial"
        Me.lblserial.Size = New System.Drawing.Size(44, 13)
        Me.lblserial.TabIndex = 11
        Me.lblserial.Text = "Product"
        '
        'lblproductname
        '
        Me.lblproductname.AutoSize = True
        Me.lblproductname.Location = New System.Drawing.Point(135, 21)
        Me.lblproductname.Name = "lblproductname"
        Me.lblproductname.Size = New System.Drawing.Size(44, 13)
        Me.lblproductname.TabIndex = 10
        Me.lblproductname.Text = "Product"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.ForeColor = System.Drawing.Color.Blue
        Me.Label5.Location = New System.Drawing.Point(479, 21)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(64, 13)
        Me.Label5.TabIndex = 9
        Me.Label5.Text = "F/W Vesion"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.ForeColor = System.Drawing.Color.Blue
        Me.Label4.Location = New System.Drawing.Point(16, 58)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(95, 13)
        Me.Label4.TabIndex = 8
        Me.Label4.Text = "Wavelength range"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.ForeColor = System.Drawing.Color.Blue
        Me.Label3.Location = New System.Drawing.Point(251, 21)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(33, 13)
        Me.Label3.TabIndex = 7
        Me.Label3.Text = "Serial"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.ForeColor = System.Drawing.Color.Blue
        Me.Label2.Location = New System.Drawing.Point(15, 21)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(44, 13)
        Me.Label2.TabIndex = 6
        Me.Label2.Text = "Product"
        '
        'BtnConnect
        '
        Me.BtnConnect.Location = New System.Drawing.Point(203, 158)
        Me.BtnConnect.Name = "BtnConnect"
        Me.BtnConnect.Size = New System.Drawing.Size(69, 26)
        Me.BtnConnect.TabIndex = 4
        Me.BtnConnect.Text = "Connect"
        Me.BtnConnect.UseVisualStyleBackColor = True
        '
        'TextBox1
        '
        Me.TextBox1.Location = New System.Drawing.Point(5, 162)
        Me.TextBox1.Name = "TextBox1"
        Me.TextBox1.Size = New System.Drawing.Size(175, 20)
        Me.TextBox1.TabIndex = 2
        '
        'GroupBox11
        '
        Me.GroupBox11.Controls.Add(Me.Btn_Fine)
        Me.GroupBox11.Controls.Add(Me.txtfine)
        Me.GroupBox11.Controls.Add(Me.Btn_Freuency)
        Me.GroupBox11.Controls.Add(Me.txtfreq)
        Me.GroupBox11.Controls.Add(Me.Btn_Wavelength)
        Me.GroupBox11.Controls.Add(Me.txtwave)
        Me.GroupBox11.Location = New System.Drawing.Point(7, 293)
        Me.GroupBox11.Name = "GroupBox11"
        Me.GroupBox11.Size = New System.Drawing.Size(708, 82)
        Me.GroupBox11.TabIndex = 6
        Me.GroupBox11.TabStop = False
        Me.GroupBox11.Text = "Wavelenth Status"
        '
        'Btn_Fine
        '
        Me.Btn_Fine.Location = New System.Drawing.Point(573, 30)
        Me.Btn_Fine.Name = "Btn_Fine"
        Me.Btn_Fine.Size = New System.Drawing.Size(122, 27)
        Me.Btn_Fine.TabIndex = 15
        Me.Btn_Fine.Text = "Fine tuning value"
        Me.Btn_Fine.UseVisualStyleBackColor = True
        '
        'txtfine
        '
        Me.txtfine.Enabled = False
        Me.txtfine.Location = New System.Drawing.Point(453, 34)
        Me.txtfine.Name = "txtfine"
        Me.txtfine.Size = New System.Drawing.Size(110, 20)
        Me.txtfine.TabIndex = 14
        '
        'Btn_Freuency
        '
        Me.Btn_Freuency.Location = New System.Drawing.Point(348, 30)
        Me.Btn_Freuency.Name = "Btn_Freuency"
        Me.Btn_Freuency.Size = New System.Drawing.Size(99, 27)
        Me.Btn_Freuency.TabIndex = 13
        Me.Btn_Freuency.Text = "Frequency" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10)
        Me.Btn_Freuency.UseVisualStyleBackColor = True
        '
        'txtfreq
        '
        Me.txtfreq.Enabled = False
        Me.txtfreq.Location = New System.Drawing.Point(230, 34)
        Me.txtfreq.Name = "txtfreq"
        Me.txtfreq.Size = New System.Drawing.Size(112, 20)
        Me.txtfreq.TabIndex = 12
        '
        'Btn_Wavelength
        '
        Me.Btn_Wavelength.Location = New System.Drawing.Point(125, 30)
        Me.Btn_Wavelength.Name = "Btn_Wavelength"
        Me.Btn_Wavelength.Size = New System.Drawing.Size(99, 27)
        Me.Btn_Wavelength.TabIndex = 11
        Me.Btn_Wavelength.Text = "Wavelenth"
        Me.Btn_Wavelength.UseVisualStyleBackColor = True
        '
        'txtwave
        '
        Me.txtwave.Enabled = False
        Me.txtwave.Location = New System.Drawing.Point(11, 34)
        Me.txtwave.Name = "txtwave"
        Me.txtwave.Size = New System.Drawing.Size(108, 20)
        Me.txtwave.TabIndex = 1
        '
        'GroupBox10
        '
        Me.GroupBox10.Controls.Add(Me.txtsetft)
        Me.GroupBox10.Controls.Add(Me.Btn_SetFinetuning)
        Me.GroupBox10.Controls.Add(Me.txtsetfreq)
        Me.GroupBox10.Controls.Add(Me.Btn_SetFrequency)
        Me.GroupBox10.Controls.Add(Me.Btn_SetWavelenth)
        Me.GroupBox10.Controls.Add(Me.txtsetwave)
        Me.GroupBox10.Location = New System.Drawing.Point(7, 206)
        Me.GroupBox10.Name = "GroupBox10"
        Me.GroupBox10.Size = New System.Drawing.Size(708, 80)
        Me.GroupBox10.TabIndex = 5
        Me.GroupBox10.TabStop = False
        Me.GroupBox10.Text = "Wavelenth Control"
        '
        'txtsetft
        '
        Me.txtsetft.Location = New System.Drawing.Point(453, 31)
        Me.txtsetft.Name = "txtsetft"
        Me.txtsetft.Size = New System.Drawing.Size(137, 20)
        Me.txtsetft.TabIndex = 14
        '
        'Btn_SetFinetuning
        '
        Me.Btn_SetFinetuning.Location = New System.Drawing.Point(596, 28)
        Me.Btn_SetFinetuning.Name = "Btn_SetFinetuning"
        Me.Btn_SetFinetuning.Size = New System.Drawing.Size(99, 27)
        Me.Btn_SetFinetuning.TabIndex = 13
        Me.Btn_SetFinetuning.Text = "Set Finetuning "
        Me.Btn_SetFinetuning.UseVisualStyleBackColor = True
        '
        'txtsetfreq
        '
        Me.txtsetfreq.Location = New System.Drawing.Point(230, 31)
        Me.txtsetfreq.Name = "txtsetfreq"
        Me.txtsetfreq.Size = New System.Drawing.Size(112, 20)
        Me.txtsetfreq.TabIndex = 12
        '
        'Btn_SetFrequency
        '
        Me.Btn_SetFrequency.Location = New System.Drawing.Point(348, 28)
        Me.Btn_SetFrequency.Name = "Btn_SetFrequency"
        Me.Btn_SetFrequency.Size = New System.Drawing.Size(99, 27)
        Me.Btn_SetFrequency.TabIndex = 11
        Me.Btn_SetFrequency.Text = "Set Frequency"
        Me.Btn_SetFrequency.UseVisualStyleBackColor = True
        '
        'Btn_SetWavelenth
        '
        Me.Btn_SetWavelenth.Location = New System.Drawing.Point(125, 28)
        Me.Btn_SetWavelenth.Name = "Btn_SetWavelenth"
        Me.Btn_SetWavelenth.Size = New System.Drawing.Size(99, 27)
        Me.Btn_SetWavelenth.TabIndex = 10
        Me.Btn_SetWavelenth.Text = "Set Wavelenth"
        Me.Btn_SetWavelenth.UseVisualStyleBackColor = True
        '
        'txtsetwave
        '
        Me.txtsetwave.Location = New System.Drawing.Point(11, 33)
        Me.txtsetwave.Name = "txtsetwave"
        Me.txtsetwave.Size = New System.Drawing.Size(108, 20)
        Me.txtsetwave.TabIndex = 0
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Location = New System.Drawing.Point(164, 21)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(82, 13)
        Me.Label8.TabIndex = 13
        Me.Label8.Text = "Wait time(msec)"
        '
        'txttsl_err
        '
        Me.txttsl_err.Enabled = False
        Me.txttsl_err.Location = New System.Drawing.Point(361, 38)
        Me.txttsl_err.Name = "txttsl_err"
        Me.txttsl_err.Size = New System.Drawing.Size(239, 20)
        Me.txttsl_err.TabIndex = 12
        '
        'Btn_error
        '
        Me.Btn_error.Location = New System.Drawing.Point(606, 33)
        Me.Btn_error.Name = "Btn_error"
        Me.Btn_error.Size = New System.Drawing.Size(82, 28)
        Me.Btn_error.TabIndex = 11
        Me.Btn_error.Text = "TSL error"
        Me.Btn_error.UseVisualStyleBackColor = True
        '
        'txtwait
        '
        Me.txtwait.Location = New System.Drawing.Point(166, 38)
        Me.txtwait.Name = "txtwait"
        Me.txtwait.Size = New System.Drawing.Size(85, 20)
        Me.txtwait.TabIndex = 10
        '
        'Btn_Stangby
        '
        Me.Btn_Stangby.Location = New System.Drawing.Point(257, 25)
        Me.Btn_Stangby.Name = "Btn_Stangby"
        Me.Btn_Stangby.Size = New System.Drawing.Size(98, 37)
        Me.Btn_Stangby.TabIndex = 9
        Me.Btn_Stangby.Text = "Waiting for standby"
        Me.Btn_Stangby.UseVisualStyleBackColor = True
        '
        'txtbusy
        '
        Me.txtbusy.Enabled = False
        Me.txtbusy.Location = New System.Drawing.Point(12, 38)
        Me.txtbusy.Name = "txtbusy"
        Me.txtbusy.Size = New System.Drawing.Size(60, 20)
        Me.txtbusy.TabIndex = 7
        '
        'Btn_Busy
        '
        Me.Btn_Busy.Location = New System.Drawing.Point(78, 26)
        Me.Btn_Busy.Name = "Btn_Busy"
        Me.Btn_Busy.Size = New System.Drawing.Size(80, 35)
        Me.Btn_Busy.TabIndex = 8
        Me.Btn_Busy.Text = "Busy status"
        Me.Btn_Busy.UseVisualStyleBackColor = True
        '
        'GroupBox8
        '
        Me.GroupBox8.Controls.Add(Me.BtnShutter_Status)
        Me.GroupBox8.Controls.Add(Me.txtshutter_su)
        Me.GroupBox8.Controls.Add(Me.txtcoh)
        Me.GroupBox8.Controls.Add(Me.BtnCoh_Status)
        Me.GroupBox8.Controls.Add(Me.Btnmonitor_mW)
        Me.GroupBox8.Controls.Add(Me.txtradmoni_mw)
        Me.GroupBox8.Controls.Add(Me.Btnmonitor_dBm)
        Me.GroupBox8.Controls.Add(Me.txtreadmoni)
        Me.GroupBox8.Controls.Add(Me.txtreadmw)
        Me.GroupBox8.Controls.Add(Me.BtnPower_mW)
        Me.GroupBox8.Controls.Add(Me.BtnPower_dBm)
        Me.GroupBox8.Controls.Add(Me.txtreadpow)
        Me.GroupBox8.Controls.Add(Me.BtnAtt_value)
        Me.GroupBox8.Controls.Add(Me.txtreadatt)
        Me.GroupBox8.Controls.Add(Me.txtunit)
        Me.GroupBox8.Controls.Add(Me.BtnUnit)
        Me.GroupBox8.Controls.Add(Me.BtnPower_mode)
        Me.GroupBox8.Controls.Add(Me.txtpms)
        Me.GroupBox8.Controls.Add(Me.Btn_GetLD)
        Me.GroupBox8.Controls.Add(Me.txtlds)
        Me.GroupBox8.Location = New System.Drawing.Point(351, 9)
        Me.GroupBox8.Name = "GroupBox8"
        Me.GroupBox8.Size = New System.Drawing.Size(338, 191)
        Me.GroupBox8.TabIndex = 3
        Me.GroupBox8.TabStop = False
        Me.GroupBox8.Text = "Power status"
        '
        'BtnShutter_Status
        '
        Me.BtnShutter_Status.Location = New System.Drawing.Point(80, 111)
        Me.BtnShutter_Status.Name = "BtnShutter_Status"
        Me.BtnShutter_Status.Size = New System.Drawing.Size(82, 36)
        Me.BtnShutter_Status.TabIndex = 22
        Me.BtnShutter_Status.Text = "Shutter status"
        Me.BtnShutter_Status.UseVisualStyleBackColor = True
        '
        'txtshutter_su
        '
        Me.txtshutter_su.Enabled = False
        Me.txtshutter_su.Location = New System.Drawing.Point(14, 120)
        Me.txtshutter_su.Name = "txtshutter_su"
        Me.txtshutter_su.Size = New System.Drawing.Size(60, 20)
        Me.txtshutter_su.TabIndex = 21
        '
        'txtcoh
        '
        Me.txtcoh.Enabled = False
        Me.txtcoh.Location = New System.Drawing.Point(14, 83)
        Me.txtcoh.Name = "txtcoh"
        Me.txtcoh.Size = New System.Drawing.Size(60, 20)
        Me.txtcoh.TabIndex = 20
        '
        'BtnCoh_Status
        '
        Me.BtnCoh_Status.Location = New System.Drawing.Point(79, 83)
        Me.BtnCoh_Status.Name = "BtnCoh_Status"
        Me.BtnCoh_Status.Size = New System.Drawing.Size(84, 22)
        Me.BtnCoh_Status.TabIndex = 19
        Me.BtnCoh_Status.Text = "Coh status"
        Me.BtnCoh_Status.UseVisualStyleBackColor = True
        '
        'Btnmonitor_mW
        '
        Me.Btnmonitor_mW.Location = New System.Drawing.Point(240, 153)
        Me.Btnmonitor_mW.Name = "Btnmonitor_mW"
        Me.Btnmonitor_mW.Size = New System.Drawing.Size(87, 21)
        Me.Btnmonitor_mW.TabIndex = 18
        Me.Btnmonitor_mW.Text = "monitor (mW)"
        Me.Btnmonitor_mW.UseVisualStyleBackColor = True
        '
        'txtradmoni_mw
        '
        Me.txtradmoni_mw.Enabled = False
        Me.txtradmoni_mw.Location = New System.Drawing.Point(173, 154)
        Me.txtradmoni_mw.Name = "txtradmoni_mw"
        Me.txtradmoni_mw.Size = New System.Drawing.Size(60, 20)
        Me.txtradmoni_mw.TabIndex = 17
        '
        'Btnmonitor_dBm
        '
        Me.Btnmonitor_dBm.Location = New System.Drawing.Point(240, 120)
        Me.Btnmonitor_dBm.Name = "Btnmonitor_dBm"
        Me.Btnmonitor_dBm.Size = New System.Drawing.Size(87, 21)
        Me.Btnmonitor_dBm.TabIndex = 16
        Me.Btnmonitor_dBm.Text = "monitor (dBm)"
        Me.Btnmonitor_dBm.UseVisualStyleBackColor = True
        '
        'txtreadmoni
        '
        Me.txtreadmoni.Enabled = False
        Me.txtreadmoni.Location = New System.Drawing.Point(173, 120)
        Me.txtreadmoni.Name = "txtreadmoni"
        Me.txtreadmoni.Size = New System.Drawing.Size(60, 20)
        Me.txtreadmoni.TabIndex = 15
        '
        'txtreadmw
        '
        Me.txtreadmw.Enabled = False
        Me.txtreadmw.Location = New System.Drawing.Point(173, 88)
        Me.txtreadmw.Name = "txtreadmw"
        Me.txtreadmw.Size = New System.Drawing.Size(60, 20)
        Me.txtreadmw.TabIndex = 14
        '
        'BtnPower_mW
        '
        Me.BtnPower_mW.Location = New System.Drawing.Point(239, 88)
        Me.BtnPower_mW.Name = "BtnPower_mW"
        Me.BtnPower_mW.Size = New System.Drawing.Size(88, 21)
        Me.BtnPower_mW.TabIndex = 13
        Me.BtnPower_mW.Text = "Power (mW)"
        Me.BtnPower_mW.UseVisualStyleBackColor = True
        '
        'BtnPower_dBm
        '
        Me.BtnPower_dBm.Location = New System.Drawing.Point(239, 59)
        Me.BtnPower_dBm.Name = "BtnPower_dBm"
        Me.BtnPower_dBm.Size = New System.Drawing.Size(88, 21)
        Me.BtnPower_dBm.TabIndex = 12
        Me.BtnPower_dBm.Text = "Power (dBm)"
        Me.BtnPower_dBm.UseVisualStyleBackColor = True
        '
        'txtreadpow
        '
        Me.txtreadpow.Enabled = False
        Me.txtreadpow.Location = New System.Drawing.Point(173, 59)
        Me.txtreadpow.Name = "txtreadpow"
        Me.txtreadpow.Size = New System.Drawing.Size(60, 20)
        Me.txtreadpow.TabIndex = 11
        '
        'BtnAtt_value
        '
        Me.BtnAtt_value.Location = New System.Drawing.Point(239, 30)
        Me.BtnAtt_value.Name = "BtnAtt_value"
        Me.BtnAtt_value.Size = New System.Drawing.Size(88, 22)
        Me.BtnAtt_value.TabIndex = 10
        Me.BtnAtt_value.Text = "Att value"
        Me.BtnAtt_value.UseVisualStyleBackColor = True
        '
        'txtreadatt
        '
        Me.txtreadatt.Enabled = False
        Me.txtreadatt.Location = New System.Drawing.Point(173, 30)
        Me.txtreadatt.Name = "txtreadatt"
        Me.txtreadatt.Size = New System.Drawing.Size(60, 20)
        Me.txtreadatt.TabIndex = 9
        '
        'txtunit
        '
        Me.txtunit.Enabled = False
        Me.txtunit.Location = New System.Drawing.Point(14, 153)
        Me.txtunit.Name = "txtunit"
        Me.txtunit.Size = New System.Drawing.Size(60, 20)
        Me.txtunit.TabIndex = 6
        '
        'BtnUnit
        '
        Me.BtnUnit.Location = New System.Drawing.Point(80, 153)
        Me.BtnUnit.Name = "BtnUnit"
        Me.BtnUnit.Size = New System.Drawing.Size(82, 22)
        Me.BtnUnit.TabIndex = 5
        Me.BtnUnit.Text = "Unit"
        Me.BtnUnit.UseVisualStyleBackColor = True
        '
        'BtnPower_mode
        '
        Me.BtnPower_mode.Location = New System.Drawing.Point(80, 57)
        Me.BtnPower_mode.Name = "BtnPower_mode"
        Me.BtnPower_mode.Size = New System.Drawing.Size(83, 22)
        Me.BtnPower_mode.TabIndex = 3
        Me.BtnPower_mode.Text = "Power mode"
        Me.BtnPower_mode.UseVisualStyleBackColor = True
        '
        'txtpms
        '
        Me.txtpms.Enabled = False
        Me.txtpms.Location = New System.Drawing.Point(14, 57)
        Me.txtpms.Name = "txtpms"
        Me.txtpms.Size = New System.Drawing.Size(60, 20)
        Me.txtpms.TabIndex = 2
        '
        'Btn_GetLD
        '
        Me.Btn_GetLD.Location = New System.Drawing.Point(80, 29)
        Me.Btn_GetLD.Name = "Btn_GetLD"
        Me.Btn_GetLD.Size = New System.Drawing.Size(82, 22)
        Me.Btn_GetLD.TabIndex = 1
        Me.Btn_GetLD.Text = "LD status"
        Me.Btn_GetLD.UseVisualStyleBackColor = True
        '
        'txtlds
        '
        Me.txtlds.Enabled = False
        Me.txtlds.Location = New System.Drawing.Point(14, 29)
        Me.txtlds.Name = "txtlds"
        Me.txtlds.Size = New System.Drawing.Size(60, 20)
        Me.txtlds.TabIndex = 0
        '
        'GroupBox7
        '
        Me.GroupBox7.Controls.Add(Me.BtnShutter_Close)
        Me.GroupBox7.Controls.Add(Me.BtnShutter_Open)
        Me.GroupBox7.Controls.Add(Me.Label7)
        Me.GroupBox7.Controls.Add(Me.Btn_SetmW)
        Me.GroupBox7.Controls.Add(Me.txtpow)
        Me.GroupBox7.Controls.Add(Me.Label6)
        Me.GroupBox7.Controls.Add(Me.Btn_SetdBm)
        Me.GroupBox7.Controls.Add(Me.Btn_SetATT)
        Me.GroupBox7.Controls.Add(Me.txtatt)
        Me.GroupBox7.Controls.Add(Me.BtnmW)
        Me.GroupBox7.Controls.Add(Me.BtndBm)
        Me.GroupBox7.Controls.Add(Me.BtnACC)
        Me.GroupBox7.Controls.Add(Me.BtnAPC)
        Me.GroupBox7.Controls.Add(Me.BtnCoh_OFF)
        Me.GroupBox7.Controls.Add(Me.BtnCoh_ON)
        Me.GroupBox7.Controls.Add(Me.BtnLD_OFF)
        Me.GroupBox7.Controls.Add(Me.BtnLD_ON)
        Me.GroupBox7.Location = New System.Drawing.Point(7, 6)
        Me.GroupBox7.Name = "GroupBox7"
        Me.GroupBox7.Size = New System.Drawing.Size(338, 191)
        Me.GroupBox7.TabIndex = 2
        Me.GroupBox7.TabStop = False
        Me.GroupBox7.Text = "Power Control"
        '
        'BtnShutter_Close
        '
        Me.BtnShutter_Close.Location = New System.Drawing.Point(144, 47)
        Me.BtnShutter_Close.Name = "BtnShutter_Close"
        Me.BtnShutter_Close.Size = New System.Drawing.Size(88, 27)
        Me.BtnShutter_Close.TabIndex = 26
        Me.BtnShutter_Close.Text = "Shutter Close"
        Me.BtnShutter_Close.UseVisualStyleBackColor = True
        '
        'BtnShutter_Open
        '
        Me.BtnShutter_Open.Location = New System.Drawing.Point(144, 20)
        Me.BtnShutter_Open.Name = "BtnShutter_Open"
        Me.BtnShutter_Open.Size = New System.Drawing.Size(88, 27)
        Me.BtnShutter_Open.TabIndex = 25
        Me.BtnShutter_Open.Text = "Shutter Open"
        Me.BtnShutter_Open.UseVisualStyleBackColor = True
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Location = New System.Drawing.Point(11, 128)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(73, 13)
        Me.Label7.TabIndex = 24
        Me.Label7.Text = "Setting Power"
        '
        'Btn_SetmW
        '
        Me.Btn_SetmW.Location = New System.Drawing.Point(227, 142)
        Me.Btn_SetmW.Name = "Btn_SetmW"
        Me.Btn_SetmW.Size = New System.Drawing.Size(100, 25)
        Me.Btn_SetmW.TabIndex = 23
        Me.Btn_SetmW.Text = "Set Power(mW)"
        Me.Btn_SetmW.UseVisualStyleBackColor = True
        '
        'txtpow
        '
        Me.txtpow.Location = New System.Drawing.Point(15, 144)
        Me.txtpow.Name = "txtpow"
        Me.txtpow.Size = New System.Drawing.Size(104, 20)
        Me.txtpow.TabIndex = 22
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Location = New System.Drawing.Point(15, 88)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(64, 13)
        Me.Label6.TabIndex = 21
        Me.Label6.Text = "Setting ATT"
        '
        'Btn_SetdBm
        '
        Me.Btn_SetdBm.Location = New System.Drawing.Point(125, 142)
        Me.Btn_SetdBm.Name = "Btn_SetdBm"
        Me.Btn_SetdBm.Size = New System.Drawing.Size(96, 25)
        Me.Btn_SetdBm.TabIndex = 10
        Me.Btn_SetdBm.Text = "Set Power(dBm)"
        Me.Btn_SetdBm.UseVisualStyleBackColor = True
        '
        'Btn_SetATT
        '
        Me.Btn_SetATT.Location = New System.Drawing.Point(125, 101)
        Me.Btn_SetATT.Name = "Btn_SetATT"
        Me.Btn_SetATT.Size = New System.Drawing.Size(96, 27)
        Me.Btn_SetATT.TabIndex = 9
        Me.Btn_SetATT.Text = "Set ATT"
        Me.Btn_SetATT.UseVisualStyleBackColor = True
        '
        'txtatt
        '
        Me.txtatt.Location = New System.Drawing.Point(13, 104)
        Me.txtatt.Name = "txtatt"
        Me.txtatt.Size = New System.Drawing.Size(106, 20)
        Me.txtatt.TabIndex = 8
        '
        'BtnmW
        '
        Me.BtnmW.Location = New System.Drawing.Point(284, 47)
        Me.BtnmW.Name = "BtnmW"
        Me.BtnmW.Size = New System.Drawing.Size(46, 27)
        Me.BtnmW.TabIndex = 7
        Me.BtnmW.Text = "mW"
        Me.BtnmW.UseVisualStyleBackColor = True
        '
        'BtndBm
        '
        Me.BtndBm.Location = New System.Drawing.Point(284, 20)
        Me.BtndBm.Name = "BtndBm"
        Me.BtndBm.Size = New System.Drawing.Size(46, 27)
        Me.BtndBm.TabIndex = 6
        Me.BtndBm.Text = "dBm"
        Me.BtndBm.UseVisualStyleBackColor = True
        '
        'BtnACC
        '
        Me.BtnACC.Location = New System.Drawing.Point(235, 47)
        Me.BtnACC.Name = "BtnACC"
        Me.BtnACC.Size = New System.Drawing.Size(46, 27)
        Me.BtnACC.TabIndex = 5
        Me.BtnACC.Text = "ACC"
        Me.BtnACC.UseVisualStyleBackColor = True
        '
        'BtnAPC
        '
        Me.BtnAPC.Location = New System.Drawing.Point(235, 20)
        Me.BtnAPC.Name = "BtnAPC"
        Me.BtnAPC.Size = New System.Drawing.Size(46, 27)
        Me.BtnAPC.TabIndex = 4
        Me.BtnAPC.Text = "APC "
        Me.BtnAPC.UseVisualStyleBackColor = True
        '
        'BtnCoh_OFF
        '
        Me.BtnCoh_OFF.Location = New System.Drawing.Point(79, 47)
        Me.BtnCoh_OFF.Name = "BtnCoh_OFF"
        Me.BtnCoh_OFF.Size = New System.Drawing.Size(62, 27)
        Me.BtnCoh_OFF.TabIndex = 3
        Me.BtnCoh_OFF.Text = "Coh OFF"
        Me.BtnCoh_OFF.UseVisualStyleBackColor = True
        '
        'BtnCoh_ON
        '
        Me.BtnCoh_ON.Location = New System.Drawing.Point(79, 20)
        Me.BtnCoh_ON.Name = "BtnCoh_ON"
        Me.BtnCoh_ON.Size = New System.Drawing.Size(62, 27)
        Me.BtnCoh_ON.TabIndex = 2
        Me.BtnCoh_ON.Text = "Coh ON"
        Me.BtnCoh_ON.UseVisualStyleBackColor = True
        '
        'BtnLD_OFF
        '
        Me.BtnLD_OFF.Location = New System.Drawing.Point(13, 47)
        Me.BtnLD_OFF.Name = "BtnLD_OFF"
        Me.BtnLD_OFF.Size = New System.Drawing.Size(62, 27)
        Me.BtnLD_OFF.TabIndex = 1
        Me.BtnLD_OFF.Text = "LD OFF"
        Me.BtnLD_OFF.UseVisualStyleBackColor = True
        '
        'BtnLD_ON
        '
        Me.BtnLD_ON.Location = New System.Drawing.Point(13, 19)
        Me.BtnLD_ON.Name = "BtnLD_ON"
        Me.BtnLD_ON.Size = New System.Drawing.Size(62, 27)
        Me.BtnLD_ON.TabIndex = 0
        Me.BtnLD_ON.Text = "LD ON"
        Me.BtnLD_ON.UseVisualStyleBackColor = True
        '
        'cmbsm
        '
        Me.cmbsm.AutoCompleteCustomSource.AddRange(New String() {"Step Oneway", "Continuous One way", "Step Round trip", "Continuous Round trip"})
        Me.cmbsm.FormattingEnabled = True
        Me.cmbsm.Items.AddRange(New Object() {"Step one way", "Continuous one way", "Step round trip", "Continuous round trip"})
        Me.cmbsm.Location = New System.Drawing.Point(18, 36)
        Me.cmbsm.Name = "cmbsm"
        Me.cmbsm.Size = New System.Drawing.Size(116, 21)
        Me.cmbsm.TabIndex = 3
        '
        'Label16
        '
        Me.Label16.AutoSize = True
        Me.Label16.Location = New System.Drawing.Point(16, 20)
        Me.Label16.Name = "Label16"
        Me.Label16.Size = New System.Drawing.Size(70, 13)
        Me.Label16.TabIndex = 4
        Me.Label16.Text = "Sweep Mode"
        '
        'txtminstep
        '
        Me.txtminstep.Location = New System.Drawing.Point(22, 172)
        Me.txtminstep.Name = "txtminstep"
        Me.txtminstep.Size = New System.Drawing.Size(109, 20)
        Me.txtminstep.TabIndex = 28
        Me.txtminstep.Text = "0.01"
        '
        'Btn_Minstep
        '
        Me.Btn_Minstep.Location = New System.Drawing.Point(137, 164)
        Me.Btn_Minstep.Name = "Btn_Minstep"
        Me.Btn_Minstep.Size = New System.Drawing.Size(101, 34)
        Me.Btn_Minstep.TabIndex = 27
        Me.Btn_Minstep.Text = "Cal min step of speed"
        Me.Btn_Minstep.UseVisualStyleBackColor = True
        '
        'Label35
        '
        Me.Label35.AutoSize = True
        Me.Label35.Location = New System.Drawing.Point(19, 23)
        Me.Label35.Name = "Label35"
        Me.Label35.Size = New System.Drawing.Size(35, 13)
        Me.Label35.TabIndex = 20
        Me.Label35.Text = "status"
        '
        'Btn_Start
        '
        Me.Btn_Start.Location = New System.Drawing.Point(22, 305)
        Me.Btn_Start.Name = "Btn_Start"
        Me.Btn_Start.Size = New System.Drawing.Size(109, 31)
        Me.Btn_Start.TabIndex = 10
        Me.Btn_Start.Text = "Start"
        Me.Btn_Start.UseVisualStyleBackColor = True
        '
        'txtsw_wait
        '
        Me.txtsw_wait.Location = New System.Drawing.Point(137, 42)
        Me.txtsw_wait.Name = "txtsw_wait"
        Me.txtsw_wait.Size = New System.Drawing.Size(101, 20)
        Me.txtsw_wait.TabIndex = 16
        '
        'Btn_Pause
        '
        Me.Btn_Pause.Location = New System.Drawing.Point(139, 348)
        Me.Btn_Pause.Name = "Btn_Pause"
        Me.Btn_Pause.Size = New System.Drawing.Size(101, 31)
        Me.Btn_Pause.TabIndex = 11
        Me.Btn_Pause.Text = "Pause"
        Me.Btn_Pause.UseVisualStyleBackColor = True
        '
        'Btn_Waiting
        '
        Me.Btn_Waiting.Location = New System.Drawing.Point(22, 72)
        Me.Btn_Waiting.Name = "Btn_Waiting"
        Me.Btn_Waiting.Size = New System.Drawing.Size(216, 31)
        Me.Btn_Waiting.TabIndex = 18
        Me.Btn_Waiting.Text = "Waiting for status"
        Me.Btn_Waiting.UseVisualStyleBackColor = True
        '
        'cmbsweep_su
        '
        Me.cmbsweep_su.AutoCompleteCustomSource.AddRange(New String() {"Step Oneway", "Continuous One way", "Step Round trip", "Continuous Round trip"})
        Me.cmbsweep_su.FormattingEnabled = True
        Me.cmbsweep_su.Items.AddRange(New Object() {"Standby", "Running", "Pauseing", "WaitingforTrigger", "Returning"})
        Me.cmbsweep_su.Location = New System.Drawing.Point(22, 41)
        Me.cmbsweep_su.Name = "cmbsweep_su"
        Me.cmbsweep_su.Size = New System.Drawing.Size(109, 21)
        Me.cmbsweep_su.TabIndex = 19
        '
        'Btn_Stop
        '
        Me.Btn_Stop.Location = New System.Drawing.Point(139, 305)
        Me.Btn_Stop.Name = "Btn_Stop"
        Me.Btn_Stop.Size = New System.Drawing.Size(99, 31)
        Me.Btn_Stop.TabIndex = 12
        Me.Btn_Stop.Text = "Stop"
        Me.Btn_Stop.UseVisualStyleBackColor = True
        '
        'Label36
        '
        Me.Label36.AutoSize = True
        Me.Label36.Location = New System.Drawing.Point(134, 25)
        Me.Label36.Name = "Label36"
        Me.Label36.Size = New System.Drawing.Size(82, 13)
        Me.Label36.TabIndex = 21
        Me.Label36.Text = "Wait time(msec)"
        '
        'txtcurrentc
        '
        Me.txtcurrentc.Location = New System.Drawing.Point(22, 219)
        Me.txtcurrentc.Name = "txtcurrentc"
        Me.txtcurrentc.Size = New System.Drawing.Size(109, 20)
        Me.txtcurrentc.TabIndex = 25
        '
        'Btn_SoftwareTrigger
        '
        Me.Btn_SoftwareTrigger.Location = New System.Drawing.Point(22, 348)
        Me.Btn_SoftwareTrigger.Name = "Btn_SoftwareTrigger"
        Me.Btn_SoftwareTrigger.Size = New System.Drawing.Size(109, 31)
        Me.Btn_SoftwareTrigger.TabIndex = 23
        Me.Btn_SoftwareTrigger.Text = "Software Trigger"
        Me.Btn_SoftwareTrigger.UseVisualStyleBackColor = True
        '
        'Btn_Current
        '
        Me.Btn_Current.Location = New System.Drawing.Point(137, 212)
        Me.Btn_Current.Name = "Btn_Current"
        Me.Btn_Current.Size = New System.Drawing.Size(101, 33)
        Me.Btn_Current.TabIndex = 24
        Me.Btn_Current.Text = "Get Current cycle"
        Me.Btn_Current.UseVisualStyleBackColor = True
        '
        'Btn_ReStart
        '
        Me.Btn_ReStart.Location = New System.Drawing.Point(22, 395)
        Me.Btn_ReStart.Name = "Btn_ReStart"
        Me.Btn_ReStart.Size = New System.Drawing.Size(109, 31)
        Me.Btn_ReStart.TabIndex = 13
        Me.Btn_ReStart.Text = "ReStart"
        Me.Btn_ReStart.UseVisualStyleBackColor = True
        '
        'Btn_GetLogg
        '
        Me.Btn_GetLogg.Location = New System.Drawing.Point(139, 395)
        Me.Btn_GetLogg.Name = "Btn_GetLogg"
        Me.Btn_GetLogg.Size = New System.Drawing.Size(101, 31)
        Me.Btn_GetLogg.TabIndex = 22
        Me.Btn_GetLogg.Text = "Get Logg"
        Me.Btn_GetLogg.UseVisualStyleBackColor = True
        '
        'Btn_Status
        '
        Me.Btn_Status.Location = New System.Drawing.Point(137, 120)
        Me.Btn_Status.Name = "Btn_Status"
        Me.Btn_Status.Size = New System.Drawing.Size(101, 31)
        Me.Btn_Status.TabIndex = 17
        Me.Btn_Status.Text = "Get Sweep Status"
        Me.Btn_Status.UseVisualStyleBackColor = True
        '
        'txtg_sweep_su
        '
        Me.txtg_sweep_su.Location = New System.Drawing.Point(22, 126)
        Me.txtg_sweep_su.Name = "txtg_sweep_su"
        Me.txtg_sweep_su.Size = New System.Drawing.Size(109, 20)
        Me.txtg_sweep_su.TabIndex = 14
        '
        'GroupBox13
        '
        Me.GroupBox13.Controls.Add(Me.Label79)
        Me.GroupBox13.Controls.Add(Me.BtnGet_setting)
        Me.GroupBox13.Controls.Add(Me.txtTrigger_Source)
        Me.GroupBox13.Controls.Add(Me.Label13)
        Me.GroupBox13.Controls.Add(Me.Label11)
        Me.GroupBox13.Controls.Add(Me.Label9)
        Me.GroupBox13.Controls.Add(Me.txtg_cycle)
        Me.GroupBox13.Controls.Add(Me.txtg_delay)
        Me.GroupBox13.Controls.Add(Me.txtg_speed)
        Me.GroupBox13.Controls.Add(Me.Label34)
        Me.GroupBox13.Controls.Add(Me.txtg_triggerstep)
        Me.GroupBox13.Controls.Add(Me.Label33)
        Me.GroupBox13.Controls.Add(Me.txtg_wavestep)
        Me.GroupBox13.Controls.Add(Me.Label29)
        Me.GroupBox13.Controls.Add(Me.Label28)
        Me.GroupBox13.Controls.Add(Me.txtg_stopwave)
        Me.GroupBox13.Controls.Add(Me.Label27)
        Me.GroupBox13.Controls.Add(Me.txtg_startmode)
        Me.GroupBox13.Controls.Add(Me.Label26)
        Me.GroupBox13.Controls.Add(Me.txtg_tri_out)
        Me.GroupBox13.Controls.Add(Me.txtg_startwave)
        Me.GroupBox13.Controls.Add(Me.txtg_tr_inp)
        Me.GroupBox13.Controls.Add(Me.Label24)
        Me.GroupBox13.Controls.Add(Me.Label23)
        Me.GroupBox13.Controls.Add(Me.txtg_smod)
        Me.GroupBox13.Location = New System.Drawing.Point(16, 310)
        Me.GroupBox13.Name = "GroupBox13"
        Me.GroupBox13.Size = New System.Drawing.Size(434, 184)
        Me.GroupBox13.TabIndex = 6
        Me.GroupBox13.TabStop = False
        Me.GroupBox13.Text = "Sweep setting status"
        '
        'Label79
        '
        Me.Label79.AutoSize = True
        Me.Label79.Location = New System.Drawing.Point(329, 106)
        Me.Label79.Name = "Label79"
        Me.Label79.Size = New System.Drawing.Size(77, 13)
        Me.Label79.TabIndex = 31
        Me.Label79.Text = "Trigger Source"
        '
        'BtnGet_setting
        '
        Me.BtnGet_setting.Location = New System.Drawing.Point(332, 149)
        Me.BtnGet_setting.Name = "BtnGet_setting"
        Me.BtnGet_setting.Size = New System.Drawing.Size(97, 31)
        Me.BtnGet_setting.TabIndex = 29
        Me.BtnGet_setting.Text = "Get"
        Me.BtnGet_setting.UseVisualStyleBackColor = True
        '
        'txtTrigger_Source
        '
        Me.txtTrigger_Source.Enabled = False
        Me.txtTrigger_Source.Location = New System.Drawing.Point(331, 122)
        Me.txtTrigger_Source.Name = "txtTrigger_Source"
        Me.txtTrigger_Source.Size = New System.Drawing.Size(97, 20)
        Me.txtTrigger_Source.TabIndex = 30
        '
        'Label13
        '
        Me.Label13.AutoSize = True
        Me.Label13.Location = New System.Drawing.Point(241, 109)
        Me.Label13.Name = "Label13"
        Me.Label13.Size = New System.Drawing.Size(32, 13)
        Me.Label13.TabIndex = 28
        Me.Label13.Text = "cycle"
        '
        'Label11
        '
        Me.Label11.AutoSize = True
        Me.Label11.Location = New System.Drawing.Point(129, 106)
        Me.Label11.Name = "Label11"
        Me.Label11.Size = New System.Drawing.Size(87, 13)
        Me.Label11.TabIndex = 27
        Me.Label11.Text = "Delay time(msec)"
        '
        'Label9
        '
        Me.Label9.AutoSize = True
        Me.Label9.Location = New System.Drawing.Point(13, 106)
        Me.Label9.Name = "Label9"
        Me.Label9.Size = New System.Drawing.Size(80, 13)
        Me.Label9.TabIndex = 24
        Me.Label9.Text = "Speed(nm/sec)"
        '
        'txtg_cycle
        '
        Me.txtg_cycle.Enabled = False
        Me.txtg_cycle.Location = New System.Drawing.Point(237, 122)
        Me.txtg_cycle.Name = "txtg_cycle"
        Me.txtg_cycle.Size = New System.Drawing.Size(76, 20)
        Me.txtg_cycle.TabIndex = 23
        '
        'txtg_delay
        '
        Me.txtg_delay.Enabled = False
        Me.txtg_delay.Location = New System.Drawing.Point(131, 122)
        Me.txtg_delay.Name = "txtg_delay"
        Me.txtg_delay.Size = New System.Drawing.Size(92, 20)
        Me.txtg_delay.TabIndex = 22
        '
        'txtg_speed
        '
        Me.txtg_speed.Enabled = False
        Me.txtg_speed.Location = New System.Drawing.Point(9, 122)
        Me.txtg_speed.Name = "txtg_speed"
        Me.txtg_speed.Size = New System.Drawing.Size(100, 20)
        Me.txtg_speed.TabIndex = 21
        '
        'Label34
        '
        Me.Label34.AutoSize = True
        Me.Label34.Location = New System.Drawing.Point(329, 68)
        Me.Label34.Name = "Label34"
        Me.Label34.Size = New System.Drawing.Size(63, 13)
        Me.Label34.TabIndex = 20
        Me.Label34.Text = "Trigger step"
        '
        'txtg_triggerstep
        '
        Me.txtg_triggerstep.Enabled = False
        Me.txtg_triggerstep.Location = New System.Drawing.Point(331, 82)
        Me.txtg_triggerstep.Name = "txtg_triggerstep"
        Me.txtg_triggerstep.Size = New System.Drawing.Size(97, 20)
        Me.txtg_triggerstep.TabIndex = 19
        '
        'Label33
        '
        Me.Label33.AutoSize = True
        Me.Label33.Location = New System.Drawing.Point(235, 68)
        Me.Label33.Name = "Label33"
        Me.Label33.Size = New System.Drawing.Size(88, 13)
        Me.Label33.TabIndex = 18
        Me.Label33.Text = "Wavelength step"
        '
        'txtg_wavestep
        '
        Me.txtg_wavestep.Enabled = False
        Me.txtg_wavestep.Location = New System.Drawing.Point(236, 82)
        Me.txtg_wavestep.Name = "txtg_wavestep"
        Me.txtg_wavestep.Size = New System.Drawing.Size(77, 20)
        Me.txtg_wavestep.TabIndex = 17
        '
        'Label29
        '
        Me.Label29.AutoSize = True
        Me.Label29.Location = New System.Drawing.Point(128, 68)
        Me.Label29.Name = "Label29"
        Me.Label29.Size = New System.Drawing.Size(87, 13)
        Me.Label29.TabIndex = 15
        Me.Label29.Text = "Stop wavelength"
        '
        'Label28
        '
        Me.Label28.AutoSize = True
        Me.Label28.Location = New System.Drawing.Point(10, 66)
        Me.Label28.Name = "Label28"
        Me.Label28.Size = New System.Drawing.Size(87, 13)
        Me.Label28.TabIndex = 14
        Me.Label28.Text = "Start wavelength"
        '
        'txtg_stopwave
        '
        Me.txtg_stopwave.Enabled = False
        Me.txtg_stopwave.Location = New System.Drawing.Point(130, 82)
        Me.txtg_stopwave.Name = "txtg_stopwave"
        Me.txtg_stopwave.Size = New System.Drawing.Size(92, 20)
        Me.txtg_stopwave.TabIndex = 13
        '
        'Label27
        '
        Me.Label27.AutoSize = True
        Me.Label27.Location = New System.Drawing.Point(329, 28)
        Me.Label27.Name = "Label27"
        Me.Label27.Size = New System.Drawing.Size(58, 13)
        Me.Label27.TabIndex = 12
        Me.Label27.Text = "Start mode"
        '
        'txtg_startmode
        '
        Me.txtg_startmode.Enabled = False
        Me.txtg_startmode.Location = New System.Drawing.Point(331, 41)
        Me.txtg_startmode.Name = "txtg_startmode"
        Me.txtg_startmode.Size = New System.Drawing.Size(97, 20)
        Me.txtg_startmode.TabIndex = 11
        '
        'Label26
        '
        Me.Label26.AutoSize = True
        Me.Label26.Location = New System.Drawing.Point(235, 26)
        Me.Label26.Name = "Label26"
        Me.Label26.Size = New System.Drawing.Size(73, 13)
        Me.Label26.TabIndex = 10
        Me.Label26.Text = "Trigger output"
        '
        'txtg_tri_out
        '
        Me.txtg_tri_out.Enabled = False
        Me.txtg_tri_out.Location = New System.Drawing.Point(236, 42)
        Me.txtg_tri_out.Name = "txtg_tri_out"
        Me.txtg_tri_out.Size = New System.Drawing.Size(77, 20)
        Me.txtg_tri_out.TabIndex = 9
        '
        'txtg_startwave
        '
        Me.txtg_startwave.Enabled = False
        Me.txtg_startwave.Location = New System.Drawing.Point(9, 82)
        Me.txtg_startwave.Name = "txtg_startwave"
        Me.txtg_startwave.Size = New System.Drawing.Size(100, 20)
        Me.txtg_startwave.TabIndex = 8
        '
        'txtg_tr_inp
        '
        Me.txtg_tr_inp.Enabled = False
        Me.txtg_tr_inp.Location = New System.Drawing.Point(130, 41)
        Me.txtg_tr_inp.Name = "txtg_tr_inp"
        Me.txtg_tr_inp.Size = New System.Drawing.Size(93, 20)
        Me.txtg_tr_inp.TabIndex = 7
        '
        'Label24
        '
        Me.Label24.AutoSize = True
        Me.Label24.Location = New System.Drawing.Point(128, 25)
        Me.Label24.Name = "Label24"
        Me.Label24.Size = New System.Drawing.Size(69, 13)
        Me.Label24.TabIndex = 6
        Me.Label24.Text = "Trigger input "
        '
        'Label23
        '
        Me.Label23.AutoSize = True
        Me.Label23.Location = New System.Drawing.Point(7, 26)
        Me.Label23.Name = "Label23"
        Me.Label23.Size = New System.Drawing.Size(70, 13)
        Me.Label23.TabIndex = 5
        Me.Label23.Text = "Sweep Mode"
        '
        'txtg_smod
        '
        Me.txtg_smod.Enabled = False
        Me.txtg_smod.Location = New System.Drawing.Point(9, 42)
        Me.txtg_smod.Name = "txtg_smod"
        Me.txtg_smod.Size = New System.Drawing.Size(100, 20)
        Me.txtg_smod.TabIndex = 3
        '
        'GroupBox15
        '
        Me.GroupBox15.Controls.Add(Me.cmbTrigger_Source)
        Me.GroupBox15.Controls.Add(Me.Label68)
        Me.GroupBox15.Controls.Add(Me.Btn_Other)
        Me.GroupBox15.Controls.Add(Me.cmbsm)
        Me.GroupBox15.Controls.Add(Me.Label16)
        Me.GroupBox15.Controls.Add(Me.Label32)
        Me.GroupBox15.Controls.Add(Me.cmbtin)
        Me.GroupBox15.Controls.Add(Me.txtdelay)
        Me.GroupBox15.Controls.Add(Me.Label17)
        Me.GroupBox15.Controls.Add(Me.Label31)
        Me.GroupBox15.Controls.Add(Me.cmbtout)
        Me.GroupBox15.Controls.Add(Me.txtcycle)
        Me.GroupBox15.Controls.Add(Me.Label18)
        Me.GroupBox15.Controls.Add(Me.Label30)
        Me.GroupBox15.Controls.Add(Me.cmbst_mod)
        Me.GroupBox15.Controls.Add(Me.txtspeed)
        Me.GroupBox15.Controls.Add(Me.Label25)
        Me.GroupBox15.Location = New System.Drawing.Point(16, 93)
        Me.GroupBox15.Name = "GroupBox15"
        Me.GroupBox15.Size = New System.Drawing.Size(395, 177)
        Me.GroupBox15.TabIndex = 28
        Me.GroupBox15.TabStop = False
        Me.GroupBox15.Text = "Other parameters"
        '
        'cmbTrigger_Source
        '
        Me.cmbTrigger_Source.AutoCompleteCustomSource.AddRange(New String() {"Step Oneway", "Continuous One way", "Step Round trip", "Continuous Round trip"})
        Me.cmbTrigger_Source.FormattingEnabled = True
        Me.cmbTrigger_Source.Items.AddRange(New Object() {"Wavelength", "Time"})
        Me.cmbTrigger_Source.Location = New System.Drawing.Point(283, 82)
        Me.cmbTrigger_Source.Name = "cmbTrigger_Source"
        Me.cmbTrigger_Source.Size = New System.Drawing.Size(105, 21)
        Me.cmbTrigger_Source.TabIndex = 29
        '
        'Label68
        '
        Me.Label68.AutoSize = True
        Me.Label68.Location = New System.Drawing.Point(281, 66)
        Me.Label68.Name = "Label68"
        Me.Label68.Size = New System.Drawing.Size(77, 13)
        Me.Label68.TabIndex = 28
        Me.Label68.Text = "Trigger Source"
        '
        'Btn_Other
        '
        Me.Btn_Other.Location = New System.Drawing.Point(304, 132)
        Me.Btn_Other.Name = "Btn_Other"
        Me.Btn_Other.Size = New System.Drawing.Size(79, 31)
        Me.Btn_Other.TabIndex = 27
        Me.Btn_Other.Text = "Set"
        Me.Btn_Other.UseVisualStyleBackColor = True
        '
        'Label32
        '
        Me.Label32.AutoSize = True
        Me.Label32.Location = New System.Drawing.Point(124, 121)
        Me.Label32.Name = "Label32"
        Me.Label32.Size = New System.Drawing.Size(87, 13)
        Me.Label32.TabIndex = 26
        Me.Label32.Text = "Delay time(msec)"
        '
        'cmbtin
        '
        Me.cmbtin.AutoCompleteCustomSource.AddRange(New String() {"Step Oneway", "Continuous One way", "Step Round trip", "Continuous Round trip"})
        Me.cmbtin.FormattingEnabled = True
        Me.cmbtin.Items.AddRange(New Object() {"Disable", "Enable"})
        Me.cmbtin.Location = New System.Drawing.Point(18, 82)
        Me.cmbtin.Name = "cmbtin"
        Me.cmbtin.Size = New System.Drawing.Size(116, 21)
        Me.cmbtin.TabIndex = 6
        '
        'txtdelay
        '
        Me.txtdelay.Location = New System.Drawing.Point(124, 138)
        Me.txtdelay.Name = "txtdelay"
        Me.txtdelay.Size = New System.Drawing.Size(90, 20)
        Me.txtdelay.TabIndex = 25
        Me.txtdelay.Text = "0"
        '
        'Label17
        '
        Me.Label17.AutoSize = True
        Me.Label17.Location = New System.Drawing.Point(16, 66)
        Me.Label17.Name = "Label17"
        Me.Label17.Size = New System.Drawing.Size(69, 13)
        Me.Label17.TabIndex = 5
        Me.Label17.Text = "Trigger input "
        '
        'Label31
        '
        Me.Label31.AutoSize = True
        Me.Label31.Location = New System.Drawing.Point(235, 121)
        Me.Label31.Name = "Label31"
        Me.Label31.Size = New System.Drawing.Size(32, 13)
        Me.Label31.TabIndex = 24
        Me.Label31.Text = "cycle"
        '
        'cmbtout
        '
        Me.cmbtout.AutoCompleteCustomSource.AddRange(New String() {"Step Oneway", "Continuous One way", "Step Round trip", "Continuous Round trip"})
        Me.cmbtout.FormattingEnabled = True
        Me.cmbtout.Items.AddRange(New Object() {"None", "Stop", "Start", "Step"})
        Me.cmbtout.Location = New System.Drawing.Point(151, 82)
        Me.cmbtout.Name = "cmbtout"
        Me.cmbtout.Size = New System.Drawing.Size(116, 21)
        Me.cmbtout.TabIndex = 7
        '
        'txtcycle
        '
        Me.txtcycle.Location = New System.Drawing.Point(234, 138)
        Me.txtcycle.Name = "txtcycle"
        Me.txtcycle.Size = New System.Drawing.Size(53, 20)
        Me.txtcycle.TabIndex = 23
        Me.txtcycle.Text = "1"
        '
        'Label18
        '
        Me.Label18.AutoSize = True
        Me.Label18.Location = New System.Drawing.Point(155, 66)
        Me.Label18.Name = "Label18"
        Me.Label18.Size = New System.Drawing.Size(73, 13)
        Me.Label18.TabIndex = 8
        Me.Label18.Text = "Trigger output"
        '
        'Label30
        '
        Me.Label30.AutoSize = True
        Me.Label30.Location = New System.Drawing.Point(22, 121)
        Me.Label30.Name = "Label30"
        Me.Label30.Size = New System.Drawing.Size(80, 13)
        Me.Label30.TabIndex = 22
        Me.Label30.Text = "Speed(nm/sec)"
        '
        'cmbst_mod
        '
        Me.cmbst_mod.AutoCompleteCustomSource.AddRange(New String() {"Step Oneway", "Continuous One way", "Step Round trip", "Continuous Round trip"})
        Me.cmbst_mod.FormattingEnabled = True
        Me.cmbst_mod.Items.AddRange(New Object() {"Normal", "Waiting for Trigger"})
        Me.cmbst_mod.Location = New System.Drawing.Point(151, 36)
        Me.cmbst_mod.Name = "cmbst_mod"
        Me.cmbst_mod.Size = New System.Drawing.Size(116, 21)
        Me.cmbst_mod.TabIndex = 19
        '
        'txtspeed
        '
        Me.txtspeed.Location = New System.Drawing.Point(18, 138)
        Me.txtspeed.Name = "txtspeed"
        Me.txtspeed.Size = New System.Drawing.Size(87, 20)
        Me.txtspeed.TabIndex = 21
        Me.txtspeed.Text = "100"
        '
        'Label25
        '
        Me.Label25.AutoSize = True
        Me.Label25.Location = New System.Drawing.Point(149, 20)
        Me.Label25.Name = "Label25"
        Me.Label25.Size = New System.Drawing.Size(58, 13)
        Me.Label25.TabIndex = 20
        Me.Label25.Text = "Start mode"
        '
        'GroupBox14
        '
        Me.GroupBox14.Controls.Add(Me.txtstart)
        Me.GroupBox14.Controls.Add(Me.Label19)
        Me.GroupBox14.Controls.Add(Me.txtstop)
        Me.GroupBox14.Controls.Add(Me.Label20)
        Me.GroupBox14.Controls.Add(Me.txtstep)
        Me.GroupBox14.Controls.Add(Me.Label21)
        Me.GroupBox14.Controls.Add(Me.Btn_SetWavelength)
        Me.GroupBox14.Location = New System.Drawing.Point(16, 19)
        Me.GroupBox14.Name = "GroupBox14"
        Me.GroupBox14.Size = New System.Drawing.Size(395, 68)
        Me.GroupBox14.TabIndex = 27
        Me.GroupBox14.TabStop = False
        Me.GroupBox14.Text = "Wavelength parameters"
        '
        'txtstart
        '
        Me.txtstart.Location = New System.Drawing.Point(8, 35)
        Me.txtstart.Name = "txtstart"
        Me.txtstart.Size = New System.Drawing.Size(89, 20)
        Me.txtstart.TabIndex = 11
        Me.txtstart.Text = "1500"
        '
        'Label19
        '
        Me.Label19.AutoSize = True
        Me.Label19.Location = New System.Drawing.Point(6, 18)
        Me.Label19.Name = "Label19"
        Me.Label19.Size = New System.Drawing.Size(87, 13)
        Me.Label19.TabIndex = 14
        Me.Label19.Text = "Start wavelength"
        '
        'txtstop
        '
        Me.txtstop.Location = New System.Drawing.Point(105, 35)
        Me.txtstop.Name = "txtstop"
        Me.txtstop.Size = New System.Drawing.Size(87, 20)
        Me.txtstop.TabIndex = 12
        Me.txtstop.Text = "1540"
        '
        'Label20
        '
        Me.Label20.AutoSize = True
        Me.Label20.Location = New System.Drawing.Point(103, 18)
        Me.Label20.Name = "Label20"
        Me.Label20.Size = New System.Drawing.Size(87, 13)
        Me.Label20.TabIndex = 15
        Me.Label20.Text = "Stop wavelength"
        '
        'txtstep
        '
        Me.txtstep.Location = New System.Drawing.Point(198, 35)
        Me.txtstep.Name = "txtstep"
        Me.txtstep.Size = New System.Drawing.Size(97, 20)
        Me.txtstep.TabIndex = 13
        Me.txtstep.Text = "0.1"
        '
        'Label21
        '
        Me.Label21.AutoSize = True
        Me.Label21.Location = New System.Drawing.Point(196, 16)
        Me.Label21.Name = "Label21"
        Me.Label21.Size = New System.Drawing.Size(94, 13)
        Me.Label21.TabIndex = 16
        Me.Label21.Text = "Trigger/wave step"
        '
        'Btn_SetWavelength
        '
        Me.Btn_SetWavelength.Location = New System.Drawing.Point(304, 24)
        Me.Btn_SetWavelength.Name = "Btn_SetWavelength"
        Me.Btn_SetWavelength.Size = New System.Drawing.Size(79, 31)
        Me.Btn_SetWavelength.TabIndex = 9
        Me.Btn_SetWavelength.Text = "Set"
        Me.Btn_SetWavelength.UseVisualStyleBackColor = True
        '
        'tabControl1
        '
        Me.tabControl1.Controls.Add(Me.tabPage1)
        Me.tabControl1.Controls.Add(Me.tabPage2)
        Me.tabControl1.Controls.Add(Me.tabPage3)
        Me.tabControl1.Location = New System.Drawing.Point(7, 12)
        Me.tabControl1.Name = "tabControl1"
        Me.tabControl1.SelectedIndex = 0
        Me.tabControl1.Size = New System.Drawing.Size(734, 524)
        Me.tabControl1.TabIndex = 7
        '
        'tabPage1
        '
        Me.tabPage1.Controls.Add(Me.groupBox16)
        Me.tabPage1.Controls.Add(Me.GroupBox17)
        Me.tabPage1.Location = New System.Drawing.Point(4, 22)
        Me.tabPage1.Name = "tabPage1"
        Me.tabPage1.Padding = New System.Windows.Forms.Padding(3)
        Me.tabPage1.Size = New System.Drawing.Size(726, 498)
        Me.tabPage1.TabIndex = 0
        Me.tabPage1.Text = "Communication Setting "
        Me.tabPage1.UseVisualStyleBackColor = True
        '
        'groupBox16
        '
        Me.groupBox16.Controls.Add(Me.label37)
        Me.groupBox16.Controls.Add(Me.txtdev_num)
        Me.groupBox16.Controls.Add(Me.label38)
        Me.groupBox16.Controls.Add(Me.label39)
        Me.groupBox16.Controls.Add(Me.txtaddressnum)
        Me.groupBox16.Controls.Add(Me.txtboad)
        Me.groupBox16.Controls.Add(Me.btnSplit)
        Me.groupBox16.Controls.Add(Me.btnGet_Visa)
        Me.groupBox16.Controls.Add(Me.label40)
        Me.groupBox16.Controls.Add(Me.label41)
        Me.groupBox16.Controls.Add(Me.btnUsb_resouce)
        Me.groupBox16.Controls.Add(Me.cmbusbresouce)
        Me.groupBox16.Controls.Add(Me.cmbgpib_resouce)
        Me.groupBox16.Location = New System.Drawing.Point(6, 11)
        Me.groupBox16.Name = "groupBox16"
        Me.groupBox16.Size = New System.Drawing.Size(699, 105)
        Me.groupBox16.TabIndex = 7
        Me.groupBox16.TabStop = False
        Me.groupBox16.Text = "0. Connect tool"
        '
        'label37
        '
        Me.label37.AutoSize = True
        Me.label37.Location = New System.Drawing.Point(561, 23)
        Me.label37.Name = "label37"
        Me.label37.Size = New System.Drawing.Size(102, 13)
        Me.label37.TabIndex = 13
        Me.label37.Text = "USB device number"
        '
        'txtdev_num
        '
        Me.txtdev_num.Location = New System.Drawing.Point(563, 39)
        Me.txtdev_num.Name = "txtdev_num"
        Me.txtdev_num.Size = New System.Drawing.Size(104, 20)
        Me.txtdev_num.TabIndex = 12
        '
        'label38
        '
        Me.label38.AutoSize = True
        Me.label38.Location = New System.Drawing.Point(322, 21)
        Me.label38.Name = "label38"
        Me.label38.Size = New System.Drawing.Size(73, 13)
        Me.label38.TabIndex = 11
        Me.label38.Text = "GPIB Address"
        '
        'label39
        '
        Me.label39.AutoSize = True
        Me.label39.Location = New System.Drawing.Point(255, 21)
        Me.label39.Name = "label39"
        Me.label39.Size = New System.Drawing.Size(63, 13)
        Me.label39.TabIndex = 10
        Me.label39.Text = "GPIB Board"
        '
        'txtaddressnum
        '
        Me.txtaddressnum.Location = New System.Drawing.Point(323, 38)
        Me.txtaddressnum.Name = "txtaddressnum"
        Me.txtaddressnum.Size = New System.Drawing.Size(63, 20)
        Me.txtaddressnum.TabIndex = 9
        '
        'txtboad
        '
        Me.txtboad.Location = New System.Drawing.Point(257, 38)
        Me.txtboad.Name = "txtboad"
        Me.txtboad.Size = New System.Drawing.Size(57, 20)
        Me.txtboad.TabIndex = 8
        '
        'btnSplit
        '
        Me.btnSplit.Location = New System.Drawing.Point(257, 62)
        Me.btnSplit.Name = "btnSplit"
        Me.btnSplit.Size = New System.Drawing.Size(129, 28)
        Me.btnSplit.TabIndex = 7
        Me.btnSplit.Text = "Split Visa String"
        Me.btnSplit.UseVisualStyleBackColor = True
        '
        'btnGet_Visa
        '
        Me.btnGet_Visa.Location = New System.Drawing.Point(116, 60)
        Me.btnGet_Visa.Name = "btnGet_Visa"
        Me.btnGet_Visa.Size = New System.Drawing.Size(72, 29)
        Me.btnGet_Visa.TabIndex = 6
        Me.btnGet_Visa.Text = "Get"
        Me.btnGet_Visa.UseVisualStyleBackColor = True
        '
        'label40
        '
        Me.label40.AutoSize = True
        Me.label40.Location = New System.Drawing.Point(25, 18)
        Me.label40.Name = "label40"
        Me.label40.Size = New System.Drawing.Size(57, 13)
        Me.label40.TabIndex = 5
        Me.label40.Text = "Visa String"
        '
        'label41
        '
        Me.label41.AutoSize = True
        Me.label41.Location = New System.Drawing.Point(448, 21)
        Me.label41.Name = "label41"
        Me.label41.Size = New System.Drawing.Size(67, 13)
        Me.label41.TabIndex = 4
        Me.label41.Text = "Usb resouce"
        '
        'btnUsb_resouce
        '
        Me.btnUsb_resouce.Location = New System.Drawing.Point(597, 65)
        Me.btnUsb_resouce.Name = "btnUsb_resouce"
        Me.btnUsb_resouce.Size = New System.Drawing.Size(70, 28)
        Me.btnUsb_resouce.TabIndex = 3
        Me.btnUsb_resouce.Text = "Get"
        Me.btnUsb_resouce.UseVisualStyleBackColor = True
        '
        'cmbusbresouce
        '
        Me.cmbusbresouce.FormattingEnabled = True
        Me.cmbusbresouce.Location = New System.Drawing.Point(450, 37)
        Me.cmbusbresouce.Name = "cmbusbresouce"
        Me.cmbusbresouce.Size = New System.Drawing.Size(107, 21)
        Me.cmbusbresouce.TabIndex = 1
        '
        'cmbgpib_resouce
        '
        Me.cmbgpib_resouce.FormattingEnabled = True
        Me.cmbgpib_resouce.Location = New System.Drawing.Point(27, 35)
        Me.cmbgpib_resouce.Name = "cmbgpib_resouce"
        Me.cmbgpib_resouce.Size = New System.Drawing.Size(161, 21)
        Me.cmbgpib_resouce.TabIndex = 0
        '
        'GroupBox17
        '
        Me.GroupBox17.Controls.Add(Me.GroupBox6)
        Me.GroupBox17.Controls.Add(Me.BtnDisConnect)
        Me.GroupBox17.Controls.Add(Me.GroupBox18)
        Me.GroupBox17.Controls.Add(Me.GroupBox20)
        Me.GroupBox17.Controls.Add(Me.GroupBox21)
        Me.GroupBox17.Controls.Add(Me.BtnConnect)
        Me.GroupBox17.Controls.Add(Me.Label59)
        Me.GroupBox17.Controls.Add(Me.TextBox1)
        Me.GroupBox17.Location = New System.Drawing.Point(6, 122)
        Me.GroupBox17.Name = "GroupBox17"
        Me.GroupBox17.Size = New System.Drawing.Size(699, 359)
        Me.GroupBox17.TabIndex = 3
        Me.GroupBox17.TabStop = False
        Me.GroupBox17.Text = "1.Connect"
        '
        'GroupBox18
        '
        Me.GroupBox18.Controls.Add(Me.rdo770)
        Me.GroupBox18.Controls.Add(Me.rdo570)
        Me.GroupBox18.Controls.Add(Me.rdo550)
        Me.GroupBox18.Location = New System.Drawing.Point(6, 32)
        Me.GroupBox18.Name = "GroupBox18"
        Me.GroupBox18.Size = New System.Drawing.Size(137, 87)
        Me.GroupBox18.TabIndex = 22
        Me.GroupBox18.TabStop = False
        Me.GroupBox18.Text = "Target"
        '
        'rdo770
        '
        Me.rdo770.AutoSize = True
        Me.rdo770.Location = New System.Drawing.Point(21, 64)
        Me.rdo770.Name = "rdo770"
        Me.rdo770.Size = New System.Drawing.Size(66, 17)
        Me.rdo770.TabIndex = 23
        Me.rdo770.Text = "TSL-770"
        Me.rdo770.UseVisualStyleBackColor = True
        '
        'rdo570
        '
        Me.rdo570.AutoSize = True
        Me.rdo570.Location = New System.Drawing.Point(21, 42)
        Me.rdo570.Name = "rdo570"
        Me.rdo570.Size = New System.Drawing.Size(66, 17)
        Me.rdo570.TabIndex = 1
        Me.rdo570.Text = "TSL-570"
        Me.rdo570.UseVisualStyleBackColor = True
        '
        'rdo550
        '
        Me.rdo550.AutoSize = True
        Me.rdo550.Checked = True
        Me.rdo550.Location = New System.Drawing.Point(21, 19)
        Me.rdo550.Name = "rdo550"
        Me.rdo550.Size = New System.Drawing.Size(89, 17)
        Me.rdo550.TabIndex = 0
        Me.rdo550.TabStop = True
        Me.rdo550.Text = "TSL-550/710"
        Me.rdo550.UseVisualStyleBackColor = True
        '
        'GroupBox20
        '
        Me.GroupBox20.Controls.Add(Me.lblAPC1)
        Me.GroupBox20.Controls.Add(Me.lblATTrange)
        Me.GroupBox20.Controls.Add(Me.Label12)
        Me.GroupBox20.Controls.Add(Me.lblACP2)
        Me.GroupBox20.Controls.Add(Me.lblfwversion)
        Me.GroupBox20.Controls.Add(Me.lblfreq)
        Me.GroupBox20.Controls.Add(Me.Label5)
        Me.GroupBox20.Controls.Add(Me.lblserial)
        Me.GroupBox20.Controls.Add(Me.Label15)
        Me.GroupBox20.Controls.Add(Me.Label10)
        Me.GroupBox20.Controls.Add(Me.Label3)
        Me.GroupBox20.Controls.Add(Me.lblSweepSpeed_Range)
        Me.GroupBox20.Controls.Add(Me.label42)
        Me.GroupBox20.Controls.Add(Me.Label14)
        Me.GroupBox20.Controls.Add(Me.lblwave)
        Me.GroupBox20.Controls.Add(Me.lblproductname)
        Me.GroupBox20.Controls.Add(Me.Label4)
        Me.GroupBox20.Controls.Add(Me.Label2)
        Me.GroupBox20.Location = New System.Drawing.Point(5, 204)
        Me.GroupBox20.Name = "GroupBox20"
        Me.GroupBox20.Size = New System.Drawing.Size(688, 135)
        Me.GroupBox20.TabIndex = 15
        Me.GroupBox20.TabStop = False
        Me.GroupBox20.Text = "Information"
        '
        'lblSweepSpeed_Range
        '
        Me.lblSweepSpeed_Range.AutoSize = True
        Me.lblSweepSpeed_Range.Location = New System.Drawing.Point(601, 99)
        Me.lblSweepSpeed_Range.Name = "lblSweepSpeed_Range"
        Me.lblSweepSpeed_Range.Size = New System.Drawing.Size(44, 13)
        Me.lblSweepSpeed_Range.TabIndex = 23
        Me.lblSweepSpeed_Range.Text = "Product"
        '
        'label42
        '
        Me.label42.AutoSize = True
        Me.label42.ForeColor = System.Drawing.Color.Blue
        Me.label42.Location = New System.Drawing.Point(479, 99)
        Me.label42.Name = "label42"
        Me.label42.Size = New System.Drawing.Size(106, 13)
        Me.label42.TabIndex = 22
        Me.label42.Text = "SweepSpeed Range"
        '
        'GroupBox21
        '
        Me.GroupBox21.Controls.Add(Me.rdiUSB)
        Me.GroupBox21.Controls.Add(Me.Label58)
        Me.GroupBox21.Controls.Add(Me.rdiNI488)
        Me.GroupBox21.Controls.Add(Me.rdikysightvisa)
        Me.GroupBox21.Controls.Add(Me.txtPort)
        Me.GroupBox21.Controls.Add(Me.rdiNIvisa)
        Me.GroupBox21.Controls.Add(Me.rdoLAN)
        Me.GroupBox21.Location = New System.Drawing.Point(149, 32)
        Me.GroupBox21.Name = "GroupBox21"
        Me.GroupBox21.Size = New System.Drawing.Size(353, 87)
        Me.GroupBox21.TabIndex = 19
        Me.GroupBox21.TabStop = False
        Me.GroupBox21.Text = "Communication"
        '
        'Label58
        '
        Me.Label58.AutoSize = True
        Me.Label58.Location = New System.Drawing.Point(127, 42)
        Me.Label58.Name = "Label58"
        Me.Label58.Size = New System.Drawing.Size(64, 13)
        Me.Label58.TabIndex = 22
        Me.Label58.Text = "Port number"
        '
        'txtPort
        '
        Me.txtPort.Enabled = False
        Me.txtPort.Location = New System.Drawing.Point(129, 58)
        Me.txtPort.Name = "txtPort"
        Me.txtPort.Size = New System.Drawing.Size(112, 20)
        Me.txtPort.TabIndex = 21
        '
        'rdoLAN
        '
        Me.rdoLAN.AutoSize = True
        Me.rdoLAN.Enabled = False
        Me.rdoLAN.Location = New System.Drawing.Point(6, 56)
        Me.rdoLAN.Name = "rdoLAN"
        Me.rdoLAN.Size = New System.Drawing.Size(46, 17)
        Me.rdoLAN.TabIndex = 20
        Me.rdoLAN.Text = "LAN"
        Me.rdoLAN.UseVisualStyleBackColor = True
        '
        'Label59
        '
        Me.Label59.AutoSize = True
        Me.Label59.Location = New System.Drawing.Point(6, 141)
        Me.Label59.Name = "Label59"
        Me.Label59.Size = New System.Drawing.Size(122, 13)
        Me.Label59.TabIndex = 3
        Me.Label59.Text = "Address/Device number"
        '
        'tabPage2
        '
        Me.tabPage2.Controls.Add(Me.GroupBox11)
        Me.tabPage2.Controls.Add(Me.GroupBox8)
        Me.tabPage2.Controls.Add(Me.GroupBox10)
        Me.tabPage2.Controls.Add(Me.GroupBox26)
        Me.tabPage2.Controls.Add(Me.GroupBox7)
        Me.tabPage2.Location = New System.Drawing.Point(4, 22)
        Me.tabPage2.Name = "tabPage2"
        Me.tabPage2.Padding = New System.Windows.Forms.Padding(3)
        Me.tabPage2.Size = New System.Drawing.Size(726, 498)
        Me.tabPage2.TabIndex = 1
        Me.tabPage2.Text = "Normal function"
        Me.tabPage2.UseVisualStyleBackColor = True
        '
        'GroupBox26
        '
        Me.GroupBox26.Controls.Add(Me.Label8)
        Me.GroupBox26.Controls.Add(Me.btnGetPort)
        Me.GroupBox26.Controls.Add(Me.txttsl_err)
        Me.GroupBox26.Controls.Add(Me.Label62)
        Me.GroupBox26.Controls.Add(Me.Btn_error)
        Me.GroupBox26.Controls.Add(Me.txtlan_port)
        Me.GroupBox26.Controls.Add(Me.txtwait)
        Me.GroupBox26.Controls.Add(Me.Btn_Stangby)
        Me.GroupBox26.Controls.Add(Me.Label63)
        Me.GroupBox26.Controls.Add(Me.txtbusy)
        Me.GroupBox26.Controls.Add(Me.txtip_add)
        Me.GroupBox26.Controls.Add(Me.Btn_Busy)
        Me.GroupBox26.Controls.Add(Me.btnGetIP)
        Me.GroupBox26.Location = New System.Drawing.Point(3, 379)
        Me.GroupBox26.Name = "GroupBox26"
        Me.GroupBox26.Size = New System.Drawing.Size(708, 120)
        Me.GroupBox26.TabIndex = 4
        Me.GroupBox26.TabStop = False
        Me.GroupBox26.Text = "Common Function"
        '
        'btnGetPort
        '
        Me.btnGetPort.Location = New System.Drawing.Point(437, 86)
        Me.btnGetPort.Name = "btnGetPort"
        Me.btnGetPort.Size = New System.Drawing.Size(94, 26)
        Me.btnGetPort.TabIndex = 30
        Me.btnGetPort.Text = "Get LAN Port"
        Me.btnGetPort.UseVisualStyleBackColor = True
        '
        'Label62
        '
        Me.Label62.AutoSize = True
        Me.Label62.Location = New System.Drawing.Point(289, 73)
        Me.Label62.Name = "Label62"
        Me.Label62.Size = New System.Drawing.Size(88, 13)
        Me.Label62.TabIndex = 29
        Me.Label62.Text = "LAN Port number"
        '
        'txtlan_port
        '
        Me.txtlan_port.Enabled = False
        Me.txtlan_port.Location = New System.Drawing.Point(291, 89)
        Me.txtlan_port.Name = "txtlan_port"
        Me.txtlan_port.Size = New System.Drawing.Size(135, 20)
        Me.txtlan_port.TabIndex = 28
        '
        'Label63
        '
        Me.Label63.AutoSize = True
        Me.Label63.Location = New System.Drawing.Point(21, 73)
        Me.Label63.Name = "Label63"
        Me.Label63.Size = New System.Drawing.Size(58, 13)
        Me.Label63.TabIndex = 27
        Me.Label63.Text = "IP Address"
        '
        'txtip_add
        '
        Me.txtip_add.Enabled = False
        Me.txtip_add.Location = New System.Drawing.Point(16, 89)
        Me.txtip_add.Name = "txtip_add"
        Me.txtip_add.Size = New System.Drawing.Size(135, 20)
        Me.txtip_add.TabIndex = 26
        '
        'btnGetIP
        '
        Me.btnGetIP.Location = New System.Drawing.Point(157, 86)
        Me.btnGetIP.Name = "btnGetIP"
        Me.btnGetIP.Size = New System.Drawing.Size(94, 26)
        Me.btnGetIP.TabIndex = 25
        Me.btnGetIP.Text = "Get IP Address"
        Me.btnGetIP.UseVisualStyleBackColor = True
        '
        'tabPage3
        '
        Me.tabPage3.Controls.Add(Me.GroupBox27)
        Me.tabPage3.Controls.Add(Me.GroupBox28)
        Me.tabPage3.Controls.Add(Me.GroupBox13)
        Me.tabPage3.Location = New System.Drawing.Point(4, 22)
        Me.tabPage3.Name = "tabPage3"
        Me.tabPage3.Size = New System.Drawing.Size(726, 498)
        Me.tabPage3.TabIndex = 2
        Me.tabPage3.Text = "Sweep function"
        Me.tabPage3.UseVisualStyleBackColor = True
        '
        'GroupBox27
        '
        Me.GroupBox27.Controls.Add(Me.cmb570_Speed)
        Me.GroupBox27.Controls.Add(Me.Btn_Pause)
        Me.GroupBox27.Controls.Add(Me.Btn_Stop)
        Me.GroupBox27.Controls.Add(Me.Btn_SoftwareTrigger)
        Me.GroupBox27.Controls.Add(Me.Btn_Start)
        Me.GroupBox27.Controls.Add(Me.Btn_GetLogg)
        Me.GroupBox27.Controls.Add(Me.Btn_ReStart)
        Me.GroupBox27.Controls.Add(Me.Label35)
        Me.GroupBox27.Controls.Add(Me.Label65)
        Me.GroupBox27.Controls.Add(Me.txtminstep)
        Me.GroupBox27.Controls.Add(Me.Btn_Minstep)
        Me.GroupBox27.Controls.Add(Me.btnSpeed)
        Me.GroupBox27.Controls.Add(Me.txtsw_wait)
        Me.GroupBox27.Controls.Add(Me.cmbsweep_su)
        Me.GroupBox27.Controls.Add(Me.txtcurrentc)
        Me.GroupBox27.Controls.Add(Me.Label36)
        Me.GroupBox27.Controls.Add(Me.Btn_Current)
        Me.GroupBox27.Controls.Add(Me.Btn_Waiting)
        Me.GroupBox27.Controls.Add(Me.txtg_sweep_su)
        Me.GroupBox27.Controls.Add(Me.Btn_Status)
        Me.GroupBox27.Location = New System.Drawing.Point(456, 21)
        Me.GroupBox27.Name = "GroupBox27"
        Me.GroupBox27.Size = New System.Drawing.Size(267, 445)
        Me.GroupBox27.TabIndex = 7
        Me.GroupBox27.TabStop = False
        Me.GroupBox27.Text = "Other"
        '
        'cmb570_Speed
        '
        Me.cmb570_Speed.AutoCompleteCustomSource.AddRange(New String() {"Step Oneway", "Continuous One way", "Step Round trip", "Continuous Round trip"})
        Me.cmb570_Speed.FormattingEnabled = True
        Me.cmb570_Speed.Location = New System.Drawing.Point(22, 267)
        Me.cmb570_Speed.Name = "cmb570_Speed"
        Me.cmb570_Speed.Size = New System.Drawing.Size(109, 21)
        Me.cmb570_Speed.TabIndex = 30
        '
        'Label65
        '
        Me.Label65.AutoSize = True
        Me.Label65.Location = New System.Drawing.Point(19, 251)
        Me.Label65.Name = "Label65"
        Me.Label65.Size = New System.Drawing.Size(38, 13)
        Me.Label65.TabIndex = 31
        Me.Label65.Text = "Speed"
        '
        'btnSpeed
        '
        Me.btnSpeed.Location = New System.Drawing.Point(137, 260)
        Me.btnSpeed.Name = "btnSpeed"
        Me.btnSpeed.Size = New System.Drawing.Size(101, 32)
        Me.btnSpeed.TabIndex = 29
        Me.btnSpeed.Text = "Get speed table"
        Me.btnSpeed.UseVisualStyleBackColor = True
        '
        'GroupBox28
        '
        Me.GroupBox28.Controls.Add(Me.GroupBox15)
        Me.GroupBox28.Controls.Add(Me.GroupBox14)
        Me.GroupBox28.Location = New System.Drawing.Point(16, 21)
        Me.GroupBox28.Name = "GroupBox28"
        Me.GroupBox28.Size = New System.Drawing.Size(434, 283)
        Me.GroupBox28.TabIndex = 5
        Me.GroupBox28.TabStop = False
        Me.GroupBox28.Text = "Sweep Setting"
        '
        'TSLSample
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(744, 547)
        Me.Controls.Add(Me.tabControl1)
        Me.Name = "TSLSample"
        Me.Text = "TSLSample"
        Me.GroupBox6.ResumeLayout(False)
        Me.GroupBox6.PerformLayout()
        Me.GroupBox11.ResumeLayout(False)
        Me.GroupBox11.PerformLayout()
        Me.GroupBox10.ResumeLayout(False)
        Me.GroupBox10.PerformLayout()
        Me.GroupBox8.ResumeLayout(False)
        Me.GroupBox8.PerformLayout()
        Me.GroupBox7.ResumeLayout(False)
        Me.GroupBox7.PerformLayout()
        Me.GroupBox13.ResumeLayout(False)
        Me.GroupBox13.PerformLayout()
        Me.GroupBox15.ResumeLayout(False)
        Me.GroupBox15.PerformLayout()
        Me.GroupBox14.ResumeLayout(False)
        Me.GroupBox14.PerformLayout()
        Me.tabControl1.ResumeLayout(False)
        Me.tabPage1.ResumeLayout(False)
        Me.groupBox16.ResumeLayout(False)
        Me.groupBox16.PerformLayout()
        Me.GroupBox17.ResumeLayout(False)
        Me.GroupBox17.PerformLayout()
        Me.GroupBox18.ResumeLayout(False)
        Me.GroupBox18.PerformLayout()
        Me.GroupBox20.ResumeLayout(False)
        Me.GroupBox20.PerformLayout()
        Me.GroupBox21.ResumeLayout(False)
        Me.GroupBox21.PerformLayout()
        Me.tabPage2.ResumeLayout(False)
        Me.GroupBox26.ResumeLayout(False)
        Me.GroupBox26.PerformLayout()
        Me.tabPage3.ResumeLayout(False)
        Me.GroupBox27.ResumeLayout(False)
        Me.GroupBox27.PerformLayout()
        Me.GroupBox28.ResumeLayout(False)
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents TextBox1 As TextBox
    Friend WithEvents Label5 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents BtnConnect As Button
    Friend WithEvents lblserial As Label
    Friend WithEvents lblproductname As Label
    Friend WithEvents Label14 As Label
    Friend WithEvents lblAPC1 As Label
    Friend WithEvents Label12 As Label
    Friend WithEvents lblfreq As Label
    Friend WithEvents Label10 As Label
    Friend WithEvents lblwave As Label
    Friend WithEvents lblfwversion As Label
    Friend WithEvents lblATTrange As Label
    Friend WithEvents Label15 As Label
    Friend WithEvents lblACP2 As Label
    Friend WithEvents rdikysightvisa As RadioButton
    Friend WithEvents rdiNIvisa As RadioButton
    Friend WithEvents rdiNI488 As RadioButton
    Friend WithEvents GroupBox6 As GroupBox
    Friend WithEvents rdiCr As RadioButton
    Friend WithEvents rdiCrLF As RadioButton
    Friend WithEvents rdiLf As RadioButton
    Friend WithEvents rdiUSB As RadioButton
    Friend WithEvents GroupBox8 As GroupBox
    Friend WithEvents Btnmonitor_mW As Button
    Friend WithEvents txtradmoni_mw As TextBox
    Friend WithEvents Btnmonitor_dBm As Button
    Friend WithEvents txtreadmoni As TextBox
    Friend WithEvents txtreadmw As TextBox
    Friend WithEvents BtnPower_mW As Button
    Friend WithEvents BtnPower_dBm As Button
    Friend WithEvents txtreadpow As TextBox
    Friend WithEvents BtnAtt_value As Button
    Friend WithEvents txtreadatt As TextBox
    Friend WithEvents Btn_Busy As Button
    Friend WithEvents txtbusy As TextBox
    Friend WithEvents txtunit As TextBox
    Friend WithEvents BtnUnit As Button
    Friend WithEvents BtnPower_mode As Button
    Friend WithEvents txtpms As TextBox
    Friend WithEvents Btn_GetLD As Button
    Friend WithEvents txtlds As TextBox
    Friend WithEvents GroupBox7 As GroupBox
    Friend WithEvents Label6 As Label
    Friend WithEvents Btn_SetdBm As Button
    Friend WithEvents Btn_SetATT As Button
    Friend WithEvents txtatt As TextBox
    Friend WithEvents BtnmW As Button
    Friend WithEvents BtndBm As Button
    Friend WithEvents BtnACC As Button
    Friend WithEvents BtnAPC As Button
    Friend WithEvents BtnCoh_OFF As Button
    Friend WithEvents BtnCoh_ON As Button
    Friend WithEvents BtnLD_OFF As Button
    Friend WithEvents BtnLD_ON As Button
    Friend WithEvents Label7 As Label
    Friend WithEvents Btn_SetmW As Button
    Friend WithEvents txtpow As TextBox
    Friend WithEvents txtcoh As TextBox
    Friend WithEvents BtnCoh_Status As Button
    Friend WithEvents BtnShutter_Close As Button
    Friend WithEvents BtnShutter_Open As Button
    Friend WithEvents BtnShutter_Status As Button
    Friend WithEvents txtshutter_su As TextBox
    Friend WithEvents txttsl_err As TextBox
    Friend WithEvents Btn_error As Button
    Friend WithEvents txtwait As TextBox
    Friend WithEvents Btn_Stangby As Button
    Friend WithEvents Label8 As Label
    Friend WithEvents GroupBox10 As GroupBox
    Friend WithEvents txtsetft As TextBox
    Friend WithEvents Btn_SetFinetuning As Button
    Friend WithEvents txtsetfreq As TextBox
    Friend WithEvents Btn_SetFrequency As Button
    Friend WithEvents Btn_SetWavelenth As Button
    Friend WithEvents txtsetwave As TextBox
    Friend WithEvents GroupBox11 As GroupBox
    Friend WithEvents Btn_Wavelength As Button
    Friend WithEvents txtwave As TextBox
    Friend WithEvents Btn_Fine As Button
    Friend WithEvents txtfine As TextBox
    Friend WithEvents Btn_Freuency As Button
    Friend WithEvents txtfreq As TextBox
    Friend WithEvents cmbsm As ComboBox
    Friend WithEvents Label16 As Label
    Friend WithEvents Btn_ReStart As Button
    Friend WithEvents Btn_Stop As Button
    Friend WithEvents Btn_Pause As Button
    Friend WithEvents Btn_Start As Button
    Friend WithEvents Label32 As Label
    Friend WithEvents txtdelay As TextBox
    Friend WithEvents Label31 As Label
    Friend WithEvents txtcycle As TextBox
    Friend WithEvents Label30 As Label
    Friend WithEvents txtspeed As TextBox
    Friend WithEvents Label25 As Label
    Friend WithEvents cmbst_mod As ComboBox
    Friend WithEvents Label21 As Label
    Friend WithEvents Label20 As Label
    Friend WithEvents Label19 As Label
    Friend WithEvents txtstep As TextBox
    Friend WithEvents txtstop As TextBox
    Friend WithEvents txtstart As TextBox
    Friend WithEvents Btn_SetWavelength As Button
    Friend WithEvents Label18 As Label
    Friend WithEvents cmbtout As ComboBox
    Friend WithEvents cmbtin As ComboBox
    Friend WithEvents Label17 As Label
    Friend WithEvents Btn_GetLogg As Button
    Friend WithEvents Label36 As Label
    Friend WithEvents Label35 As Label
    Friend WithEvents Btn_Waiting As Button
    Friend WithEvents Btn_Status As Button
    Friend WithEvents txtsw_wait As TextBox
    Friend WithEvents txtg_sweep_su As TextBox
    Friend WithEvents GroupBox13 As GroupBox
    Friend WithEvents Label13 As Label
    Friend WithEvents Label11 As Label
    Friend WithEvents Label9 As Label
    Friend WithEvents txtg_cycle As TextBox
    Friend WithEvents txtg_delay As TextBox
    Friend WithEvents txtg_speed As TextBox
    Friend WithEvents Label34 As Label
    Friend WithEvents txtg_triggerstep As TextBox
    Friend WithEvents Label33 As Label
    Friend WithEvents txtg_wavestep As TextBox
    Friend WithEvents Label29 As Label
    Friend WithEvents Label28 As Label
    Friend WithEvents txtg_stopwave As TextBox
    Friend WithEvents Label27 As Label
    Friend WithEvents txtg_startmode As TextBox
    Friend WithEvents Label26 As Label
    Friend WithEvents txtg_tri_out As TextBox
    Friend WithEvents txtg_startwave As TextBox
    Friend WithEvents txtg_tr_inp As TextBox
    Friend WithEvents Label24 As Label
    Friend WithEvents Label23 As Label
    Friend WithEvents txtg_smod As TextBox
    Friend WithEvents BtnGet_setting As Button
    Friend WithEvents GroupBox15 As GroupBox
    Friend WithEvents Btn_Other As Button
    Friend WithEvents GroupBox14 As GroupBox
    Friend WithEvents SaveFileDialog1 As SaveFileDialog
    Friend WithEvents BtnDisConnect As Button
    Friend WithEvents cmbsweep_su As ComboBox
    Friend WithEvents Btn_SoftwareTrigger As Button
    Friend WithEvents txtcurrentc As TextBox
    Friend WithEvents Btn_Current As Button
    Friend WithEvents Btn_Minstep As Button
    Friend WithEvents txtminstep As TextBox
    Private WithEvents tabControl1 As TabControl
    Private WithEvents tabPage1 As TabPage
    Friend WithEvents groupBox16 As GroupBox
    Friend WithEvents label37 As Label
    Friend WithEvents txtdev_num As TextBox
    Friend WithEvents label38 As Label
    Friend WithEvents label39 As Label
    Friend WithEvents txtaddressnum As TextBox
    Friend WithEvents txtboad As TextBox
    Friend WithEvents btnSplit As Button
    Friend WithEvents btnGet_Visa As Button
    Friend WithEvents label40 As Label
    Friend WithEvents label41 As Label
    Friend WithEvents btnUsb_resouce As Button
    Friend WithEvents cmbusbresouce As ComboBox
    Friend WithEvents cmbgpib_resouce As ComboBox
    Friend WithEvents GroupBox17 As GroupBox
    Friend WithEvents GroupBox18 As GroupBox
    Friend WithEvents rdo570 As RadioButton
    Friend WithEvents rdo550 As RadioButton
    Friend WithEvents GroupBox20 As GroupBox
    Friend WithEvents lblSweepSpeed_Range As Label
    Friend WithEvents label42 As Label
    Friend WithEvents GroupBox21 As GroupBox
    Friend WithEvents Label58 As Label
    Friend WithEvents txtPort As TextBox
    Friend WithEvents rdoLAN As RadioButton
    Friend WithEvents Label59 As Label
    Private WithEvents tabPage2 As TabPage
    Friend WithEvents GroupBox26 As GroupBox
    Friend WithEvents btnGetPort As Button
    Friend WithEvents Label62 As Label
    Friend WithEvents txtlan_port As TextBox
    Friend WithEvents Label63 As Label
    Friend WithEvents txtip_add As TextBox
    Friend WithEvents btnGetIP As Button
    Private WithEvents tabPage3 As TabPage
    Private WithEvents GroupBox27 As GroupBox
    Friend WithEvents cmb570_Speed As ComboBox
    Friend WithEvents Label65 As Label
    Friend WithEvents btnSpeed As Button
    Friend WithEvents GroupBox28 As GroupBox
    Friend WithEvents cmbTrigger_Source As ComboBox
    Friend WithEvents Label68 As Label
    Friend WithEvents Label79 As Label
    Friend WithEvents txtTrigger_Source As TextBox
    Friend WithEvents rdo770 As RadioButton
End Class
