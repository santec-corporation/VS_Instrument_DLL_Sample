namespace Instrument_DLL_Sample
{
    partial class Main
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
            this.btnTSL = new System.Windows.Forms.Button();
            this.btnMPM = new System.Windows.Forms.Button();
            this.btnPCU = new System.Windows.Forms.Button();
            this.btnOSU = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnTSL
            // 
            this.btnTSL.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.btnTSL.FlatAppearance.BorderSize = 0;
            this.btnTSL.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnTSL.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnTSL.ForeColor = System.Drawing.Color.White;
            this.btnTSL.Location = new System.Drawing.Point(68, 69);
            this.btnTSL.Name = "btnTSL";
            this.btnTSL.Size = new System.Drawing.Size(108, 58);
            this.btnTSL.TabIndex = 0;
            this.btnTSL.Text = "TSL";
            this.btnTSL.UseVisualStyleBackColor = false;
            this.btnTSL.Click += new System.EventHandler(this.btnTSL_Click);
            // 
            // btnMPM
            // 
            this.btnMPM.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.btnMPM.FlatAppearance.BorderSize = 0;
            this.btnMPM.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnMPM.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnMPM.ForeColor = System.Drawing.Color.White;
            this.btnMPM.Location = new System.Drawing.Point(261, 69);
            this.btnMPM.Name = "btnMPM";
            this.btnMPM.Size = new System.Drawing.Size(108, 58);
            this.btnMPM.TabIndex = 1;
            this.btnMPM.Text = "MPM";
            this.btnMPM.UseVisualStyleBackColor = false;
            this.btnMPM.Click += new System.EventHandler(this.btnMPM_Click);
            // 
            // btnPCU
            // 
            this.btnPCU.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.btnPCU.FlatAppearance.BorderSize = 0;
            this.btnPCU.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnPCU.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnPCU.ForeColor = System.Drawing.Color.White;
            this.btnPCU.Location = new System.Drawing.Point(68, 168);
            this.btnPCU.Name = "btnPCU";
            this.btnPCU.Size = new System.Drawing.Size(108, 58);
            this.btnPCU.TabIndex = 2;
            this.btnPCU.Text = "PCU";
            this.btnPCU.UseVisualStyleBackColor = false;
            this.btnPCU.Click += new System.EventHandler(this.btnPCU_Click);
            // 
            // btnOSU
            // 
            this.btnOSU.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.btnOSU.FlatAppearance.BorderSize = 0;
            this.btnOSU.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnOSU.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnOSU.ForeColor = System.Drawing.Color.White;
            this.btnOSU.Location = new System.Drawing.Point(261, 168);
            this.btnOSU.Name = "btnOSU";
            this.btnOSU.Size = new System.Drawing.Size(108, 58);
            this.btnOSU.TabIndex = 3;
            this.btnOSU.Text = "OSU";
            this.btnOSU.UseVisualStyleBackColor = false;
            this.btnOSU.Click += new System.EventHandler(this.btnOSU_Click);
            // 
            // Main
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(451, 331);
            this.Controls.Add(this.btnOSU);
            this.Controls.Add(this.btnPCU);
            this.Controls.Add(this.btnMPM);
            this.Controls.Add(this.btnTSL);
            this.Name = "Main";
            this.Text = "Main";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnTSL;
        private System.Windows.Forms.Button btnMPM;
        private System.Windows.Forms.Button btnPCU;
        private System.Windows.Forms.Button btnOSU;
    }
}