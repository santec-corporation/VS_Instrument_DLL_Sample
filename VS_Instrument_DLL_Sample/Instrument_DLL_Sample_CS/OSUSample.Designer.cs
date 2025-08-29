namespace Instrument_DLL_Sample
{
    partial class OSUSample
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.cmbch = new System.Windows.Forms.ComboBox();
            this.GroupBox2 = new System.Windows.Forms.GroupBox();
            this.Label2 = new System.Windows.Forms.Label();
            this.Button2 = new System.Windows.Forms.Button();
            this.Button3 = new System.Windows.Forms.Button();
            this.Button1 = new System.Windows.Forms.Button();
            this.Label4 = new System.Windows.Forms.Label();
            this.rdiNI488 = new System.Windows.Forms.RadioButton();
            this.Group110 = new System.Windows.Forms.GroupBox();
            this.cmbosu_usb = new System.Windows.Forms.ComboBox();
            this.rdiUSB = new System.Windows.Forms.RadioButton();
            this.rdiNIvisa = new System.Windows.Forms.RadioButton();
            this.Label58 = new System.Windows.Forms.Label();
            this.rdikysightvisa = new System.Windows.Forms.RadioButton();
            this.rdoLAN = new System.Windows.Forms.RadioButton();
            this.txtAddress = new System.Windows.Forms.TextBox();
            this.txtPort = new System.Windows.Forms.TextBox();
            this.Label3 = new System.Windows.Forms.Label();
            this.GroupBox1 = new System.Windows.Forms.GroupBox();
            this.GroupBox18 = new System.Windows.Forms.GroupBox();
            this.rdo110 = new System.Windows.Forms.RadioButton();
            this.rdo100 = new System.Windows.Forms.RadioButton();
            this.GroupBox21 = new System.Windows.Forms.GroupBox();
            this.Group100 = new System.Windows.Forms.GroupBox();
            this.cmbdevname = new System.Windows.Forms.ComboBox();
            this.Label1 = new System.Windows.Forms.Label();
            this.GroupBox2.SuspendLayout();
            this.Group110.SuspendLayout();
            this.GroupBox1.SuspendLayout();
            this.GroupBox18.SuspendLayout();
            this.GroupBox21.SuspendLayout();
            this.Group100.SuspendLayout();
            this.SuspendLayout();
            // 
            // cmbch
            // 
            this.cmbch.FormattingEnabled = true;
            this.cmbch.Items.AddRange(new object[] {
            "Ch1",
            "Ch2",
            "Ch3",
            "Ch4"});
            this.cmbch.Location = new System.Drawing.Point(33, 51);
            this.cmbch.Name = "cmbch";
            this.cmbch.Size = new System.Drawing.Size(137, 21);
            this.cmbch.TabIndex = 4;
            // 
            // GroupBox2
            // 
            this.GroupBox2.Controls.Add(this.Label2);
            this.GroupBox2.Controls.Add(this.cmbch);
            this.GroupBox2.Controls.Add(this.Button2);
            this.GroupBox2.Location = new System.Drawing.Point(11, 344);
            this.GroupBox2.Name = "GroupBox2";
            this.GroupBox2.Size = new System.Drawing.Size(702, 96);
            this.GroupBox2.TabIndex = 3;
            this.GroupBox2.TabStop = false;
            this.GroupBox2.Text = "2. Setting function";
            // 
            // Label2
            // 
            this.Label2.AutoSize = true;
            this.Label2.Location = new System.Drawing.Point(40, 31);
            this.Label2.Name = "Label2";
            this.Label2.Size = new System.Drawing.Size(45, 13);
            this.Label2.TabIndex = 5;
            this.Label2.Text = "channel";
            // 
            // Button2
            // 
            this.Button2.Location = new System.Drawing.Point(196, 42);
            this.Button2.Name = "Button2";
            this.Button2.Size = new System.Drawing.Size(84, 37);
            this.Button2.TabIndex = 3;
            this.Button2.Text = "Switch";
            this.Button2.UseVisualStyleBackColor = true;
            this.Button2.Click += new System.EventHandler(this.btnSwitch_Click);
            // 
            // Button3
            // 
            this.Button3.Location = new System.Drawing.Point(586, 257);
            this.Button3.Name = "Button3";
            this.Button3.Size = new System.Drawing.Size(83, 28);
            this.Button3.TabIndex = 3;
            this.Button3.Text = "Dis connect";
            this.Button3.UseVisualStyleBackColor = true;
            this.Button3.Click += new System.EventHandler(this.btnDisconnect_Click);
            // 
            // Button1
            // 
            this.Button1.Location = new System.Drawing.Point(497, 257);
            this.Button1.Name = "Button1";
            this.Button1.Size = new System.Drawing.Size(83, 28);
            this.Button1.TabIndex = 2;
            this.Button1.Text = "Connect";
            this.Button1.UseVisualStyleBackColor = true;
            this.Button1.Click += new System.EventHandler(this.btnConnect_Click);
            // 
            // Label4
            // 
            this.Label4.AutoSize = true;
            this.Label4.Location = new System.Drawing.Point(13, 141);
            this.Label4.Name = "Label4";
            this.Label4.Size = new System.Drawing.Size(78, 13);
            this.Label4.TabIndex = 27;
            this.Label4.Text = "USB Resource";
            // 
            // rdiNI488
            // 
            this.rdiNI488.AutoSize = true;
            this.rdiNI488.Checked = true;
            this.rdiNI488.Location = new System.Drawing.Point(15, 20);
            this.rdiNI488.Name = "rdiNI488";
            this.rdiNI488.Size = new System.Drawing.Size(63, 17);
            this.rdiNI488.TabIndex = 16;
            this.rdiNI488.TabStop = true;
            this.rdiNI488.Text = "NI488.2";
            this.rdiNI488.UseVisualStyleBackColor = true;
            // 
            // Group110
            // 
            this.Group110.Controls.Add(this.Label4);
            this.Group110.Controls.Add(this.rdiNI488);
            this.Group110.Controls.Add(this.cmbosu_usb);
            this.Group110.Controls.Add(this.rdiUSB);
            this.Group110.Controls.Add(this.rdiNIvisa);
            this.Group110.Controls.Add(this.Label58);
            this.Group110.Controls.Add(this.rdikysightvisa);
            this.Group110.Controls.Add(this.rdoLAN);
            this.Group110.Controls.Add(this.txtAddress);
            this.Group110.Controls.Add(this.txtPort);
            this.Group110.Controls.Add(this.Label3);
            this.Group110.Location = new System.Drawing.Point(6, 20);
            this.Group110.Name = "Group110";
            this.Group110.Size = new System.Drawing.Size(331, 190);
            this.Group110.TabIndex = 21;
            this.Group110.TabStop = false;
            this.Group110.Text = "OSU-110";
            // 
            // cmbosu_usb
            // 
            this.cmbosu_usb.FormattingEnabled = true;
            this.cmbosu_usb.Location = new System.Drawing.Point(6, 157);
            this.cmbosu_usb.Name = "cmbosu_usb";
            this.cmbosu_usb.Size = new System.Drawing.Size(172, 21);
            this.cmbosu_usb.TabIndex = 26;
            // 
            // rdiUSB
            // 
            this.rdiUSB.AutoSize = true;
            this.rdiUSB.Location = new System.Drawing.Point(87, 50);
            this.rdiUSB.Name = "rdiUSB";
            this.rdiUSB.Size = new System.Drawing.Size(47, 17);
            this.rdiUSB.TabIndex = 19;
            this.rdiUSB.Text = "USB";
            this.rdiUSB.UseVisualStyleBackColor = true;
            // 
            // rdiNIvisa
            // 
            this.rdiNIvisa.AutoSize = true;
            this.rdiNIvisa.Location = new System.Drawing.Point(87, 20);
            this.rdiNIvisa.Name = "rdiNIvisa";
            this.rdiNIvisa.Size = new System.Drawing.Size(56, 17);
            this.rdiNIvisa.TabIndex = 17;
            this.rdiNIvisa.Text = "NIVisa";
            this.rdiNIvisa.UseVisualStyleBackColor = true;
            // 
            // Label58
            // 
            this.Label58.AutoSize = true;
            this.Label58.Location = new System.Drawing.Point(187, 88);
            this.Label58.Name = "Label58";
            this.Label58.Size = new System.Drawing.Size(91, 13);
            this.Label58.TabIndex = 22;
            this.Label58.Text = "Port number(LAN)";
            // 
            // rdikysightvisa
            // 
            this.rdikysightvisa.AutoSize = true;
            this.rdikysightvisa.Location = new System.Drawing.Point(159, 20);
            this.rdikysightvisa.Name = "rdikysightvisa";
            this.rdikysightvisa.Size = new System.Drawing.Size(85, 17);
            this.rdikysightvisa.TabIndex = 18;
            this.rdikysightvisa.Text = "KeysightVisa";
            this.rdikysightvisa.UseVisualStyleBackColor = true;
            // 
            // rdoLAN
            // 
            this.rdoLAN.AutoSize = true;
            this.rdoLAN.Location = new System.Drawing.Point(15, 50);
            this.rdoLAN.Name = "rdoLAN";
            this.rdoLAN.Size = new System.Drawing.Size(46, 17);
            this.rdoLAN.TabIndex = 20;
            this.rdoLAN.Text = "LAN";
            this.rdoLAN.UseVisualStyleBackColor = true;
            this.rdoLAN.CheckedChanged += new System.EventHandler(this.rdoLAN_CheckedChanged);
            this.rdoLAN.Click += new System.EventHandler(this.rdoLAN_CheckedChanged);
            // 
            // txtAddress
            // 
            this.txtAddress.Location = new System.Drawing.Point(8, 104);
            this.txtAddress.Name = "txtAddress";
            this.txtAddress.Size = new System.Drawing.Size(175, 20);
            this.txtAddress.TabIndex = 23;
            // 
            // txtPort
            // 
            this.txtPort.Location = new System.Drawing.Point(189, 104);
            this.txtPort.Name = "txtPort";
            this.txtPort.Size = new System.Drawing.Size(112, 20);
            this.txtPort.TabIndex = 21;
            // 
            // Label3
            // 
            this.Label3.AutoSize = true;
            this.Label3.Location = new System.Drawing.Point(9, 88);
            this.Label3.Name = "Label3";
            this.Label3.Size = new System.Drawing.Size(109, 13);
            this.Label3.TabIndex = 1;
            this.Label3.Text = "Address(GPIB、LAN)";
            // 
            // GroupBox1
            // 
            this.GroupBox1.Controls.Add(this.GroupBox18);
            this.GroupBox1.Controls.Add(this.GroupBox21);
            this.GroupBox1.Controls.Add(this.Button3);
            this.GroupBox1.Controls.Add(this.Button1);
            this.GroupBox1.Location = new System.Drawing.Point(11, 15);
            this.GroupBox1.Name = "GroupBox1";
            this.GroupBox1.Size = new System.Drawing.Size(702, 306);
            this.GroupBox1.TabIndex = 2;
            this.GroupBox1.TabStop = false;
            this.GroupBox1.Text = "1.Connect";
            // 
            // GroupBox18
            // 
            this.GroupBox18.Controls.Add(this.rdo110);
            this.GroupBox18.Controls.Add(this.rdo100);
            this.GroupBox18.Location = new System.Drawing.Point(6, 20);
            this.GroupBox18.Name = "GroupBox18";
            this.GroupBox18.Size = new System.Drawing.Size(137, 221);
            this.GroupBox18.TabIndex = 25;
            this.GroupBox18.TabStop = false;
            this.GroupBox18.Text = "Target";
            // 
            // rdo110
            // 
            this.rdo110.AutoSize = true;
            this.rdo110.Location = new System.Drawing.Point(21, 56);
            this.rdo110.Name = "rdo110";
            this.rdo110.Size = new System.Drawing.Size(69, 17);
            this.rdo110.TabIndex = 1;
            this.rdo110.Text = "OSU-110";
            this.rdo110.UseVisualStyleBackColor = true;
            this.rdo110.CheckedChanged += new System.EventHandler(this.rdo110_CheckedChanged);
            this.rdo110.Click += new System.EventHandler(this.rdo110_CheckedChanged);
            // 
            // rdo100
            // 
            this.rdo100.AutoSize = true;
            this.rdo100.Checked = true;
            this.rdo100.Location = new System.Drawing.Point(21, 31);
            this.rdo100.Name = "rdo100";
            this.rdo100.Size = new System.Drawing.Size(69, 17);
            this.rdo100.TabIndex = 0;
            this.rdo100.TabStop = true;
            this.rdo100.Text = "OSU-100";
            this.rdo100.UseVisualStyleBackColor = true;
            this.rdo100.CheckedChanged += new System.EventHandler(this.rdo100_CheckedChanged);
            this.rdo100.Click += new System.EventHandler(this.rdo100_CheckedChanged);
            // 
            // GroupBox21
            // 
            this.GroupBox21.Controls.Add(this.Group100);
            this.GroupBox21.Controls.Add(this.Group110);
            this.GroupBox21.Location = new System.Drawing.Point(149, 20);
            this.GroupBox21.Name = "GroupBox21";
            this.GroupBox21.Size = new System.Drawing.Size(537, 221);
            this.GroupBox21.TabIndex = 24;
            this.GroupBox21.TabStop = false;
            this.GroupBox21.Text = "Communication";
            // 
            // Group100
            // 
            this.Group100.Controls.Add(this.cmbdevname);
            this.Group100.Controls.Add(this.Label1);
            this.Group100.Location = new System.Drawing.Point(356, 20);
            this.Group100.Name = "Group100";
            this.Group100.Size = new System.Drawing.Size(164, 190);
            this.Group100.TabIndex = 21;
            this.Group100.TabStop = false;
            this.Group100.Text = "OSU-100";
            // 
            // cmbdevname
            // 
            this.cmbdevname.FormattingEnabled = true;
            this.cmbdevname.Location = new System.Drawing.Point(6, 46);
            this.cmbdevname.Name = "cmbdevname";
            this.cmbdevname.Size = new System.Drawing.Size(137, 21);
            this.cmbdevname.TabIndex = 0;
            // 
            // Label1
            // 
            this.Label1.AutoSize = true;
            this.Label1.Location = new System.Drawing.Point(6, 22);
            this.Label1.Name = "Label1";
            this.Label1.Size = new System.Drawing.Size(68, 13);
            this.Label1.TabIndex = 1;
            this.Label1.Text = "device name";
            // 
            // OSUSample
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(725, 454);
            this.Controls.Add(this.GroupBox2);
            this.Controls.Add(this.GroupBox1);
            this.Name = "OSUSample";
            this.Text = "OSUSample";
            this.Load += new System.EventHandler(this.OSUSample_Load);
            this.Click += new System.EventHandler(this.OSUSample_Load);
            this.GroupBox2.ResumeLayout(false);
            this.GroupBox2.PerformLayout();
            this.Group110.ResumeLayout(false);
            this.Group110.PerformLayout();
            this.GroupBox1.ResumeLayout(false);
            this.GroupBox18.ResumeLayout(false);
            this.GroupBox18.PerformLayout();
            this.GroupBox21.ResumeLayout(false);
            this.Group100.ResumeLayout(false);
            this.Group100.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        internal System.Windows.Forms.ComboBox cmbch;
        internal System.Windows.Forms.GroupBox GroupBox2;
        internal System.Windows.Forms.Label Label2;
        internal System.Windows.Forms.Button Button2;
        internal System.Windows.Forms.Button Button3;
        internal System.Windows.Forms.Button Button1;
        internal System.Windows.Forms.Label Label4;
        internal System.Windows.Forms.RadioButton rdiNI488;
        internal System.Windows.Forms.GroupBox Group110;
        internal System.Windows.Forms.ComboBox cmbosu_usb;
        internal System.Windows.Forms.RadioButton rdiUSB;
        internal System.Windows.Forms.RadioButton rdiNIvisa;
        internal System.Windows.Forms.Label Label58;
        internal System.Windows.Forms.RadioButton rdikysightvisa;
        internal System.Windows.Forms.RadioButton rdoLAN;
        internal System.Windows.Forms.TextBox txtAddress;
        internal System.Windows.Forms.TextBox txtPort;
        internal System.Windows.Forms.Label Label3;
        internal System.Windows.Forms.GroupBox GroupBox1;
        internal System.Windows.Forms.GroupBox GroupBox18;
        internal System.Windows.Forms.RadioButton rdo110;
        internal System.Windows.Forms.RadioButton rdo100;
        internal System.Windows.Forms.GroupBox GroupBox21;
        internal System.Windows.Forms.GroupBox Group100;
        internal System.Windows.Forms.ComboBox cmbdevname;
        internal System.Windows.Forms.Label Label1;
    }
}