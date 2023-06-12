<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class PCUSample
    Inherits System.Windows.Forms.Form

    'フォームがコンポーネントの一覧をクリーンアップするために dispose をオーバーライドします。
    <System.Diagnostics.DebuggerNonUserCode()> _
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
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.GroupBox9 = New System.Windows.Forms.GroupBox()
        Me.rdo110 = New System.Windows.Forms.RadioButton()
        Me.rdo100 = New System.Windows.Forms.RadioButton()
        Me.GroupBox2 = New System.Windows.Forms.GroupBox()
        Me.lblwavelength = New System.Windows.Forms.Label()
        Me.lblserial = New System.Windows.Forms.Label()
        Me.lblvesion = New System.Windows.Forms.Label()
        Me.lblprduct = New System.Windows.Forms.Label()
        Me.Label15 = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.GroupBox4 = New System.Windows.Forms.GroupBox()
        Me.rdocrlf = New System.Windows.Forms.RadioButton()
        Me.rdolf = New System.Windows.Forms.RadioButton()
        Me.rdocr = New System.Windows.Forms.RadioButton()
        Me.btnDisConnect = New System.Windows.Forms.Button()
        Me.btnConnect = New System.Windows.Forms.Button()
        Me.GroupBox3 = New System.Windows.Forms.GroupBox()
        Me.Label14 = New System.Windows.Forms.Label()
        Me.txt100controlid = New System.Windows.Forms.TextBox()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.txtport = New System.Windows.Forms.TextBox()
        Me.rdolan = New System.Windows.Forms.RadioButton()
        Me.rdousb = New System.Windows.Forms.RadioButton()
        Me.rdokeysightvisa = New System.Windows.Forms.RadioButton()
        Me.rdonivisa = New System.Windows.Forms.RadioButton()
        Me.rdo488 = New System.Windows.Forms.RadioButton()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.txtaddress = New System.Windows.Forms.TextBox()
        Me.GroupBox5 = New System.Windows.Forms.GroupBox()
        Me.btnGetPort = New System.Windows.Forms.Button()
        Me.Label17 = New System.Windows.Forms.Label()
        Me.txtlan_port = New System.Windows.Forms.TextBox()
        Me.Label16 = New System.Windows.Forms.Label()
        Me.txtip_add = New System.Windows.Forms.TextBox()
        Me.btnGetIP = New System.Windows.Forms.Button()
        Me.GroupBox7 = New System.Windows.Forms.GroupBox()
        Me.txtcurrentrange = New System.Windows.Forms.TextBox()
        Me.btnAdjust_Range = New System.Windows.Forms.Button()
        Me.btnGet_Range = New System.Windows.Forms.Button()
        Me.GroupBox6 = New System.Windows.Forms.GroupBox()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.btnSet_SOP = New System.Windows.Forms.Button()
        Me.cmbsop = New System.Windows.Forms.ComboBox()
        Me.GroupBox10 = New System.Windows.Forms.GroupBox()
        Me.btnControl_ID = New System.Windows.Forms.Button()
        Me.Label13 = New System.Windows.Forms.Label()
        Me.cmb100controlid = New System.Windows.Forms.ComboBox()
        Me.Label12 = New System.Windows.Forms.Label()
        Me.txtdev_num = New System.Windows.Forms.TextBox()
        Me.Label11 = New System.Windows.Forms.Label()
        Me.Label10 = New System.Windows.Forms.Label()
        Me.txtaddressnum = New System.Windows.Forms.TextBox()
        Me.txtboad = New System.Windows.Forms.TextBox()
        Me.btnSplit = New System.Windows.Forms.Button()
        Me.btnGet_resouce = New System.Windows.Forms.Button()
        Me.Label9 = New System.Windows.Forms.Label()
        Me.Label8 = New System.Windows.Forms.Label()
        Me.btnUsb_resouce = New System.Windows.Forms.Button()
        Me.cmbusbresouce = New System.Windows.Forms.ComboBox()
        Me.cmbgpib_resouce = New System.Windows.Forms.ComboBox()
        Me.GroupBox1.SuspendLayout()
        Me.GroupBox9.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.GroupBox4.SuspendLayout()
        Me.GroupBox3.SuspendLayout()
        Me.GroupBox5.SuspendLayout()
        Me.GroupBox7.SuspendLayout()
        Me.GroupBox6.SuspendLayout()
        Me.GroupBox10.SuspendLayout()
        Me.SuspendLayout()
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.GroupBox9)
        Me.GroupBox1.Controls.Add(Me.GroupBox2)
        Me.GroupBox1.Controls.Add(Me.GroupBox4)
        Me.GroupBox1.Controls.Add(Me.btnDisConnect)
        Me.GroupBox1.Controls.Add(Me.btnConnect)
        Me.GroupBox1.Controls.Add(Me.GroupBox3)
        Me.GroupBox1.Controls.Add(Me.Label2)
        Me.GroupBox1.Controls.Add(Me.txtaddress)
        Me.GroupBox1.Location = New System.Drawing.Point(36, 134)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(746, 293)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "1. Connect"
        '
        'GroupBox9
        '
        Me.GroupBox9.Controls.Add(Me.rdo110)
        Me.GroupBox9.Controls.Add(Me.rdo100)
        Me.GroupBox9.Location = New System.Drawing.Point(19, 20)
        Me.GroupBox9.Name = "GroupBox9"
        Me.GroupBox9.Size = New System.Drawing.Size(173, 75)
        Me.GroupBox9.TabIndex = 9
        Me.GroupBox9.TabStop = False
        Me.GroupBox9.Text = "Target"
        '
        'rdo110
        '
        Me.rdo110.AutoSize = True
        Me.rdo110.Location = New System.Drawing.Point(45, 42)
        Me.rdo110.Name = "rdo110"
        Me.rdo110.Size = New System.Drawing.Size(68, 17)
        Me.rdo110.TabIndex = 1
        Me.rdo110.Text = "PCU-110"
        Me.rdo110.UseVisualStyleBackColor = True
        '
        'rdo100
        '
        Me.rdo100.AutoSize = True
        Me.rdo100.Checked = True
        Me.rdo100.Location = New System.Drawing.Point(45, 17)
        Me.rdo100.Name = "rdo100"
        Me.rdo100.Size = New System.Drawing.Size(68, 17)
        Me.rdo100.TabIndex = 0
        Me.rdo100.TabStop = True
        Me.rdo100.Text = "PCU-100"
        Me.rdo100.UseVisualStyleBackColor = True
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.lblwavelength)
        Me.GroupBox2.Controls.Add(Me.lblserial)
        Me.GroupBox2.Controls.Add(Me.lblvesion)
        Me.GroupBox2.Controls.Add(Me.lblprduct)
        Me.GroupBox2.Controls.Add(Me.Label15)
        Me.GroupBox2.Controls.Add(Me.Label6)
        Me.GroupBox2.Controls.Add(Me.Label5)
        Me.GroupBox2.Controls.Add(Me.Label4)
        Me.GroupBox2.Location = New System.Drawing.Point(396, 20)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(330, 191)
        Me.GroupBox2.TabIndex = 8
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Information"
        '
        'lblwavelength
        '
        Me.lblwavelength.AutoSize = True
        Me.lblwavelength.ForeColor = System.Drawing.Color.Black
        Me.lblwavelength.Location = New System.Drawing.Point(159, 148)
        Me.lblwavelength.Name = "lblwavelength"
        Me.lblwavelength.Size = New System.Drawing.Size(44, 13)
        Me.lblwavelength.TabIndex = 7
        Me.lblwavelength.Text = "Product"
        '
        'lblserial
        '
        Me.lblserial.AutoSize = True
        Me.lblserial.ForeColor = System.Drawing.Color.Black
        Me.lblserial.Location = New System.Drawing.Point(159, 104)
        Me.lblserial.Name = "lblserial"
        Me.lblserial.Size = New System.Drawing.Size(44, 13)
        Me.lblserial.TabIndex = 6
        Me.lblserial.Text = "Product"
        '
        'lblvesion
        '
        Me.lblvesion.AutoSize = True
        Me.lblvesion.ForeColor = System.Drawing.Color.Black
        Me.lblvesion.Location = New System.Drawing.Point(159, 72)
        Me.lblvesion.Name = "lblvesion"
        Me.lblvesion.Size = New System.Drawing.Size(44, 13)
        Me.lblvesion.TabIndex = 5
        Me.lblvesion.Text = "Product"
        '
        'lblprduct
        '
        Me.lblprduct.AutoSize = True
        Me.lblprduct.ForeColor = System.Drawing.Color.Black
        Me.lblprduct.Location = New System.Drawing.Point(159, 31)
        Me.lblprduct.Name = "lblprduct"
        Me.lblprduct.Size = New System.Drawing.Size(44, 13)
        Me.lblprduct.TabIndex = 4
        Me.lblprduct.Text = "Product"
        '
        'Label15
        '
        Me.Label15.AutoSize = True
        Me.Label15.ForeColor = System.Drawing.Color.Blue
        Me.Label15.Location = New System.Drawing.Point(27, 104)
        Me.Label15.Name = "Label15"
        Me.Label15.Size = New System.Drawing.Size(71, 13)
        Me.Label15.TabIndex = 3
        Me.Label15.Text = "Serial number"
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.ForeColor = System.Drawing.Color.Blue
        Me.Label6.Location = New System.Drawing.Point(27, 148)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(95, 13)
        Me.Label6.TabIndex = 2
        Me.Label6.Text = "Wavelength range"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.ForeColor = System.Drawing.Color.Blue
        Me.Label5.Location = New System.Drawing.Point(27, 72)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(67, 13)
        Me.Label5.TabIndex = 1
        Me.Label5.Text = "F/W Version"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.ForeColor = System.Drawing.Color.Blue
        Me.Label4.Location = New System.Drawing.Point(27, 31)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(44, 13)
        Me.Label4.TabIndex = 0
        Me.Label4.Text = "Product"
        '
        'GroupBox4
        '
        Me.GroupBox4.Controls.Add(Me.rdocrlf)
        Me.GroupBox4.Controls.Add(Me.rdolf)
        Me.GroupBox4.Controls.Add(Me.rdocr)
        Me.GroupBox4.Location = New System.Drawing.Point(19, 217)
        Me.GroupBox4.Name = "GroupBox4"
        Me.GroupBox4.Size = New System.Drawing.Size(222, 60)
        Me.GroupBox4.TabIndex = 7
        Me.GroupBox4.TabStop = False
        Me.GroupBox4.Text = "Tarminerter"
        '
        'rdocrlf
        '
        Me.rdocrlf.AutoSize = True
        Me.rdocrlf.Location = New System.Drawing.Point(149, 23)
        Me.rdocrlf.Name = "rdocrlf"
        Me.rdocrlf.Size = New System.Drawing.Size(44, 17)
        Me.rdocrlf.TabIndex = 3
        Me.rdocrlf.Text = "CrLf"
        Me.rdocrlf.UseVisualStyleBackColor = True
        '
        'rdolf
        '
        Me.rdolf.AutoSize = True
        Me.rdolf.Location = New System.Drawing.Point(86, 23)
        Me.rdolf.Name = "rdolf"
        Me.rdolf.Size = New System.Drawing.Size(34, 17)
        Me.rdolf.TabIndex = 2
        Me.rdolf.Text = "Lf"
        Me.rdolf.UseVisualStyleBackColor = True
        '
        'rdocr
        '
        Me.rdocr.AutoSize = True
        Me.rdocr.Checked = True
        Me.rdocr.Location = New System.Drawing.Point(24, 23)
        Me.rdocr.Name = "rdocr"
        Me.rdocr.Size = New System.Drawing.Size(35, 17)
        Me.rdocr.TabIndex = 1
        Me.rdocr.TabStop = True
        Me.rdocr.Text = "Cr"
        Me.rdocr.UseVisualStyleBackColor = True
        '
        'btnDisConnect
        '
        Me.btnDisConnect.Location = New System.Drawing.Point(381, 242)
        Me.btnDisConnect.Name = "btnDisConnect"
        Me.btnDisConnect.Size = New System.Drawing.Size(86, 28)
        Me.btnDisConnect.TabIndex = 6
        Me.btnDisConnect.Text = "DisConnect"
        Me.btnDisConnect.UseVisualStyleBackColor = True
        '
        'btnConnect
        '
        Me.btnConnect.Location = New System.Drawing.Point(267, 242)
        Me.btnConnect.Name = "btnConnect"
        Me.btnConnect.Size = New System.Drawing.Size(86, 28)
        Me.btnConnect.TabIndex = 5
        Me.btnConnect.Text = "Connect"
        Me.btnConnect.UseVisualStyleBackColor = True
        '
        'GroupBox3
        '
        Me.GroupBox3.Controls.Add(Me.Label14)
        Me.GroupBox3.Controls.Add(Me.txt100controlid)
        Me.GroupBox3.Controls.Add(Me.Label3)
        Me.GroupBox3.Controls.Add(Me.txtport)
        Me.GroupBox3.Controls.Add(Me.rdolan)
        Me.GroupBox3.Controls.Add(Me.rdousb)
        Me.GroupBox3.Controls.Add(Me.rdokeysightvisa)
        Me.GroupBox3.Controls.Add(Me.rdonivisa)
        Me.GroupBox3.Controls.Add(Me.rdo488)
        Me.GroupBox3.Location = New System.Drawing.Point(15, 104)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(375, 106)
        Me.GroupBox3.TabIndex = 4
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Communication"
        '
        'Label14
        '
        Me.Label14.AutoSize = True
        Me.Label14.Location = New System.Drawing.Point(247, 44)
        Me.Label14.Name = "Label14"
        Me.Label14.Size = New System.Drawing.Size(100, 13)
        Me.Label14.TabIndex = 16
        Me.Label14.Text = "PCU-100 Control ID"
        '
        'txt100controlid
        '
        Me.txt100controlid.Location = New System.Drawing.Point(246, 59)
        Me.txt100controlid.Name = "txt100controlid"
        Me.txt100controlid.Size = New System.Drawing.Size(115, 20)
        Me.txt100controlid.TabIndex = 7
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(133, 47)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(64, 13)
        Me.Label3.TabIndex = 6
        Me.Label3.Text = "Port number"
        '
        'txtport
        '
        Me.txtport.Enabled = False
        Me.txtport.Location = New System.Drawing.Point(135, 61)
        Me.txtport.Name = "txtport"
        Me.txtport.Size = New System.Drawing.Size(87, 20)
        Me.txtport.TabIndex = 5
        '
        'rdolan
        '
        Me.rdolan.AutoSize = True
        Me.rdolan.Location = New System.Drawing.Point(24, 62)
        Me.rdolan.Name = "rdolan"
        Me.rdolan.Size = New System.Drawing.Size(95, 17)
        Me.rdolan.TabIndex = 4
        Me.rdolan.TabStop = True
        Me.rdolan.Text = "LAN(PCU-110)"
        Me.rdolan.UseVisualStyleBackColor = True
        '
        'rdousb
        '
        Me.rdousb.AutoSize = True
        Me.rdousb.Location = New System.Drawing.Point(250, 20)
        Me.rdousb.Name = "rdousb"
        Me.rdousb.Size = New System.Drawing.Size(96, 17)
        Me.rdousb.TabIndex = 3
        Me.rdousb.TabStop = True
        Me.rdousb.Text = "USB(PCU-110)"
        Me.rdousb.UseVisualStyleBackColor = True
        '
        'rdokeysightvisa
        '
        Me.rdokeysightvisa.AutoSize = True
        Me.rdokeysightvisa.Location = New System.Drawing.Point(149, 20)
        Me.rdokeysightvisa.Name = "rdokeysightvisa"
        Me.rdokeysightvisa.Size = New System.Drawing.Size(88, 17)
        Me.rdokeysightvisa.TabIndex = 2
        Me.rdokeysightvisa.TabStop = True
        Me.rdokeysightvisa.Text = "Keysight Visa"
        Me.rdokeysightvisa.UseVisualStyleBackColor = True
        '
        'rdonivisa
        '
        Me.rdonivisa.AutoSize = True
        Me.rdonivisa.Location = New System.Drawing.Point(86, 21)
        Me.rdonivisa.Name = "rdonivisa"
        Me.rdonivisa.Size = New System.Drawing.Size(56, 17)
        Me.rdonivisa.TabIndex = 1
        Me.rdonivisa.TabStop = True
        Me.rdonivisa.Text = "NIVisa"
        Me.rdonivisa.UseVisualStyleBackColor = True
        '
        'rdo488
        '
        Me.rdo488.AutoSize = True
        Me.rdo488.Location = New System.Drawing.Point(20, 22)
        Me.rdo488.Name = "rdo488"
        Me.rdo488.Size = New System.Drawing.Size(63, 17)
        Me.rdo488.TabIndex = 0
        Me.rdo488.TabStop = True
        Me.rdo488.Text = "NI488.2"
        Me.rdo488.UseVisualStyleBackColor = True
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(211, 35)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(122, 13)
        Me.Label2.TabIndex = 3
        Me.Label2.Text = "Address/Device number"
        '
        'txtaddress
        '
        Me.txtaddress.Location = New System.Drawing.Point(209, 51)
        Me.txtaddress.Name = "txtaddress"
        Me.txtaddress.Size = New System.Drawing.Size(167, 20)
        Me.txtaddress.TabIndex = 2
        '
        'GroupBox5
        '
        Me.GroupBox5.Controls.Add(Me.btnGetPort)
        Me.GroupBox5.Controls.Add(Me.Label17)
        Me.GroupBox5.Controls.Add(Me.txtlan_port)
        Me.GroupBox5.Controls.Add(Me.Label16)
        Me.GroupBox5.Controls.Add(Me.txtip_add)
        Me.GroupBox5.Controls.Add(Me.btnGetIP)
        Me.GroupBox5.Controls.Add(Me.GroupBox7)
        Me.GroupBox5.Controls.Add(Me.GroupBox6)
        Me.GroupBox5.Location = New System.Drawing.Point(36, 433)
        Me.GroupBox5.Name = "GroupBox5"
        Me.GroupBox5.Size = New System.Drawing.Size(746, 157)
        Me.GroupBox5.TabIndex = 2
        Me.GroupBox5.TabStop = False
        Me.GroupBox5.Text = "2.Function"
        '
        'btnGetPort
        '
        Me.btnGetPort.Location = New System.Drawing.Point(478, 113)
        Me.btnGetPort.Name = "btnGetPort"
        Me.btnGetPort.Size = New System.Drawing.Size(94, 26)
        Me.btnGetPort.TabIndex = 18
        Me.btnGetPort.Text = "Get LAN Port"
        Me.btnGetPort.UseVisualStyleBackColor = True
        '
        'Label17
        '
        Me.Label17.AutoSize = True
        Me.Label17.Location = New System.Drawing.Point(330, 100)
        Me.Label17.Name = "Label17"
        Me.Label17.Size = New System.Drawing.Size(88, 13)
        Me.Label17.TabIndex = 17
        Me.Label17.Text = "LAN Port number"
        '
        'txtlan_port
        '
        Me.txtlan_port.Enabled = False
        Me.txtlan_port.Location = New System.Drawing.Point(332, 116)
        Me.txtlan_port.Name = "txtlan_port"
        Me.txtlan_port.Size = New System.Drawing.Size(135, 20)
        Me.txtlan_port.TabIndex = 16
        '
        'Label16
        '
        Me.Label16.AutoSize = True
        Me.Label16.Location = New System.Drawing.Point(62, 100)
        Me.Label16.Name = "Label16"
        Me.Label16.Size = New System.Drawing.Size(58, 13)
        Me.Label16.TabIndex = 15
        Me.Label16.Text = "IP Address"
        '
        'txtip_add
        '
        Me.txtip_add.Enabled = False
        Me.txtip_add.Location = New System.Drawing.Point(57, 116)
        Me.txtip_add.Name = "txtip_add"
        Me.txtip_add.Size = New System.Drawing.Size(135, 20)
        Me.txtip_add.TabIndex = 14
        '
        'btnGetIP
        '
        Me.btnGetIP.Location = New System.Drawing.Point(198, 113)
        Me.btnGetIP.Name = "btnGetIP"
        Me.btnGetIP.Size = New System.Drawing.Size(94, 26)
        Me.btnGetIP.TabIndex = 13
        Me.btnGetIP.Text = "Get IP Address"
        Me.btnGetIP.UseVisualStyleBackColor = True
        '
        'GroupBox7
        '
        Me.GroupBox7.Controls.Add(Me.txtcurrentrange)
        Me.GroupBox7.Controls.Add(Me.btnAdjust_Range)
        Me.GroupBox7.Controls.Add(Me.btnGet_Range)
        Me.GroupBox7.Location = New System.Drawing.Point(333, 20)
        Me.GroupBox7.Name = "GroupBox7"
        Me.GroupBox7.Size = New System.Drawing.Size(343, 70)
        Me.GroupBox7.TabIndex = 5
        Me.GroupBox7.TabStop = False
        Me.GroupBox7.Text = "Power Control"
        '
        'txtcurrentrange
        '
        Me.txtcurrentrange.Enabled = False
        Me.txtcurrentrange.Location = New System.Drawing.Point(249, 28)
        Me.txtcurrentrange.Name = "txtcurrentrange"
        Me.txtcurrentrange.Size = New System.Drawing.Size(72, 20)
        Me.txtcurrentrange.TabIndex = 3
        '
        'btnAdjust_Range
        '
        Me.btnAdjust_Range.Location = New System.Drawing.Point(45, 24)
        Me.btnAdjust_Range.Name = "btnAdjust_Range"
        Me.btnAdjust_Range.Size = New System.Drawing.Size(89, 29)
        Me.btnAdjust_Range.TabIndex = 4
        Me.btnAdjust_Range.Text = "Adjust range"
        Me.btnAdjust_Range.UseVisualStyleBackColor = True
        '
        'btnGet_Range
        '
        Me.btnGet_Range.Location = New System.Drawing.Point(162, 25)
        Me.btnGet_Range.Name = "btnGet_Range"
        Me.btnGet_Range.Size = New System.Drawing.Size(81, 27)
        Me.btnGet_Range.TabIndex = 1
        Me.btnGet_Range.Text = "Get Range"
        Me.btnGet_Range.UseVisualStyleBackColor = True
        '
        'GroupBox6
        '
        Me.GroupBox6.Controls.Add(Me.Label7)
        Me.GroupBox6.Controls.Add(Me.btnSet_SOP)
        Me.GroupBox6.Controls.Add(Me.cmbsop)
        Me.GroupBox6.Location = New System.Drawing.Point(15, 20)
        Me.GroupBox6.Name = "GroupBox6"
        Me.GroupBox6.Size = New System.Drawing.Size(277, 70)
        Me.GroupBox6.TabIndex = 4
        Me.GroupBox6.TabStop = False
        Me.GroupBox6.Text = "SOP Control"
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Location = New System.Drawing.Point(47, 16)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(62, 13)
        Me.Label7.TabIndex = 2
        Me.Label7.Text = "SOP Stauts"
        '
        'btnSet_SOP
        '
        Me.btnSet_SOP.Location = New System.Drawing.Point(183, 29)
        Me.btnSet_SOP.Name = "btnSet_SOP"
        Me.btnSet_SOP.Size = New System.Drawing.Size(82, 26)
        Me.btnSet_SOP.TabIndex = 1
        Me.btnSet_SOP.Text = "Set"
        Me.btnSet_SOP.UseVisualStyleBackColor = True
        '
        'cmbsop
        '
        Me.cmbsop.FormattingEnabled = True
        Me.cmbsop.Location = New System.Drawing.Point(42, 33)
        Me.cmbsop.Name = "cmbsop"
        Me.cmbsop.Size = New System.Drawing.Size(135, 21)
        Me.cmbsop.TabIndex = 0
        '
        'GroupBox10
        '
        Me.GroupBox10.Controls.Add(Me.btnControl_ID)
        Me.GroupBox10.Controls.Add(Me.Label13)
        Me.GroupBox10.Controls.Add(Me.cmb100controlid)
        Me.GroupBox10.Controls.Add(Me.Label12)
        Me.GroupBox10.Controls.Add(Me.txtdev_num)
        Me.GroupBox10.Controls.Add(Me.Label11)
        Me.GroupBox10.Controls.Add(Me.Label10)
        Me.GroupBox10.Controls.Add(Me.txtaddressnum)
        Me.GroupBox10.Controls.Add(Me.txtboad)
        Me.GroupBox10.Controls.Add(Me.btnSplit)
        Me.GroupBox10.Controls.Add(Me.btnGet_resouce)
        Me.GroupBox10.Controls.Add(Me.Label9)
        Me.GroupBox10.Controls.Add(Me.Label8)
        Me.GroupBox10.Controls.Add(Me.btnUsb_resouce)
        Me.GroupBox10.Controls.Add(Me.cmbusbresouce)
        Me.GroupBox10.Controls.Add(Me.cmbgpib_resouce)
        Me.GroupBox10.Location = New System.Drawing.Point(36, 23)
        Me.GroupBox10.Name = "GroupBox10"
        Me.GroupBox10.Size = New System.Drawing.Size(746, 105)
        Me.GroupBox10.TabIndex = 3
        Me.GroupBox10.TabStop = False
        Me.GroupBox10.Text = "0. Connect tool"
        '
        'btnControl_ID
        '
        Me.btnControl_ID.Location = New System.Drawing.Point(645, 65)
        Me.btnControl_ID.Name = "btnControl_ID"
        Me.btnControl_ID.Size = New System.Drawing.Size(70, 28)
        Me.btnControl_ID.TabIndex = 16
        Me.btnControl_ID.Text = "Get"
        Me.btnControl_ID.UseVisualStyleBackColor = True
        '
        'Label13
        '
        Me.Label13.AutoSize = True
        Me.Label13.Location = New System.Drawing.Point(599, 23)
        Me.Label13.Name = "Label13"
        Me.Label13.Size = New System.Drawing.Size(100, 13)
        Me.Label13.TabIndex = 15
        Me.Label13.Text = "PCU-100 Control ID"
        '
        'cmb100controlid
        '
        Me.cmb100controlid.FormattingEnabled = True
        Me.cmb100controlid.Location = New System.Drawing.Point(601, 37)
        Me.cmb100controlid.Name = "cmb100controlid"
        Me.cmb100controlid.Size = New System.Drawing.Size(114, 21)
        Me.cmb100controlid.TabIndex = 14
        '
        'Label12
        '
        Me.Label12.AutoSize = True
        Me.Label12.Location = New System.Drawing.Point(476, 23)
        Me.Label12.Name = "Label12"
        Me.Label12.Size = New System.Drawing.Size(102, 13)
        Me.Label12.TabIndex = 13
        Me.Label12.Text = "USB device number"
        '
        'txtdev_num
        '
        Me.txtdev_num.Location = New System.Drawing.Point(478, 39)
        Me.txtdev_num.Name = "txtdev_num"
        Me.txtdev_num.Size = New System.Drawing.Size(104, 20)
        Me.txtdev_num.TabIndex = 12
        '
        'Label11
        '
        Me.Label11.AutoSize = True
        Me.Label11.Location = New System.Drawing.Point(276, 20)
        Me.Label11.Name = "Label11"
        Me.Label11.Size = New System.Drawing.Size(73, 13)
        Me.Label11.TabIndex = 11
        Me.Label11.Text = "GPIB Address"
        '
        'Label10
        '
        Me.Label10.AutoSize = True
        Me.Label10.Location = New System.Drawing.Point(209, 20)
        Me.Label10.Name = "Label10"
        Me.Label10.Size = New System.Drawing.Size(60, 13)
        Me.Label10.TabIndex = 10
        Me.Label10.Text = "GPIB Boad"
        '
        'txtaddressnum
        '
        Me.txtaddressnum.Location = New System.Drawing.Point(277, 37)
        Me.txtaddressnum.Name = "txtaddressnum"
        Me.txtaddressnum.Size = New System.Drawing.Size(63, 20)
        Me.txtaddressnum.TabIndex = 9
        '
        'txtboad
        '
        Me.txtboad.Location = New System.Drawing.Point(211, 37)
        Me.txtboad.Name = "txtboad"
        Me.txtboad.Size = New System.Drawing.Size(57, 20)
        Me.txtboad.TabIndex = 8
        '
        'btnSplit
        '
        Me.btnSplit.Location = New System.Drawing.Point(211, 61)
        Me.btnSplit.Name = "btnSplit"
        Me.btnSplit.Size = New System.Drawing.Size(129, 28)
        Me.btnSplit.TabIndex = 7
        Me.btnSplit.Text = "split"
        Me.btnSplit.UseVisualStyleBackColor = True
        '
        'btnGet_resouce
        '
        Me.btnGet_resouce.Location = New System.Drawing.Point(116, 60)
        Me.btnGet_resouce.Name = "btnGet_resouce"
        Me.btnGet_resouce.Size = New System.Drawing.Size(72, 29)
        Me.btnGet_resouce.TabIndex = 6
        Me.btnGet_resouce.Text = "Get"
        Me.btnGet_resouce.UseVisualStyleBackColor = True
        '
        'Label9
        '
        Me.Label9.AutoSize = True
        Me.Label9.Location = New System.Drawing.Point(25, 18)
        Me.Label9.Name = "Label9"
        Me.Label9.Size = New System.Drawing.Size(96, 13)
        Me.Label9.TabIndex = 5
        Me.Label9.Text = "Visa GPIB resouce"
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Location = New System.Drawing.Point(363, 21)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(67, 13)
        Me.Label8.TabIndex = 4
        Me.Label8.Text = "Usb resouce"
        '
        'btnUsb_resouce
        '
        Me.btnUsb_resouce.Location = New System.Drawing.Point(402, 65)
        Me.btnUsb_resouce.Name = "btnUsb_resouce"
        Me.btnUsb_resouce.Size = New System.Drawing.Size(70, 28)
        Me.btnUsb_resouce.TabIndex = 3
        Me.btnUsb_resouce.Text = "Get"
        Me.btnUsb_resouce.UseVisualStyleBackColor = True
        '
        'cmbusbresouce
        '
        Me.cmbusbresouce.FormattingEnabled = True
        Me.cmbusbresouce.Location = New System.Drawing.Point(365, 37)
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
        'PCUSample
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(807, 602)
        Me.Controls.Add(Me.GroupBox10)
        Me.Controls.Add(Me.GroupBox5)
        Me.Controls.Add(Me.GroupBox1)
        Me.Name = "PCUSample"
        Me.Text = "PCUSample"
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.GroupBox9.ResumeLayout(False)
        Me.GroupBox9.PerformLayout()
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox2.PerformLayout()
        Me.GroupBox4.ResumeLayout(False)
        Me.GroupBox4.PerformLayout()
        Me.GroupBox3.ResumeLayout(False)
        Me.GroupBox3.PerformLayout()
        Me.GroupBox5.ResumeLayout(False)
        Me.GroupBox5.PerformLayout()
        Me.GroupBox7.ResumeLayout(False)
        Me.GroupBox7.PerformLayout()
        Me.GroupBox6.ResumeLayout(False)
        Me.GroupBox6.PerformLayout()
        Me.GroupBox10.ResumeLayout(False)
        Me.GroupBox10.PerformLayout()
        Me.ResumeLayout(False)

    End Sub

    Friend WithEvents GroupBox1 As GroupBox
    Friend WithEvents GroupBox3 As GroupBox
    Friend WithEvents rdo488 As RadioButton
    Friend WithEvents Label2 As Label
    Friend WithEvents txtaddress As TextBox
    Friend WithEvents GroupBox2 As GroupBox
    Friend WithEvents Label6 As Label
    Friend WithEvents Label5 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents GroupBox4 As GroupBox
    Friend WithEvents rdocrlf As RadioButton
    Friend WithEvents rdolf As RadioButton
    Friend WithEvents rdocr As RadioButton
    Friend WithEvents btnDisConnect As Button
    Friend WithEvents btnConnect As Button
    Friend WithEvents Label3 As Label
    Friend WithEvents txtport As TextBox
    Friend WithEvents rdolan As RadioButton
    Friend WithEvents rdousb As RadioButton
    Friend WithEvents rdokeysightvisa As RadioButton
    Friend WithEvents rdonivisa As RadioButton
    Friend WithEvents GroupBox5 As GroupBox
    Friend WithEvents txtcurrentrange As TextBox
    Friend WithEvents btnGet_Range As Button
    Friend WithEvents GroupBox7 As GroupBox
    Friend WithEvents btnAdjust_Range As Button
    Friend WithEvents GroupBox6 As GroupBox
    Friend WithEvents GroupBox9 As GroupBox
    Friend WithEvents rdo110 As RadioButton
    Friend WithEvents rdo100 As RadioButton
    Friend WithEvents Label7 As Label
    Friend WithEvents btnSet_SOP As Button
    Friend WithEvents cmbsop As ComboBox
    Friend WithEvents GroupBox10 As GroupBox
    Friend WithEvents Label11 As Label
    Friend WithEvents Label10 As Label
    Friend WithEvents txtaddressnum As TextBox
    Friend WithEvents txtboad As TextBox
    Friend WithEvents btnSplit As Button
    Friend WithEvents btnGet_resouce As Button
    Friend WithEvents Label9 As Label
    Friend WithEvents Label8 As Label
    Friend WithEvents btnUsb_resouce As Button
    Friend WithEvents cmbusbresouce As ComboBox
    Friend WithEvents cmbgpib_resouce As ComboBox
    Friend WithEvents Label12 As Label
    Friend WithEvents txtdev_num As TextBox
    Friend WithEvents Label14 As Label
    Friend WithEvents txt100controlid As TextBox
    Friend WithEvents btnControl_ID As Button
    Friend WithEvents Label13 As Label
    Friend WithEvents cmb100controlid As ComboBox
    Friend WithEvents lblwavelength As Label
    Friend WithEvents lblserial As Label
    Friend WithEvents lblvesion As Label
    Friend WithEvents lblprduct As Label
    Friend WithEvents Label15 As Label
    Friend WithEvents btnGetPort As Button
    Friend WithEvents Label17 As Label
    Friend WithEvents txtlan_port As TextBox
    Friend WithEvents Label16 As Label
    Friend WithEvents txtip_add As TextBox
    Friend WithEvents btnGetIP As Button
End Class
