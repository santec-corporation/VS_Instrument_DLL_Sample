using Santec;
using System;
using System.Diagnostics;
using System.Windows.Forms;

namespace Instrument_DLL_Sample
{
    public partial class TSLSample : Form
    {
        public TSLSample()
        {
            InitializeComponent();
        }
        TSL TSL = new TSL();
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

        private void BtnConnect_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------------
            // connect
            // 连接
            // --------------------------------------------------------

            string address = TextBox1.Text;
            CommunicationTerminator terminator;
            Santec.Communication.CommunicationMethod comm_method;

            if (rdiUSB.Checked == true)
            {
                // USB Communication
                // USB 通信
                comm_method = Santec.Communication.CommunicationMethod.USB;
                //  TSL.BaudRate = int.Parse(txtPort.Text);
                TSL.DeviceID = uint.Parse(address);
            }
            else if (rdoLAN.Checked == true)
            {
                // LAN Communication
                // LAN 通信
                comm_method = Santec.Communication.CommunicationMethod.TCPIP;
                TSL.Port = int.Parse(txtPort.Text);
                TSL.IPAddress = address;
                TSL.Waittime = 20;
            }
            else
            {
                // GPIB Communication
                // GPIB通信
                comm_method = Santec.Communication.CommunicationMethod.GPIB;

                Santec.Communication.GPIBConnectType gpibmethod;
                if (rdikysightvisa.Checked == true)
                    gpibmethod = Santec.Communication.GPIBConnectType.KeysightIO;
                else if (rdiNI488.Checked == true)
                    gpibmethod = Santec.Communication.GPIBConnectType.NI4882;
                else
                    gpibmethod = Santec.Communication.GPIBConnectType.NIVisa;

                TSL.GPIBAddress = Convert.ToInt32(address);
                if (txtboad.Text == "")
                {
                    TSL.GPIBBoard = 0;
                }
                else
                {
                    TSL.GPIBBoard = Convert.ToInt32(txtboad.Text);
                }
                TSL.GPIBConnectType = gpibmethod;
            }

            // ----------------Common
            // ---------------- 常见的
            // Terminator
            // 终止符
            if (rdiCr.Checked == true)
                terminator = CommunicationTerminator.Cr;
            else if (rdiLf.Checked == true)
                terminator = CommunicationTerminator.Lf;
            else
                terminator = CommunicationTerminator.CrLf;

            TSL.Terminator = terminator;
            TSL.TimeOut = 2000;              // Communication timeout 2000msec//通信超时2000msec


            string ans = string.Empty;
            int errorcode;

            errorcode = TSL.Connect(comm_method);

            if (errorcode != 0)
            {
                TSL.DisConnect();
                Show_Error(errorcode);
                return;
            }

            // --TSL information
            // --TSL信息
            lblproductname.Text = TSL.Information.ProductName;
            lblserial.Text = TSL.Information.SerialNumber;
            lblfwversion.Text = TSL.Information.FWversion;
            lblwave.Text = TSL.Information.MinimunWavelength + "-" + TSL.Information.MaximumWavelength;
            lblfreq.Text = TSL.Information.MinimunFrequency + "-" + TSL.Information.MaximumFrequency;
            lblATTrange.Text = TSL.Information.MinimumATTValue + "-" + TSL.Information.MaximumATTValue;
            lblAPC1.Text = TSL.Information.MinimumAPCPower_dBm + "-" + TSL.Information.MaximumAPCPower_dBm;
            lblACP2.Text = TSL.Information.MinimumAPCPower_mW + "-" + TSL.Information.MaximumAPCPower_mW;
            lblSweepSpeed_Range.Text = TSL.Information.MinimumSpeed + "-" + TSL.Information.MaximumSpeed;
        }

