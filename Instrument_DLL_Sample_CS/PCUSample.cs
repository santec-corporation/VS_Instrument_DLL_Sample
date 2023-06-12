using Santec;
using System;
using System.Windows.Forms;

namespace Instrument_DLL_Sample
{
    public partial class PCUSample : Form
    {
        public PCUSample()
        {
            InitializeComponent();
        }
        PCU PCU = new PCU(); //pcu control class/ / pcu控制类
        private void Show_Error(int errordata)
        {
            // ------------------------------------
            // Show error code
            // 显示错误编号
            // ------------------------------------

            string[] errorstring = Enum.GetNames(typeof(ExceptionCode));
            int[] errorvale = (int[])Enum.GetValues(typeof(ExceptionCode));
            int loop1;

            for (loop1 = 0; loop1 <= errorvale.GetUpperBound(0); loop1++)
            {
                if (errorvale[loop1] == errordata)
                {
                    MessageBox.Show(errorstring[loop1]);
                    break;
                }
            }

        }

        private void BtnConnect_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------------------------
            // Connect
            // 连接
            // ------------------------------------------------------------------
            string address =  txtaddress.Text;
            string port = string.Empty;
            Santec.Communication.GPIBConnectType gpib_type;
            Santec.Communication.CommunicationMethod com_method = new Santec.Communication.CommunicationMethod();

            // -------Communication Method
            // -------连接的方法
            if (rdokeysightvisa.Checked == true | rdo488.Checked == true | rdonivisa.Checked == true)
            {
                // ---GPIB communiction
                // ---GPIB通讯
                com_method = Santec.Communication.CommunicationMethod.GPIB;

                // --GPIB type
                // --GPIB类型
                if (rdokeysightvisa.Checked == true)
                    gpib_type = Santec.Communication.GPIBConnectType.KeysightIO;
                else if (rdonivisa.Checked == true
                 )
                    gpib_type = Santec.Communication.GPIBConnectType.NIVisa;
                else
                    gpib_type = Santec.Communication.GPIBConnectType.NI4882;

                PCU.GPIBAddress = int.Parse(txtaddress.Text);
                if (txtboad.Text == "")
                {
                    PCU.GPIBBoard = 0;
                }
                else
                {
                    PCU.GPIBBoard = Convert.ToInt32(txtboad.Text);
                }
            }


            if (rdolan.Checked == true)
            {
                // -----LAN Communication
                // -----LAN通讯
                com_method = Santec.Communication.CommunicationMethod.TCPIP;
                PCU.IPAddress = txtaddress.Text;
                PCU.Port = int.Parse(txtport.Text);
                PCU.Waittime = 20;
            }


            if (rdousb.Checked == true)
            {
                // -----USB communucation
                // -----USB通讯
                com_method = Santec.Communication.CommunicationMethod.USB;
                PCU.DeviceID = uint.Parse(txtaddress.Text);                       // USB control device id// USB控制设备id
                PCU.TimeOut = 5000;
            }


            if (rdo100.Checked == true)
                // ---Target PCU-100
                // ---目标 PCU-100
                PCU.DeviceName = txt100controlid.Text;


            // ---Tarminater
            // ---终止符
            CommunicationTerminator termineter;

            if (rdocr.Checked == true)
                termineter = CommunicationTerminator.Cr;
            else if (rdolf.Checked == true)
                termineter = CommunicationTerminator.Lf;
            else
                termineter = CommunicationTerminator.CrLf;

            PCU.Terminator = termineter;

            string ans = string.Empty;
            int errorcode;
            // --Connect
            // --连接
            errorcode = PCU.Connect(com_method);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // -----Show information
            // -----显示信息
            lblprduct.Text = PCU.Information.ProductName;
            lblserial.Text = PCU.Information.SerialNumber;
            lblvesion.Text = PCU.Information.FWversion;
            lblwavelength.Text = PCU.Information.Band;
            // -----Add set SOP to combbox
            // -----添加set SOP到combbox

            if (PCU.Information.ProductName == "PCU-110")
            {
                cmbsop.Items.Add("LVP");
                cmbsop.Items.Add("LHP");
                cmbsop.Items.Add("LP45");
                cmbsop.Items.Add("LN45");
                cmbsop.Items.Add("RCP");
                cmbsop.Items.Add("LCP");
            }
            else
            {
                cmbsop.Items.Add("LVP");
                cmbsop.Items.Add("LHP");
                cmbsop.Items.Add("LP45");
                cmbsop.Items.Add("RCP");
            }
        }

        private void BtnDisConnect_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------------------
            // Dis Connect
            // 断开连接
            // -----------------------------------------------------------

            PCU.DisConnect();

            lblprduct.Text = "";
            lblserial.Text = "";
            lblvesion.Text = "";
            lblwavelength.Text = "";

