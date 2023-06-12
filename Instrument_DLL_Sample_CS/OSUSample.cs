using Santec;
using System;
using System.Windows.Forms;


namespace Instrument_DLL_Sample
{
    public partial class OSUSample : Form
    {
        public OSUSample()
        {
            InitializeComponent();
        }
        OSU osu=new OSU();
        SPU spu = new SPU();

        private void OSUSample_Load(object sender, EventArgs e)
        {
            // -------------------------------------------------------------
            // Form Load
            // -------------------------------------------------------------
            string[] dev = null;
            string[] usb_resource = null;
            int errorcord;
            int loop1;

            usb_resource = Santec.Communication.MainCommunication.Get_USB_Resouce();

            // ---Add Item to combobox for usb resource
            for (loop1 = 0; loop1 <= usb_resource.GetUpperBound(0); loop1++)
                this.cmbosu_usb.Items.Add(usb_resource[loop1]);

            errorcord = spu.Get_Device_ID(ref dev);

            if (errorcord != 0)
            {
                Show_Error(errorcord);
                return;
            }

            // ---Add Item to combobox for device name
            for (loop1 = 0; loop1 <= dev.GetUpperBound(0); loop1++)
                this.cmbdevname.Items.Add(dev[loop1]);
        }

        private void Show_Error(int errordata)
        {
            // ------------------------------------
            // Show error code
            // 显示错误代码
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

        private void btnConnect_Click(object sender, EventArgs e)
        {
            // -------------------------------------------------------
            // Connect to OSU
            // -------------------------------------------------------
            int errorcord;
            Santec.Communication.CommunicationMethod comm_method;
            string address = this.txtAddress.Text;
            string osu_dev = string.Empty;                // osu control device
            string ans = string.Empty;                    // answer for the device

            if (rdo110.Checked)
            {
                // OSU-110

                osu.Terminator = CommunicationTerminator.Cr;

                if (rdiUSB.Checked == true)
                {
                    // ' USB Communication
                    // ' USB 通信

                    if (this.cmbosu_usb.Text == "")
                    {
                       MessageBox.Show("Please enter to the OSU USB Resource");
                        return;
                    }

                    comm_method = Santec.Communication.CommunicationMethod.USB;
                    osu.DeviceID = System.Convert.ToUInt32(this.cmbosu_usb.SelectedIndex);
                }
                else if (rdoLAN.Checked == true)
                {

                    // LAN Communication
                    // LAN 通信
                    comm_method = Santec.Communication.CommunicationMethod.TCPIP;
                    osu.Port = int.Parse(txtPort.Text);
                    osu.IPAddress = address;
                }
                else
                {
                    // ' GPIB Communication
                    // ' GPIB通信
                    comm_method = Santec.Communication.CommunicationMethod.GPIB;

                    Santec.Communication.GPIBConnectType gpibmethod;
                    if (rdikysightvisa.Checked == true)
                        gpibmethod = Santec.Communication.GPIBConnectType.KeysightIO;
                    else if (rdiNI488.Checked == true)
                        gpibmethod = Santec.Communication.GPIBConnectType.NI4882;
                    else
                        gpibmethod = Santec.Communication.GPIBConnectType.NIVisa;

                    osu.GPIBAddress = System.Convert.ToInt32(address);
                    osu.GPIBBoard = 0;
                    osu.GPIBConnectType = gpibmethod;
                }

                errorcord = osu.Connect(comm_method);
            }
            else
            {
                // OSU-100

                if (this.cmbdevname.Text == "")
                {
                    MessageBox.Show("Please enter to the OSU device Resource");
                    return;
                }

                osu.DeviceName = this.cmbdevname.Text;
                errorcord = osu.Connect();
            }

            if (errorcord != 0)
            {
                Show_Error(errorcord);
                return;
            }
        }

        private void btnDisconnect_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // Disconnect 
            // -----------------------------------------------
            int errorcord;


            errorcord = osu.DisConnect();

            if (errorcord != 0)
            {
                Show_Error(errorcord);
                return;
            }

            cmbdevname.Text = "";
        }

        private void btnSwitch_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------------
            // switch for  OSU ch
            // --------------------------------------------------------
            int errorcord;               // errorcord
            int ch = new int();


            // ---check Combobox text 

            if (cmbch.Text == "")
            {
                MessageBox.Show("Please enter the osu switch channel number.");
                return;
            }


            switch (cmbch.Text)
            {
                case "Ch1":
                    {
                        ch = 1;
                        break;
                    }

                case "Ch2":
                    {
                        ch = 2;
                        break;
                    }

                case "Ch3":
                    {
                        ch = 3;
                        break;
                    }

                case "Ch4":
                    {
                        ch = 4;
                        break;
                    }
            }

            errorcord = osu.Set_Switch(ch);

            if (errorcord != 0)
            {
                Show_Error(errorcord);
                return;
            }
        }

        private void rdo100_CheckedChanged(object sender, EventArgs e)
        {
            if(rdo100.Checked==true)
            {
                //OSU-100
                Group100.Enabled = true;
                Group110.Enabled = false;
            }
            else
            {                
                //OSU-110
                Group100.Enabled = false;
                Group110.Enabled = true;
            }
        }

        private void rdo110_CheckedChanged(object sender, EventArgs e)
        {
            if(rdo110.Enabled==true)
            {
                //OSU-110
                Group100.Enabled = false;
                Group110.Enabled = true;
            }
            else
            {
                //OSU-100
                Group100.Enabled = true;
                Group110.Enabled = false;
            }

        }

        private void rdoLAN_CheckedChanged(object sender, EventArgs e)
        {
            if (rdoLAN.Checked == true)
            {
                txtPort.Text = "5000";
            }
            else
            {
                txtPort.Text = "";
            }
        }
    }
}