        private void BtnDisConnect_Click(object sender, EventArgs e)
        {
            //-------------------------------------------------------
            //       Disconnect
            //       断开连接
            //--------------------------------------------------------

            int errorcode;

            errorcode = TSL.DisConnect();

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }
            // --TSL information
            // --TSL信息
            lblproductname.Text = "Product";
            lblserial.Text = "Product";
            lblfwversion.Text = "Product";
            lblwave.Text = "Product";
            lblfreq.Text = "Product";
            lblATTrange.Text = "Product";
            lblAPC1.Text = "Product";
            lblACP2.Text = "Product";
            lblSweepSpeed_Range.Text = "Product";
        }

        private void BtnLD_ON_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------------
            // LD ON
            // LD 开
            // ---------------------------------------------------
            int errcord;

            errcord = TSL.Set_LD_Status(TSL.LD_Status.LD_ON);

            if (errcord != 0)
                Show_Error(errcord);
        }

        private void BtnLD_OFF_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------------
            // LD OFF
            // LD 关
            // ---------------------------------------------------
            int errcord;

            errcord = TSL.Set_LD_Status(TSL.LD_Status.LD_OFF);

            if (errcord != 0)
                Show_Error(errcord);
        }

        private void BtnCoh_ON_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // Coh on
            // Coh 开
            // ----------------------------------------------------
            int errcord;

            errcord = TSL.Set_Coh_Control_Status(TSL.Coh_Status.Coh_ON);
            if (errcord != 0)
                Show_Error(errcord);
        }

        private void BtnCoh_OFF_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // Coh oFF
            // Coh 关
            // ----------------------------------------------------
            int errcord;

            errcord = TSL.Set_Coh_Control_Status(TSL.Coh_Status.Coh_OFF);
            if (errcord != 0)
                Show_Error(errcord);

        }

        private void BtnShutter_Open_Click(object sender, EventArgs e)
        {
            // -------------------------------------------
            // shutter Open
            // 遮挡状态开启
            // -------------------------------------------
            int errorcode;


            errorcode = TSL.Set_Shutter_Status(TSL.Shutter_Status.Shutter_Open);

            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void BtnShutter_Close_Click(object sender, EventArgs e)
        {
            // -------------------------------------------
            // shutter Close
            // 遮挡状态关闭
            // -------------------------------------------
            int errorcode;

            errorcode = TSL.Set_Shutter_Status(TSL.Shutter_Status.Shutter_Close);

            if (errorcode != 0)
                Show_Error(errorcode);

        }

        private void BtnAPC_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // Set Power mode to APC
            // 设置功率模式为自动
            // ----------------------------------------------------
            int errcord;

            errcord = TSL.Set_Power_Mode(TSL.Power_Mode.APC);
            if (errcord != 0)
                Show_Error(errcord);
        }

        private void BtnACC_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // Set Power mode to ACC
            // 设置功率模式为手动
            // ----------------------------------------------------
            int errcord;

            errcord = TSL.Set_Power_Mode(TSL.Power_Mode.ACC);
            if (errcord != 0)
                Show_Error(errcord);
        }

        private void BtndBm_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // Set Power unit to dBm
            // 设置功率单位dBm
            // ----------------------------------------------------
            int errcord;

            errcord = TSL.Set_Power_Unit(TSL.Power_Unit.dBm);
            if (errcord != 0)
                Show_Error(errcord);
        }

        private void BtnmW_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // Set Power unit to mW
            // 设置功率单位mW
            // ----------------------------------------------------
            int errcord;

            errcord = TSL.Set_Power_Unit(TSL.Power_Unit.mW);
            if (errcord != 0)
                Show_Error(errcord);
        }

        private void Btn_SetATT_Click(object sender, EventArgs e)
        {
            // -----------------------------------------
            // SetATT
            // 设置ATT数值
            // -----------------------------------------
            int errcord;

            errcord = TSL.Set_ATT_Value(double.Parse(txtatt.Text));
            if (errcord != 0)
                Show_Error(errcord);
        }

        private void Btn_SetdBm_Click(object sender, EventArgs e)
        {
            // -----------------------------------------
            // Set Power dBm
            // 设置功率（dBm）
            // -----------------------------------------
            int errcord;

            errcord = TSL.Set_APC_Power_dBm(double.Parse(txtpow.Text));
            if (errcord != 0)
                Show_Error(errcord);

        }

        private void Btn_SetmW_Click(object sender, EventArgs e)
        {
            // -----------------------------------------
            // Set Power mW
            // 设置功率（mW）
            // -----------------------------------------
            int errcord;

            errcord = TSL.Set_APC_Power_mW(double.Parse(txtpow.Text));
            if (errcord != 0)
                Show_Error(errcord);

        }

        private void Btn_GetLD_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------
            // Get LD Status
            // 获取LD状态
            // ------------------------------------------------
            int errcord;
            TSL.LD_Status LD_status = new TSL.LD_Status();

            errcord = TSL.Get_LD_Status(ref LD_status);
            if (errcord != 0)
                Show_Error(errcord);

            if (LD_status == TSL.LD_Status.LD_OFF)
                txtlds.Text = "OFF";
            else
                txtlds.Text = "ON";
        }

        private void BtnAtt_value_Click(object sender, EventArgs e)
        {
            // -------------------------------------------------------
            // Get Att value
            // 获取Att值
            // -------------------------------------------------------

            int errorcode;
            double att_value = new double();
            errorcode = TSL.Get_ATT_Value(ref att_value);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtreadatt.Text = att_value.ToString();
        }

        private void BtnPower_mode_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------
            // Get Power Mode
            // 获取功率模式
            // -----------------------------------------------
            int errcode;
            TSL.Power_Mode powermode = new TSL.Power_Mode();

            errcode = TSL.Get_Power_Mode(ref powermode);
            if (errcode != 0)
            {
                Show_Error(errcode);
                return;
            }

            if (powermode == TSL.Power_Mode.ACC)
                txtpms.Text = "ACC";
            else
                txtpms.Text = "APC";
        }

        private void BtnPower_dBm_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------
            // Get Setting power dBm
            // 获取设置功率（dBm）
            // ---------------------------------------------
            int errorcode;
            double set_pow = new double();

            errorcode = TSL.Get_Setting_Power_dBm(ref set_pow);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtreadpow.Text = set_pow.ToString();
        }

        private void BtnPower_mW_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------
            // Get Setting power mW
            // 获取设置功率（mW）
            // ---------------------------------------------
            int errorcode;
            double set_pow = new double();

            errorcode = TSL.Get_Setting_Power_mW(ref set_pow);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtreadmw.Text = set_pow.ToString();
        }

        private void Btnmonitor_dBm_Click(object sender, EventArgs e)
        {
            // -------------------------------------------------------
            // Get Monitor power dBm
            // 读取现在的监控功率（ｄBm）
            // ------------------------------------------------------
            int errorcode;
            double moni_pow = new double();

            errorcode = TSL.Get_Monitor_Power_dBm(ref moni_pow);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtreadmoni.Text = moni_pow.ToString();
        }

        private void Btnmonitor_mW_Click(object sender, EventArgs e)
        {
            // -------------------------------------------------------
            // Get Monitor power mW
            // 读取现在的监控功率（mW）
            // ------------------------------------------------------
            int errorcode;
            double moni_pow = new double();

            errorcode = TSL.Get_Monitor_Power_mW(ref moni_pow);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtradmoni_mw.Text = moni_pow.ToString();
        }

        private void BtnShutter_Status_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------
            // Get  shutter status
            // 获取遮挡状态
            // ---------------------------------------------
            int errorcode;
            TSL.Shutter_Status shutter_su = new TSL.Shutter_Status();

            errorcode = TSL.Get_Shutter_Status(ref shutter_su);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (shutter_su == TSL.Shutter_Status.Shutter_Open)
                txtshutter_su.Text = "Open";
            else
                txtshutter_su.Text = "Close";
        }

        private void BtnUnit_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------------
            // Get Unit
            // 获得单位
            // --------------------------------------------------
            int errorcode;
            TSL.Power_Unit unit = new TSL.Power_Unit();


            errorcode = TSL.Get_Power_Unit(ref unit);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (unit == TSL.Power_Unit.dBm)
                txtunit.Text = "dBm";
            else
                txtunit.Text = "mW";
        }

        private void Btn_SetWavelenth_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------------------
            // set Wavelength
            // 设置波长
            // ------------------------------------------------------------------
            double wavelength;
            int errorcode;

            wavelength = double.Parse(txtsetwave.Text);
            errorcode = TSL.Set_Wavelength(wavelength);
            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void Btn_SetFrequency_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------------
            // set Frequency
            // 设置频率
            // -------------------------------------------------------

            double frequency;
            int errorcode;

            frequency = double.Parse(txtsetfreq.Text);

            errorcode = TSL.Set_Frequency(frequency);
            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void Btn_SetFinetuning_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------
            // Set Finetuning
            // 设置微调
            // --------------------------------------------------
            int errorcode;
            double ftvalue;

            ftvalue = double.Parse(txtsetft.Text);

            errorcode = TSL.Set_Finetuning(ftvalue);

            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void Btn_Wavelength_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------------------
            // Get Setting Wavelength Value
            // 获取设置波长的值
            // ----------------------------------------------------------
            int errorcode;
            double wavelength = new double();
            errorcode = TSL.Get_Wavelength(ref wavelength);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtwave.Text = wavelength.ToString();
        }

        private void Btn_Freuency_Click(object sender, EventArgs e)
        {
            // -------------------------------------------------
            // Get Setting Frequency 
            // 获取设置频率
            // ------------------------------------------------
            int errorcode;
            double frequency = new double();

            errorcode = TSL.Get_Frequency(ref frequency);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }
            txtfreq.Text = frequency.ToString();
        }

        private void Btn_Fine_Click(object sender, EventArgs e)
        {
            // ---------------------------------------
            // Get Fine tuning value
            // 获取微调值
            // ---------------------------------------
            int errorcode;
            double ftval = new double();
            errorcode = TSL.Get_Finetuning(ref ftval);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtfine.Text = ftval.ToString();
        }

        private void Btn_Busy_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------
            // Get Busy status
            // 获取繁忙状态
            // ---------------------------------------------

            int errorcord;
            bool busy = new bool();

            errorcord = TSL.Get_Busy_Status(ref busy);

            if (errorcord != 0)
            {
                Show_Error(errorcord);
                return;
            }

            if (busy == true)
                txtbusy.Text = "Busy";
            else
                txtbusy.Text = "Standby";
        }

        private void Btn_Stangby_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------------
            // Waiting for standby until wait time
            // 等待待机直到等待时间
            // -----------------------------------------------------------
            double waittime;
            int errorcode;
            Stopwatch st = new Stopwatch();
            double busy_time;

            waittime = double.Parse(txtwait.Text);

            st.Start();
            errorcode = TSL.TSL_Busy_Check((int)(waittime));
            busy_time = st.ElapsedMilliseconds;

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            MessageBox.Show("Busy time :" + Convert.ToString(busy_time) + "ms");
        }

        private void Btn_error_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------------
            // Get TSL error code
            // 获取TSL错误代码
            // ----------------------------------------------------

            int errorcode;
            string TSL_error = string.Empty;

            errorcode = TSL.Get_System_Error(ref TSL_error);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }
            txttsl_err.Text = TSL_error;
        }

        private void Btn_SetWavelength_Click(object sender, EventArgs e)
        {
            // ----------------------------------------------------------------------
            // set Sweep  Wavelength parameters
            // 设置扫描波长参数
            // ----------------------------------------------------------------------
            double startwavelength;
            double stopwavelength;
            double wavestep;
            int errorcode;

            // -----Set wavelength
            // ----- 设置波长
            startwavelength = double.Parse(txtstart.Text);
            stopwavelength = double.Parse(txtstop.Text);

            errorcode = TSL.Set_Sweep_Wavelength(startwavelength, stopwavelength);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ------Trigger & wavelength Step
            // ------触发和波长步长
            wavestep = double.Parse(txtstep.Text);

            errorcode = TSL.Set_Trigger_Step(wavestep);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            errorcode = TSL.Set_Wavelength_Step(wavestep);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }
        }

        private void Btn_Other_Click(object sender, EventArgs e)
        {
            // --------------------------------------------------------
            // Set Sweep Parameters
            // 设置扫描参数
            // --------------------------------------------------------
            int errorcode;
            // -----Set Speed 
            // -----设定的速度
            double speed;
            speed = double.Parse(txtspeed.Text);

            errorcode = TSL.Set_Sweep_Speed(speed);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ----Set Sweep Delay
            // ----设置扫描延时
            double delay;

            delay = double.Parse(txtdelay.Text);

            errorcode = TSL.Set_Sweep_Delay(delay);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }


            // -----Set Sweep cycle 
            // -----设置扫描周期
            double cycle;
            cycle = double.Parse(txtcycle.Text);

            errorcode = TSL.Set_Sweep_Cycle((int)cycle);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            // ----Set Sweep mode parameters
            // ----设置扫描模式参数
            Set_Sweep_parameter();
        }

        private void Set_Sweep_parameter()
        {
            // ---------------------------------------------------------
            // Set Sweep parameters 
            // 设置扫描参数
            // ---------------------------------------------------------
            TSL.Sweep_Mode smode = new TSL.Sweep_Mode();
            TSL.Trigger_Input_Mode tr_inp_mode;
            TSL.Trigger_Output_Mode tr_out_mode = new TSL.Trigger_Output_Mode();
            TSL.Sweep_Start_Mode start_mode;
            TSL.TriggerOut_Source source = new TSL.TriggerOut_Source();
            if ((cmbsm.Text == "") | (cmbtin.Text == "") | (cmbtout.Text == "") | (cmbst_mod.Text == ""))
            {
                MessageBox.Show("Please enter the value");
                return;
            }


            // ---Sweep mode
            // --- 扫描模式
            switch (cmbsm.SelectedIndex)
            {
                case 0:
                    {
                        smode = TSL.Sweep_Mode.Step_Oneway;
                        break;
                    }

                case 1:
                    {
                        smode = TSL.Sweep_Mode.Continuous_Oneway;
                        break;
                    }

                case 2:
                    {
                        smode = TSL.Sweep_Mode.Step_Twoway;
                        break;
                    }

                case 3:
                    {
                        smode = TSL.Sweep_Mode.Continuous_Twoway;
                        break;
                    }
            }

            // ----Trigger input mode
            // ----触发输入模式
            if (cmbtin.Text == "Disable")
                tr_inp_mode = TSL.Trigger_Input_Mode.Disable;
            else
                tr_inp_mode = TSL.Trigger_Input_Mode.Enable;

            // -----Trigger output mode
            // -----触发输出模式
            switch (cmbtout.SelectedIndex)
            {
                case 0:
                    {
                        tr_out_mode = TSL.Trigger_Output_Mode.None;
                        break;
                    }

                case 1:
                    {
                        tr_out_mode = TSL.Trigger_Output_Mode.Stop;
                        break;
                    }

                case 2:
                    {
                        tr_out_mode = TSL.Trigger_Output_Mode.Start;
                        break;
                    }

                case 3:
                    {
                        tr_out_mode = TSL.Trigger_Output_Mode.Step;
                        break;
                    }
            }

            // ----Startmode
            // ---- 启动模式
            if (cmbst_mod.Text == "Normal")
                start_mode = TSL.Sweep_Start_Mode.Normal;
            else
                start_mode = TSL.Sweep_Start_Mode.WaitingforTrigger;
            int errorcode;

            errorcode = TSL.Set_Sweep_Mode_Parameters(smode, tr_out_mode, tr_inp_mode, start_mode);


            if (errorcode != 0)
                Show_Error(errorcode);

            if (cmbTrigger_Source.Text == "Wavelength")
                source = TSL.TriggerOut_Source.Wavelength;
            else
                source = TSL.TriggerOut_Source.Time;

            if (rdo570.Checked || rdo770.Checked == true)
            {
                errorcode = TSL.Set_TriggerOutput_Source(source);
                if (errorcode != 0)
                {
                    Show_Error(errorcode);
                    return;
                }
            }
        }

        private void BtnGet_setting_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // get sweep paremters
            // 获取扫描参数
            // -----------------------------------------------
            TSL.Sweep_Mode s_mode = new TSL.Sweep_Mode();
            TSL.Trigger_Output_Mode tr_outputmode = new TSL.Trigger_Output_Mode();
            TSL.Trigger_Input_Mode tr_inputmode = new TSL.Trigger_Input_Mode();
            TSL.Sweep_Start_Mode start_mode = new TSL.Sweep_Start_Mode();
            TSL.TriggerOut_Source source = new TSL.TriggerOut_Source();

            int errorcode;


            // ----get Sweep mode
            // ----获取扫描模式
            errorcode = TSL.Get_Sweep_Mode(ref s_mode);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (s_mode == TSL.Sweep_Mode.Continuous_Oneway)
                txtg_smod.Text = "Continuous Oneway";
            else if (s_mode == TSL.Sweep_Mode.Continuous_Twoway)
                txtg_smod.Text = "Continuous Round trip";
            else if (s_mode == TSL.Sweep_Mode.Step_Oneway)
                txtg_smod.Text = "Step Oneway";
            else
                txtg_smod.Text = "Step Round trip";

            // ---Trigger input mode 
            // ---触发输入模式
            errorcode = TSL.Get_Input_Trigger_Mode(ref tr_inputmode);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (tr_inputmode == TSL.Trigger_Input_Mode.Disable)
                txtg_tr_inp.Text = "Disable";
            else
                txtg_tr_inp.Text = "Enable";

            // ----Trigger output mode 
            // ----触发输出模式
            errorcode = TSL.Get_Trigger_Output_Mode(ref tr_outputmode);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (tr_outputmode == TSL.Trigger_Output_Mode.None)
                txtg_tri_out.Text = "None";
            else if (tr_outputmode == TSL.Trigger_Output_Mode.Start)
                txtg_tri_out.Text = "Start";
            else if (tr_outputmode == TSL.Trigger_Output_Mode.Step)
                txtg_tri_out.Text = "Step";
            else
                txtg_tri_out.Text = "Stop";


            // ----start mode
            // ---- 启动模式

            errorcode = TSL.Get_Sweep_Start_Mode(ref start_mode);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (start_mode == TSL.Sweep_Start_Mode.Normal)
                txtg_startmode.Text = "Normal";
            else
                txtg_startmode.Text = "Waiting for trigger";


            // ----Stop& Start wavelength
            // ----Stop& Start波长
            double startwave = new double();
            double stopwave = new double();

            errorcode = TSL.Get_Sweep_Wavelength(ref startwave, ref stopwave);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtg_startwave.Text = startwave.ToString();
            txtg_stopwave.Text = stopwave.ToString();

            // ---Sweep delay
            // --- 扫描延迟
            double delay = new double();

            errorcode = TSL.Get_Sweep_Delay(ref delay);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtg_delay.Text = delay.ToString();

            // -----Sweep Cycle
            // ----- 扫描周期
            int cycle = new int();

            errorcode = TSL.Get_Sweep_Cycle(ref cycle);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtg_cycle.Text = cycle.ToString();

            // ----wavelength Step 
            // ---- 波长的步长
            double wavestep = new double();

            errorcode = TSL.Get_Wavelength_Step(ref wavestep);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtg_wavestep.Text = wavestep.ToString();


            // -----Trigger step 
            // ----- 触发步长

            errorcode = TSL.Get_Trigger_Step(ref wavestep);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtg_triggerstep.Text = wavestep.ToString();

            // ----Sweep Speed 
            // ---- 扫描速度
            double speed = new double();

            errorcode = TSL.Get_Sweep_Speed(ref speed);
            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtg_speed.Text = speed.ToString();
            if (rdo570.Checked || rdo770.Checked == true)
            {
                errorcode = TSL.Get_TriggerOutput_Source(ref source);
                if (errorcode != 0)
                {
                    Show_Error(errorcode);
                    return;
                }
                if (source == TSL.TriggerOut_Source.Wavelength)
                    txtTrigger_Source.Text = "Wavelength";
                else
                    txtTrigger_Source.Text = "Time";
            }

        }

        private void Btn_Start_Click(object sender, EventArgs e)
        {
            // -------------------------------------------------
            // Sweep Start
            // 扫描开始
            // -------------------------------------------------
            int errorcode;
            errorcode = TSL.Sweep_Start();

            if (errorcode != 0)
                Show_Error(errorcode);
        }

        private void Btn_Pause_Click(object sender, EventArgs e)
        {
            // -------------------------------------------------
            // Sweep Pause
            // 扫描暂停
            // -------------------------------------------------
            int errorcode;
            errorcode = TSL.Sweep_Pause();

            if (errorcode != 0)
                Show_Error(errorcode);

        }

        private void Btn_ReStart_Click(object sender, EventArgs e)
        {
            // -------------------------------------------------
            // Sweep Restart
            // 扫描继续
            // -------------------------------------------------
            int errorcode;
            errorcode = TSL.Sweep_Restart();

            if (errorcode != 0)
                Show_Error(errorcode);

        }

        private void Btn_Stop_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------
            // Sweep Stop
            // 扫描停止
            // -----------------------------------------------------
            int errorcode;
            if (lblproductname.Text.IndexOf("TSL-570") > -1)
            {
                TSL.Sweep_Status Status = new TSL.Sweep_Status();
                System.Threading.Thread.Sleep(50);
                TSL.Get_Sweep_Status(ref Status);
                if (Status != TSL.Sweep_Status.Standby)
                {
                    errorcode = TSL.Sweep_Stop();
                    if (errorcode != 0)
                        Show_Error(errorcode);
                }
            }
            else
            {
                errorcode = TSL.Sweep_Pause();

                if (errorcode != 0)
                {
                    Show_Error(errorcode);
                    return;
                }

                errorcode = TSL.Sweep_Stop();

                if (errorcode != 0)
                    Show_Error(errorcode);
            }
        }

        private void Btn_SoftwareTrigger_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------
            // software trigger
            // 软件触发
            // ------------------------------------------------------
            int errorcode;
            errorcode = TSL.Set_Software_Trigger();

            if (errorcode != 0)
                Show_Error(errorcode);

        }

        private void Btn_GetLogg_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------------------------
            // Get Sweep Loggdata
            // 获取日志数据
            // ---------------------------------------------------------------
            int errorcord;
            int logcount = new int();
            double[] logdata = null;

            errorcord = TSL.Get_Logging_Data(ref logcount, ref logdata);

            if (errorcord != 0)
            {
                Show_Error(errorcord);
                return;
            }

            string fpath = string.Empty;
            System.IO.StreamWriter writer;
            int loop1;

            SaveFileDialog1.ShowDialog();
            fpath = SaveFileDialog1.FileName;

            writer = new System.IO.StreamWriter(fpath);

            for (loop1 = 0; loop1 <= logdata.GetUpperBound(0); loop1++)
                writer.WriteLine(logdata[loop1]);

            writer.Close();


            MessageBox.Show("Logg data read completed.");
        }

        private void Btn_Current_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------------
            // Get current cycles
            // 获取当前周期
            // ---------------------------------------------------
            int errorcode;
            int cycles = new int();

            errorcode = TSL.Get_Sweep_Count(ref cycles);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }
            txtcurrentc.Text = cycles.ToString();
        }

        private void Btn_Minstep_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------------------------
            // Calcurate Trigger minimum step form sweep speed
            // 从扫描速度计算触发最小步长
            // ------------------------------------------------------------------

            double tr_step = new double();
            double speed;
            int errorcode;

            speed = double.Parse(txtminstep.Text);

            errorcode = TSL.Cal_MinimumTriggerStep_from_SweepSpeed(speed, ref tr_step);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            MessageBox.Show("Minimum trigger step = " + System.Convert.ToString(tr_step) + "nm");
        }

        private void Btn_Waiting_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------------------
            // Waititng for sweep status
            // 等待扫描状态
            // -----------------------------------------------------------

            int errorcode;
            TSL.Sweep_Status sweep_su;
            int wait_time;
            Stopwatch st = new Stopwatch();
            double timed;

            wait_time = int.Parse(txtsw_wait.Text);


            if (cmbsweep_su.Text == "Standby")
                sweep_su = TSL.Sweep_Status.Standby;
            else if (cmbsweep_su.Text == "Running")
                sweep_su = TSL.Sweep_Status.Running;
            else if (cmbsweep_su.Text == "Pausing")
                sweep_su = TSL.Sweep_Status.Pausing;
            else if (cmbsweep_su.Text == "WaitingforTrigger")
                sweep_su = TSL.Sweep_Status.WaitingforTrigger;
            else
                sweep_su = TSL.Sweep_Status.Returning;


            st.Start();
            errorcode = TSL.Waiting_For_Sweep_Status(wait_time, sweep_su);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            timed = st.ElapsedMilliseconds;
            MessageBox.Show("waiting time:" + Convert.ToString(timed) + "msec");
        }

        private void Btn_Status_Click(object sender, EventArgs e)
        {
            // ---------------------------------------------------
            // Get Sweep status
            // 获取扫描状态
            // ---------------------------------------------------

            int errorcode;
            TSL.Sweep_Status sweep_su = new TSL.Sweep_Status();


            errorcode = TSL.Get_Sweep_Status(ref sweep_su);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            if (sweep_su == TSL.Sweep_Status.Pausing)
                txtg_sweep_su.Text = "Pause";
            else if (sweep_su == TSL.Sweep_Status.Returning)
                txtg_sweep_su.Text = "Returning";
            else if (sweep_su == TSL.Sweep_Status.Running)
                txtg_sweep_su.Text = "Runing";
            else if (sweep_su == TSL.Sweep_Status.Standby)
                txtg_sweep_su.Text = "Standby";
            else
                txtg_sweep_su.Text = "Waiting for Trigger";

        }

        private void BtnCoh_Status_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------
            // Get coh Status
            // 获取coh状态
            // ------------------------------------------------------
            int errcode;
            TSL.Coh_Status coh_status = new TSL.Coh_Status();

            errcode = TSL.Get_Coh_Control_Status(ref coh_status);
            if (errcode != 0)
            {
                Show_Error(errcode);
                return;
            }


            if (coh_status == TSL.Coh_Status.Coh_ON)
                txtcoh.Text = "ON";
            else
                txtcoh.Text = "OFF";
        }

        private void btnGetIP_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // Get IP Address
            // this function only support for TSL-570
            // 获取IP地址
            // 这个功能只支持TSL-570
            // ------------------------------------------------
            int errorcode;
            string address = string.Empty;

            errorcode = TSL.Get_IPAddress(ref address);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtip_add.Text = address;

        }

        private void rdo550_CheckedChanged(object sender, EventArgs e)
        {
            // ------------------------------------------------
            // target TSL-550 checked
            // 选择目标为TSL-550
            // ------------------------------------------------

            if (rdo550.Checked == true)
            {
                // TSL-550 can't Control from LAN & USB
                // TSL-550不能从LAN和USB控制
                rdiUSB.Enabled = false;
                rdoLAN.Enabled = false;
                btnGetIP.Enabled = false;
                btnGetPort.Enabled = false;
                btnSpeed.Enabled = false;
                Btn_Pause.Enabled = true;
                Btn_ReStart.Enabled = true;
                txtPort.Enabled = false;
                Btn_SetATT.Enabled = true;
                BtnAtt_value.Enabled = true;

            }
        }

        private void rdo570_CheckedChanged(object sender, EventArgs e)
        {
            // ------------------------------------------------
            // target TSL-570 checked
            // 选择目标为TSL-570
            // ------------------------------------------------

            if (rdo570.Checked == true)
            {
                rdiUSB.Enabled = true;
                rdoLAN.Enabled = true;
                btnGetIP.Enabled = true;
                btnGetPort.Enabled = true;
                btnSpeed.Enabled = true;
                Btn_Pause.Enabled = false;
                Btn_ReStart.Enabled = false;
                txtPort.Enabled = true;
                Btn_SetATT.Enabled = true;
                BtnAtt_value.Enabled = true;
            }
        }

        private void btnGet_Visa_Click(object sender, EventArgs e)
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
        private void cmbusbresouce_SelectedIndexChanged(object sender, EventArgs e)
        {
            // -------------------------------------------------------
            // Select usb  resouce & Show deveice number
            // 选择usb资源并显示设备号
            // -------------------------------------------------------

            if (cmbusbresouce.Text == "")
                return;


            txtdev_num.Text = cmbusbresouce.SelectedIndex.ToString();
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

        private void btnSpeed_Click(object sender, EventArgs e)
        {
            // ------------------------------------------------------
            // Get SweepSpeed table
            // 获取SweepSpeed表
            // ------------------------------------------------------

            int errorcode;
            double[] table = null;
            cmb570_Speed.Items.Clear();
            if (rdo570.Checked || rdo770.Checked == true)
            {
                errorcode = TSL.Get_Sweep_Speed_table(ref table);
                int loop1;

                for (loop1 = 0; loop1 < table.Length; loop1++)

                    cmb570_Speed.Items.Add(table[loop1]);

                if (errorcode != 0)
                {
                    Show_Error(errorcode);
                    return;
                }

            }
        }

        private void rdiUSB_CheckedChanged(object sender, EventArgs e)
        {
            //  --------------------------------------------------------------
            //  USB communcation checked
            //  选择USB 通讯
            // --------------------------------------------------------------

            if (rdiUSB.Checked == true)
            {
                TextBox1.Text = txtdev_num.Text;         // USB Control Device ID //USB控制设备ID
                txtPort.Enabled = true;
                txtPort.Text = "5000";
            }
        }

        private void rdoLAN_CheckedChanged(object sender, EventArgs e)
        {
            //  --------------------------------------------------------------
            //   LAN Commnuncation Checked
            //   选择 LAN 通讯
            //  --------------------------------------------------------------

            if (rdoLAN.Checked == true)
            {
                txtPort.Enabled = true;
                txtPort.Text = "5000";
            }
        }

        private void btnGetPort_Click(object sender, EventArgs e)
        {
            // -----------------------------------------------
            // Get Port
            // this function only support for TSL-570
            // 获取端口
            // 这个功能只支持TSL-570
            // ------------------------------------------------
            int errorcode;
            int Port = new int();

            errorcode = TSL.Get_LAN_Portnumber(ref Port);

            if (errorcode != 0)
            {
                Show_Error(errorcode);
                return;
            }

            txtlan_port.Text = Port.ToString();

        }

        private void rdo770_CheckedChanged(object sender, EventArgs e)
        {
            // ------------------------------------------------
            // target TSL-770 checked
            // 选择目标为TSL-770
            // ------------------------------------------------

            if (rdo770.Checked == true)
            {
                rdiUSB.Enabled = true;
                rdoLAN.Enabled = true;
                btnGetIP.Enabled = true;
                btnGetPort.Enabled = true;
                btnSpeed.Enabled = true;
                Btn_Pause.Enabled = false;
                Btn_ReStart.Enabled = false;
                txtPort.Enabled = true;
                Btn_SetATT.Enabled = false;
                BtnAtt_value.Enabled = false;
            }

        }
    }
}