            cmbsop.Items.Clear();
            cmbsop.Text = "";
        }

        private void btnSetSOP_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------
            // Set SOP
            // 设置SOP
            // ------------------------------------------------
            int errorcode;
            PCU.SOP_Stauts sop_stauts = new PCU.SOP_Stauts();

            if (cmbsop.Text == "")
            {
                MessageBox.Show("Please enter the value.");
                return;
            }


            switch (cmbsop.Text)
            {
                case "LVP":
                    {
                        sop_stauts = PCU.SOP_Stauts.LVP;
                        break;
                    }

                case "LHP":
                    {
                        sop_stauts = PCU.SOP_Stauts.LHP;
                        break;
                    }

                case "LP45":
                    {
                        sop_stauts = PCU.SOP_Stauts.LP45;
                        break;
                    }

                case "LN45":
                    {
                        sop_stauts = PCU.SOP_Stauts.LN45;
                        break;
                    }

                case "RCP":
                    {
                        sop_stauts = PCU.SOP_Stauts.RCP;
                        break;
                    }

                case "LCP":
                    {
                        sop_stauts = PCU.SOP_Stauts.LCP;
                        break;
                    }
            }
            errorcode = PCU.Set_SOP_Stauts(sop_stauts);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }
        }

        private void btnAdjust_range_Click(object sender, EventArgs e)
        {
            //---------------------------------------------------
            //  Power monitor Range adjust
            //  功率监控范围调整
            //---------------------------------------------------
            int errorcode;

            errorcode = PCU.Range_Adjust();
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

        }

        private void btnGet_Range_Click(object sender, EventArgs e)
        {
            //------------------------------------------------------
            //  Get Current Range
            //  获取当前范围
            //------------------------------------------------------

            int errorcode;
            int range = new int();

            errorcode = PCU.Get_Power_Range(ref range);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtcurrentrange.Text = range.ToString();

        }

        private void btnGet_resouce_Click(object sender, EventArgs e)
        {
            //----------------------------------------------
            //  Get GPIB resouce
            //  获取GPIB资源
            //  This function need to instlle NIVisa.Dll
            //  这个函数需要安装NIVisa.Dll
            //----------------------------------------------
            string[] resouce = null;
            resouce = Santec.Communication.MainCommunication.Get_GPIB_Resources();

            if (resouce.Length == 0)
            {
                return;
            }

            for (int loop1 = 0; loop1 < resouce.Length; loop1++)
            {
                cmbgpib_resouce.Items.Add(resouce[loop1]);
            }

        }

        private void btnSplit_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------------
            //  Split Visa resouce string 
            //  将字符串分割
            // -----------------------------------------------------

            if (cmbgpib_resouce.Text == "")
            {
                MessageBox.Show("Please enter the visa string for GPIB resouce commbbox");
                return;
            }
            string[] sp = null;
            int board_number;
            int address;

            sp = cmbgpib_resouce.Text.Split(new char[2] { ':', ':' });

            board_number = Convert.ToInt32(sp[0].Substring(4));
            address = Convert.ToInt32(sp[2]);

            txtboad.Text = board_number.ToString();
            txtaddressnum.Text = address.ToString();
        }

        private void btnUsb_resouce_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------
            // Get usb resouce
            // 获取usb资源
            // ------------------------------------------------------
            string[] resouce = null;


            resouce = Santec.Communication.MainCommunication.Get_USB_Resouce();


            if (resouce.Length == 0)
                return;

            int loop1;

            for (loop1 = 0; loop1 < resouce.Length; loop1++)

                cmbusbresouce.Items.Add(resouce[loop1]);
        }

        private void btnControl_ID_Click(object sender, EventArgs e)
        {
            // -------------------------------------------------------
            // Get PCU-100 Control device id
            // 获取PCU-100控制设备id
            // -------------------------------------------------------
            string[] id = null;
            int errorcode;
            int loop1;


            errorcode = PCU.Get_Device_ID(ref id);

            if (errorcode != 0 | id.Length == 0)
                return;
            for (loop1 = 0; loop1 < id.Length; loop1++)
                 cmb100controlid.Items.Add(id[loop1]);
        }

        private void cmbusbresouce_SelectedIndexChanged(object sender, EventArgs e)
        {
            // -------------------------------------------------------
            // Select usb  resouce & Show deveice number
            // 选择usb资源并显示设备号
            // -------------------------------------------------------

            if ( cmbusbresouce.Text == "")
                return;


             txtdev_num.Text =  cmbusbresouce.SelectedIndex.ToString();
        }

        private void cmb100controlid_SelectedIndexChanged(object sender, EventArgs e)
        {
            //------------------------------------------------
            //      Select control device number for PCU-100 
            //      选择PCU-100的控制设备号
            //------------------------------------------------
            txt100controlid.Text = cmb100controlid.Text;
        }

        private void rdo488_CheckedChanged(object sender, EventArgs e)
        {
            // -----------------------------------------------------
            // 488.2　checked
            // 选中 488.2
            // -----------------------------------------------------

            if (rdo488.Checked == true)
            {
                 txtaddress.Text =  txtaddressnum.Text;
                 rdolf.Enabled = true;
                 rdocrlf.Enabled = true;
                 rdocr.Enabled = true;
            }
        }

        private void rdonivisa_CheckedChanged(object sender, EventArgs e)
        {
            // ------------------------------------------------------------------------
            // NI Visa Communication Checked
            // 选中 NI Visa 通讯 
            // ------------------------------------------------------------------------

            if ( rdonivisa.Checked == true)
            {
                 txtaddress.Text =  txtaddressnum.Text;
                 rdolf.Enabled = true;
                 rdocrlf.Enabled = true;
                 rdocr.Enabled = true;
            }
        }

        private void rdokeysightvisa_CheckedChanged(object sender, EventArgs e)
        {
            // ----------------------------------------------------
            // keysigth visa communication checked
            // 选中keysigth visa 通讯
            // ----------------------------------------------------

            if ( rdokeysightvisa.Checked == true)
            {
                 txtaddress.Text =  txtaddressnum.Text;
                 rdolf.Enabled = true;
                 rdocrlf.Enabled = true;
                 rdocr.Enabled = true;
            }
        }

        private void rdousb_CheckedChanged(object sender, EventArgs e)
        {
            // --------------------------------------------------------------
            // USB communcation checked
            // 选择USB 通讯
            // --------------------------------------------------------------

            // USB can control Only PCU-110
            // USB只能控制PCU-110
            if ( rdousb.Checked == true)
            {
                txtaddress.Text =  txtdev_num.Text;         // USB Control Device ID //USB控制设备ID
                rdocrlf.Enabled = false;                      // USB Tarminerter must be "Cr"   //USB 终止符必须是“Cr” 
                rdolf.Enabled = false;
            }
        }

        private void rdolan_CheckedChanged(object sender, EventArgs e)
        {
            // --------------------------------------------------------------
            // LAN Commnuncation Checked
            // 选择 LAN 通讯
            // --------------------------------------------------------------

            // LAN communication can control ONLY PCU-110
            // LAN通讯只能控制PCU-110
            if ( rdolan.Checked == true)
            {
                 txt100controlid.Enabled = false;
                 txtport.Enabled = true;
                 rdolf.Enabled = true;
                 rdocrlf.Enabled = true;
                 rdocr.Enabled = true;
            }
        }

        private void rdo100_CheckedChanged(object sender, EventArgs e)
        {
            // ------------------------------------------------
            // target PCU-100 checked
            // 选择目标为PCU-100
            // ------------------------------------------------

            if (rdo100.Checked == true)
            {
                // PCU-100 can't Control from LAN & USB
                // PCU-100不能从LAN和USB控制
                // PCU-100 need to  device number of DAQ
                // PCU-100需要设备的DAQ编号
                txt100controlid.Enabled = true;
                 rdolan.Enabled = false;
                 txtport.Enabled = false;
                 rdousb.Enabled = false;
            }
        }

        private void rdo110_CheckedChanged(object sender, EventArgs e)
        {
            // -------------------------------------------------
            // target PCU-110 Checked
            // 选择目标为PCU-110
            // 
            // PCU-110 can control from LAN & USB & GPIB
            // PCU-110可以通过LAN、USB和GPIB进行控制
            // PCU-110 not need to device number of DAQ
            // PCU-110不需要设备的DAQ编号
            // -------------------------------------------------

            if (rdo110.Checked == true)
            {
                 txt100controlid.Enabled = false;
                 rdolan.Enabled = true;
                 rdousb.Enabled = true;
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // --------------------------------------------------------------
            // Form Load
            // 窗体载入
            // --------------------------------------------------------------

            // ----PCU-100　check
            // ----选择 PCU-100　
            rdo100.Checked = true;
        }

        private void btnGetIP_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // Get IP Address
            // this function only support for PCU-110
            // 获取IP地址
            // 这个功能只支持PCU-110
            // ------------------------------------------------
            int errorcode;
            string address = string.Empty;
        
            errorcode = PCU.Get_IPAddress(ref address);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtip_add.Text = address;
        }

        private void btnGetPort_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------------
            // Get LAN Port number
            // this function only support for PCU-110
            // 获取LAN端口号
            // 这个功能只支持PCU-110
            // -----------------------------------------------------
            int errorcode;
            int port=new int();

            errorcode = PCU.Get_LAN_Portnumber(ref port);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }
            txtlan_port.Text = port.ToString();
        }
    }

}

