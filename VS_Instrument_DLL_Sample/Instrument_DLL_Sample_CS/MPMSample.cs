using Santec;
using System;
using System.Linq;
using System.Text.RegularExpressions;
using System.Windows.Forms;

namespace Instrument_DLL_Sample
{
    public partial class MPMSample : Form
    {
        public MPMSample()
        {
            InitializeComponent();
        }
        private MPM mpm = new MPM();                  // MPM Control Class// MPM控制类
        private Label[] lbl_sn = new Label[5];
        private Label[] lbl_type = new Label[5];
        private Label[] lbl_version = new Label[5];
        private void MPMSample_Load(object sender, EventArgs e)
        {
            // ---- set index for label
            // ----为标签设置索引
            lbl_sn[0] = lblseri0;
            lbl_sn[1] = lblseri1;
            lbl_sn[2] = lblseri2;
            lbl_sn[3] = lblseri3;
            lbl_sn[4] = lblseri4;

            lbl_type[0] = lbltype0;
            lbl_type[1] = lbltype1;
            lbl_type[2] = lbltype2;
            lbl_type[3] = lbltype3;
            lbl_type[4] = lbltype4;

            lbl_version[0] = lblver0;
            lbl_version[1] = lblver1;
            lbl_version[2] = lblver2;
            lbl_version[3] = lblver3;
            lbl_version[4] = lblver4;
        }

        private void btnVisa_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------------------
            // Get Visa GPIB Visa resouce 
            // 获取Visa GPIB资源
            // ----------------------------------------------------------
            string[] resouce = null;

            resouce = Santec.Communication.MainCommunication.Get_GPIB_Resources();

            if (resouce.Length == 0)
                return;


            int loop1;

            for (loop1 = 0; loop1 <= resouce.GetUpperBound(0); loop1++)
                cmbvisaresouce.Items.Add(resouce[loop1]);

        }

        private void btnSplit_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------
            // Split visa string 
            // 分割字符串
            // --------------------------------------------------
            string visa_str = string.Empty;
            string[] split_st = null;                 // split string array//拆分字符串数组

            visa_str = cmbvisaresouce.Text;
            split_st = visa_str.Split(new char[2] { ':', ':' });

