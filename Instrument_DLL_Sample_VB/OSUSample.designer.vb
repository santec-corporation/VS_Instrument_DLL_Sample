<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class OSUSample
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
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.GroupBox18 = New System.Windows.Forms.GroupBox()
        Me.rdo110 = New System.Windows.Forms.RadioButton()
        Me.rdo100 = New System.Windows.Forms.RadioButton()
        Me.GroupBox21 = New System.Windows.Forms.GroupBox()
        Me.Group100 = New System.Windows.Forms.GroupBox()
        Me.cmbdevname = New System.Windows.Forms.ComboBox()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Group110 = New System.Windows.Forms.GroupBox()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.rdiNI488 = New System.Windows.Forms.RadioButton()
        Me.cmbosu_usb = New System.Windows.Forms.ComboBox()
        Me.rdiUSB = New System.Windows.Forms.RadioButton()
        Me.rdiNIvisa = New System.Windows.Forms.RadioButton()
        Me.Label58 = New System.Windows.Forms.Label()
        Me.rdikysightvisa = New System.Windows.Forms.RadioButton()
        Me.rdoLAN = New System.Windows.Forms.RadioButton()
        Me.txtAddress = New System.Windows.Forms.TextBox()
        Me.txtPort = New System.Windows.Forms.TextBox()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Button3 = New System.Windows.Forms.Button()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.GroupBox2 = New System.Windows.Forms.GroupBox()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.cmbch = New System.Windows.Forms.ComboBox()
        Me.Button2 = New System.Windows.Forms.Button()
        Me.GroupBox1.SuspendLayout()
        Me.GroupBox18.SuspendLayout()
        Me.GroupBox21.SuspendLayout()
        Me.Group100.SuspendLayout()
        Me.Group110.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.SuspendLayout()
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.GroupBox18)
        Me.GroupBox1.Controls.Add(Me.GroupBox21)
        Me.GroupBox1.Controls.Add(Me.Button3)
        Me.GroupBox1.Controls.Add(Me.Button1)
        Me.GroupBox1.Location = New System.Drawing.Point(12, 12)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(702, 282)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "1.Connect"
        '
        'GroupBox18
        '
        Me.GroupBox18.Controls.Add(Me.rdo110)
        Me.GroupBox18.Controls.Add(Me.rdo100)
        Me.GroupBox18.Location = New System.Drawing.Point(6, 18)
        Me.GroupBox18.Name = "GroupBox18"
        Me.GroupBox18.Size = New System.Drawing.Size(137, 204)
        Me.GroupBox18.TabIndex = 25
        Me.GroupBox18.TabStop = False
        Me.GroupBox18.Text = "Target"
        '
        'rdo110
        '
        Me.rdo110.AutoSize = True
        Me.rdo110.Location = New System.Drawing.Point(21, 52)
        Me.rdo110.Name = "rdo110"
        Me.rdo110.Size = New System.Drawing.Size(70, 16)
        Me.rdo110.TabIndex = 1
        Me.rdo110.Text = "OSU-110"
        Me.rdo110.UseVisualStyleBackColor = True
        '
        'rdo100
        '
        Me.rdo100.AutoSize = True
        Me.rdo100.Checked = True
        Me.rdo100.Location = New System.Drawing.Point(21, 29)
        Me.rdo100.Name = "rdo100"
        Me.rdo100.Size = New System.Drawing.Size(70, 16)
        Me.rdo100.TabIndex = 0
        Me.rdo100.TabStop = True
        Me.rdo100.Text = "OSU-100"
        Me.rdo100.UseVisualStyleBackColor = True
        '
        'GroupBox21
        '
        Me.GroupBox21.Controls.Add(Me.Group100)
        Me.GroupBox21.Controls.Add(Me.Group110)
        Me.GroupBox21.Location = New System.Drawing.Point(149, 18)
        Me.GroupBox21.Name = "GroupBox21"
        Me.GroupBox21.Size = New System.Drawing.Size(537, 204)
        Me.GroupBox21.TabIndex = 24
        Me.GroupBox21.TabStop = False
        Me.GroupBox21.Text = "Communication"
        '
        'Group100
        '
        Me.Group100.Controls.Add(Me.cmbdevname)
        Me.Group100.Controls.Add(Me.Label1)
        Me.Group100.Location = New System.Drawing.Point(356, 18)
        Me.Group100.Name = "Group100"
        Me.Group100.Size = New System.Drawing.Size(164, 175)
        Me.Group100.TabIndex = 21
        Me.Group100.TabStop = False
        Me.Group100.Text = "OSU-100"
        '
        'cmbdevname
        '
        Me.cmbdevname.FormattingEnabled = True
        Me.cmbdevname.Location = New System.Drawing.Point(6, 42)
        Me.cmbdevname.Name = "cmbdevname"
        Me.cmbdevname.Size = New System.Drawing.Size(137, 20)
        Me.cmbdevname.TabIndex = 0
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(6, 20)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(69, 12)
        Me.Label1.TabIndex = 1
        Me.Label1.Text = "device name"
        '
        'Group110
        '
        Me.Group110.Controls.Add(Me.Label4)
        Me.Group110.Controls.Add(Me.rdiNI488)
        Me.Group110.Controls.Add(Me.cmbosu_usb)
        Me.Group110.Controls.Add(Me.rdiUSB)
        Me.Group110.Controls.Add(Me.rdiNIvisa)
        Me.Group110.Controls.Add(Me.Label58)
        Me.Group110.Controls.Add(Me.rdikysightvisa)
        Me.Group110.Controls.Add(Me.rdoLAN)
        Me.Group110.Controls.Add(Me.txtAddress)
        Me.Group110.Controls.Add(Me.txtPort)
        Me.Group110.Controls.Add(Me.Label3)
        Me.Group110.Location = New System.Drawing.Point(6, 18)
        Me.Group110.Name = "Group110"
        Me.Group110.Size = New System.Drawing.Size(331, 175)
        Me.Group110.TabIndex = 21
        Me.Group110.TabStop = False
        Me.Group110.Text = "OSU-110"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(13, 130)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(80, 12)
        Me.Label4.TabIndex = 27
        Me.Label4.Text = "USB Resource"
        '
        'rdiNI488
        '
        Me.rdiNI488.AutoSize = True
        Me.rdiNI488.Checked = True
        Me.rdiNI488.Location = New System.Drawing.Point(15, 18)
        Me.rdiNI488.Name = "rdiNI488"
        Me.rdiNI488.Size = New System.Drawing.Size(60, 16)
        Me.rdiNI488.TabIndex = 16
        Me.rdiNI488.TabStop = True
        Me.rdiNI488.Text = "NI488.2"
        Me.rdiNI488.UseVisualStyleBackColor = True
        '
        'cmbosu_usb
        '
        Me.cmbosu_usb.FormattingEnabled = True
        Me.cmbosu_usb.Location = New System.Drawing.Point(6, 145)
        Me.cmbosu_usb.Name = "cmbosu_usb"
        Me.cmbosu_usb.Size = New System.Drawing.Size(172, 20)
        Me.cmbosu_usb.TabIndex = 26
        '
        'rdiUSB
        '
        Me.rdiUSB.AutoSize = True
        Me.rdiUSB.Location = New System.Drawing.Point(87, 46)
        Me.rdiUSB.Name = "rdiUSB"
        Me.rdiUSB.Size = New System.Drawing.Size(46, 16)
        Me.rdiUSB.TabIndex = 19
        Me.rdiUSB.Text = "USB"
        Me.rdiUSB.UseVisualStyleBackColor = True
        '
        'rdiNIvisa
        '
        Me.rdiNIvisa.AutoSize = True
        Me.rdiNIvisa.Location = New System.Drawing.Point(87, 18)
        Me.rdiNIvisa.Name = "rdiNIvisa"
        Me.rdiNIvisa.Size = New System.Drawing.Size(57, 16)
        Me.rdiNIvisa.TabIndex = 17
        Me.rdiNIvisa.Text = "NIVisa"
        Me.rdiNIvisa.UseVisualStyleBackColor = True
        '
        'Label58
        '
        Me.Label58.AutoSize = True
        Me.Label58.Location = New System.Drawing.Point(187, 81)
        Me.Label58.Name = "Label58"
        Me.Label58.Size = New System.Drawing.Size(97, 12)
        Me.Label58.TabIndex = 22
        Me.Label58.Text = "Port number(LAN)"
        '
        'rdikysightvisa
        '
        Me.rdikysightvisa.AutoSize = True
        Me.rdikysightvisa.Location = New System.Drawing.Point(159, 18)
        Me.rdikysightvisa.Name = "rdikysightvisa"
        Me.rdikysightvisa.Size = New System.Drawing.Size(90, 16)
        Me.rdikysightvisa.TabIndex = 18
        Me.rdikysightvisa.Text = "KeysightVisa"
        Me.rdikysightvisa.UseVisualStyleBackColor = True
        '
        'rdoLAN
        '
        Me.rdoLAN.AutoSize = True
        Me.rdoLAN.Location = New System.Drawing.Point(15, 46)
        Me.rdoLAN.Name = "rdoLAN"
        Me.rdoLAN.Size = New System.Drawing.Size(45, 16)
        Me.rdoLAN.TabIndex = 20
        Me.rdoLAN.Text = "LAN"
        Me.rdoLAN.UseVisualStyleBackColor = True
        '
        'txtAddress
        '
        Me.txtAddress.Location = New System.Drawing.Point(8, 96)
        Me.txtAddress.Name = "txtAddress"
        Me.txtAddress.Size = New System.Drawing.Size(175, 19)
        Me.txtAddress.TabIndex = 23
        '
        'txtPort
        '
        Me.txtPort.Location = New System.Drawing.Point(189, 96)
        Me.txtPort.Name = "txtPort"
        Me.txtPort.Size = New System.Drawing.Size(112, 19)
        Me.txtPort.TabIndex = 21
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(9, 81)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(111, 12)
        Me.Label3.TabIndex = 1
        Me.Label3.Text = "Address(GPIB、LAN)"
        '
        'Button3
        '
        Me.Button3.Location = New System.Drawing.Point(586, 237)
        Me.Button3.Name = "Button3"
        Me.Button3.Size = New System.Drawing.Size(83, 26)
        Me.Button3.TabIndex = 3
        Me.Button3.Text = "Dis connect"
        Me.Button3.UseVisualStyleBackColor = True
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(497, 237)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(83, 26)
        Me.Button1.TabIndex = 2
        Me.Button1.Text = "Connect"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.Label2)
        Me.GroupBox2.Controls.Add(Me.cmbch)
        Me.GroupBox2.Controls.Add(Me.Button2)
        Me.GroupBox2.Location = New System.Drawing.Point(12, 316)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(702, 89)
        Me.GroupBox2.TabIndex = 1
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "2. Setting function"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(40, 29)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(44, 12)
        Me.Label2.TabIndex = 5
        Me.Label2.Text = "channel"
        '
        'cmbch
        '
        Me.cmbch.FormattingEnabled = True
        Me.cmbch.Items.AddRange(New Object() {"Ch1", "Ch2", "Ch3", "Ch4"})
        Me.cmbch.Location = New System.Drawing.Point(33, 47)
        Me.cmbch.Name = "cmbch"
        Me.cmbch.Size = New System.Drawing.Size(137, 20)
        Me.cmbch.TabIndex = 4
        '
        'Button2
        '
        Me.Button2.Location = New System.Drawing.Point(196, 39)
        Me.Button2.Name = "Button2"
        Me.Button2.Size = New System.Drawing.Size(84, 34)
        Me.Button2.TabIndex = 3
        Me.Button2.Text = "Switch"
        Me.Button2.UseVisualStyleBackColor = True
        '
        'OSUSample
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(725, 419)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.GroupBox1)
        Me.Name = "OSUSample"
        Me.Text = "OSU sample"
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox18.ResumeLayout(False)
        Me.GroupBox18.PerformLayout()
        Me.GroupBox21.ResumeLayout(False)
        Me.Group100.ResumeLayout(False)
        Me.Group100.PerformLayout()
        Me.Group110.ResumeLayout(False)
        Me.Group110.PerformLayout()
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox2.PerformLayout()
        Me.ResumeLayout(False)

    End Sub

    Friend WithEvents GroupBox1 As GroupBox
    Friend WithEvents Button1 As Button
    Friend WithEvents Label1 As Label
    Friend WithEvents cmbdevname As ComboBox
    Friend WithEvents GroupBox2 As GroupBox
    Friend WithEvents Label2 As Label
    Friend WithEvents cmbch As ComboBox
    Friend WithEvents Button2 As Button
    Friend WithEvents Button3 As Button
    Friend WithEvents GroupBox18 As GroupBox
    Friend WithEvents rdo110 As RadioButton
    Friend WithEvents rdo100 As RadioButton
    Friend WithEvents GroupBox21 As GroupBox
    Friend WithEvents rdiUSB As RadioButton
    Friend WithEvents Label58 As Label
    Friend WithEvents rdiNI488 As RadioButton
    Friend WithEvents rdikysightvisa As RadioButton
    Friend WithEvents txtPort As TextBox
    Friend WithEvents rdiNIvisa As RadioButton
    Friend WithEvents rdoLAN As RadioButton
    Friend WithEvents txtAddress As TextBox
    Friend WithEvents Label3 As Label
    Friend WithEvents Group100 As GroupBox
    Friend WithEvents Group110 As GroupBox
    Friend WithEvents cmbosu_usb As ComboBox
    Friend WithEvents Label4 As Label
End Class
