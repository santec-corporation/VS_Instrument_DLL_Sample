<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class Main
    Inherits System.Windows.Forms.Form

    'Form 重写 Dispose，以清理组件列表。
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

    'Windows 窗体设计器所必需的
    Private components As System.ComponentModel.IContainer

    '注意: 以下过程是 Windows 窗体设计器所必需的
    '可以使用 Windows 窗体设计器修改它。  
    '不要使用代码编辑器修改它。
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.btnOSU = New System.Windows.Forms.Button()
        Me.btnPCU = New System.Windows.Forms.Button()
        Me.btnMPM = New System.Windows.Forms.Button()
        Me.btnTSL = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'btnOSU
        '
        Me.btnOSU.BackColor = System.Drawing.SystemColors.ActiveCaption
        Me.btnOSU.FlatAppearance.BorderSize = 0
        Me.btnOSU.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.btnOSU.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnOSU.ForeColor = System.Drawing.Color.White
        Me.btnOSU.Location = New System.Drawing.Point(261, 168)
        Me.btnOSU.Name = "btnOSU"
        Me.btnOSU.Size = New System.Drawing.Size(108, 58)
        Me.btnOSU.TabIndex = 7
        Me.btnOSU.Text = "OSU"
        Me.btnOSU.UseVisualStyleBackColor = False
        '
        'btnPCU
        '
        Me.btnPCU.BackColor = System.Drawing.SystemColors.ActiveCaption
        Me.btnPCU.FlatAppearance.BorderSize = 0
        Me.btnPCU.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.btnPCU.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnPCU.ForeColor = System.Drawing.Color.White
        Me.btnPCU.Location = New System.Drawing.Point(68, 168)
        Me.btnPCU.Name = "btnPCU"
        Me.btnPCU.Size = New System.Drawing.Size(108, 58)
        Me.btnPCU.TabIndex = 6
        Me.btnPCU.Text = "PCU"
        Me.btnPCU.UseVisualStyleBackColor = False
        '
        'btnMPM
        '
        Me.btnMPM.BackColor = System.Drawing.SystemColors.ActiveCaption
        Me.btnMPM.FlatAppearance.BorderSize = 0
        Me.btnMPM.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.btnMPM.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnMPM.ForeColor = System.Drawing.Color.White
        Me.btnMPM.Location = New System.Drawing.Point(261, 69)
        Me.btnMPM.Name = "btnMPM"
        Me.btnMPM.Size = New System.Drawing.Size(108, 58)
        Me.btnMPM.TabIndex = 5
        Me.btnMPM.Text = "MPM"
        Me.btnMPM.UseVisualStyleBackColor = False
        '
        'btnTSL
        '
        Me.btnTSL.BackColor = System.Drawing.SystemColors.ActiveCaption
        Me.btnTSL.FlatAppearance.BorderSize = 0
        Me.btnTSL.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.btnTSL.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnTSL.ForeColor = System.Drawing.Color.White
        Me.btnTSL.Location = New System.Drawing.Point(68, 69)
        Me.btnTSL.Name = "btnTSL"
        Me.btnTSL.Size = New System.Drawing.Size(108, 58)
        Me.btnTSL.TabIndex = 4
        Me.btnTSL.Text = "TSL"
        Me.btnTSL.UseVisualStyleBackColor = False
        '
        'Main
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(451, 331)
        Me.Controls.Add(Me.btnOSU)
        Me.Controls.Add(Me.btnPCU)
        Me.Controls.Add(Me.btnMPM)
        Me.Controls.Add(Me.btnTSL)
        Me.Name = "Main"
        Me.Text = "Main"
        Me.ResumeLayout(False)

    End Sub

    Private WithEvents btnOSU As Button
    Private WithEvents btnPCU As Button
    Private WithEvents btnMPM As Button
    Private WithEvents btnTSL As Button
End Class
