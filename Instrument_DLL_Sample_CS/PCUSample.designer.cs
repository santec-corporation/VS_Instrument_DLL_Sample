namespace Instrument_DLL_Sample
{
    partial class PCUSample
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.GroupBox7 = new System.Windows.Forms.GroupBox();
            this.txtcurrentrange = new System.Windows.Forms.TextBox();
            this.btnAdjust_Range = new System.Windows.Forms.Button();
            this.btnGet_Range = new System.Windows.Forms.Button();
            this.Label14 = new System.Windows.Forms.Label();
            this.txt100controlid = new System.Windows.Forms.TextBox();
            this.Label3 = new System.Windows.Forms.Label();
            this.txtport = new System.Windows.Forms.TextBox();
            this.rdolan = new System.Windows.Forms.RadioButton();
            this.rdousb = new System.Windows.Forms.RadioButton();
            this.rdokeysightvisa = new System.Windows.Forms.RadioButton();
            this.rdonivisa = new System.Windows.Forms.RadioButton();
            this.GroupBox6 = new System.Windows.Forms.GroupBox();
            this.Label7 = new System.Windows.Forms.Label();
            this.btnSet_SOP = new System.Windows.Forms.Button();
            this.cmbsop = new System.Windows.Forms.ComboBox();
            this.GroupBox10 = new System.Windows.Forms.GroupBox();
            this.btnControl_ID = new System.Windows.Forms.Button();
            this.Label13 = new System.Windows.Forms.Label();
            this.cmb100controlid = new System.Windows.Forms.ComboBox();
            this.Label12 = new System.Windows.Forms.Label();
            this.txtdev_num = new System.Windows.Forms.TextBox();
            this.Label11 = new System.Windows.Forms.Label();
            this.Label10 = new System.Windows.Forms.Label();
            this.txtaddressnum = new System.Windows.Forms.TextBox();
            this.txtboad = new System.Windows.Forms.TextBox();
            this.btnSplit = new System.Windows.Forms.Button();
            this.btnGet_resouce = new System.Windows.Forms.Button();
            this.Label9 = new System.Windows.Forms.Label();
            this.Label8 = new System.Windows.Forms.Label();
            this.btnUsb_resouce = new System.Windows.Forms.Button();
            this.cmbusbresouce = new System.Windows.Forms.ComboBox();
            this.cmbgpib_resouce = new System.Windows.Forms.ComboBox();
            this.rdo488 = new System.Windows.Forms.RadioButton();
            this.GroupBox1 = new System.Windows.Forms.GroupBox();
            this.GroupBox9 = new System.Windows.Forms.GroupBox();
            this.rdo110 = new System.Windows.Forms.RadioButton();
            this.rdo100 = new System.Windows.Forms.RadioButton();
            this.GroupBox2 = new System.Windows.Forms.GroupBox();
            this.lblwavelength = new System.Windows.Forms.Label();
            this.lblserial = new System.Windows.Forms.Label();
            this.lblvesion = new System.Windows.Forms.Label();
            this.lblprduct = new System.Windows.Forms.Label();
            this.Label15 = new System.Windows.Forms.Label();
            this.Label6 = new System.Windows.Forms.Label();
            this.Label5 = new System.Windows.Forms.Label();
            this.Label4 = new System.Windows.Forms.Label();
            this.GroupBox4 = new System.Windows.Forms.GroupBox();
            this.rdocrlf = new System.Windows.Forms.RadioButton();
            this.rdolf = new System.Windows.Forms.RadioButton();
            this.rdocr = new System.Windows.Forms.RadioButton();
            this.btnDisConnect = new System.Windows.Forms.Button();
            this.btnConnect = new System.Windows.Forms.Button();
            this.GroupBox3 = new System.Windows.Forms.GroupBox();
            this.Label2 = new System.Windows.Forms.Label();
            this.txtaddress = new System.Windows.Forms.TextBox();
            this.GroupBox5 = new System.Windows.Forms.GroupBox();
            this.btnGetPort = new System.Windows.Forms.Button();
            this.Label17 = new System.Windows.Forms.Label();
            this.txtlan_port = new System.Windows.Forms.TextBox();
            this.Label16 = new System.Windows.Forms.Label();
            this.txtip_add = new System.Windows.Forms.TextBox();
            this.btnGetIP = new System.Windows.Forms.Button();
            this.GroupBox7.SuspendLayout();
            this.GroupBox6.SuspendLayout();
            this.GroupBox10.SuspendLayout();
            this.GroupBox1.SuspendLayout();
            this.GroupBox9.SuspendLayout();
            this.GroupBox2.SuspendLayout();
            this.GroupBox4.SuspendLayout();
            this.GroupBox3.SuspendLayout();
            this.GroupBox5.SuspendLayout();
            this.SuspendLayout();
            // 
            // GroupBox7
            // 
            this.GroupBox7.Controls.Add(this.txtcurrentrange);
            this.GroupBox7.Controls.Add(this.btnAdjust_Range);
            this.GroupBox7.Controls.Add(this.btnGet_Range);
            this.GroupBox7.Location = new System.Drawing.Point(333, 20);
            this.GroupBox7.Name = "GroupBox7";
            this.GroupBox7.Size = new System.Drawing.Size(343, 70);
            this.GroupBox7.TabIndex = 5;
            this.GroupBox7.TabStop = false;
            this.GroupBox7.Text = "Power Control";
            // 
            // txtcurrentrange
            // 
            this.txtcurrentrange.Enabled = false;
            this.txtcurrentrange.Location = new System.Drawing.Point(249, 28);
            this.txtcurrentrange.Name = "txtcurrentrange";
            this.txtcurrentrange.Size = new System.Drawing.Size(72, 20);
            this.txtcurrentrange.TabIndex = 3;
            // 
            // btnAdjust_Range
            // 
            this.btnAdjust_Range.Location = new System.Drawing.Point(45, 24);
            this.btnAdjust_Range.Name = "btnAdjust_Range";
            this.btnAdjust_Range.Size = new System.Drawing.Size(89, 29);
            this.btnAdjust_Range.TabIndex = 4;
            this.btnAdjust_Range.Text = "Adjust range";
            this.btnAdjust_Range.UseVisualStyleBackColor = true;
            this.btnAdjust_Range.Click += new System.EventHandler(this.btnAdjust_range_Click);
            // 
            // btnGet_Range
            // 
            this.btnGet_Range.Location = new System.Drawing.Point(162, 25);
            this.btnGet_Range.Name = "btnGet_Range";
            this.btnGet_Range.Size = new System.Drawing.Size(81, 27);
            this.btnGet_Range.TabIndex = 1;
            this.btnGet_Range.Text = "Get Range";
            this.btnGet_Range.UseVisualStyleBackColor = true;
            this.btnGet_Range.Click += new System.EventHandler(this.btnGet_Range_Click);
            // 
            // Label14
            // 
            this.Label14.AutoSize = true;
            this.Label14.Location = new System.Drawing.Point(247, 44);
            this.Label14.Name = "Label14";
            this.Label14.Size = new System.Drawing.Size(100, 13);
            this.Label14.TabIndex = 16;
            this.Label14.Text = "PCU-100 Control ID";
            // 
            // txt100controlid
            // 
            this.txt100controlid.Location = new System.Drawing.Point(246, 59);
            this.txt100controlid.Name = "txt100controlid";
            this.txt100controlid.Size = new System.Drawing.Size(115, 20);
            this.txt100controlid.TabIndex = 7;
            // 
            // Label3
            // 
            this.Label3.AutoSize = true;
            this.Label3.Location = new System.Drawing.Point(133, 47);
            this.Label3.Name = "Label3";
            this.Label3.Size = new System.Drawing.Size(64, 13);
            this.Label3.TabIndex = 6;
            this.Label3.Text = "Port number";
            // 
            // txtport
            // 
            this.txtport.Enabled = false;
            this.txtport.Location = new System.Drawing.Point(135, 61);
            this.txtport.Name = "txtport";
            this.txtport.Size = new System.Drawing.Size(87, 20);
            this.txtport.TabIndex = 5;
            // 
            // rdolan
            // 
            this.rdolan.AutoSize = true;
            this.rdolan.Location = new System.Drawing.Point(24, 62);
            this.rdolan.Name = "rdolan";
            this.rdolan.Size = new System.Drawing.Size(95, 17);
            this.rdolan.TabIndex = 4;
            this.rdolan.Text = "LAN(PCU-110)";
            this.rdolan.UseVisualStyleBackColor = true;
            this.rdolan.CheckedChanged += new System.EventHandler(this.rdolan_CheckedChanged);
            // 
            // rdousb
            // 
            this.rdousb.AutoSize = true;
            this.rdousb.Location = new System.Drawing.Point(250, 20);
            this.rdousb.Name = "rdousb";
            this.rdousb.Size = new System.Drawing.Size(96, 17);
            this.rdousb.TabIndex = 3;
            this.rdousb.Text = "USB(PCU-110)";
            this.rdousb.UseVisualStyleBackColor = true;
            this.rdousb.CheckedChanged += new System.EventHandler(this.rdousb_CheckedChanged);
            // 
            // rdokeysightvisa
            // 
            this.rdokeysightvisa.AutoSize = true;
            this.rdokeysightvisa.Location = new System.Drawing.Point(149, 20);
            this.rdokeysightvisa.Name = "rdokeysightvisa";
            this.rdokeysightvisa.Size = new System.Drawing.Size(88, 17);
            this.rdokeysightvisa.TabIndex = 2;
            this.rdokeysightvisa.Text = "Keysight Visa";
            this.rdokeysightvisa.UseVisualStyleBackColor = true;
            this.rdokeysightvisa.CheckedChanged += new System.EventHandler(this.rdokeysightvisa_CheckedChanged);
            // 
            // rdonivisa
            // 
            this.rdonivisa.AutoSize = true;
            this.rdonivisa.Location = new System.Drawing.Point(86, 21);
            this.rdonivisa.Name = "rdonivisa";
            this.rdonivisa.Size = new System.Drawing.Size(56, 17);
            this.rdonivisa.TabIndex = 1;
            this.rdonivisa.Text = "NIVisa";
            this.rdonivisa.UseVisualStyleBackColor = true;
            this.rdonivisa.CheckedChanged += new System.EventHandler(this.rdonivisa_CheckedChanged);
            // 
            // GroupBox6
            // 
            this.GroupBox6.Controls.Add(this.Label7);
            this.GroupBox6.Controls.Add(this.btnSet_SOP);
            this.GroupBox6.Controls.Add(this.cmbsop);
            this.GroupBox6.Location = new System.Drawing.Point(15, 20);
            this.GroupBox6.Name = "GroupBox6";
            this.GroupBox6.Size = new System.Drawing.Size(277, 70);
            this.GroupBox6.TabIndex = 4;
            this.GroupBox6.TabStop = false;
            this.GroupBox6.Text = "SOP Control";
            // 
            // Label7
            // 
            this.Label7.AutoSize = true;
            this.Label7.Location = new System.Drawing.Point(47, 16);
            this.Label7.Name = "Label7";
            this.Label7.Size = new System.Drawing.Size(62, 13);
            this.Label7.TabIndex = 2;
            this.Label7.Text = "SOP Stauts";
            // 
            // btnSet_SOP
            // 
            this.btnSet_SOP.Location = new System.Drawing.Point(183, 29);
            this.btnSet_SOP.Name = "btnSet_SOP";
            this.btnSet_SOP.Size = new System.Drawing.Size(82, 26);
            this.btnSet_SOP.TabIndex = 1;
            this.btnSet_SOP.Text = "Set";
            this.btnSet_SOP.UseVisualStyleBackColor = true;
            this.btnSet_SOP.Click += new System.EventHandler(this.btnSetSOP_Click);
            // 
            // cmbsop
            // 
            this.cmbsop.FormattingEnabled = true;
            this.cmbsop.Location = new System.Drawing.Point(42, 33);
            this.cmbsop.Name = "cmbsop";
            this.cmbsop.Size = new System.Drawing.Size(135, 21);
            this.cmbsop.TabIndex = 0;
            // 
            // GroupBox10
            // 
            this.GroupBox10.Controls.Add(this.btnControl_ID);
            this.GroupBox10.Controls.Add(this.Label13);
            this.GroupBox10.Controls.Add(this.cmb100controlid);
            this.GroupBox10.Controls.Add(this.Label12);
            this.GroupBox10.Controls.Add(this.txtdev_num);
            this.GroupBox10.Controls.Add(this.Label11);
            this.GroupBox10.Controls.Add(this.Label10);
            this.GroupBox10.Controls.Add(this.txtaddressnum);
            this.GroupBox10.Controls.Add(this.txtboad);
            this.GroupBox10.Controls.Add(this.btnSplit);
            this.GroupBox10.Controls.Add(this.btnGet_resouce);
            this.GroupBox10.Controls.Add(this.Label9);
            this.GroupBox10.Controls.Add(this.Label8);
            this.GroupBox10.Controls.Add(this.btnUsb_resouce);
            this.GroupBox10.Controls.Add(this.cmbusbresouce);
            this.GroupBox10.Controls.Add(this.cmbgpib_resouce);
            this.GroupBox10.Location = new System.Drawing.Point(30, 20);
            this.GroupBox10.Name = "GroupBox10";
            this.GroupBox10.Size = new System.Drawing.Size(746, 105);
            this.GroupBox10.TabIndex = 6;
            this.GroupBox10.TabStop = false;
            this.GroupBox10.Text = "0. Connect tool";
            // 
            // btnControl_ID
            // 
            this.btnControl_ID.Location = new System.Drawing.Point(645, 65);
            this.btnControl_ID.Name = "btnControl_ID";
            this.btnControl_ID.Size = new System.Drawing.Size(70, 28);
            this.btnControl_ID.TabIndex = 16;
            this.btnControl_ID.Text = "Get";
            this.btnControl_ID.UseVisualStyleBackColor = true;
            this.btnControl_ID.Click += new System.EventHandler(this.btnControl_ID_Click);
            // 
            // Label13
            // 
            this.Label13.AutoSize = true;
            this.Label13.Location = new System.Drawing.Point(599, 23);
            this.Label13.Name = "Label13";
            this.Label13.Size = new System.Drawing.Size(100, 13);
            this.Label13.TabIndex = 15;
            this.Label13.Text = "PCU-100 Control ID";
            // 
            // cmb100controlid
            // 
            this.cmb100controlid.FormattingEnabled = true;
            this.cmb100controlid.Location = new System.Drawing.Point(601, 37);
            this.cmb100controlid.Name = "cmb100controlid";
            this.cmb100controlid.Size = new System.Drawing.Size(114, 21);
            this.cmb100controlid.TabIndex = 14;
            this.cmb100controlid.SelectedIndexChanged += new System.EventHandler(this.cmb100controlid_SelectedIndexChanged);
            // 
            // Label12
            // 
            this.Label12.AutoSize = true;
            this.Label12.Location = new System.Drawing.Point(476, 23);
            this.Label12.Name = "Label12";
            this.Label12.Size = new System.Drawing.Size(102, 13);
            this.Label12.TabIndex = 13;
            this.Label12.Text = "USB device number";
            // 
            // txtdev_num
            // 
            this.txtdev_num.Location = new System.Drawing.Point(478, 39);
            this.txtdev_num.Name = "txtdev_num";
            this.txtdev_num.Size = new System.Drawing.Size(104, 20);
            this.txtdev_num.TabIndex = 12;
            // 
            // Label11
            // 
            this.Label11.AutoSize = true;
            this.Label11.Location = new System.Drawing.Point(276, 20);
            this.Label11.Name = "Label11";
            this.Label11.Size = new System.Drawing.Size(73, 13);
            this.Label11.TabIndex = 11;
            this.Label11.Text = "GPIB Address";
            // 
            // Label10
            // 
            this.Label10.AutoSize = true;
            this.Label10.Location = new System.Drawing.Point(209, 20);
            this.Label10.Name = "Label10";
            this.Label10.Size = new System.Drawing.Size(60, 13);
            this.Label10.TabIndex = 10;
            this.Label10.Text = "GPIB Boad";
            // 
            // txtaddressnum
            // 
            this.txtaddressnum.Location = new System.Drawing.Point(277, 37);
            this.txtaddressnum.Name = "txtaddressnum";
            this.txtaddressnum.Size = new System.Drawing.Size(63, 20);
            this.txtaddressnum.TabIndex = 9;
            // 
            // txtboad
            // 
            this.txtboad.Location = new System.Drawing.Point(211, 37);
            this.txtboad.Name = "txtboad";
            this.txtboad.Size = new System.Drawing.Size(57, 20);
            this.txtboad.TabIndex = 8;
            // 
            // btnSplit
            // 
            this.btnSplit.Location = new System.Drawing.Point(211, 61);
            this.btnSplit.Name = "btnSplit";
            this.btnSplit.Size = new System.Drawing.Size(129, 28);
            this.btnSplit.TabIndex = 7;
            this.btnSplit.Text = "split";
            this.btnSplit.UseVisualStyleBackColor = true;
            this.btnSplit.Click += new System.EventHandler(this.btnSplit_Click);
            // 
            // btnGet_resouce
            // 
            this.btnGet_resouce.Location = new System.Drawing.Point(116, 60);
            this.btnGet_resouce.Name = "btnGet_resouce";
            this.btnGet_resouce.Size = new System.Drawing.Size(72, 29);
            this.btnGet_resouce.TabIndex = 6;
            this.btnGet_resouce.Text = "Get";
            this.btnGet_resouce.UseVisualStyleBackColor = true;
            this.btnGet_resouce.Click += new System.EventHandler(this.btnGet_resouce_Click);
            // 
            // Label9
            // 
            this.Label9.AutoSize = true;
            this.Label9.Location = new System.Drawing.Point(25, 18);
            this.Label9.Name = "Label9";
            this.Label9.Size = new System.Drawing.Size(96, 13);
            this.Label9.TabIndex = 5;
            this.Label9.Text = "Visa GPIB resouce";
            // 
            // Label8
            // 
            this.Label8.AutoSize = true;
            this.Label8.Location = new System.Drawing.Point(363, 21);
            this.Label8.Name = "Label8";
            this.Label8.Size = new System.Drawing.Size(67, 13);
            this.Label8.TabIndex = 4;
            this.Label8.Text = "Usb resouce";
            // 
            // btnUsb_resouce
            // 
            this.btnUsb_resouce.Location = new System.Drawing.Point(448, 65);
            this.btnUsb_resouce.Name = "btnUsb_resouce";
            this.btnUsb_resouce.Size = new System.Drawing.Size(70, 28);
            this.btnUsb_resouce.TabIndex = 3;
            this.btnUsb_resouce.Text = "Get";
            this.btnUsb_resouce.UseVisualStyleBackColor = true;
            this.btnUsb_resouce.Click += new System.EventHandler(this.btnUsb_resouce_Click);
            // 
            // cmbusbresouce
            // 
            this.cmbusbresouce.FormattingEnabled = true;
            this.cmbusbresouce.Location = new System.Drawing.Point(365, 37);
            this.cmbusbresouce.Name = "cmbusbresouce";
            this.cmbusbresouce.Size = new System.Drawing.Size(107, 21);
            this.cmbusbresouce.TabIndex = 1;
            this.cmbusbresouce.SelectedIndexChanged += new System.EventHandler(this.cmbusbresouce_SelectedIndexChanged);
            // 
            // cmbgpib_resouce
            // 
            this.cmbgpib_resouce.FormattingEnabled = true;
            this.cmbgpib_resouce.Location = new System.Drawing.Point(27, 35);
            this.cmbgpib_resouce.Name = "cmbgpib_resouce";
            this.cmbgpib_resouce.Size = new System.Drawing.Size(161, 21);
            this.cmbgpib_resouce.TabIndex = 0;
            // 
            // rdo488
            // 
            this.rdo488.AutoSize = true;
            this.rdo488.Checked = true;
            this.rdo488.Location = new System.Drawing.Point(20, 22);
            this.rdo488.Name = "rdo488";
            this.rdo488.Size = new System.Drawing.Size(63, 17);
            this.rdo488.TabIndex = 0;
            this.rdo488.TabStop = true;
            this.rdo488.Text = "NI488.2";
            this.rdo488.UseVisualStyleBackColor = true;
            this.rdo488.CheckedChanged += new System.EventHandler(this.rdo488_CheckedChanged);
            // 
            // GroupBox1
            // 
            this.GroupBox1.Controls.Add(this.GroupBox9);
            this.GroupBox1.Controls.Add(this.GroupBox2);
            this.GroupBox1.Controls.Add(this.GroupBox4);
            this.GroupBox1.Controls.Add(this.btnDisConnect);
            this.GroupBox1.Controls.Add(this.btnConnect);
            this.GroupBox1.Controls.Add(this.GroupBox3);
            this.GroupBox1.Controls.Add(this.Label2);
            this.GroupBox1.Controls.Add(this.txtaddress);
            this.GroupBox1.Location = new System.Drawing.Point(30, 131);
            this.GroupBox1.Name = "GroupBox1";
            this.GroupBox1.Size = new System.Drawing.Size(746, 293);
            this.GroupBox1.TabIndex = 4;
            this.GroupBox1.TabStop = false;
            this.GroupBox1.Text = "1. Connect";
            // 
            // GroupBox9
            // 
            this.GroupBox9.Controls.Add(this.rdo110);
            this.GroupBox9.Controls.Add(this.rdo100);
            this.GroupBox9.Location = new System.Drawing.Point(19, 20);
            this.GroupBox9.Name = "GroupBox9";
            this.GroupBox9.Size = new System.Drawing.Size(173, 75);
            this.GroupBox9.TabIndex = 9;
            this.GroupBox9.TabStop = false;
            this.GroupBox9.Text = "Target";
            // 
            // rdo110
            // 
            this.rdo110.AutoSize = true;
            this.rdo110.Location = new System.Drawing.Point(45, 42);
            this.rdo110.Name = "rdo110";
            this.rdo110.Size = new System.Drawing.Size(68, 17);
            this.rdo110.TabIndex = 1;
            this.rdo110.Text = "PCU-110";
            this.rdo110.UseVisualStyleBackColor = true;
            this.rdo110.CheckedChanged += new System.EventHandler(this.rdo110_CheckedChanged);
            // 
            // rdo100
            // 
            this.rdo100.AutoSize = true;
            this.rdo100.Checked = true;
            this.rdo100.Location = new System.Drawing.Point(45, 17);
            this.rdo100.Name = "rdo100";
            this.rdo100.Size = new System.Drawing.Size(68, 17);
            this.rdo100.TabIndex = 0;
            this.rdo100.TabStop = true;
            this.rdo100.Text = "PCU-100";
            this.rdo100.UseVisualStyleBackColor = true;
            this.rdo100.CheckedChanged += new System.EventHandler(this.rdo100_CheckedChanged);
            // 
            // GroupBox2
            // 
            this.GroupBox2.Controls.Add(this.lblwavelength);
            this.GroupBox2.Controls.Add(this.lblserial);
            this.GroupBox2.Controls.Add(this.lblvesion);
            this.GroupBox2.Controls.Add(this.lblprduct);
            this.GroupBox2.Controls.Add(this.Label15);
            this.GroupBox2.Controls.Add(this.Label6);
            this.GroupBox2.Controls.Add(this.Label5);
            this.GroupBox2.Controls.Add(this.Label4);
            this.GroupBox2.Location = new System.Drawing.Point(396, 20);
            this.GroupBox2.Name = "GroupBox2";
            this.GroupBox2.Size = new System.Drawing.Size(330, 191);
            this.GroupBox2.TabIndex = 8;
            this.GroupBox2.TabStop = false;
            this.GroupBox2.Text = "Information";
            // 
            // lblwavelength
            // 
            this.lblwavelength.AutoSize = true;
            this.lblwavelength.ForeColor = System.Drawing.Color.Black;
            this.lblwavelength.Location = new System.Drawing.Point(159, 148);
            this.lblwavelength.Name = "lblwavelength";
            this.lblwavelength.Size = new System.Drawing.Size(44, 13);
            this.lblwavelength.TabIndex = 7;
            this.lblwavelength.Text = "Product";
            // 
            // lblserial
            // 
            this.lblserial.AutoSize = true;
            this.lblserial.ForeColor = System.Drawing.Color.Black;
            this.lblserial.Location = new System.Drawing.Point(159, 104);
            this.lblserial.Name = "lblserial";
            this.lblserial.Size = new System.Drawing.Size(44, 13);
            this.lblserial.TabIndex = 6;
            this.lblserial.Text = "Product";
            // 
            // lblvesion
            // 
            this.lblvesion.AutoSize = true;
            this.lblvesion.ForeColor = System.Drawing.Color.Black;
            this.lblvesion.Location = new System.Drawing.Point(159, 72);
            this.lblvesion.Name = "lblvesion";
            this.lblvesion.Size = new System.Drawing.Size(44, 13);
            this.lblvesion.TabIndex = 5;
            this.lblvesion.Text = "Product";
            // 
            // lblprduct
            // 
            this.lblprduct.AutoSize = true;
            this.lblprduct.ForeColor = System.Drawing.Color.Black;
            this.lblprduct.Location = new System.Drawing.Point(159, 31);
            this.lblprduct.Name = "lblprduct";
            this.lblprduct.Size = new System.Drawing.Size(44, 13);
            this.lblprduct.TabIndex = 4;
            this.lblprduct.Text = "Product";
            // 
            // Label15
            // 
            this.Label15.AutoSize = true;
            this.Label15.ForeColor = System.Drawing.Color.Blue;
            this.Label15.Location = new System.Drawing.Point(27, 104);
            this.Label15.Name = "Label15";
            this.Label15.Size = new System.Drawing.Size(71, 13);
            this.Label15.TabIndex = 3;
            this.Label15.Text = "Serial number";
            // 
            // Label6
            // 
            this.Label6.AutoSize = true;
            this.Label6.ForeColor = System.Drawing.Color.Blue;
            this.Label6.Location = new System.Drawing.Point(27, 148);
            this.Label6.Name = "Label6";
            this.Label6.Size = new System.Drawing.Size(95, 13);
            this.Label6.TabIndex = 2;
            this.Label6.Text = "Wavelength range";
            // 
            // Label5
            // 
            this.Label5.AutoSize = true;
            this.Label5.ForeColor = System.Drawing.Color.Blue;
            this.Label5.Location = new System.Drawing.Point(27, 72);
            this.Label5.Name = "Label5";
            this.Label5.Size = new System.Drawing.Size(67, 13);
            this.Label5.TabIndex = 1;
            this.Label5.Text = "F/W Version";
            // 
            // Label4
            // 
            this.Label4.AutoSize = true;
            this.Label4.ForeColor = System.Drawing.Color.Blue;
            this.Label4.Location = new System.Drawing.Point(27, 31);
            this.Label4.Name = "Label4";
            this.Label4.Size = new System.Drawing.Size(44, 13);
            this.Label4.TabIndex = 0;
            this.Label4.Text = "Product";
            // 
            // GroupBox4
            // 
            this.GroupBox4.Controls.Add(this.rdocrlf);
            this.GroupBox4.Controls.Add(this.rdolf);
            this.GroupBox4.Controls.Add(this.rdocr);
            this.GroupBox4.Location = new System.Drawing.Point(19, 217);
            this.GroupBox4.Name = "GroupBox4";
            this.GroupBox4.Size = new System.Drawing.Size(222, 60);
            this.GroupBox4.TabIndex = 7;
            this.GroupBox4.TabStop = false;
            this.GroupBox4.Text = "Tarminerter";
            // 
            // rdocrlf
            // 
            this.rdocrlf.AutoSize = true;
            this.rdocrlf.Location = new System.Drawing.Point(149, 23);
            this.rdocrlf.Name = "rdocrlf";
            this.rdocrlf.Size = new System.Drawing.Size(44, 17);
            this.rdocrlf.TabIndex = 3;
            this.rdocrlf.Text = "CrLf";
            this.rdocrlf.UseVisualStyleBackColor = true;
            // 
            // rdolf
            // 
            this.rdolf.AutoSize = true;
            this.rdolf.Location = new System.Drawing.Point(86, 23);
            this.rdolf.Name = "rdolf";
            this.rdolf.Size = new System.Drawing.Size(34, 17);
            this.rdolf.TabIndex = 2;
            this.rdolf.Text = "Lf";
            this.rdolf.UseVisualStyleBackColor = true;
            // 
            // rdocr
            // 
            this.rdocr.AutoSize = true;
            this.rdocr.Checked = true;
            this.rdocr.Location = new System.Drawing.Point(24, 23);
            this.rdocr.Name = "rdocr";
            this.rdocr.Size = new System.Drawing.Size(35, 17);
            this.rdocr.TabIndex = 1;
            this.rdocr.TabStop = true;
            this.rdocr.Text = "Cr";
            this.rdocr.UseVisualStyleBackColor = true;
            // 
            // btnDisConnect
            // 
            this.btnDisConnect.Location = new System.Drawing.Point(381, 242);
            this.btnDisConnect.Name = "btnDisConnect";
            this.btnDisConnect.Size = new System.Drawing.Size(86, 28);
            this.btnDisConnect.TabIndex = 6;
            this.btnDisConnect.Text = "DisConnect";
            this.btnDisConnect.UseVisualStyleBackColor = true;
            this.btnDisConnect.Click += new System.EventHandler(this.BtnDisConnect_Click);
            // 
            // btnConnect
            // 
            this.btnConnect.Location = new System.Drawing.Point(267, 242);
            this.btnConnect.Name = "btnConnect";
            this.btnConnect.Size = new System.Drawing.Size(86, 28);
            this.btnConnect.TabIndex = 5;
            this.btnConnect.Text = "Connect";
            this.btnConnect.UseVisualStyleBackColor = true;
            this.btnConnect.Click += new System.EventHandler(this.BtnConnect_Click);
            // 
            // GroupBox3
            // 
            this.GroupBox3.Controls.Add(this.Label14);
            this.GroupBox3.Controls.Add(this.txt100controlid);
            this.GroupBox3.Controls.Add(this.Label3);
            this.GroupBox3.Controls.Add(this.txtport);
            this.GroupBox3.Controls.Add(this.rdolan);
            this.GroupBox3.Controls.Add(this.rdousb);
            this.GroupBox3.Controls.Add(this.rdokeysightvisa);
            this.GroupBox3.Controls.Add(this.rdonivisa);
            this.GroupBox3.Controls.Add(this.rdo488);
            this.GroupBox3.Location = new System.Drawing.Point(15, 104);
            this.GroupBox3.Name = "GroupBox3";
            this.GroupBox3.Size = new System.Drawing.Size(375, 106);
            this.GroupBox3.TabIndex = 4;
            this.GroupBox3.TabStop = false;
            this.GroupBox3.Text = "Communication";
            // 
            // Label2
            // 
            this.Label2.AutoSize = true;
            this.Label2.Location = new System.Drawing.Point(211, 35);
            this.Label2.Name = "Label2";
            this.Label2.Size = new System.Drawing.Size(122, 13);
            this.Label2.TabIndex = 3;
            this.Label2.Text = "Address/Device number";
            // 
            // txtaddress
            // 
            this.txtaddress.Location = new System.Drawing.Point(209, 51);
            this.txtaddress.Name = "txtaddress";
            this.txtaddress.Size = new System.Drawing.Size(167, 20);
            this.txtaddress.TabIndex = 2;
            // 
            // GroupBox5
            // 
            this.GroupBox5.Controls.Add(this.btnGetPort);
            this.GroupBox5.Controls.Add(this.Label17);
            this.GroupBox5.Controls.Add(this.txtlan_port);
            this.GroupBox5.Controls.Add(this.Label16);
            this.GroupBox5.Controls.Add(this.txtip_add);
            this.GroupBox5.Controls.Add(this.btnGetIP);
            this.GroupBox5.Controls.Add(this.GroupBox7);
            this.GroupBox5.Controls.Add(this.GroupBox6);
            this.GroupBox5.Location = new System.Drawing.Point(30, 430);
            this.GroupBox5.Name = "GroupBox5";
            this.GroupBox5.Size = new System.Drawing.Size(746, 152);
            this.GroupBox5.TabIndex = 5;
            this.GroupBox5.TabStop = false;
            this.GroupBox5.Text = "2.Function";
            // 
            // btnGetPort
            // 
            this.btnGetPort.Location = new System.Drawing.Point(478, 109);
            this.btnGetPort.Name = "btnGetPort";
            this.btnGetPort.Size = new System.Drawing.Size(94, 26);
            this.btnGetPort.TabIndex = 24;
            this.btnGetPort.Text = "Get LAN Port";
            this.btnGetPort.UseVisualStyleBackColor = true;
            this.btnGetPort.Click += new System.EventHandler(this.btnGetPort_Click);
            // 
            // Label17
            // 
            this.Label17.AutoSize = true;
            this.Label17.Location = new System.Drawing.Point(330, 96);
            this.Label17.Name = "Label17";
            this.Label17.Size = new System.Drawing.Size(88, 13);
            this.Label17.TabIndex = 23;
            this.Label17.Text = "LAN Port number";
            // 
            // txtlan_port
            // 
            this.txtlan_port.Enabled = false;
            this.txtlan_port.Location = new System.Drawing.Point(332, 112);
            this.txtlan_port.Name = "txtlan_port";
            this.txtlan_port.Size = new System.Drawing.Size(135, 20);
            this.txtlan_port.TabIndex = 22;
            // 
            // Label16
            // 
            this.Label16.AutoSize = true;
            this.Label16.Location = new System.Drawing.Point(62, 96);
            this.Label16.Name = "Label16";
            this.Label16.Size = new System.Drawing.Size(58, 13);
            this.Label16.TabIndex = 21;
            this.Label16.Text = "IP Address";
            // 
            // txtip_add
            // 
            this.txtip_add.Enabled = false;
            this.txtip_add.Location = new System.Drawing.Point(57, 112);
            this.txtip_add.Name = "txtip_add";
            this.txtip_add.Size = new System.Drawing.Size(135, 20);
            this.txtip_add.TabIndex = 20;
            // 
            // btnGetIP
            // 
            this.btnGetIP.Location = new System.Drawing.Point(198, 109);
            this.btnGetIP.Name = "btnGetIP";
            this.btnGetIP.Size = new System.Drawing.Size(94, 26);
            this.btnGetIP.TabIndex = 19;
            this.btnGetIP.Text = "Get IP Address";
            this.btnGetIP.UseVisualStyleBackColor = true;
            this.btnGetIP.Click += new System.EventHandler(this.btnGetIP_Click);
            // 
            // PCUSample
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(807, 592);
            this.Controls.Add(this.GroupBox10);
            this.Controls.Add(this.GroupBox1);
            this.Controls.Add(this.GroupBox5);
            this.Name = "PCUSample";
            this.Text = "PCUSample";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.GroupBox7.ResumeLayout(false);
            this.GroupBox7.PerformLayout();
            this.GroupBox6.ResumeLayout(false);
            this.GroupBox6.PerformLayout();
            this.GroupBox10.ResumeLayout(false);
            this.GroupBox10.PerformLayout();
            this.GroupBox1.ResumeLayout(false);
            this.GroupBox1.PerformLayout();
            this.GroupBox9.ResumeLayout(false);
            this.GroupBox9.PerformLayout();
            this.GroupBox2.ResumeLayout(false);
            this.GroupBox2.PerformLayout();
            this.GroupBox4.ResumeLayout(false);
            this.GroupBox4.PerformLayout();
            this.GroupBox3.ResumeLayout(false);
            this.GroupBox3.PerformLayout();
            this.GroupBox5.ResumeLayout(false);
            this.GroupBox5.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        internal System.Windows.Forms.GroupBox GroupBox7;
        internal System.Windows.Forms.TextBox txtcurrentrange;
        internal System.Windows.Forms.Button btnAdjust_Range;
        internal System.Windows.Forms.Button btnGet_Range;
        internal System.Windows.Forms.Label Label14;
        internal System.Windows.Forms.TextBox txt100controlid;
        internal System.Windows.Forms.Label Label3;
        internal System.Windows.Forms.TextBox txtport;
        internal System.Windows.Forms.RadioButton rdolan;
        internal System.Windows.Forms.RadioButton rdousb;
        internal System.Windows.Forms.RadioButton rdokeysightvisa;
        internal System.Windows.Forms.RadioButton rdonivisa;
        internal System.Windows.Forms.GroupBox GroupBox6;
        internal System.Windows.Forms.Label Label7;
        internal System.Windows.Forms.Button btnSet_SOP;
        internal System.Windows.Forms.ComboBox cmbsop;
        internal System.Windows.Forms.GroupBox GroupBox10;
        internal System.Windows.Forms.Button btnControl_ID;
        internal System.Windows.Forms.Label Label13;
        internal System.Windows.Forms.ComboBox cmb100controlid;
        internal System.Windows.Forms.Label Label12;
        internal System.Windows.Forms.TextBox txtdev_num;
        internal System.Windows.Forms.Label Label11;
        internal System.Windows.Forms.Label Label10;
        internal System.Windows.Forms.TextBox txtaddressnum;
        internal System.Windows.Forms.TextBox txtboad;
        internal System.Windows.Forms.Button btnSplit;
        internal System.Windows.Forms.Button btnGet_resouce;
        internal System.Windows.Forms.Label Label9;
        internal System.Windows.Forms.Label Label8;
        internal System.Windows.Forms.Button btnUsb_resouce;
        internal System.Windows.Forms.ComboBox cmbusbresouce;
        internal System.Windows.Forms.ComboBox cmbgpib_resouce;
        internal System.Windows.Forms.RadioButton rdo488;
        internal System.Windows.Forms.GroupBox GroupBox1;
        internal System.Windows.Forms.GroupBox GroupBox9;
        internal System.Windows.Forms.RadioButton rdo110;
        internal System.Windows.Forms.RadioButton rdo100;
        internal System.Windows.Forms.GroupBox GroupBox2;
        internal System.Windows.Forms.Label lblwavelength;
        internal System.Windows.Forms.Label lblserial;
        internal System.Windows.Forms.Label lblvesion;
        internal System.Windows.Forms.Label lblprduct;
        internal System.Windows.Forms.Label Label15;
        internal System.Windows.Forms.Label Label6;
        internal System.Windows.Forms.Label Label5;
        internal System.Windows.Forms.Label Label4;
        internal System.Windows.Forms.GroupBox GroupBox4;
        internal System.Windows.Forms.RadioButton rdocrlf;
        internal System.Windows.Forms.RadioButton rdolf;
        internal System.Windows.Forms.RadioButton rdocr;
        internal System.Windows.Forms.Button btnDisConnect;
        internal System.Windows.Forms.Button btnConnect;
        internal System.Windows.Forms.GroupBox GroupBox3;
        internal System.Windows.Forms.Label Label2;
        internal System.Windows.Forms.TextBox txtaddress;
        internal System.Windows.Forms.GroupBox GroupBox5;
        internal System.Windows.Forms.Button btnGetPort;
        internal System.Windows.Forms.Label Label17;
        internal System.Windows.Forms.TextBox txtlan_port;
        internal System.Windows.Forms.Label Label16;
        internal System.Windows.Forms.TextBox txtip_add;
        internal System.Windows.Forms.Button btnGetIP;
    }
}