            txtboard_num.Text = split_st[0].Substring(4);
            txtsp_add.Text = split_st[2];

        }

        private void GetComport_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------------
            // Get Comport on PC
            // 在PC上获取Comport
            // ---------------------------------------------------
            string[] portname = null;

            portname = Santec.Communication.MainCommunication.Get_Serial_Port();

            if (portname.Length == 0)
                return;


            int loop1;

            for (loop1 = 0; loop1 <= portname.GetUpperBound(0); loop1++)
                cmbcomport.Items.Add(portname[loop1]);

        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------------------------
            // Connect
            // 连接
            // ----------------------------------------------------------------
            Santec.Communication.CommunicationMethod communication_method = new Santec.Communication.CommunicationMethod();               // Communication　method //通信方法
            Santec.Communication.GPIBConnectType gpib_type = new Santec.Communication.GPIBConnectType();                              // GPIB type //GPIB类型

            // ----GPIB Connection
            // ----GPIB连接
            if (rdo488.Checked == true | rdokeysightvisa.Checked == true | rdovisa.Checked == true)
            {
                communication_method = Santec.Communication.CommunicationMethod.GPIB;
                // 488.2
                if (rdo488.Checked == true)
                    gpib_type = Santec.Communication.GPIBConnectType.NI4882;
                // keysight visa
                if (rdokeysightvisa.Checked == true)
                    gpib_type = Santec.Communication.GPIBConnectType.KeysightIO;
                // visa
                if (rdovisa.Checked == true)
                    gpib_type = Santec.Communication.GPIBConnectType.NIVisa;
                
                mpm.GPIBConnectType = gpib_type;                     // Gpib type //通用接口总线类型
                mpm.GPIBAddress = int.Parse(txtaddress.Text);        // gpib address // gpib地址
                if (txtboard_num.Text == "")                         // board　number //GPIB板卡板号
                {
                    mpm.GPIBBoard = 0;
                }
                else
                {
                    mpm.GPIBBoard = Convert.ToInt32(txtboard_num.Text);
                }
                TabPage3.Enabled = true;
                TabPage4.Enabled = true;
            }

            // ------LAN　Communication
            // ------ 局域网通信
            if (rdolan.Checked == true)
            {
                communication_method = Santec.Communication.CommunicationMethod.TCPIP;
                mpm.IPAddress = txtaddress.Text;                // IP Address/ / IP地址
                mpm.Port = int.Parse(txtport.Text);                          // LAN Port number// LAN端口号

                TabPage3.Enabled = true;
                TabPage4.Enabled = true;
            }

            // ------232C Communication
            // ------ 232c 通信
            if (rdo232C.Checked == true)
            {
                communication_method = Santec.Communication.CommunicationMethod.C232C;
                mpm.ComPort = txtaddress.Text;
                mpm.BaudRate = 115200;

                // 232C communication can't use Logging mode
                // 232C通信不能使用测量模式
                TabPage3.Enabled = false;
                TabPage4.Enabled = false;
            }

            // -----Connect 
            // -----连接
            int errorcode;                // errorcode //错误代码 
            string ans = string.Empty;        // return string //返回字符串

            errorcode = mpm.Connect(communication_method);

            if (errorcode != 0)
            {
                // show errorcord
                // 显示错误信息
                Show_Error(errorcode);
                return;
            }

            // -----show information 
            // -----显示信息
            lblproduct.Text = mpm.Information.ProductName;                           // Main frameProduct name//产品名称
            lblserial.Text = mpm.Information.SerialNumber;                           // Main frame Serial number//序列号
            lblversion.Text = mpm.Information.FWversion;                             // Main frame F/W version//F/W版本
            lblmodulecount.Text = mpm.Information.NumberofModule.ToString();         // Main frame inserted module count //插入模块数

            int loop1;                   // loop counter //循环计数器

            for (loop1 = 0; loop1 <= 4; loop1++)
            {
                lbl_type[loop1].Text = mpm.Information.ModuleType[loop1];   // Module type / /模块类型 
                lbl_sn[loop1].Text = mpm.Information.ModuelSerial[loop1];   // module serial / /模块序列号
                lbl_version[loop1].Text = mpm.Information.ModuleFW[loop1];  // module F/W version //模块F/W版本
                if (mpm.Information.ModuleEnable[loop1] == false)
                {
                    lbl_type[loop1].Enabled = false;
                    lbl_sn[loop1].Enabled = false;
                    lbl_version[loop1].Enabled = false;
                }
            }

        }

        private void btnDisconnect_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------------
            // Disconnect
            // 断开连接
            // ---------------------------------------------------------
            int errorcode;

            errorcode = mpm.DisConnect();

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }


            // -----Clear Information
            // -----清除信息
            lblproduct.Text = "";
            lblserial.Text = "";
            lblversion.Text = "";
            lblmodulecount.Text = "";

            int loop1;

            for (loop1 = 0; loop1 <= 4; loop1++)
            {
                lbl_sn[loop1].Text = "";
                lbl_type[loop1].Text = "";
                lbl_version[loop1].Text = "";
            }

            // ----Tab page show
            // ----页签显示
            TabPage3.Enabled = true;
            TabPage4.Enabled = true;
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

        private void btnSetRangeMode_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------
            // Set Range Mode for "READ"
            // 设置读取功率Range模式
            // --------------------------------------------------
            MPM.READ_Range_Mode range_mode;
            int errorcode;

            if (cmbset_rangemode.Text == "Auto")
            {
                // Auto Range
                // 自动调整范围
                range_mode = MPM.READ_Range_Mode.Auto;
                txtsetrange.Enabled = false;
                txte_range.Enabled = false;
                txtr_slot.Enabled = false;
                txtr_ch.Enabled = false;
            }
            else
            {
                // Manual range
                // 手动调整范围
                range_mode = MPM.READ_Range_Mode.Manual;
                txtsetrange.Enabled = true;
                txte_range.Enabled = true;
                txtr_slot.Enabled = true;
                txtr_ch.Enabled = true;
            }

            errorcode = mpm.Set_READ_Range_Mode(range_mode);     // set Range mode for all slot //设置所有模块的范围模式
            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void btnSlot_Ch_Power_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------------------
            // Read Power for each ch
            // 读取每个通道的功率
            // -----------------------------------------------------------
            int slot;                         // Slot 0 ～4//槽位号0 ~4
            int ch;                           // ch 1～4 // 通道 1 ~ 4
            double power = new double();
            int errorcode;

            slot = int.Parse(txtread_slot.Text);
            ch = int.Parse(txtread_ch.Text);

            errorcode = mpm.Get_READ_Power_Channel(slot, ch, ref power);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txt_readp_ch.Text = power.ToString();
        }

        private void btnSetWavelength_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------------------------
            // Set Wavelength(nm)
            // 设置波长(nm)
            // ---------------------------------------------------------------
            double wavelength;
            int errorcode;


            wavelength = double.Parse(txtsetwave.Text);

            errorcode = mpm.Set_Wavelength(wavelength);

            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void btnSetAveraging_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------------------
            // Set Averaging Time(mse)
            // MPM can set 0.01msec～10000msec
            // 设置平均时间(mse)
            // MPM可设置0.01 ~10000msec
            // -------------------------------------------------------------------
            double ave_time;
            int errorcode;

            ave_time = double.Parse(txtsetavg.Text);

            errorcode = mpm.Set_Averaging_Time(ave_time);
            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void btnSetRangeAll_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------------------------
            // Set range for munal range
            // MPM-211/212 : 1～5 MPM213 : 1～4　　MPM215 : Nothing　　
            // 设置munal范围
            // mpm -211: 1~5 MPM213: 1~4 MPM215:无
            // ----------------------------------------------------------------

            int range;
            int errorcode;

            range = int.Parse(txtsetrange.Text);


            errorcode = mpm.Set_Range(range);
            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void btnSetUnit_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------------
            // Set Power unit
            // 设置功率单位
            // ---------------------------------------------------
            MPM.Power_Unit unit;
            int errorcode;

            if (cmbunit.Text == "dBm")
                unit = MPM.Power_Unit.dBm;
            else
                unit = MPM.Power_Unit.mA;

            errorcode = mpm.Set_Unit(unit);

            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void btnSetSlot_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------------------
            // Set Range for each ch
            // 为每个通道设置范围
            // ----------------------------------------------------------
            int slot;
            int ch;
            int errorcode;
            int range;


            slot = int.Parse(txtr_slot.Text);         // Slot number 0 ～4//槽位号0 ~4
            ch = int.Parse(txtr_ch.Text);
            range = int.Parse(txte_range.Text);


            errorcode = mpm.Set_Range_Each_Channel(slot, ch, range);

            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void btnGet_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------------
            // Get normal function parameter
            // 获取正常模式的函数参数
            // -----------------------------------------------------------
            MPM.READ_Range_Mode rangemode = new MPM.READ_Range_Mode();
            int range = new int();
            double wavelength = new double();
            double averaging_time = new double();
            int errorcode;
            MPM.Power_Unit unit = new MPM.Power_Unit();

            // ---get "READ"range mode
            // ---获取Range模式
            errorcode = mpm.Get_READ_Range_Mode(ref rangemode);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (rangemode == MPM.READ_Range_Mode.Auto)
                txtgetrmode.Text = "Auto";
            else
                txtgetrmode.Text = "Manual";

            // -----get setting range for all slot
            // -----获取所有槽位的设置范围
            errorcode = mpm.Get_Range(ref range);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtgetrang.Text = range.ToString();

            // ---get setting wavelength(nm)
            // ---获取设置波长
            errorcode = mpm.Get_Wavelength(ref wavelength);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }
            txtget_wave.Text = wavelength.ToString();

            // ---get setting averaging time(msec)
            // ---获取设置平均时间
            errorcode = mpm.Get_Averaging_Time(ref averaging_time);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtget_avg.Text = averaging_time.ToString();

            // ----get setting unit
            // ----获取设置单位
            errorcode = mpm.Get_Unit(ref unit);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (unit == MPM.Power_Unit.dBm | unit == MPM.Power_Unit.dBmA)
                txtget_unit.Text = "dBm";
            else
                txtget_unit.Text = "mW";
        }

        private void btnSlot_Ch_Range_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------------------
            // Get Range for each ch
            // 获取每个通道的范围
            // ----------------------------------------------------------
            int slot;                 // Slot 0～
            int ch;                   // Ch 1～
            int range = new int();
            int errorcode = 0;


            slot = int.Parse(txtget_rangeslot.Text);   // Slot 0～
            ch = int.Parse(txtget_rangech.Text);

            errorcode = mpm.Get_Range_Each_Channel(slot, ch, ref range);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtget_erange.Text = range.ToString();
        }

        private void btnSlot_Power_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------------------
            // Read Power for Slot
            // 读取槽位功率
            // ----------------------------------------------------------
            int slot;                     // Slot 0～
            double[] power = null;
            int errorcode;
            int loop1;
            string pow_string = string.Empty;

            slot = int.Parse(txtread_slotall.Text);

            errorcode = mpm.Get_READ_Power_for_Module(slot, ref power);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            for (loop1 = 0; loop1 <= power.GetUpperBound(0); loop1++)
            {
                if (loop1 == 0)
                    pow_string = System.Convert.ToString(power[loop1]);
                else
                    pow_string = pow_string + "," + System.Convert.ToString(power[loop1]);
            }

            txtreadp_all.Text = pow_string;
        }

        private void btnZeroing_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------
            // Zeroing function
            // 归零功能
            // -----------------------------------------------------
            int errorcode;

            errorcode = mpm.Zeroing();

            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void btnGetWavelength_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------------------------
            // Get Wavelength Sencitvity data for each ch
            // 获取每个通道的波长灵敏度数据
            // --------------------------------------------------------------------
            int slot;
            int ch;
            float[] sence_data = null;
            double[] wave_data = null;
            int errorcode;

            slot = int.Parse(txtwave_slot.Text);         // Slot　0～
            ch = int.Parse(txtwave_ch.Text);             // Ch 1～

            errorcode = mpm.Get_Wavelength_Senctivity_Data(slot, ch, ref wave_data, ref sence_data);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            string filepath = string.Empty;               // file path //文件路径
            System.IO.StreamWriter writer;          // writer

            SaveFileDialog1.ShowDialog();
            filepath = SaveFileDialog1.FileName;

            writer = new System.IO.StreamWriter(filepath);

            writer.WriteLine("Wavelength,Senctivity");

            for (var loop1 = 0; loop1 <= wave_data.GetUpperBound(0); loop1++)
                writer.WriteLine(System.Convert.ToString(wave_data[loop1]) + "," + System.Convert.ToString(sence_data[loop1]));

            writer.Close();
        }

        private void btnGetError_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------------------
            // Get MPM System Error
            // 获取MPM系统错误
            // ------------------------------------------------------------------
            int errorcode;
            string error_string = string.Empty;


            errorcode = mpm.Get_System_Error(ref error_string);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtsyst_error.Text = error_string;
        }

        private void btnGetIP_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------------
            // Get MPM IP Address
            // 获取MPM IP地址
            // ------------------------------------------------------------

            int errorcod;
            string ip = string.Empty;

            errorcod = mpm.Get_IPAddress(ref ip);

            if (errorcod != 0)
            {
                Show_Error(errorcod);
                return;
            }

            txtipaddress.Text = ip;
        }

        private void btnGetPort_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------------
            // Get MPM LAN Port number
            // 获取MPM LAN端口号
            // ---------------------------------------------------

            int errorcod;
            int port = new int();

            errorcod = mpm.Get_LAN_Portnumber(ref port);

            if (errorcod != 0)
            {
                Show_Error(errorcod);
                return;
            }

            txtlan_port.Text = port.ToString();
        }

        private void btnSetConst_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------------------------
            // Set Const Mode parameter
            // 设置Const模式参数
            // ------------------------------------------------------------------------
            double ave;                                   // Averaging time(msec) //平均时间(毫秒)
            int point;                                // number of logging point //测试数据点个数
            double wave;                                  // wavelength(nm)//波长(nm)
            MPM.Trigger_Input_Mode trigger_input_mode;    // trigger input mode     //触发输入模式
            MPM.Measurement_Mode logg_mode;               // Logging mode  / /测试模式
            int errorcode;                            // errorcode / /错误代码
            int range;                                // Range

            // -----1.Setting for logging mode 
            // -----1.测试模式设置
            if (cmbcon_rangemode.Text == "Auto")
                // Auto range mode
                logg_mode = MPM.Measurement_Mode.AutoRangeConstant;
            else
                // manual range mode 
                logg_mode = MPM.Measurement_Mode.ManualRangeConstant;

            errorcode = mpm.Set_Mode(logg_mode);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }


            // -----2.Setting for averaging time (msec)
            // -----2.设置平均时间(msec)
            ave = double.Parse(txtcon_ave.Text);

            errorcode = mpm.Set_Averaging_Time(ave);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // -----3. Setting for logging number of point 
            // -----3. 设置测试点数
            point = int.Parse(txtcon_point.Text);

            errorcode = mpm.Set_Logging_Data_Point(point);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ----4. Setting for wavelength(nm)
            // ----4. 设置波长(nm)
            wave = int.Parse(txtcon_wave.Text);
            errorcode = mpm.Set_Wavelength(wave);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ----5. Setting for range(Manual range mode )
            // ----5. 范围设置(手动范围模式)
            if (cmbset_rangemode.Text == "Manual")
            {
                range = int.Parse(txtcon_range.Text);

                errorcode = mpm.Set_Range(range);
                if (errorcode != 0)
                {
                    Show_Error(errorcode);
                    return;
                }
            }

            // ----6. Setting for trigger input mode
            // ----6. 触发输入模式设置
            errorcode = mpm.Set_Trigger_Input_Mode(MPM.Trigger_Input_Mode.Extarnal);

            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void btnSetSweep_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------------------
            // Set Sweep mode parameter
            // 设置扫描模式参数
            // ------------------------------------------------------------------
            MPM.Measurement_Mode logg_mode;           // logging mode/ /测试模式
            double startwave;                         // start wavelength(nm) //开始波长(nm)
            double stopwave;                          // stop wavelength(nm) //停止波长(nm)
            double wavestep;                          // wavelength step(nm) //步进波长(nm)
            double speed;                             // sweep speed(nm/sec) //扫描速度(nm /秒)
            int range;                            // power range //功率范围
            int errorcode;                        // errorcode / /错误代码


            // ----1. Setting for logging mode 
            // -----1.测试模式设置
            if (cmbsm_rangemode.Text == "Auto")
                // Auto range mode
                logg_mode = MPM.Measurement_Mode.AutoRangeSweep;
            else
                // Manual range mode
                logg_mode = MPM.Measurement_Mode.ManualRangeSweep;

            errorcode = mpm.Set_Mode(logg_mode);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ---2.Setting for Trigger input mode to Extarnal
            // Sweep mode cant' use internal trigger mode
            // ---2.设置触发输入模式为外部触发
            // 扫描模式不能使用内部触发模式
            // -------------------------------------------------
            errorcode = mpm.Set_Trigger_Input_Mode(MPM.Trigger_Input_Mode.Extarnal);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ---3. Setting for wavelength parameter
            // ---3. 波长参数设置
            startwave = double.Parse(txtstartwave.Text);
            stopwave = double.Parse(txtstopwave.Text);
            wavestep = double.Parse(txtwavestep.Text);

            errorcode = mpm.Set_Sweep_Wavelength(startwave, stopwave, wavestep);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ----4. Setting for sweep speed 
            // ----4. 扫描速度设置
            speed = double.Parse(txtspeed.Text);

            errorcode = mpm.Set_Sweep_Speed(speed);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ----5. Setting for Range with Maunal range
            // ----5. 设置rang范围
            if (cmbsm_rangemode.Text == "Manual")
            {
                range = int.Parse(txtsm_range.Text);
                errorcode = mpm.Set_Range(range);
                if (errorcode != 0)
                {
                    Show_Error(errorcode);
                    return;
                }
            }
        }

        private void btnSetFreerun_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------------------------
            // Set Freerun mode parameter
            // 设置Freerun模式参数
            // -------------------------------------------------------------------
            double ave;                           // averaging time(msec)/ /平均时间(毫秒)
            int point;                        // number of sampling point //采样点个数
            MPM.Measurement_Mode logg_mode;       // logging mode / /测试模式
            double wave;                          // Wavelength(nm)/ /波长(nm)
            int range;                        // range
            int errorcode;                    // errorcode / /错误代码
            MPM.Trigger_Input_Mode t_inmode;      // Trigger input mode//触发输入模式

            // ----1. Setting for logging mode
            // Freerun can set only manual range mode
            // ----1. 测试模式设置
            // Freerun只能设置手动范围模式
            // --------------------------------------------
            logg_mode = MPM.Measurement_Mode.Freerun;

            errorcode = mpm.Set_Mode(logg_mode);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ----2.Setting for  Range
            // ----2.设置Range
            range = int.Parse(txtfr_range.Text);

            errorcode = mpm.Set_Range(range);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ----3.Setting for averaging time 
            // ----3.平均时间设置
            ave = double.Parse(txtfr_ave.Text);

            errorcode = mpm.Set_Averaging_Time(ave);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ---4.Setting for number of logging point 
            // ---4.设置测试点的数量
            point = int.Parse(txtfr_point.Text);

            errorcode = mpm.Set_Logging_Data_Point(point);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }


            // ---5.Setting for wavelength
            // ---5.设置波长
            wave = double.Parse(txtfr_wave.Text);

            errorcode = mpm.Set_Wavelength(wave);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }


            // ----6.setting for trigger input mode
            // ----6.触发输入模式设置
            if (cmbfr_tin_mode.Text == "Internal")
                t_inmode = MPM.Trigger_Input_Mode.Internal;
            else
                t_inmode = MPM.Trigger_Input_Mode.Extarnal;

            errorcode = mpm.Set_Trigger_Input_Mode(t_inmode);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }
        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------------
            // Logging Start
            // 测试开始
            // --------------------------------------------------------
            int errorcode;

            errorcode = mpm.Logging_Start();

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }
        }

        private void btnStatus_Click(object sender, EventArgs e)
        {
            // -------------------------------------------------------
            // Get logging status
            // 获取测试状态
            // -------------------------------------------------------
            int errorcode;
            int status = new int();                   // logging status  0: not completed 1: completed -1: stopped //测试状态 0:未完成。1:已完成 -1:停止
            int count = new int();                    // finished count of logging //完成测试计数



            errorcode = mpm.Get_Logging_Status(ref status, ref count);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }


            txtlog_status.Text = System.Convert.ToString(status) + "," + System.Convert.ToString(count);
        }

        private void btnStop_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------------------
            // logging stop
            // 测试停止
            // ----------------------------------------------------------
            int errorcode;


            errorcode = mpm.Logging_Stop();

            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void btnGetch_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------------------
            // Get Logging data
            // 获取日志数据
            // ---------------------------------------------------------
            int errorcode;
            int slot;                         // Slot 0～
            int ch;                           // ch　1～
            float[] logdata = null;           // logging data/ /日志数据
            slot = int.Parse(txtlog_slot.Text);
            ch = int.Parse(txtlog_ch.Text);

            errorcode = mpm.Get_Each_Channel_Logdata(slot, ch, ref logdata);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }


            // ----Save data for csv file
            // ----保存数据为csv文件
            string filepath = string.Empty;              // save file path//保存文件路径
            System.IO.StreamWriter writer;
            int loop1;

            SaveFileDialog1.ShowDialog();

            filepath = SaveFileDialog1.FileName;

            writer = new System.IO.StreamWriter(filepath);

            for (loop1 = 0; loop1 <= logdata.GetUpperBound(0); loop1++)
                writer.WriteLine(logdata[loop1]);

            writer.Close();
        }

        private void btnGetSlot_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------------------------
            // Get Logging data for slot
            // 获取模块的日志数据
            // -----------------------------------------------------------------------
            int errorcode;
            float[,] logdata = null;
            int slot;                             // slot 0～

            slot = int.Parse(txte_slot.Text);

            errorcode = mpm.Get_Each_Module_Loggdata(slot, ref logdata);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ----Save data for csv file
            // ----保存数据为csv文件
            string filepath = string.Empty;              // save file path//保存文件路径
            System.IO.StreamWriter writer;
            int numberofch;                           // number of channel//通道数
            int loop1;
            int loop2;
            string write_st = string.Empty;
            Regex rex = new Regex("[a-zA-Z]+");
            var a=rex.Replace(write_st," ").Split(' ');
           var b=string.Join(" ", a.Reverse());
            numberofch = logdata.GetLength(0) - 1;
            write_st.Substring(1, 2);
            SaveFileDialog1.ShowDialog();
            filepath = SaveFileDialog1.FileName;
            writer = new System.IO.StreamWriter(filepath, false, System.Text.Encoding.GetEncoding("Shift-jis"));

            // heddrer write
            for (loop1 = 0; loop1 <= numberofch; loop1++)
                write_st = write_st + ",Ch" + System.Convert.ToString(loop1 + 1);

            writer.WriteLine(write_st);

            for (loop1 = 0; loop1 <= logdata.GetLength(1) - 1; loop1++)
            {
                write_st = System.Convert.ToString(loop1 + 1);
                for (loop2 = 0; loop2 <= numberofch; loop2++)

                    write_st = write_st + "," + System.Convert.ToString(logdata[loop2, loop1]);

                writer.WriteLine(write_st);
            }

            writer.Close();
        }

        private void btnGetParameter_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------------------------
            // Get Logging mode parameter
            // 获取测试模式参数
            // -----------------------------------------------------------------------
            MPM.Measurement_Mode logmode = new MPM.Measurement_Mode();
            int errorcode;


            // --Get logging mode
            // --获取测试模式
            errorcode = mpm.Get_Mode(ref logmode);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (logmode == MPM.Measurement_Mode.AutoRangeConstant)
            {
                txtg_rangemode.Text = "Auto";
                txtlog_mode.Text = "Const2";
            }
            else if (logmode == MPM.Measurement_Mode.ManualRangeConstant)
            {
                txtg_rangemode.Text = "Manual";
                txtlog_mode.Text = "Const1";
            }
            else if (logmode == MPM.Measurement_Mode.AutoRangeSweep)
            {
                txtg_rangemode.Text = "Auto";
                txtlog_mode.Text = "Sweep2";
            }
            else if (logmode == MPM.Measurement_Mode.ManualRangeSweep)
            {
                txtlog_mode.Text = "Sweep1";
                txtg_rangemode.Text = "Manual";
            }
            else
            {
                txtlog_mode.Text = "Freerun";
                txtg_rangemode.Text = "Manual";
            }


            // ----Get averaging time(msec)
            // ----获取平均时间(msec)
            double ave = new double();

            errorcode = mpm.Get_Averaging_Time(ref ave);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtg_ave.Text = ave.ToString();

            if (txtlog_mode.Text.IndexOf("Sweep") != -1)
                // if WMOD is Sweep , Get_Averaging_Time function is not available.
                //如果WMOD是Sweep, Get_Averaging_Time函数不可用。
                txtg_ave.Text = "";

            // ----Get logging nubmer of point 
            // ----获取测试点数
            int point = new int();

            errorcode = mpm.Get_Logging_Data_Point(ref point);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtg_point.Text = point.ToString();


            // ---Get Wavelength            
            // ---获取波长
            double wave = new double();    // wavelength(nm)

            errorcode = mpm.Get_Wavelength(ref wave);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtg_wavelength.Text = wave.ToString();

            // ----Get Trigger input mode 
            // ----获取触发器输入模式
            MPM.Trigger_Input_Mode inputmode = new MPM.Trigger_Input_Mode();

            errorcode = mpm.Get_Trigger_Input_Mode(ref inputmode);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (inputmode == MPM.Trigger_Input_Mode.Extarnal)
                txtg_tinmode.Text = "Extarnal";
            else
                txtg_tinmode.Text = "Internal";

            // ----Get Setting range 
            // ----获取设置range
            if (txtg_rangemode.Text == "Manual")
            {
                int range = new int();
                errorcode = mpm.Get_Range(ref range);
                if (errorcode != 0)
                {
                    Show_Error(errorcode);
                    return;
                }

                txtg_settingrange.Text = range.ToString();
            }
            else
                txtg_settingrange.Text = "";

            // -----Sweep mode parameter 
            // -----扫描模式参数
            if (txtlog_mode.Text.IndexOf("Sweep") >-1)
            {
                double startwave = new double();             // startwave (nm)
                double stopwave = new double();               // stopwave(nm)
                double wavestep = new double();               // wavelength step(nm)
                double speed = new double();                  // sweep speed(nm/sec)

                // wavelength parameter
                // 波长参数
                errorcode = mpm.Get_Sweep_Wavelength(ref startwave, ref stopwave, ref wavestep);
                if (errorcode != 0)
                {
                    Show_Error(errorcode);
                    return;
                }

                txtg_statwave.Text = startwave.ToString();
                txtg_stopwave.Text = stopwave.ToString();
                txtg_stepwave.Text = wavestep.ToString();

                // sweep speed
                // 扫描速度
                errorcode = mpm.Get_Sweep_Speed(ref speed);
                if (errorcode != 0)
                {
                    Show_Error(errorcode);
                    return;
                }

                txtg_speed.Text = speed.ToString();
            }
        }

        private void rdolan_CheckedChanged(object sender, EventArgs e)
        {
            // ---------------------------------------------------------
            // LAN Checked
            // ----------------------------------------------------------
             txtport.Enabled = true;
        }

        private void rdo488_CheckedChanged(object sender, EventArgs e)
        {
            // -------------------------------------------
            // 488.2 Checked
            // -------------------------------------------
             txtport.Enabled = false;
             txtaddress.Text = txtsp_add.Text;
        }

        private void rdokeysightvisa_CheckedChanged(object sender, EventArgs e)
        {
            // --------------------------------------
            // Keysight visa checked
            // --------------------------------------
             txtport.Enabled = false;
             txtaddress.Text = txtsp_add.Text;
        }

        private void rdo232C_CheckedChanged(object sender, EventArgs e)
        {
            // -----------------------------------
            // 232C checked 
            // -----------------------------------
             txtport.Enabled = false;
             txtaddress.Text =  cmbcomport.Text;
        }
        private void rdovisa_CheckedChanged(object sender, EventArgs e)
        {
            // --------------------------------------
            // NI visa checked
            // --------------------------------------

             txtport.Enabled = false;
             txtaddress.Text = txtsp_add.Text;
        }
    }
}
