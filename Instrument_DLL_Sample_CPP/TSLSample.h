#pragma once

namespace Instrument_DLL_Sample_CPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Santec;
	using namespace Santec::Communication;
	using namespace std;

	/// <summary>
	/// TSLSample 摘要
	/// </summary>
	public ref class TSLSample : public System::Windows::Forms::Form
	{
	public:
		TSLSample(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	internal: System::Windows::Forms::Label^  label79;
	public:
	internal: System::Windows::Forms::TextBox^  txtTrigger_Source;
	internal: System::Windows::Forms::ComboBox^  cmbTrigger_Source;
	internal: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::TabControl^  tabControl1;
	internal:
	private: System::Windows::Forms::TabPage^  tabPage1;
	internal: System::Windows::Forms::GroupBox^  groupBox16;
	private:
	internal: System::Windows::Forms::Label^  label37;
	internal: System::Windows::Forms::TextBox^  txtdev_num;
	internal: System::Windows::Forms::Label^  label38;
	internal: System::Windows::Forms::Label^  label39;
	internal: System::Windows::Forms::TextBox^  txtaddressnum;
	internal: System::Windows::Forms::TextBox^  txtboad;
	internal: System::Windows::Forms::Button^  btnSplit;
	internal: System::Windows::Forms::Button^  btnGet_Visa;
	internal: System::Windows::Forms::Label^  label40;
	internal: System::Windows::Forms::Label^  label41;
	internal: System::Windows::Forms::Button^  btnUsb_resouce;
	internal: System::Windows::Forms::ComboBox^  cmbusbresouce;
	internal: System::Windows::Forms::ComboBox^  cmbgpib_resouce;
	internal: System::Windows::Forms::GroupBox^  groupBox17;
	internal: System::Windows::Forms::GroupBox^  groupBox18;
	internal: System::Windows::Forms::RadioButton^  rdo570;
	internal: System::Windows::Forms::RadioButton^  rdo550;
	internal: System::Windows::Forms::GroupBox^  groupBox20;
	internal: System::Windows::Forms::Label^  lblSweepSpeed_Range;
	internal: System::Windows::Forms::Label^  label42;
	internal: System::Windows::Forms::Label^  lblwave;
	internal: System::Windows::Forms::GroupBox^  groupBox21;
	internal: System::Windows::Forms::Label^  label58;
	internal: System::Windows::Forms::TextBox^  txtPort;
	internal: System::Windows::Forms::RadioButton^  rdoLAN;
	internal: System::Windows::Forms::RadioButton^  rdiUSB;
	internal: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::TabPage^  tabPage2;
	internal:
	internal: System::Windows::Forms::GroupBox^  groupBox26;
	private:
	internal: System::Windows::Forms::Button^  btnGetPort;
	internal: System::Windows::Forms::Label^  label62;
	internal: System::Windows::Forms::TextBox^  txtlan_port;
	internal: System::Windows::Forms::Label^  label63;
	internal: System::Windows::Forms::TextBox^  txtip_add;
	internal: System::Windows::Forms::Button^  btnGetIP;
	private: System::Windows::Forms::TabPage^  tabPage3;
	internal:
	private: System::Windows::Forms::GroupBox^  groupBox27;
	internal: System::Windows::Forms::ComboBox^  cmb570_Speed;
	private:
	internal: System::Windows::Forms::Label^  label65;
	internal: System::Windows::Forms::Button^  btnSpeed;
	internal: System::Windows::Forms::RadioButton^  rdo770;

			  TSL TSL;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~TSLSample()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Button^  BtnShutter_Close;
	protected:
	internal: System::Windows::Forms::Button^  BtnShutter_Open;
	internal: System::Windows::Forms::Label^  Label7;
	internal: System::Windows::Forms::Button^  Btn_SetmW;
	internal: System::Windows::Forms::TextBox^  txtpow;
	internal: System::Windows::Forms::Button^  Btn_SetdBm;
	internal: System::Windows::Forms::GroupBox^  GroupBox7;
	internal: System::Windows::Forms::Label^  Label6;
	internal: System::Windows::Forms::Button^  Btn_SetATT;
	internal: System::Windows::Forms::TextBox^  txtatt;
	internal: System::Windows::Forms::Button^  BtnmW;
	internal: System::Windows::Forms::Button^  BtndBm;
	internal: System::Windows::Forms::Button^  BtnACC;
	internal: System::Windows::Forms::Button^  BtnAPC;
	internal: System::Windows::Forms::Button^  BtnCoh_OFF;
	internal: System::Windows::Forms::Button^  BtnCoh_ON;
	internal: System::Windows::Forms::Button^  BtnLD_OFF;
	internal: System::Windows::Forms::Button^  BtnLD_ON;
	internal: System::Windows::Forms::Button^  BtnShutter_Status;
	internal: System::Windows::Forms::TextBox^  txtshutter_su;
	internal: System::Windows::Forms::TextBox^  txtcoh;
	internal: System::Windows::Forms::Button^  BtnCoh_Status;
	internal: System::Windows::Forms::Button^  Btnmonitor_mW;
	internal: System::Windows::Forms::TextBox^  txtradmoni_mw;
	internal: System::Windows::Forms::Button^  Btnmonitor_dBm;
	internal: System::Windows::Forms::TextBox^  txtreadmoni;
	internal: System::Windows::Forms::TextBox^  txtreadmw;
	internal: System::Windows::Forms::TextBox^  txtsetft;


	internal: System::Windows::Forms::Label^  Label8;
	internal: System::Windows::Forms::TextBox^  txttsl_err;
	internal: System::Windows::Forms::Button^  Btn_error;
	internal: System::Windows::Forms::TextBox^  txtwait;
	internal: System::Windows::Forms::Button^  Btn_Stangby;
	internal: System::Windows::Forms::TextBox^  txtbusy;
	internal: System::Windows::Forms::Button^  Btn_Busy;
	internal: System::Windows::Forms::Button^  BtnPower_mW;
	internal: System::Windows::Forms::Button^  BtnPower_dBm;
	internal: System::Windows::Forms::TextBox^  txtreadpow;
	internal: System::Windows::Forms::Button^  BtnAtt_value;
	internal: System::Windows::Forms::TextBox^  txtreadatt;
	internal: System::Windows::Forms::TextBox^  txtunit;
	internal: System::Windows::Forms::Button^  BtnUnit;
	internal: System::Windows::Forms::Button^  BtnPower_mode;
	internal: System::Windows::Forms::TextBox^  txtpms;
	internal: System::Windows::Forms::Button^  Btn_GetLD;

	internal: System::Windows::Forms::GroupBox^  GroupBox8;
	internal: System::Windows::Forms::TextBox^  txtlds;
	internal: System::Windows::Forms::Label^  lblACP2;

	internal: System::Windows::Forms::RadioButton^  rdiNI488;
	internal: System::Windows::Forms::RadioButton^  rdikysightvisa;
	internal: System::Windows::Forms::Label^  lblATTrange;
	internal: System::Windows::Forms::Label^  Label15;
	internal: System::Windows::Forms::Label^  Label14;
	internal: System::Windows::Forms::Label^  lblAPC1;
	internal: System::Windows::Forms::Label^  Label12;
	internal: System::Windows::Forms::Label^  lblfreq;
	internal: System::Windows::Forms::Label^  Label10;
	internal: System::Windows::Forms::Label^  lblfwversion;
	internal: System::Windows::Forms::Label^  lblserial;
	internal: System::Windows::Forms::Label^  lblproductname;
	internal: System::Windows::Forms::Label^  Label5;
	internal: System::Windows::Forms::Label^  Label4;
	internal: System::Windows::Forms::Label^  Label3;
	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::Button^  BtnConnect;

	internal: System::Windows::Forms::TextBox^  TextBox1;
	internal: System::Windows::Forms::RadioButton^  rdiNIvisa;

	internal: System::Windows::Forms::Button^  BtnDisConnect;
	internal: System::Windows::Forms::GroupBox^  GroupBox6;
	internal: System::Windows::Forms::RadioButton^  rdiCr;
	internal: System::Windows::Forms::RadioButton^  rdiCrLF;
	internal: System::Windows::Forms::RadioButton^  rdiLf;


	internal: System::Windows::Forms::Button^  Btn_SetFinetuning;

	internal: System::Windows::Forms::TextBox^  txtsetfreq;
	internal: System::Windows::Forms::Label^  Label28;
	internal: System::Windows::Forms::Label^  Label27;

	internal: System::Windows::Forms::TextBox^  txtminstep;
	internal: System::Windows::Forms::Button^  Btn_Minstep;
	internal: System::Windows::Forms::Label^  Label35;
	internal: System::Windows::Forms::Button^  Btn_Start;
	internal: System::Windows::Forms::TextBox^  txtsw_wait;
	internal: System::Windows::Forms::Button^  Btn_Pause;
	internal: System::Windows::Forms::Label^  Label33;
	internal: System::Windows::Forms::TextBox^  txtg_wavestep;
	internal: System::Windows::Forms::Label^  Label29;
	internal: System::Windows::Forms::Button^  Btn_Waiting;

	internal: System::Windows::Forms::ComboBox^  cmbsweep_su;
	internal: System::Windows::Forms::TextBox^  txtg_triggerstep;
	internal: System::Windows::Forms::TextBox^  txtg_stopwave;
	internal: System::Windows::Forms::Button^  Btn_Stop;
	internal: System::Windows::Forms::TextBox^  txtg_speed;
	internal: System::Windows::Forms::Label^  Label36;
	internal: System::Windows::Forms::TextBox^  txtcurrentc;
	internal: System::Windows::Forms::Button^  Btn_SoftwareTrigger;
	internal: System::Windows::Forms::Button^  Btn_Current;
	internal: System::Windows::Forms::Button^  Btn_ReStart;
	internal: System::Windows::Forms::Label^  Label34;
	internal: System::Windows::Forms::TextBox^  txtg_startmode;
	internal: System::Windows::Forms::Button^  Btn_GetLogg;
	internal: System::Windows::Forms::TextBox^  txtg_tri_out;
	internal: System::Windows::Forms::Button^  Btn_Status;
	internal: System::Windows::Forms::Button^  BtnGet_setting;
	internal: System::Windows::Forms::Label^  Label13;
	internal: System::Windows::Forms::Label^  Label11;
	internal: System::Windows::Forms::Label^  Label9;
	internal: System::Windows::Forms::TextBox^  txtg_cycle;
	internal: System::Windows::Forms::TextBox^  txtg_sweep_su;
	internal: System::Windows::Forms::GroupBox^  GroupBox13;
	internal: System::Windows::Forms::TextBox^  txtg_delay;
	internal: System::Windows::Forms::Label^  Label26;
	internal: System::Windows::Forms::TextBox^  txtg_startwave;
	internal: System::Windows::Forms::TextBox^  txtg_tr_inp;
	internal: System::Windows::Forms::Label^  Label24;
	internal: System::Windows::Forms::Label^  Label23;
	internal: System::Windows::Forms::TextBox^  txtg_smod;

	internal: System::Windows::Forms::GroupBox^  GroupBox12;
	internal: System::Windows::Forms::GroupBox^  GroupBox15;
	internal: System::Windows::Forms::Button^  Btn_Other;
	internal: System::Windows::Forms::ComboBox^  cmbsm;
	internal: System::Windows::Forms::Label^  Label16;
	internal: System::Windows::Forms::Label^  Label32;
	internal: System::Windows::Forms::ComboBox^  cmbtin;
	internal: System::Windows::Forms::TextBox^  txtdelay;
	internal: System::Windows::Forms::Label^  Label17;
	internal: System::Windows::Forms::Label^  Label31;
	internal: System::Windows::Forms::ComboBox^  cmbtout;
	internal: System::Windows::Forms::TextBox^  txtcycle;
	internal: System::Windows::Forms::Label^  Label18;
	internal: System::Windows::Forms::Label^  Label30;
	internal: System::Windows::Forms::ComboBox^  cmbst_mod;
	internal: System::Windows::Forms::TextBox^  txtspeed;
	internal: System::Windows::Forms::Label^  Label25;
	internal: System::Windows::Forms::GroupBox^  GroupBox14;
	internal: System::Windows::Forms::TextBox^  txtstart;
	internal: System::Windows::Forms::Label^  Label19;
	internal: System::Windows::Forms::TextBox^  txtstop;
	internal: System::Windows::Forms::Label^  Label20;
	internal: System::Windows::Forms::TextBox^  txtstep;
	internal: System::Windows::Forms::Label^  Label21;
	internal: System::Windows::Forms::Button^  Btn_SetWavelength;
	internal: System::Windows::Forms::SaveFileDialog^  SaveFileDialog1;

	internal: System::Windows::Forms::GroupBox^  GroupBox11;
	internal: System::Windows::Forms::Button^  Btn_Fine;
	internal: System::Windows::Forms::TextBox^  txtfine;
	internal: System::Windows::Forms::Button^  Btn_Freuency;
	internal: System::Windows::Forms::TextBox^  txtfreq;
	internal: System::Windows::Forms::Button^  Btn_Wavelength;
	internal: System::Windows::Forms::TextBox^  txtwave;
	internal: System::Windows::Forms::GroupBox^  GroupBox10;
	internal: System::Windows::Forms::Button^  Btn_SetFrequency;
	internal: System::Windows::Forms::Button^  Btn_SetWavelenth;
	internal: System::Windows::Forms::TextBox^  txtsetwave;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TSLSample::typeid));
			this->BtnShutter_Close = (gcnew System::Windows::Forms::Button());
			this->BtnShutter_Open = (gcnew System::Windows::Forms::Button());
			this->Label7 = (gcnew System::Windows::Forms::Label());
			this->Btn_SetmW = (gcnew System::Windows::Forms::Button());
			this->txtpow = (gcnew System::Windows::Forms::TextBox());
			this->Btn_SetdBm = (gcnew System::Windows::Forms::Button());
			this->GroupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->Label6 = (gcnew System::Windows::Forms::Label());
			this->Btn_SetATT = (gcnew System::Windows::Forms::Button());
			this->txtatt = (gcnew System::Windows::Forms::TextBox());
			this->BtnmW = (gcnew System::Windows::Forms::Button());
			this->BtndBm = (gcnew System::Windows::Forms::Button());
			this->BtnACC = (gcnew System::Windows::Forms::Button());
			this->BtnAPC = (gcnew System::Windows::Forms::Button());
			this->BtnCoh_OFF = (gcnew System::Windows::Forms::Button());
			this->BtnCoh_ON = (gcnew System::Windows::Forms::Button());
			this->BtnLD_OFF = (gcnew System::Windows::Forms::Button());
			this->BtnLD_ON = (gcnew System::Windows::Forms::Button());
			this->BtnShutter_Status = (gcnew System::Windows::Forms::Button());
			this->txtshutter_su = (gcnew System::Windows::Forms::TextBox());
			this->txtcoh = (gcnew System::Windows::Forms::TextBox());
			this->BtnCoh_Status = (gcnew System::Windows::Forms::Button());
			this->Btnmonitor_mW = (gcnew System::Windows::Forms::Button());
			this->txtradmoni_mw = (gcnew System::Windows::Forms::TextBox());
			this->Btnmonitor_dBm = (gcnew System::Windows::Forms::Button());
			this->txtreadmoni = (gcnew System::Windows::Forms::TextBox());
			this->txtreadmw = (gcnew System::Windows::Forms::TextBox());
			this->txtsetft = (gcnew System::Windows::Forms::TextBox());
			this->Label8 = (gcnew System::Windows::Forms::Label());
			this->txttsl_err = (gcnew System::Windows::Forms::TextBox());
			this->Btn_error = (gcnew System::Windows::Forms::Button());
			this->txtwait = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Stangby = (gcnew System::Windows::Forms::Button());
			this->txtbusy = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Busy = (gcnew System::Windows::Forms::Button());
			this->BtnPower_mW = (gcnew System::Windows::Forms::Button());
			this->BtnPower_dBm = (gcnew System::Windows::Forms::Button());
			this->txtreadpow = (gcnew System::Windows::Forms::TextBox());
			this->BtnAtt_value = (gcnew System::Windows::Forms::Button());
			this->txtreadatt = (gcnew System::Windows::Forms::TextBox());
			this->txtunit = (gcnew System::Windows::Forms::TextBox());
			this->BtnUnit = (gcnew System::Windows::Forms::Button());
			this->BtnPower_mode = (gcnew System::Windows::Forms::Button());
			this->txtpms = (gcnew System::Windows::Forms::TextBox());
			this->Btn_GetLD = (gcnew System::Windows::Forms::Button());
			this->GroupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->txtlds = (gcnew System::Windows::Forms::TextBox());
			this->lblACP2 = (gcnew System::Windows::Forms::Label());
			this->rdiNI488 = (gcnew System::Windows::Forms::RadioButton());
			this->rdikysightvisa = (gcnew System::Windows::Forms::RadioButton());
			this->lblATTrange = (gcnew System::Windows::Forms::Label());
			this->Label15 = (gcnew System::Windows::Forms::Label());
			this->Label14 = (gcnew System::Windows::Forms::Label());
			this->lblAPC1 = (gcnew System::Windows::Forms::Label());
			this->Label12 = (gcnew System::Windows::Forms::Label());
			this->lblfreq = (gcnew System::Windows::Forms::Label());
			this->Label10 = (gcnew System::Windows::Forms::Label());
			this->lblfwversion = (gcnew System::Windows::Forms::Label());
			this->lblserial = (gcnew System::Windows::Forms::Label());
			this->lblproductname = (gcnew System::Windows::Forms::Label());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->BtnConnect = (gcnew System::Windows::Forms::Button());
			this->TextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->rdiNIvisa = (gcnew System::Windows::Forms::RadioButton());
			this->BtnDisConnect = (gcnew System::Windows::Forms::Button());
			this->GroupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->rdiCr = (gcnew System::Windows::Forms::RadioButton());
			this->rdiCrLF = (gcnew System::Windows::Forms::RadioButton());
			this->rdiLf = (gcnew System::Windows::Forms::RadioButton());
			this->Btn_SetFinetuning = (gcnew System::Windows::Forms::Button());
			this->txtsetfreq = (gcnew System::Windows::Forms::TextBox());
			this->Label28 = (gcnew System::Windows::Forms::Label());
			this->Label27 = (gcnew System::Windows::Forms::Label());
			this->txtminstep = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Minstep = (gcnew System::Windows::Forms::Button());
			this->Label35 = (gcnew System::Windows::Forms::Label());
			this->Btn_Start = (gcnew System::Windows::Forms::Button());
			this->txtsw_wait = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Pause = (gcnew System::Windows::Forms::Button());
			this->Label33 = (gcnew System::Windows::Forms::Label());
			this->txtg_wavestep = (gcnew System::Windows::Forms::TextBox());
			this->Label29 = (gcnew System::Windows::Forms::Label());
			this->Btn_Waiting = (gcnew System::Windows::Forms::Button());
			this->cmbsweep_su = (gcnew System::Windows::Forms::ComboBox());
			this->txtg_triggerstep = (gcnew System::Windows::Forms::TextBox());
			this->txtg_stopwave = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Stop = (gcnew System::Windows::Forms::Button());
			this->txtg_speed = (gcnew System::Windows::Forms::TextBox());
			this->Label36 = (gcnew System::Windows::Forms::Label());
			this->txtcurrentc = (gcnew System::Windows::Forms::TextBox());
			this->Btn_SoftwareTrigger = (gcnew System::Windows::Forms::Button());
			this->Btn_Current = (gcnew System::Windows::Forms::Button());
			this->Btn_ReStart = (gcnew System::Windows::Forms::Button());
			this->Label34 = (gcnew System::Windows::Forms::Label());
			this->txtg_startmode = (gcnew System::Windows::Forms::TextBox());
			this->Btn_GetLogg = (gcnew System::Windows::Forms::Button());
			this->txtg_tri_out = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Status = (gcnew System::Windows::Forms::Button());
			this->BtnGet_setting = (gcnew System::Windows::Forms::Button());
			this->Label13 = (gcnew System::Windows::Forms::Label());
			this->Label11 = (gcnew System::Windows::Forms::Label());
			this->Label9 = (gcnew System::Windows::Forms::Label());
			this->txtg_cycle = (gcnew System::Windows::Forms::TextBox());
			this->txtg_sweep_su = (gcnew System::Windows::Forms::TextBox());
			this->GroupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->txtTrigger_Source = (gcnew System::Windows::Forms::TextBox());
			this->txtg_delay = (gcnew System::Windows::Forms::TextBox());
			this->Label26 = (gcnew System::Windows::Forms::Label());
			this->txtg_startwave = (gcnew System::Windows::Forms::TextBox());
			this->txtg_tr_inp = (gcnew System::Windows::Forms::TextBox());
			this->Label24 = (gcnew System::Windows::Forms::Label());
			this->Label23 = (gcnew System::Windows::Forms::Label());
			this->txtg_smod = (gcnew System::Windows::Forms::TextBox());
			this->GroupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->GroupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbTrigger_Source = (gcnew System::Windows::Forms::ComboBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->Btn_Other = (gcnew System::Windows::Forms::Button());
			this->cmbsm = (gcnew System::Windows::Forms::ComboBox());
			this->Label16 = (gcnew System::Windows::Forms::Label());
			this->Label32 = (gcnew System::Windows::Forms::Label());
			this->cmbtin = (gcnew System::Windows::Forms::ComboBox());
			this->txtdelay = (gcnew System::Windows::Forms::TextBox());
			this->Label17 = (gcnew System::Windows::Forms::Label());
			this->Label31 = (gcnew System::Windows::Forms::Label());
			this->cmbtout = (gcnew System::Windows::Forms::ComboBox());
			this->txtcycle = (gcnew System::Windows::Forms::TextBox());
			this->Label18 = (gcnew System::Windows::Forms::Label());
			this->Label30 = (gcnew System::Windows::Forms::Label());
			this->cmbst_mod = (gcnew System::Windows::Forms::ComboBox());
			this->txtspeed = (gcnew System::Windows::Forms::TextBox());
			this->Label25 = (gcnew System::Windows::Forms::Label());
			this->GroupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->txtstart = (gcnew System::Windows::Forms::TextBox());
			this->Label19 = (gcnew System::Windows::Forms::Label());
			this->txtstop = (gcnew System::Windows::Forms::TextBox());
			this->Label20 = (gcnew System::Windows::Forms::Label());
			this->txtstep = (gcnew System::Windows::Forms::TextBox());
			this->Label21 = (gcnew System::Windows::Forms::Label());
			this->Btn_SetWavelength = (gcnew System::Windows::Forms::Button());
			this->SaveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->GroupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->Btn_Fine = (gcnew System::Windows::Forms::Button());
			this->txtfine = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Freuency = (gcnew System::Windows::Forms::Button());
			this->txtfreq = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Wavelength = (gcnew System::Windows::Forms::Button());
			this->txtwave = (gcnew System::Windows::Forms::TextBox());
			this->GroupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->Btn_SetFrequency = (gcnew System::Windows::Forms::Button());
			this->Btn_SetWavelenth = (gcnew System::Windows::Forms::Button());
			this->txtsetwave = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->txtdev_num = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->txtaddressnum = (gcnew System::Windows::Forms::TextBox());
			this->txtboad = (gcnew System::Windows::Forms::TextBox());
			this->btnSplit = (gcnew System::Windows::Forms::Button());
			this->btnGet_Visa = (gcnew System::Windows::Forms::Button());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->btnUsb_resouce = (gcnew System::Windows::Forms::Button());
			this->cmbusbresouce = (gcnew System::Windows::Forms::ComboBox());
			this->cmbgpib_resouce = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox18 = (gcnew System::Windows::Forms::GroupBox());
			this->rdo770 = (gcnew System::Windows::Forms::RadioButton());
			this->rdo570 = (gcnew System::Windows::Forms::RadioButton());
			this->rdo550 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox20 = (gcnew System::Windows::Forms::GroupBox());
			this->lblSweepSpeed_Range = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->lblwave = (gcnew System::Windows::Forms::Label());
			this->groupBox21 = (gcnew System::Windows::Forms::GroupBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->txtPort = (gcnew System::Windows::Forms::TextBox());
			this->rdoLAN = (gcnew System::Windows::Forms::RadioButton());
			this->rdiUSB = (gcnew System::Windows::Forms::RadioButton());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox26 = (gcnew System::Windows::Forms::GroupBox());
			this->btnGetPort = (gcnew System::Windows::Forms::Button());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->txtlan_port = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->txtip_add = (gcnew System::Windows::Forms::TextBox());
			this->btnGetIP = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox27 = (gcnew System::Windows::Forms::GroupBox());
			this->cmb570_Speed = (gcnew System::Windows::Forms::ComboBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->btnSpeed = (gcnew System::Windows::Forms::Button());
			this->GroupBox7->SuspendLayout();
			this->GroupBox8->SuspendLayout();
			this->GroupBox6->SuspendLayout();
			this->GroupBox13->SuspendLayout();
			this->GroupBox12->SuspendLayout();
			this->GroupBox15->SuspendLayout();
			this->GroupBox14->SuspendLayout();
			this->GroupBox11->SuspendLayout();
			this->GroupBox10->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->groupBox17->SuspendLayout();
			this->groupBox18->SuspendLayout();
			this->groupBox20->SuspendLayout();
			this->groupBox21->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox26->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox27->SuspendLayout();
			this->SuspendLayout();
			// 
			// BtnShutter_Close
			// 
			resources->ApplyResources(this->BtnShutter_Close, L"BtnShutter_Close");
			this->BtnShutter_Close->Name = L"BtnShutter_Close";
			this->BtnShutter_Close->UseVisualStyleBackColor = true;
			this->BtnShutter_Close->Click += gcnew System::EventHandler(this, &TSLSample::BtnShutter_Close_Click);
			// 
			// BtnShutter_Open
			// 
			resources->ApplyResources(this->BtnShutter_Open, L"BtnShutter_Open");
			this->BtnShutter_Open->Name = L"BtnShutter_Open";
			this->BtnShutter_Open->UseVisualStyleBackColor = true;
			this->BtnShutter_Open->Click += gcnew System::EventHandler(this, &TSLSample::BtnShutter_Open_Click);
			// 
			// Label7
			// 
			resources->ApplyResources(this->Label7, L"Label7");
			this->Label7->Name = L"Label7";
			// 
			// Btn_SetmW
			// 
			resources->ApplyResources(this->Btn_SetmW, L"Btn_SetmW");
			this->Btn_SetmW->Name = L"Btn_SetmW";
			this->Btn_SetmW->UseVisualStyleBackColor = true;
			this->Btn_SetmW->Click += gcnew System::EventHandler(this, &TSLSample::Btn_SetmW_Click);
			// 
			// txtpow
			// 
			resources->ApplyResources(this->txtpow, L"txtpow");
			this->txtpow->Name = L"txtpow";
			// 
			// Btn_SetdBm
			// 
			resources->ApplyResources(this->Btn_SetdBm, L"Btn_SetdBm");
			this->Btn_SetdBm->Name = L"Btn_SetdBm";
			this->Btn_SetdBm->UseVisualStyleBackColor = true;
			this->Btn_SetdBm->Click += gcnew System::EventHandler(this, &TSLSample::Btn_SetdBm_Click);
			// 
			// GroupBox7
			// 
			this->GroupBox7->Controls->Add(this->BtnShutter_Close);
			this->GroupBox7->Controls->Add(this->BtnShutter_Open);
			this->GroupBox7->Controls->Add(this->Label7);
			this->GroupBox7->Controls->Add(this->Btn_SetmW);
			this->GroupBox7->Controls->Add(this->txtpow);
			this->GroupBox7->Controls->Add(this->Label6);
			this->GroupBox7->Controls->Add(this->Btn_SetdBm);
			this->GroupBox7->Controls->Add(this->Btn_SetATT);
			this->GroupBox7->Controls->Add(this->txtatt);
			this->GroupBox7->Controls->Add(this->BtnmW);
			this->GroupBox7->Controls->Add(this->BtndBm);
			this->GroupBox7->Controls->Add(this->BtnACC);
			this->GroupBox7->Controls->Add(this->BtnAPC);
			this->GroupBox7->Controls->Add(this->BtnCoh_OFF);
			this->GroupBox7->Controls->Add(this->BtnCoh_ON);
			this->GroupBox7->Controls->Add(this->BtnLD_OFF);
			this->GroupBox7->Controls->Add(this->BtnLD_ON);
			resources->ApplyResources(this->GroupBox7, L"GroupBox7");
			this->GroupBox7->Name = L"GroupBox7";
			this->GroupBox7->TabStop = false;
			// 
			// Label6
			// 
			resources->ApplyResources(this->Label6, L"Label6");
			this->Label6->Name = L"Label6";
			// 
			// Btn_SetATT
			// 
			resources->ApplyResources(this->Btn_SetATT, L"Btn_SetATT");
			this->Btn_SetATT->Name = L"Btn_SetATT";
			this->Btn_SetATT->UseVisualStyleBackColor = true;
			this->Btn_SetATT->Click += gcnew System::EventHandler(this, &TSLSample::Btn_SetATT_Click);
			// 
			// txtatt
			// 
			resources->ApplyResources(this->txtatt, L"txtatt");
			this->txtatt->Name = L"txtatt";
			// 
			// BtnmW
			// 
			resources->ApplyResources(this->BtnmW, L"BtnmW");
			this->BtnmW->Name = L"BtnmW";
			this->BtnmW->UseVisualStyleBackColor = true;
			this->BtnmW->Click += gcnew System::EventHandler(this, &TSLSample::BtnmW_Click);
			// 
			// BtndBm
			// 
			resources->ApplyResources(this->BtndBm, L"BtndBm");
			this->BtndBm->Name = L"BtndBm";
			this->BtndBm->UseVisualStyleBackColor = true;
			this->BtndBm->Click += gcnew System::EventHandler(this, &TSLSample::BtndBm_Click);
			// 
			// BtnACC
			// 
			resources->ApplyResources(this->BtnACC, L"BtnACC");
			this->BtnACC->Name = L"BtnACC";
			this->BtnACC->UseVisualStyleBackColor = true;
			this->BtnACC->Click += gcnew System::EventHandler(this, &TSLSample::BtnACC_Click);
			// 
			// BtnAPC
			// 
			resources->ApplyResources(this->BtnAPC, L"BtnAPC");
			this->BtnAPC->Name = L"BtnAPC";
			this->BtnAPC->UseVisualStyleBackColor = true;
			this->BtnAPC->Click += gcnew System::EventHandler(this, &TSLSample::BtnAPC_Click);
			// 
			// BtnCoh_OFF
			// 
			resources->ApplyResources(this->BtnCoh_OFF, L"BtnCoh_OFF");
			this->BtnCoh_OFF->Name = L"BtnCoh_OFF";
			this->BtnCoh_OFF->UseVisualStyleBackColor = true;
			this->BtnCoh_OFF->Click += gcnew System::EventHandler(this, &TSLSample::BtnCoh_OFF_Click);
			// 
			// BtnCoh_ON
			// 
			resources->ApplyResources(this->BtnCoh_ON, L"BtnCoh_ON");
			this->BtnCoh_ON->Name = L"BtnCoh_ON";
			this->BtnCoh_ON->UseVisualStyleBackColor = true;
			this->BtnCoh_ON->Click += gcnew System::EventHandler(this, &TSLSample::BtnCoh_ON_Click);
			// 
			// BtnLD_OFF
			// 
			resources->ApplyResources(this->BtnLD_OFF, L"BtnLD_OFF");
			this->BtnLD_OFF->Name = L"BtnLD_OFF";
			this->BtnLD_OFF->UseVisualStyleBackColor = true;
			this->BtnLD_OFF->Click += gcnew System::EventHandler(this, &TSLSample::BtnLD_OFF_Click);
			// 
			// BtnLD_ON
			// 
			resources->ApplyResources(this->BtnLD_ON, L"BtnLD_ON");
			this->BtnLD_ON->Name = L"BtnLD_ON";
			this->BtnLD_ON->UseVisualStyleBackColor = true;
			this->BtnLD_ON->Click += gcnew System::EventHandler(this, &TSLSample::BtnLD_ON_Click);
			// 
			// BtnShutter_Status
			// 
			resources->ApplyResources(this->BtnShutter_Status, L"BtnShutter_Status");
			this->BtnShutter_Status->Name = L"BtnShutter_Status";
			this->BtnShutter_Status->UseVisualStyleBackColor = true;
			this->BtnShutter_Status->Click += gcnew System::EventHandler(this, &TSLSample::BtnShutter_Status_Click);
			// 
			// txtshutter_su
			// 
			resources->ApplyResources(this->txtshutter_su, L"txtshutter_su");
			this->txtshutter_su->Name = L"txtshutter_su";
			// 
			// txtcoh
			// 
			resources->ApplyResources(this->txtcoh, L"txtcoh");
			this->txtcoh->Name = L"txtcoh";
			// 
			// BtnCoh_Status
			// 
			resources->ApplyResources(this->BtnCoh_Status, L"BtnCoh_Status");
			this->BtnCoh_Status->Name = L"BtnCoh_Status";
			this->BtnCoh_Status->UseVisualStyleBackColor = true;
			this->BtnCoh_Status->Click += gcnew System::EventHandler(this, &TSLSample::BtnCoh_Status_Click);
			// 
			// Btnmonitor_mW
			// 
			resources->ApplyResources(this->Btnmonitor_mW, L"Btnmonitor_mW");
			this->Btnmonitor_mW->Name = L"Btnmonitor_mW";
			this->Btnmonitor_mW->UseVisualStyleBackColor = true;
			this->Btnmonitor_mW->Click += gcnew System::EventHandler(this, &TSLSample::Btnmonitor_mW_Click);
			// 
			// txtradmoni_mw
			// 
			resources->ApplyResources(this->txtradmoni_mw, L"txtradmoni_mw");
			this->txtradmoni_mw->Name = L"txtradmoni_mw";
			// 
			// Btnmonitor_dBm
			// 
			resources->ApplyResources(this->Btnmonitor_dBm, L"Btnmonitor_dBm");
			this->Btnmonitor_dBm->Name = L"Btnmonitor_dBm";
			this->Btnmonitor_dBm->UseVisualStyleBackColor = true;
			this->Btnmonitor_dBm->Click += gcnew System::EventHandler(this, &TSLSample::Btnmonitor_dBm_Click);
			// 
			// txtreadmoni
			// 
			resources->ApplyResources(this->txtreadmoni, L"txtreadmoni");
			this->txtreadmoni->Name = L"txtreadmoni";
			// 
			// txtreadmw
			// 
			resources->ApplyResources(this->txtreadmw, L"txtreadmw");
			this->txtreadmw->Name = L"txtreadmw";
			// 
			// txtsetft
			// 
			resources->ApplyResources(this->txtsetft, L"txtsetft");
			this->txtsetft->Name = L"txtsetft";
			// 
			// Label8
			// 
			resources->ApplyResources(this->Label8, L"Label8");
			this->Label8->Name = L"Label8";
			// 
			// txttsl_err
			// 
			resources->ApplyResources(this->txttsl_err, L"txttsl_err");
			this->txttsl_err->Name = L"txttsl_err";
			// 
			// Btn_error
			// 
			resources->ApplyResources(this->Btn_error, L"Btn_error");
			this->Btn_error->Name = L"Btn_error";
			this->Btn_error->UseVisualStyleBackColor = true;
			this->Btn_error->Click += gcnew System::EventHandler(this, &TSLSample::Btn_error_Click);
			// 
			// txtwait
			// 
			resources->ApplyResources(this->txtwait, L"txtwait");
			this->txtwait->Name = L"txtwait";
			// 
			// Btn_Stangby
			// 
			resources->ApplyResources(this->Btn_Stangby, L"Btn_Stangby");
			this->Btn_Stangby->Name = L"Btn_Stangby";
			this->Btn_Stangby->UseVisualStyleBackColor = true;
			this->Btn_Stangby->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Stangby_Click);
			// 
			// txtbusy
			// 
			resources->ApplyResources(this->txtbusy, L"txtbusy");
			this->txtbusy->Name = L"txtbusy";
			// 
			// Btn_Busy
			// 
			resources->ApplyResources(this->Btn_Busy, L"Btn_Busy");
			this->Btn_Busy->Name = L"Btn_Busy";
			this->Btn_Busy->UseVisualStyleBackColor = true;
			this->Btn_Busy->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Busy_Click);
			// 
			// BtnPower_mW
			// 
			resources->ApplyResources(this->BtnPower_mW, L"BtnPower_mW");
			this->BtnPower_mW->Name = L"BtnPower_mW";
			this->BtnPower_mW->UseVisualStyleBackColor = true;
			this->BtnPower_mW->Click += gcnew System::EventHandler(this, &TSLSample::BtnPower_mW_Click);
			// 
			// BtnPower_dBm
			// 
			resources->ApplyResources(this->BtnPower_dBm, L"BtnPower_dBm");
			this->BtnPower_dBm->Name = L"BtnPower_dBm";
			this->BtnPower_dBm->UseVisualStyleBackColor = true;
			this->BtnPower_dBm->Click += gcnew System::EventHandler(this, &TSLSample::BtnPower_dBm_Click);
			// 
			// txtreadpow
			// 
			resources->ApplyResources(this->txtreadpow, L"txtreadpow");
			this->txtreadpow->Name = L"txtreadpow";
			// 
			// BtnAtt_value
			// 
			resources->ApplyResources(this->BtnAtt_value, L"BtnAtt_value");
			this->BtnAtt_value->Name = L"BtnAtt_value";
			this->BtnAtt_value->UseVisualStyleBackColor = true;
			this->BtnAtt_value->Click += gcnew System::EventHandler(this, &TSLSample::BtnAtt_value_Click);
			// 
			// txtreadatt
			// 
			resources->ApplyResources(this->txtreadatt, L"txtreadatt");
			this->txtreadatt->Name = L"txtreadatt";
			// 
			// txtunit
			// 
			resources->ApplyResources(this->txtunit, L"txtunit");
			this->txtunit->Name = L"txtunit";
			// 
			// BtnUnit
			// 
			resources->ApplyResources(this->BtnUnit, L"BtnUnit");
			this->BtnUnit->Name = L"BtnUnit";
			this->BtnUnit->UseVisualStyleBackColor = true;
			this->BtnUnit->Click += gcnew System::EventHandler(this, &TSLSample::BtnUnit_Click);
			// 
			// BtnPower_mode
			// 
			resources->ApplyResources(this->BtnPower_mode, L"BtnPower_mode");
			this->BtnPower_mode->Name = L"BtnPower_mode";
			this->BtnPower_mode->UseVisualStyleBackColor = true;
			this->BtnPower_mode->Click += gcnew System::EventHandler(this, &TSLSample::BtnPower_mode_Click);
			// 
			// txtpms
			// 
			resources->ApplyResources(this->txtpms, L"txtpms");
			this->txtpms->Name = L"txtpms";
			// 
			// Btn_GetLD
			// 
			resources->ApplyResources(this->Btn_GetLD, L"Btn_GetLD");
			this->Btn_GetLD->Name = L"Btn_GetLD";
			this->Btn_GetLD->UseVisualStyleBackColor = true;
			this->Btn_GetLD->Click += gcnew System::EventHandler(this, &TSLSample::Btn_GetLD_Click);
			// 
			// GroupBox8
			// 
			this->GroupBox8->Controls->Add(this->BtnShutter_Status);
			this->GroupBox8->Controls->Add(this->txtshutter_su);
			this->GroupBox8->Controls->Add(this->txtcoh);
			this->GroupBox8->Controls->Add(this->BtnCoh_Status);
			this->GroupBox8->Controls->Add(this->Btnmonitor_mW);
			this->GroupBox8->Controls->Add(this->txtradmoni_mw);
			this->GroupBox8->Controls->Add(this->Btnmonitor_dBm);
			this->GroupBox8->Controls->Add(this->txtreadmoni);
			this->GroupBox8->Controls->Add(this->txtreadmw);
			this->GroupBox8->Controls->Add(this->BtnPower_mW);
			this->GroupBox8->Controls->Add(this->BtnPower_dBm);
			this->GroupBox8->Controls->Add(this->txtreadpow);
			this->GroupBox8->Controls->Add(this->BtnAtt_value);
			this->GroupBox8->Controls->Add(this->txtreadatt);
			this->GroupBox8->Controls->Add(this->txtunit);
			this->GroupBox8->Controls->Add(this->BtnUnit);
			this->GroupBox8->Controls->Add(this->BtnPower_mode);
			this->GroupBox8->Controls->Add(this->txtpms);
			this->GroupBox8->Controls->Add(this->Btn_GetLD);
			this->GroupBox8->Controls->Add(this->txtlds);
			resources->ApplyResources(this->GroupBox8, L"GroupBox8");
			this->GroupBox8->Name = L"GroupBox8";
			this->GroupBox8->TabStop = false;
			// 
			// txtlds
			// 
			resources->ApplyResources(this->txtlds, L"txtlds");
			this->txtlds->Name = L"txtlds";
			// 
			// lblACP2
			// 
			resources->ApplyResources(this->lblACP2, L"lblACP2");
			this->lblACP2->Name = L"lblACP2";
			// 
			// rdiNI488
			// 
			resources->ApplyResources(this->rdiNI488, L"rdiNI488");
			this->rdiNI488->Checked = true;
			this->rdiNI488->Name = L"rdiNI488";
			this->rdiNI488->TabStop = true;
			this->rdiNI488->UseVisualStyleBackColor = true;
			// 
			// rdikysightvisa
			// 
			resources->ApplyResources(this->rdikysightvisa, L"rdikysightvisa");
			this->rdikysightvisa->Name = L"rdikysightvisa";
			this->rdikysightvisa->UseVisualStyleBackColor = true;
			// 
			// lblATTrange
			// 
			resources->ApplyResources(this->lblATTrange, L"lblATTrange");
			this->lblATTrange->Name = L"lblATTrange";
			// 
			// Label15
			// 
			resources->ApplyResources(this->Label15, L"Label15");
			this->Label15->ForeColor = System::Drawing::Color::Blue;
			this->Label15->Name = L"Label15";
			// 
			// Label14
			// 
			resources->ApplyResources(this->Label14, L"Label14");
			this->Label14->ForeColor = System::Drawing::Color::Blue;
			this->Label14->Name = L"Label14";
			// 
			// lblAPC1
			// 
			resources->ApplyResources(this->lblAPC1, L"lblAPC1");
			this->lblAPC1->Name = L"lblAPC1";
			// 
			// Label12
			// 
			resources->ApplyResources(this->Label12, L"Label12");
			this->Label12->ForeColor = System::Drawing::Color::Blue;
			this->Label12->Name = L"Label12";
			// 
			// lblfreq
			// 
			resources->ApplyResources(this->lblfreq, L"lblfreq");
			this->lblfreq->Name = L"lblfreq";
			// 
			// Label10
			// 
			resources->ApplyResources(this->Label10, L"Label10");
			this->Label10->ForeColor = System::Drawing::Color::Blue;
			this->Label10->Name = L"Label10";
			// 
			// lblfwversion
			// 
			resources->ApplyResources(this->lblfwversion, L"lblfwversion");
			this->lblfwversion->Name = L"lblfwversion";
			// 
			// lblserial
			// 
			resources->ApplyResources(this->lblserial, L"lblserial");
			this->lblserial->Name = L"lblserial";
			// 
			// lblproductname
			// 
			resources->ApplyResources(this->lblproductname, L"lblproductname");
			this->lblproductname->Name = L"lblproductname";
			// 
			// Label5
			// 
			resources->ApplyResources(this->Label5, L"Label5");
			this->Label5->ForeColor = System::Drawing::Color::Blue;
			this->Label5->Name = L"Label5";
			// 
			// Label4
			// 
			resources->ApplyResources(this->Label4, L"Label4");
			this->Label4->ForeColor = System::Drawing::Color::Blue;
			this->Label4->Name = L"Label4";
			// 
			// Label3
			// 
			resources->ApplyResources(this->Label3, L"Label3");
			this->Label3->ForeColor = System::Drawing::Color::Blue;
			this->Label3->Name = L"Label3";
			// 
			// Label2
			// 
			resources->ApplyResources(this->Label2, L"Label2");
			this->Label2->ForeColor = System::Drawing::Color::Blue;
			this->Label2->Name = L"Label2";
			// 
			// BtnConnect
			// 
			resources->ApplyResources(this->BtnConnect, L"BtnConnect");
			this->BtnConnect->Name = L"BtnConnect";
			this->BtnConnect->UseVisualStyleBackColor = true;
			this->BtnConnect->Click += gcnew System::EventHandler(this, &TSLSample::BtnConnect_Click);
			// 
			// TextBox1
			// 
			resources->ApplyResources(this->TextBox1, L"TextBox1");
			this->TextBox1->Name = L"TextBox1";
			// 
			// rdiNIvisa
			// 
			resources->ApplyResources(this->rdiNIvisa, L"rdiNIvisa");
			this->rdiNIvisa->Name = L"rdiNIvisa";
			this->rdiNIvisa->UseVisualStyleBackColor = true;
			// 
			// BtnDisConnect
			// 
			resources->ApplyResources(this->BtnDisConnect, L"BtnDisConnect");
			this->BtnDisConnect->Name = L"BtnDisConnect";
			this->BtnDisConnect->UseVisualStyleBackColor = true;
			this->BtnDisConnect->Click += gcnew System::EventHandler(this, &TSLSample::BtnDisConnect_Click);
			// 
			// GroupBox6
			// 
			this->GroupBox6->Controls->Add(this->rdiCr);
			this->GroupBox6->Controls->Add(this->rdiCrLF);
			this->GroupBox6->Controls->Add(this->rdiLf);
			resources->ApplyResources(this->GroupBox6, L"GroupBox6");
			this->GroupBox6->Name = L"GroupBox6";
			this->GroupBox6->TabStop = false;
			// 
			// rdiCr
			// 
			resources->ApplyResources(this->rdiCr, L"rdiCr");
			this->rdiCr->Checked = true;
			this->rdiCr->Name = L"rdiCr";
			this->rdiCr->TabStop = true;
			this->rdiCr->UseVisualStyleBackColor = true;
			// 
			// rdiCrLF
			// 
			resources->ApplyResources(this->rdiCrLF, L"rdiCrLF");
			this->rdiCrLF->Name = L"rdiCrLF";
			this->rdiCrLF->UseVisualStyleBackColor = true;
			// 
			// rdiLf
			// 
			resources->ApplyResources(this->rdiLf, L"rdiLf");
			this->rdiLf->Name = L"rdiLf";
			this->rdiLf->UseVisualStyleBackColor = true;
			// 
			// Btn_SetFinetuning
			// 
			resources->ApplyResources(this->Btn_SetFinetuning, L"Btn_SetFinetuning");
			this->Btn_SetFinetuning->Name = L"Btn_SetFinetuning";
			this->Btn_SetFinetuning->UseVisualStyleBackColor = true;
			this->Btn_SetFinetuning->Click += gcnew System::EventHandler(this, &TSLSample::Btn_SetFinetuning_Click);
			// 
			// txtsetfreq
			// 
			resources->ApplyResources(this->txtsetfreq, L"txtsetfreq");
			this->txtsetfreq->Name = L"txtsetfreq";
			// 
			// Label28
			// 
			resources->ApplyResources(this->Label28, L"Label28");
			this->Label28->Name = L"Label28";
			// 
			// Label27
			// 
			resources->ApplyResources(this->Label27, L"Label27");
			this->Label27->Name = L"Label27";
			// 
			// txtminstep
			// 
			resources->ApplyResources(this->txtminstep, L"txtminstep");
			this->txtminstep->Name = L"txtminstep";
			// 
			// Btn_Minstep
			// 
			resources->ApplyResources(this->Btn_Minstep, L"Btn_Minstep");
			this->Btn_Minstep->Name = L"Btn_Minstep";
			this->Btn_Minstep->UseVisualStyleBackColor = true;
			this->Btn_Minstep->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Minstep_Click);
			// 
			// Label35
			// 
			resources->ApplyResources(this->Label35, L"Label35");
			this->Label35->Name = L"Label35";
			// 
			// Btn_Start
			// 
			resources->ApplyResources(this->Btn_Start, L"Btn_Start");
			this->Btn_Start->Name = L"Btn_Start";
			this->Btn_Start->UseVisualStyleBackColor = true;
			this->Btn_Start->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Start_Click);
			// 
			// txtsw_wait
			// 
			resources->ApplyResources(this->txtsw_wait, L"txtsw_wait");
			this->txtsw_wait->Name = L"txtsw_wait";
			// 
			// Btn_Pause
			// 
			resources->ApplyResources(this->Btn_Pause, L"Btn_Pause");
			this->Btn_Pause->Name = L"Btn_Pause";
			this->Btn_Pause->UseVisualStyleBackColor = true;
			this->Btn_Pause->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Pause_Click);
			// 
			// Label33
			// 
			resources->ApplyResources(this->Label33, L"Label33");
			this->Label33->Name = L"Label33";
			// 
			// txtg_wavestep
			// 
			resources->ApplyResources(this->txtg_wavestep, L"txtg_wavestep");
			this->txtg_wavestep->Name = L"txtg_wavestep";
			// 
			// Label29
			// 
			resources->ApplyResources(this->Label29, L"Label29");
			this->Label29->Name = L"Label29";
			// 
			// Btn_Waiting
			// 
			resources->ApplyResources(this->Btn_Waiting, L"Btn_Waiting");
			this->Btn_Waiting->Name = L"Btn_Waiting";
			this->Btn_Waiting->UseVisualStyleBackColor = true;
			this->Btn_Waiting->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Waiting_Click);
			// 
			// cmbsweep_su
			// 
			this->cmbsweep_su->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				resources->GetString(L"cmbsweep_su.AutoCompleteCustomSource"),
					resources->GetString(L"cmbsweep_su.AutoCompleteCustomSource1"), resources->GetString(L"cmbsweep_su.AutoCompleteCustomSource2"),
					resources->GetString(L"cmbsweep_su.AutoCompleteCustomSource3")
			});
			this->cmbsweep_su->FormattingEnabled = true;
			this->cmbsweep_su->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				resources->GetString(L"cmbsweep_su.Items"), resources->GetString(L"cmbsweep_su.Items1"),
					resources->GetString(L"cmbsweep_su.Items2"), resources->GetString(L"cmbsweep_su.Items3"), resources->GetString(L"cmbsweep_su.Items4")
			});
			resources->ApplyResources(this->cmbsweep_su, L"cmbsweep_su");
			this->cmbsweep_su->Name = L"cmbsweep_su";
			// 
			// txtg_triggerstep
			// 
			resources->ApplyResources(this->txtg_triggerstep, L"txtg_triggerstep");
			this->txtg_triggerstep->Name = L"txtg_triggerstep";
			// 
			// txtg_stopwave
			// 
			resources->ApplyResources(this->txtg_stopwave, L"txtg_stopwave");
			this->txtg_stopwave->Name = L"txtg_stopwave";
			// 
			// Btn_Stop
			// 
			resources->ApplyResources(this->Btn_Stop, L"Btn_Stop");
			this->Btn_Stop->Name = L"Btn_Stop";
			this->Btn_Stop->UseVisualStyleBackColor = true;
			this->Btn_Stop->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Stop_Click);
			// 
			// txtg_speed
			// 
			resources->ApplyResources(this->txtg_speed, L"txtg_speed");
			this->txtg_speed->Name = L"txtg_speed";
			// 
			// Label36
			// 
			resources->ApplyResources(this->Label36, L"Label36");
			this->Label36->Name = L"Label36";
			// 
			// txtcurrentc
			// 
			resources->ApplyResources(this->txtcurrentc, L"txtcurrentc");
			this->txtcurrentc->Name = L"txtcurrentc";
			// 
			// Btn_SoftwareTrigger
			// 
			resources->ApplyResources(this->Btn_SoftwareTrigger, L"Btn_SoftwareTrigger");
			this->Btn_SoftwareTrigger->Name = L"Btn_SoftwareTrigger";
			this->Btn_SoftwareTrigger->UseVisualStyleBackColor = true;
			this->Btn_SoftwareTrigger->Click += gcnew System::EventHandler(this, &TSLSample::Btn_SoftwareTrigger_Click);
			// 
			// Btn_Current
			// 
			resources->ApplyResources(this->Btn_Current, L"Btn_Current");
			this->Btn_Current->Name = L"Btn_Current";
			this->Btn_Current->UseVisualStyleBackColor = true;
			this->Btn_Current->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Current_Click);
			// 
			// Btn_ReStart
			// 
			resources->ApplyResources(this->Btn_ReStart, L"Btn_ReStart");
			this->Btn_ReStart->Name = L"Btn_ReStart";
			this->Btn_ReStart->UseVisualStyleBackColor = true;
			this->Btn_ReStart->Click += gcnew System::EventHandler(this, &TSLSample::Btn_ReStart_Click);
			// 
			// Label34
			// 
			resources->ApplyResources(this->Label34, L"Label34");
			this->Label34->Name = L"Label34";
			// 
			// txtg_startmode
			// 
			resources->ApplyResources(this->txtg_startmode, L"txtg_startmode");
			this->txtg_startmode->Name = L"txtg_startmode";
			// 
			// Btn_GetLogg
			// 
			resources->ApplyResources(this->Btn_GetLogg, L"Btn_GetLogg");
			this->Btn_GetLogg->Name = L"Btn_GetLogg";
			this->Btn_GetLogg->UseVisualStyleBackColor = true;
			this->Btn_GetLogg->Click += gcnew System::EventHandler(this, &TSLSample::Btn_GetLogg_Click);
			// 
			// txtg_tri_out
			// 
			resources->ApplyResources(this->txtg_tri_out, L"txtg_tri_out");
			this->txtg_tri_out->Name = L"txtg_tri_out";
			// 
			// Btn_Status
			// 
			resources->ApplyResources(this->Btn_Status, L"Btn_Status");
			this->Btn_Status->Name = L"Btn_Status";
			this->Btn_Status->UseVisualStyleBackColor = true;
			this->Btn_Status->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Status_Click);
			// 
			// BtnGet_setting
			// 
			resources->ApplyResources(this->BtnGet_setting, L"BtnGet_setting");
			this->BtnGet_setting->Name = L"BtnGet_setting";
			this->BtnGet_setting->UseVisualStyleBackColor = true;
			this->BtnGet_setting->Click += gcnew System::EventHandler(this, &TSLSample::BtnGet_setting_Click);
			// 
			// Label13
			// 
			resources->ApplyResources(this->Label13, L"Label13");
			this->Label13->Name = L"Label13";
			// 
			// Label11
			// 
			resources->ApplyResources(this->Label11, L"Label11");
			this->Label11->Name = L"Label11";
			// 
			// Label9
			// 
			resources->ApplyResources(this->Label9, L"Label9");
			this->Label9->Name = L"Label9";
			// 
			// txtg_cycle
			// 
			resources->ApplyResources(this->txtg_cycle, L"txtg_cycle");
			this->txtg_cycle->Name = L"txtg_cycle";
			// 
			// txtg_sweep_su
			// 
			resources->ApplyResources(this->txtg_sweep_su, L"txtg_sweep_su");
			this->txtg_sweep_su->Name = L"txtg_sweep_su";
			// 
			// GroupBox13
			// 
			this->GroupBox13->Controls->Add(this->label79);
			this->GroupBox13->Controls->Add(this->BtnGet_setting);
			this->GroupBox13->Controls->Add(this->txtTrigger_Source);
			this->GroupBox13->Controls->Add(this->Label13);
			this->GroupBox13->Controls->Add(this->Label11);
			this->GroupBox13->Controls->Add(this->Label9);
			this->GroupBox13->Controls->Add(this->txtg_cycle);
			this->GroupBox13->Controls->Add(this->txtg_delay);
			this->GroupBox13->Controls->Add(this->txtg_speed);
			this->GroupBox13->Controls->Add(this->Label34);
			this->GroupBox13->Controls->Add(this->txtg_triggerstep);
			this->GroupBox13->Controls->Add(this->Label33);
			this->GroupBox13->Controls->Add(this->txtg_wavestep);
			this->GroupBox13->Controls->Add(this->Label29);
			this->GroupBox13->Controls->Add(this->Label28);
			this->GroupBox13->Controls->Add(this->txtg_stopwave);
			this->GroupBox13->Controls->Add(this->Label27);
			this->GroupBox13->Controls->Add(this->txtg_startmode);
			this->GroupBox13->Controls->Add(this->Label26);
			this->GroupBox13->Controls->Add(this->txtg_tri_out);
			this->GroupBox13->Controls->Add(this->txtg_startwave);
			this->GroupBox13->Controls->Add(this->txtg_tr_inp);
			this->GroupBox13->Controls->Add(this->Label24);
			this->GroupBox13->Controls->Add(this->Label23);
			this->GroupBox13->Controls->Add(this->txtg_smod);
			resources->ApplyResources(this->GroupBox13, L"GroupBox13");
			this->GroupBox13->Name = L"GroupBox13";
			this->GroupBox13->TabStop = false;
			// 
			// label79
			// 
			resources->ApplyResources(this->label79, L"label79");
			this->label79->Name = L"label79";
			// 
			// txtTrigger_Source
			// 
			resources->ApplyResources(this->txtTrigger_Source, L"txtTrigger_Source");
			this->txtTrigger_Source->Name = L"txtTrigger_Source";
			// 
			// txtg_delay
			// 
			resources->ApplyResources(this->txtg_delay, L"txtg_delay");
			this->txtg_delay->Name = L"txtg_delay";
			// 
			// Label26
			// 
			resources->ApplyResources(this->Label26, L"Label26");
			this->Label26->Name = L"Label26";
			// 
			// txtg_startwave
			// 
			resources->ApplyResources(this->txtg_startwave, L"txtg_startwave");
			this->txtg_startwave->Name = L"txtg_startwave";
			// 
			// txtg_tr_inp
			// 
			resources->ApplyResources(this->txtg_tr_inp, L"txtg_tr_inp");
			this->txtg_tr_inp->Name = L"txtg_tr_inp";
			// 
			// Label24
			// 
			resources->ApplyResources(this->Label24, L"Label24");
			this->Label24->Name = L"Label24";
			// 
			// Label23
			// 
			resources->ApplyResources(this->Label23, L"Label23");
			this->Label23->Name = L"Label23";
			// 
			// txtg_smod
			// 
			resources->ApplyResources(this->txtg_smod, L"txtg_smod");
			this->txtg_smod->Name = L"txtg_smod";
			// 
			// GroupBox12
			// 
			this->GroupBox12->Controls->Add(this->GroupBox15);
			this->GroupBox12->Controls->Add(this->GroupBox14);
			resources->ApplyResources(this->GroupBox12, L"GroupBox12");
			this->GroupBox12->Name = L"GroupBox12";
			this->GroupBox12->TabStop = false;
			// 
			// GroupBox15
			// 
			this->GroupBox15->Controls->Add(this->cmbTrigger_Source);
			this->GroupBox15->Controls->Add(this->label68);
			this->GroupBox15->Controls->Add(this->Btn_Other);
			this->GroupBox15->Controls->Add(this->cmbsm);
			this->GroupBox15->Controls->Add(this->Label16);
			this->GroupBox15->Controls->Add(this->Label32);
			this->GroupBox15->Controls->Add(this->cmbtin);
			this->GroupBox15->Controls->Add(this->txtdelay);
			this->GroupBox15->Controls->Add(this->Label17);
			this->GroupBox15->Controls->Add(this->Label31);
			this->GroupBox15->Controls->Add(this->cmbtout);
			this->GroupBox15->Controls->Add(this->txtcycle);
			this->GroupBox15->Controls->Add(this->Label18);
			this->GroupBox15->Controls->Add(this->Label30);
			this->GroupBox15->Controls->Add(this->cmbst_mod);
			this->GroupBox15->Controls->Add(this->txtspeed);
			this->GroupBox15->Controls->Add(this->Label25);
			resources->ApplyResources(this->GroupBox15, L"GroupBox15");
			this->GroupBox15->Name = L"GroupBox15";
			this->GroupBox15->TabStop = false;
			// 
			// cmbTrigger_Source
			// 
			this->cmbTrigger_Source->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				resources->GetString(L"cmbTrigger_Source.AutoCompleteCustomSource"),
					resources->GetString(L"cmbTrigger_Source.AutoCompleteCustomSource1"), resources->GetString(L"cmbTrigger_Source.AutoCompleteCustomSource2"),
					resources->GetString(L"cmbTrigger_Source.AutoCompleteCustomSource3")
			});
			this->cmbTrigger_Source->FormattingEnabled = true;
			this->cmbTrigger_Source->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
				resources->GetString(L"cmbTrigger_Source.Items"),
					resources->GetString(L"cmbTrigger_Source.Items1")
			});
			resources->ApplyResources(this->cmbTrigger_Source, L"cmbTrigger_Source");
			this->cmbTrigger_Source->Name = L"cmbTrigger_Source";
			// 
			// label68
			// 
			resources->ApplyResources(this->label68, L"label68");
			this->label68->Name = L"label68";
			// 
			// Btn_Other
			// 
			resources->ApplyResources(this->Btn_Other, L"Btn_Other");
			this->Btn_Other->Name = L"Btn_Other";
			this->Btn_Other->UseVisualStyleBackColor = true;
			this->Btn_Other->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Other_Click);
			// 
			// cmbsm
			// 
			this->cmbsm->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				resources->GetString(L"cmbsm.AutoCompleteCustomSource"),
					resources->GetString(L"cmbsm.AutoCompleteCustomSource1"), resources->GetString(L"cmbsm.AutoCompleteCustomSource2"), resources->GetString(L"cmbsm.AutoCompleteCustomSource3")
			});
			this->cmbsm->FormattingEnabled = true;
			this->cmbsm->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				resources->GetString(L"cmbsm.Items"), resources->GetString(L"cmbsm.Items1"),
					resources->GetString(L"cmbsm.Items2"), resources->GetString(L"cmbsm.Items3")
			});
			resources->ApplyResources(this->cmbsm, L"cmbsm");
			this->cmbsm->Name = L"cmbsm";
			// 
			// Label16
			// 
			resources->ApplyResources(this->Label16, L"Label16");
			this->Label16->Name = L"Label16";
			// 
			// Label32
			// 
			resources->ApplyResources(this->Label32, L"Label32");
			this->Label32->Name = L"Label32";
			// 
			// cmbtin
			// 
			this->cmbtin->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				resources->GetString(L"cmbtin.AutoCompleteCustomSource"),
					resources->GetString(L"cmbtin.AutoCompleteCustomSource1"), resources->GetString(L"cmbtin.AutoCompleteCustomSource2"), resources->GetString(L"cmbtin.AutoCompleteCustomSource3")
			});
			this->cmbtin->FormattingEnabled = true;
			this->cmbtin->Items->AddRange(gcnew cli::array< System::Object^  >(2) { resources->GetString(L"cmbtin.Items"), resources->GetString(L"cmbtin.Items1") });
			resources->ApplyResources(this->cmbtin, L"cmbtin");
			this->cmbtin->Name = L"cmbtin";
			// 
			// txtdelay
			// 
			resources->ApplyResources(this->txtdelay, L"txtdelay");
			this->txtdelay->Name = L"txtdelay";
			// 
			// Label17
			// 
			resources->ApplyResources(this->Label17, L"Label17");
			this->Label17->Name = L"Label17";
			// 
			// Label31
			// 
			resources->ApplyResources(this->Label31, L"Label31");
			this->Label31->Name = L"Label31";
			// 
			// cmbtout
			// 
			this->cmbtout->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				resources->GetString(L"cmbtout.AutoCompleteCustomSource"),
					resources->GetString(L"cmbtout.AutoCompleteCustomSource1"), resources->GetString(L"cmbtout.AutoCompleteCustomSource2"), resources->GetString(L"cmbtout.AutoCompleteCustomSource3")
			});
			this->cmbtout->FormattingEnabled = true;
			this->cmbtout->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				resources->GetString(L"cmbtout.Items"), resources->GetString(L"cmbtout.Items1"),
					resources->GetString(L"cmbtout.Items2"), resources->GetString(L"cmbtout.Items3")
			});
			resources->ApplyResources(this->cmbtout, L"cmbtout");
			this->cmbtout->Name = L"cmbtout";
			// 
			// txtcycle
			// 
			resources->ApplyResources(this->txtcycle, L"txtcycle");
			this->txtcycle->Name = L"txtcycle";
			// 
			// Label18
			// 
			resources->ApplyResources(this->Label18, L"Label18");
			this->Label18->Name = L"Label18";
			// 
			// Label30
			// 
			resources->ApplyResources(this->Label30, L"Label30");
			this->Label30->Name = L"Label30";
			// 
			// cmbst_mod
			// 
			this->cmbst_mod->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				resources->GetString(L"cmbst_mod.AutoCompleteCustomSource"),
					resources->GetString(L"cmbst_mod.AutoCompleteCustomSource1"), resources->GetString(L"cmbst_mod.AutoCompleteCustomSource2"), resources->GetString(L"cmbst_mod.AutoCompleteCustomSource3")
			});
			this->cmbst_mod->FormattingEnabled = true;
			this->cmbst_mod->Items->AddRange(gcnew cli::array< System::Object^  >(2) { resources->GetString(L"cmbst_mod.Items"), resources->GetString(L"cmbst_mod.Items1") });
			resources->ApplyResources(this->cmbst_mod, L"cmbst_mod");
			this->cmbst_mod->Name = L"cmbst_mod";
			// 
			// txtspeed
			// 
			resources->ApplyResources(this->txtspeed, L"txtspeed");
			this->txtspeed->Name = L"txtspeed";
			// 
			// Label25
			// 
			resources->ApplyResources(this->Label25, L"Label25");
			this->Label25->Name = L"Label25";
			// 
			// GroupBox14
			// 
			this->GroupBox14->Controls->Add(this->txtstart);
			this->GroupBox14->Controls->Add(this->Label19);
			this->GroupBox14->Controls->Add(this->txtstop);
			this->GroupBox14->Controls->Add(this->Label20);
			this->GroupBox14->Controls->Add(this->txtstep);
			this->GroupBox14->Controls->Add(this->Label21);
			this->GroupBox14->Controls->Add(this->Btn_SetWavelength);
			resources->ApplyResources(this->GroupBox14, L"GroupBox14");
			this->GroupBox14->Name = L"GroupBox14";
			this->GroupBox14->TabStop = false;
			// 
			// txtstart
			// 
			resources->ApplyResources(this->txtstart, L"txtstart");
			this->txtstart->Name = L"txtstart";
			// 
			// Label19
			// 
			resources->ApplyResources(this->Label19, L"Label19");
			this->Label19->Name = L"Label19";
			// 
			// txtstop
			// 
			resources->ApplyResources(this->txtstop, L"txtstop");
			this->txtstop->Name = L"txtstop";
			// 
			// Label20
			// 
			resources->ApplyResources(this->Label20, L"Label20");
			this->Label20->Name = L"Label20";
			// 
			// txtstep
			// 
			resources->ApplyResources(this->txtstep, L"txtstep");
			this->txtstep->Name = L"txtstep";
			// 
			// Label21
			// 
			resources->ApplyResources(this->Label21, L"Label21");
			this->Label21->Name = L"Label21";
			// 
			// Btn_SetWavelength
			// 
			resources->ApplyResources(this->Btn_SetWavelength, L"Btn_SetWavelength");
			this->Btn_SetWavelength->Name = L"Btn_SetWavelength";
			this->Btn_SetWavelength->UseVisualStyleBackColor = true;
			this->Btn_SetWavelength->Click += gcnew System::EventHandler(this, &TSLSample::Btn_SetWavelength_Click);
			// 
			// GroupBox11
			// 
			this->GroupBox11->Controls->Add(this->Btn_Fine);
			this->GroupBox11->Controls->Add(this->txtfine);
			this->GroupBox11->Controls->Add(this->Btn_Freuency);
			this->GroupBox11->Controls->Add(this->txtfreq);
			this->GroupBox11->Controls->Add(this->Btn_Wavelength);
			this->GroupBox11->Controls->Add(this->txtwave);
			resources->ApplyResources(this->GroupBox11, L"GroupBox11");
			this->GroupBox11->Name = L"GroupBox11";
			this->GroupBox11->TabStop = false;
			// 
			// Btn_Fine
			// 
			resources->ApplyResources(this->Btn_Fine, L"Btn_Fine");
			this->Btn_Fine->Name = L"Btn_Fine";
			this->Btn_Fine->UseVisualStyleBackColor = true;
			this->Btn_Fine->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Fine_Click);
			// 
			// txtfine
			// 
			resources->ApplyResources(this->txtfine, L"txtfine");
			this->txtfine->Name = L"txtfine";
			// 
			// Btn_Freuency
			// 
			resources->ApplyResources(this->Btn_Freuency, L"Btn_Freuency");
			this->Btn_Freuency->Name = L"Btn_Freuency";
			this->Btn_Freuency->UseVisualStyleBackColor = true;
			this->Btn_Freuency->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Freuency_Click);
			// 
			// txtfreq
			// 
			resources->ApplyResources(this->txtfreq, L"txtfreq");
			this->txtfreq->Name = L"txtfreq";
			// 
			// Btn_Wavelength
			// 
			resources->ApplyResources(this->Btn_Wavelength, L"Btn_Wavelength");
			this->Btn_Wavelength->Name = L"Btn_Wavelength";
			this->Btn_Wavelength->UseVisualStyleBackColor = true;
			this->Btn_Wavelength->Click += gcnew System::EventHandler(this, &TSLSample::Btn_Wavelength_Click);
			// 
			// txtwave
			// 
			resources->ApplyResources(this->txtwave, L"txtwave");
			this->txtwave->Name = L"txtwave";
			// 
			// GroupBox10
			// 
			this->GroupBox10->Controls->Add(this->txtsetft);
			this->GroupBox10->Controls->Add(this->Btn_SetFinetuning);
			this->GroupBox10->Controls->Add(this->txtsetfreq);
			this->GroupBox10->Controls->Add(this->Btn_SetFrequency);
			this->GroupBox10->Controls->Add(this->Btn_SetWavelenth);
			this->GroupBox10->Controls->Add(this->txtsetwave);
			resources->ApplyResources(this->GroupBox10, L"GroupBox10");
			this->GroupBox10->Name = L"GroupBox10";
			this->GroupBox10->TabStop = false;
			// 
			// Btn_SetFrequency
			// 
			resources->ApplyResources(this->Btn_SetFrequency, L"Btn_SetFrequency");
			this->Btn_SetFrequency->Name = L"Btn_SetFrequency";
			this->Btn_SetFrequency->UseVisualStyleBackColor = true;
			this->Btn_SetFrequency->Click += gcnew System::EventHandler(this, &TSLSample::Btn_SetFrequency_Click);
			// 
			// Btn_SetWavelenth
			// 
			resources->ApplyResources(this->Btn_SetWavelenth, L"Btn_SetWavelenth");
			this->Btn_SetWavelenth->Name = L"Btn_SetWavelenth";
			this->Btn_SetWavelenth->UseVisualStyleBackColor = true;
			this->Btn_SetWavelenth->Click += gcnew System::EventHandler(this, &TSLSample::Btn_SetWavelenth_Click);
			// 
			// txtsetwave
			// 
			resources->ApplyResources(this->txtsetwave, L"txtsetwave");
			this->txtsetwave->Name = L"txtsetwave";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			resources->ApplyResources(this->tabControl1, L"tabControl1");
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox16);
			this->tabPage1->Controls->Add(this->groupBox17);
			resources->ApplyResources(this->tabPage1, L"tabPage1");
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox16
			// 
			this->groupBox16->Controls->Add(this->label37);
			this->groupBox16->Controls->Add(this->txtdev_num);
			this->groupBox16->Controls->Add(this->label38);
			this->groupBox16->Controls->Add(this->label39);
			this->groupBox16->Controls->Add(this->txtaddressnum);
			this->groupBox16->Controls->Add(this->txtboad);
			this->groupBox16->Controls->Add(this->btnSplit);
			this->groupBox16->Controls->Add(this->btnGet_Visa);
			this->groupBox16->Controls->Add(this->label40);
			this->groupBox16->Controls->Add(this->label41);
			this->groupBox16->Controls->Add(this->btnUsb_resouce);
			this->groupBox16->Controls->Add(this->cmbusbresouce);
			this->groupBox16->Controls->Add(this->cmbgpib_resouce);
			resources->ApplyResources(this->groupBox16, L"groupBox16");
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->TabStop = false;
			// 
			// label37
			// 
			resources->ApplyResources(this->label37, L"label37");
			this->label37->Name = L"label37";
			// 
			// txtdev_num
			// 
			resources->ApplyResources(this->txtdev_num, L"txtdev_num");
			this->txtdev_num->Name = L"txtdev_num";
			// 
			// label38
			// 
			resources->ApplyResources(this->label38, L"label38");
			this->label38->Name = L"label38";
			// 
			// label39
			// 
			resources->ApplyResources(this->label39, L"label39");
			this->label39->Name = L"label39";
			// 
			// txtaddressnum
			// 
			resources->ApplyResources(this->txtaddressnum, L"txtaddressnum");
			this->txtaddressnum->Name = L"txtaddressnum";
			// 
			// txtboad
			// 
			resources->ApplyResources(this->txtboad, L"txtboad");
			this->txtboad->Name = L"txtboad";
			// 
			// btnSplit
			// 
			resources->ApplyResources(this->btnSplit, L"btnSplit");
			this->btnSplit->Name = L"btnSplit";
			this->btnSplit->UseVisualStyleBackColor = true;
			this->btnSplit->Click += gcnew System::EventHandler(this, &TSLSample::btnSplit_Click);
			// 
			// btnGet_Visa
			// 
			resources->ApplyResources(this->btnGet_Visa, L"btnGet_Visa");
			this->btnGet_Visa->Name = L"btnGet_Visa";
			this->btnGet_Visa->UseVisualStyleBackColor = true;
			this->btnGet_Visa->Click += gcnew System::EventHandler(this, &TSLSample::btnGet_Visa_Click);
			// 
			// label40
			// 
			resources->ApplyResources(this->label40, L"label40");
			this->label40->Name = L"label40";
			// 
			// label41
			// 
			resources->ApplyResources(this->label41, L"label41");
			this->label41->Name = L"label41";
			// 
			// btnUsb_resouce
			// 
			resources->ApplyResources(this->btnUsb_resouce, L"btnUsb_resouce");
			this->btnUsb_resouce->Name = L"btnUsb_resouce";
			this->btnUsb_resouce->UseVisualStyleBackColor = true;
			this->btnUsb_resouce->Click += gcnew System::EventHandler(this, &TSLSample::btnUsb_resouce_Click);
			// 
			// cmbusbresouce
			// 
			this->cmbusbresouce->FormattingEnabled = true;
			resources->ApplyResources(this->cmbusbresouce, L"cmbusbresouce");
			this->cmbusbresouce->Name = L"cmbusbresouce";
			this->cmbusbresouce->SelectedIndexChanged += gcnew System::EventHandler(this, &TSLSample::cmbusbresouce_SelectedIndexChanged);
			// 
			// cmbgpib_resouce
			// 
			this->cmbgpib_resouce->FormattingEnabled = true;
			resources->ApplyResources(this->cmbgpib_resouce, L"cmbgpib_resouce");
			this->cmbgpib_resouce->Name = L"cmbgpib_resouce";
			// 
			// groupBox17
			// 
			this->groupBox17->Controls->Add(this->GroupBox6);
			this->groupBox17->Controls->Add(this->BtnDisConnect);
			this->groupBox17->Controls->Add(this->groupBox18);
			this->groupBox17->Controls->Add(this->groupBox20);
			this->groupBox17->Controls->Add(this->groupBox21);
			this->groupBox17->Controls->Add(this->BtnConnect);
			this->groupBox17->Controls->Add(this->label59);
			this->groupBox17->Controls->Add(this->TextBox1);
			resources->ApplyResources(this->groupBox17, L"groupBox17");
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->TabStop = false;
			// 
			// groupBox18
			// 
			this->groupBox18->Controls->Add(this->rdo770);
			this->groupBox18->Controls->Add(this->rdo570);
			this->groupBox18->Controls->Add(this->rdo550);
			resources->ApplyResources(this->groupBox18, L"groupBox18");
			this->groupBox18->Name = L"groupBox18";
			this->groupBox18->TabStop = false;
			// 
			// rdo770
			// 
			resources->ApplyResources(this->rdo770, L"rdo770");
			this->rdo770->Name = L"rdo770";
			this->rdo770->UseVisualStyleBackColor = true;
			this->rdo770->CheckedChanged += gcnew System::EventHandler(this, &TSLSample::rdo770_CheckedChanged);
			// 
			// rdo570
			// 
			resources->ApplyResources(this->rdo570, L"rdo570");
			this->rdo570->Name = L"rdo570";
			this->rdo570->UseVisualStyleBackColor = true;
			this->rdo570->CheckedChanged += gcnew System::EventHandler(this, &TSLSample::rdo570_CheckedChanged);
			// 
			// rdo550
			// 
			resources->ApplyResources(this->rdo550, L"rdo550");
			this->rdo550->Checked = true;
			this->rdo550->Name = L"rdo550";
			this->rdo550->TabStop = true;
			this->rdo550->UseVisualStyleBackColor = true;
			this->rdo550->CheckedChanged += gcnew System::EventHandler(this, &TSLSample::rdo550_CheckedChanged);
			// 
			// groupBox20
			// 
			this->groupBox20->Controls->Add(this->lblAPC1);
			this->groupBox20->Controls->Add(this->lblATTrange);
			this->groupBox20->Controls->Add(this->Label12);
			this->groupBox20->Controls->Add(this->lblACP2);
			this->groupBox20->Controls->Add(this->lblfwversion);
			this->groupBox20->Controls->Add(this->Label15);
			this->groupBox20->Controls->Add(this->Label5);
			this->groupBox20->Controls->Add(this->lblSweepSpeed_Range);
			this->groupBox20->Controls->Add(this->label42);
			this->groupBox20->Controls->Add(this->lblfreq);
			this->groupBox20->Controls->Add(this->Label14);
			this->groupBox20->Controls->Add(this->Label10);
			this->groupBox20->Controls->Add(this->lblserial);
			this->groupBox20->Controls->Add(this->lblwave);
			this->groupBox20->Controls->Add(this->Label3);
			this->groupBox20->Controls->Add(this->lblproductname);
			this->groupBox20->Controls->Add(this->Label4);
			this->groupBox20->Controls->Add(this->Label2);
			resources->ApplyResources(this->groupBox20, L"groupBox20");
			this->groupBox20->Name = L"groupBox20";
			this->groupBox20->TabStop = false;
			// 
			// lblSweepSpeed_Range
			// 
			resources->ApplyResources(this->lblSweepSpeed_Range, L"lblSweepSpeed_Range");
			this->lblSweepSpeed_Range->Name = L"lblSweepSpeed_Range";
			// 
			// label42
			// 
			resources->ApplyResources(this->label42, L"label42");
			this->label42->ForeColor = System::Drawing::Color::Blue;
			this->label42->Name = L"label42";
			// 
			// lblwave
			// 
			resources->ApplyResources(this->lblwave, L"lblwave");
			this->lblwave->Name = L"lblwave";
			// 
			// groupBox21
			// 
			this->groupBox21->Controls->Add(this->label58);
			this->groupBox21->Controls->Add(this->rdiNI488);
			this->groupBox21->Controls->Add(this->rdikysightvisa);
			this->groupBox21->Controls->Add(this->txtPort);
			this->groupBox21->Controls->Add(this->rdiNIvisa);
			this->groupBox21->Controls->Add(this->rdoLAN);
			this->groupBox21->Controls->Add(this->rdiUSB);
			resources->ApplyResources(this->groupBox21, L"groupBox21");
			this->groupBox21->Name = L"groupBox21";
			this->groupBox21->TabStop = false;
			// 
			// label58
			// 
			resources->ApplyResources(this->label58, L"label58");
			this->label58->Name = L"label58";
			// 
			// txtPort
			// 
			resources->ApplyResources(this->txtPort, L"txtPort");
			this->txtPort->Name = L"txtPort";
			// 
			// rdoLAN
			// 
			resources->ApplyResources(this->rdoLAN, L"rdoLAN");
			this->rdoLAN->Name = L"rdoLAN";
			this->rdoLAN->UseVisualStyleBackColor = true;
			this->rdoLAN->CheckedChanged += gcnew System::EventHandler(this, &TSLSample::rdoLAN_CheckedChanged);
			// 
			// rdiUSB
			// 
			resources->ApplyResources(this->rdiUSB, L"rdiUSB");
			this->rdiUSB->Name = L"rdiUSB";
			this->rdiUSB->UseVisualStyleBackColor = true;
			this->rdiUSB->CheckedChanged += gcnew System::EventHandler(this, &TSLSample::rdiUSB_CheckedChanged);
			// 
			// label59
			// 
			resources->ApplyResources(this->label59, L"label59");
			this->label59->Name = L"label59";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->GroupBox11);
			this->tabPage2->Controls->Add(this->groupBox26);
			this->tabPage2->Controls->Add(this->GroupBox10);
			this->tabPage2->Controls->Add(this->GroupBox8);
			this->tabPage2->Controls->Add(this->GroupBox7);
			resources->ApplyResources(this->tabPage2, L"tabPage2");
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox26
			// 
			this->groupBox26->Controls->Add(this->Label8);
			this->groupBox26->Controls->Add(this->btnGetPort);
			this->groupBox26->Controls->Add(this->txttsl_err);
			this->groupBox26->Controls->Add(this->label62);
			this->groupBox26->Controls->Add(this->Btn_error);
			this->groupBox26->Controls->Add(this->txtlan_port);
			this->groupBox26->Controls->Add(this->txtwait);
			this->groupBox26->Controls->Add(this->label63);
			this->groupBox26->Controls->Add(this->Btn_Stangby);
			this->groupBox26->Controls->Add(this->txtbusy);
			this->groupBox26->Controls->Add(this->txtip_add);
			this->groupBox26->Controls->Add(this->Btn_Busy);
			this->groupBox26->Controls->Add(this->btnGetIP);
			resources->ApplyResources(this->groupBox26, L"groupBox26");
			this->groupBox26->Name = L"groupBox26";
			this->groupBox26->TabStop = false;
			// 
			// btnGetPort
			// 
			resources->ApplyResources(this->btnGetPort, L"btnGetPort");
			this->btnGetPort->Name = L"btnGetPort";
			this->btnGetPort->UseVisualStyleBackColor = true;
			this->btnGetPort->Click += gcnew System::EventHandler(this, &TSLSample::btnGetPort_Click);
			// 
			// label62
			// 
			resources->ApplyResources(this->label62, L"label62");
			this->label62->Name = L"label62";
			// 
			// txtlan_port
			// 
			resources->ApplyResources(this->txtlan_port, L"txtlan_port");
			this->txtlan_port->Name = L"txtlan_port";
			// 
			// label63
			// 
			resources->ApplyResources(this->label63, L"label63");
			this->label63->Name = L"label63";
			// 
			// txtip_add
			// 
			resources->ApplyResources(this->txtip_add, L"txtip_add");
			this->txtip_add->Name = L"txtip_add";
			// 
			// btnGetIP
			// 
			resources->ApplyResources(this->btnGetIP, L"btnGetIP");
			this->btnGetIP->Name = L"btnGetIP";
			this->btnGetIP->UseVisualStyleBackColor = true;
			this->btnGetIP->Click += gcnew System::EventHandler(this, &TSLSample::btnGetIP_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox27);
			this->tabPage3->Controls->Add(this->GroupBox12);
			this->tabPage3->Controls->Add(this->GroupBox13);
			resources->ApplyResources(this->tabPage3, L"tabPage3");
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox27
			// 
			this->groupBox27->Controls->Add(this->cmb570_Speed);
			this->groupBox27->Controls->Add(this->txtminstep);
			this->groupBox27->Controls->Add(this->label65);
			this->groupBox27->Controls->Add(this->btnSpeed);
			this->groupBox27->Controls->Add(this->Btn_GetLogg);
			this->groupBox27->Controls->Add(this->Btn_Minstep);
			this->groupBox27->Controls->Add(this->Btn_Start);
			this->groupBox27->Controls->Add(this->Label35);
			this->groupBox27->Controls->Add(this->Btn_Waiting);
			this->groupBox27->Controls->Add(this->Btn_Stop);
			this->groupBox27->Controls->Add(this->Btn_Pause);
			this->groupBox27->Controls->Add(this->txtsw_wait);
			this->groupBox27->Controls->Add(this->cmbsweep_su);
			this->groupBox27->Controls->Add(this->txtcurrentc);
			this->groupBox27->Controls->Add(this->Label36);
			this->groupBox27->Controls->Add(this->Btn_ReStart);
			this->groupBox27->Controls->Add(this->Btn_SoftwareTrigger);
			this->groupBox27->Controls->Add(this->Btn_Current);
			this->groupBox27->Controls->Add(this->txtg_sweep_su);
			this->groupBox27->Controls->Add(this->Btn_Status);
			resources->ApplyResources(this->groupBox27, L"groupBox27");
			this->groupBox27->Name = L"groupBox27";
			this->groupBox27->TabStop = false;
			// 
			// cmb570_Speed
			// 
			this->cmb570_Speed->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				resources->GetString(L"cmb570_Speed.AutoCompleteCustomSource"),
					resources->GetString(L"cmb570_Speed.AutoCompleteCustomSource1"), resources->GetString(L"cmb570_Speed.AutoCompleteCustomSource2"),
					resources->GetString(L"cmb570_Speed.AutoCompleteCustomSource3")
			});
			this->cmb570_Speed->FormattingEnabled = true;
			resources->ApplyResources(this->cmb570_Speed, L"cmb570_Speed");
			this->cmb570_Speed->Name = L"cmb570_Speed";
			// 
			// label65
			// 
			resources->ApplyResources(this->label65, L"label65");
			this->label65->Name = L"label65";
			// 
			// btnSpeed
			// 
			resources->ApplyResources(this->btnSpeed, L"btnSpeed");
			this->btnSpeed->Name = L"btnSpeed";
			this->btnSpeed->UseVisualStyleBackColor = true;
			this->btnSpeed->Click += gcnew System::EventHandler(this, &TSLSample::btnSpeed_Click);
			// 
			// TSLSample
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tabControl1);
			this->Name = L"TSLSample";
			this->GroupBox7->ResumeLayout(false);
			this->GroupBox7->PerformLayout();
			this->GroupBox8->ResumeLayout(false);
			this->GroupBox8->PerformLayout();
			this->GroupBox6->ResumeLayout(false);
			this->GroupBox6->PerformLayout();
			this->GroupBox13->ResumeLayout(false);
			this->GroupBox13->PerformLayout();
			this->GroupBox12->ResumeLayout(false);
			this->GroupBox15->ResumeLayout(false);
			this->GroupBox15->PerformLayout();
			this->GroupBox14->ResumeLayout(false);
			this->GroupBox14->PerformLayout();
			this->GroupBox11->ResumeLayout(false);
			this->GroupBox11->PerformLayout();
			this->GroupBox10->ResumeLayout(false);
			this->GroupBox10->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox16->ResumeLayout(false);
			this->groupBox16->PerformLayout();
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			this->groupBox18->ResumeLayout(false);
			this->groupBox18->PerformLayout();
			this->groupBox20->ResumeLayout(false);
			this->groupBox20->PerformLayout();
			this->groupBox21->ResumeLayout(false);
			this->groupBox21->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox26->ResumeLayout(false);
			this->groupBox26->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->groupBox27->ResumeLayout(false);
			this->groupBox27->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void Show_Error(int errordata)
	{
		// ------------------------------------
		// Show error code
		// 显示错误代码
		// ------------------------------------

		cli::array<String^>^ errorstring = Enum::GetNames(ExceptionCode::typeid);
		cli::array<int>^ errorvale = static_cast<cli::array<int>^>(Enum::GetValues(ExceptionCode::typeid));
		int loop1;
		for (loop1 = 0; loop1 <= errorvale->Length - 1; loop1++)
		{
			if (errorvale[loop1] == errordata)
			{
				MessageBox::Show(errorstring[loop1]);
				break;
			}
		}
	}

	private: System::Void BtnConnect_Click(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------------
		// connect
		// 连接
		// --------------------------------------------------------

		String^ address = TextBox1->Text;
		Santec::CommunicationTerminator terminator;
		Santec::Communication::CommunicationMethod comm_method;

		if (rdiUSB->Checked == true)
		{
			// USB Communication
			// USB通信
			comm_method = Santec::Communication::CommunicationMethod::USB;
			TSL.DeviceID = UInt32::Parse(address);
		}
		else if (rdoLAN->Checked == true)
		{
			// LAN Communication
			// LAN 通信
			comm_method = Santec::Communication::CommunicationMethod::TCPIP;
			TSL.Port = int::Parse(txtPort->Text);
			TSL.IPAddress = address;
			TSL.Waittime = 20;
		}

		else
		{
			// GPIB Communication
			// GPIB通信
			comm_method = Santec::Communication::CommunicationMethod::GPIB;

			Santec::Communication::GPIBConnectType gpibmethod;
			if (rdikysightvisa->Checked == true)
				gpibmethod = Santec::Communication::GPIBConnectType::KeysightIO;
			else if (rdiNI488->Checked == true)
				gpibmethod = Santec::Communication::GPIBConnectType::NI4882;
			else
				gpibmethod = Santec::Communication::GPIBConnectType::NIVisa;

			TSL.GPIBAddress = System::Convert::ToInt32(address);
			if (txtboad->Text == "")
			{
				TSL.GPIBBoard = 0;
			}
			else
			{
				TSL.GPIBBoard = System::Convert::ToInt32(txtboad->Text);
			}
			TSL.GPIBConnectType = gpibmethod;
		}

		// ----------------Common
		// ---------------- 常见的
		// Terminator
		// 终止符
		if (rdiCr->Checked == true)
			terminator = Santec::CommunicationTerminator::Cr;
		else if (rdiLf->Checked == true)
			terminator = Santec::CommunicationTerminator::Lf;
		else
			terminator = Santec::CommunicationTerminator::CrLf;

		TSL.Terminator = terminator;
		TSL.TimeOut = 2000;             // Communication timeout 2000msec//通信超时2000msec


		String^ ans;
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
		lblproductname->Text = TSL.Information->ProductName;
		lblserial->Text = TSL.Information->SerialNumber;
		lblfwversion->Text = TSL.Information->FWversion;
		lblwave->Text = TSL.Information->MinimunWavelength + "-" + TSL.Information->MaximumWavelength;
		lblfreq->Text = TSL.Information->MinimunFrequency + "-" + TSL.Information->MaximumFrequency;
		lblATTrange->Text = TSL.Information->MinimumATTValue + "-" + TSL.Information->MaximumATTValue;
		lblAPC1->Text = TSL.Information->MinimumAPCPower_dBm + "-" + TSL.Information->MaximumAPCPower_dBm;
		lblACP2->Text = TSL.Information->MinimumAPCPower_mW + "-" + TSL.Information->MaximumAPCPower_mW;
		lblSweepSpeed_Range->Text = TSL.Information->MinimumSpeed + "-" + TSL.Information->MaximumSpeed;
	}

	private: System::Void BtnDisConnect_Click(System::Object^  sender, System::EventArgs^  e) {
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
		lblproductname->Text = "Product";
		lblserial->Text = "Product";
		lblfwversion->Text = "Product";
		lblwave->Text = "Product";
		lblfreq->Text = "Product";
		lblATTrange->Text = "Product";
		lblAPC1->Text = "Product";
		lblACP2->Text = "Product";
		lblSweepSpeed_Range->Text = "Product";
	}

	private: System::Void BtnLD_ON_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------
		// LD ON
		// LD 开
		// ---------------------------------------------------
		int errcord;

		errcord = TSL.Set_LD_Status(TSL::LD_Status::LD_ON);

		if (errcord != 0)
			Show_Error(errcord);

	}

	private: System::Void BtnLD_OFF_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------
		// LD OFF
		// LD 关
		// ---------------------------------------------------
		int errcord;

		errcord = TSL.Set_LD_Status(TSL::LD_Status::LD_OFF);

		if (errcord != 0)
			Show_Error(errcord);
	}

	private: System::Void BtnCoh_ON_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// Coh on
		// Coh 开
		// ----------------------------------------------------
		int errcord;

		errcord = TSL.Set_Coh_Control_Status(TSL::Coh_Status::Coh_ON);
		if (errcord != 0)
			Show_Error(errcord);
	}

	private: System::Void BtnCoh_OFF_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// Coh oFF
		// Coh 关
		// ----------------------------------------------------
		int errcord;

		errcord = TSL.Set_Coh_Control_Status(TSL::Coh_Status::Coh_OFF);
		if (errcord != 0)
			Show_Error(errcord);
	}

	private: System::Void BtnShutter_Open_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------
		// shutter Open
		// 遮挡状态开启
		// -------------------------------------------
		int errorcode;

		errorcode = TSL.Set_Shutter_Status(TSL::Shutter_Status::Shutter_Open);

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void BtnShutter_Close_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------
		// shutter Close
		// 遮挡状态关闭
		// -------------------------------------------
		int errorcode;

		errorcode = TSL.Set_Shutter_Status(TSL::Shutter_Status::Shutter_Close);

		if (errorcode != 0)
			Show_Error(errorcode);

	}

	private: System::Void BtnAPC_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// Set Power mode to APC
		// 设置功率模式为自动
		// ----------------------------------------------------
		int errcord;

		errcord = TSL.Set_Power_Mode(TSL::Power_Mode::APC);
		if (errcord != 0)
			Show_Error(errcord);

	}

	private: System::Void BtnACC_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// Set Power mode to ACC
		// 设置功率模式为手动
		// ----------------------------------------------------
		int errcord;

		errcord = TSL.Set_Power_Mode(TSL::Power_Mode::ACC);
		if (errcord != 0)
			Show_Error(errcord);
	}

	private: System::Void BtndBm_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// Set Power unit to dBm
		// 设置功率单位dBm
		// ----------------------------------------------------
		int errcord;

		errcord = TSL.Set_Power_Unit(TSL::Power_Unit::dBm);
		if (errcord != 0)
			Show_Error(errcord);
	}

	private: System::Void BtnmW_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// Set Power unit to mW
		// 设置功率单位mW
		// ----------------------------------------------------
		int errcord;

		errcord = TSL.Set_Power_Unit(TSL::Power_Unit::mW);
		if (errcord != 0)
			Show_Error(errcord);
	}

	private: System::Void Btn_SetATT_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------
		// SetATT
		// 设置ATT数值
		// -----------------------------------------
		int errcord;

		errcord = TSL.Set_ATT_Value(double::Parse(txtatt->Text));
		if (errcord != 0)
			Show_Error(errcord);
	}

	private: System::Void Btn_SetdBm_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------
		// Set Power dBm
		// 设置功率（dBm）
		// -----------------------------------------
		int errcord;

		errcord = TSL.Set_APC_Power_dBm(double::Parse(txtpow->Text));
		if (errcord != 0)
			Show_Error(errcord);
	}

	private: System::Void Btn_SetmW_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------
		// Set Power mW
		// 设置功率（mW）
		// -----------------------------------------
		int errcord;

		errcord = TSL.Set_APC_Power_mW(double::Parse(txtpow->Text));
		if (errcord != 0)
			Show_Error(errcord);
	}

	private: System::Void Btn_SetWavelenth_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------------------
		// set Wavelength
		// 设置波长
		// ------------------------------------------------------------------
		double wavelength;
		int errorcode;

		wavelength = double::Parse(txtsetwave->Text);
		errorcode = TSL.Set_Wavelength(wavelength);
		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void Btn_SetFrequency_Click(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------------
		// set Frequency
		// 设置频率
		// -------------------------------------------------------

		double frequency;
		int errorcode;

		frequency = double::Parse(txtsetfreq->Text);

		errorcode = TSL.Set_Frequency(frequency);
		if (errorcode != 0)
			Show_Error(errorcode);

	}

	private: System::Void Btn_SetFinetuning_Click(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------
		// Set Finetuning
		// 设置微调
		// --------------------------------------------------
		int errorcode;
		double ftvalue;

		ftvalue = double::Parse(txtsetft->Text);

		errorcode = TSL.Set_Finetuning(ftvalue);

		if (errorcode != 0)
			Show_Error(errorcode);

	}

	private: System::Void Btn_Wavelength_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------------
		// Get Setting Wavelength Value
		// 获取设置波长的值
		// ----------------------------------------------------------
		int errorcode;
		double wavelength;
		errorcode = TSL.Get_Wavelength(wavelength);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtwave->Text = wavelength.ToString();
	}

	private: System::Void Btn_Freuency_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------
		// Get Setting Frequency 
		// 获取设置频率
		// ------------------------------------------------
		int errorcode;
		double frequency;

		errorcode = TSL.Get_Frequency(frequency);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}
		txtfreq->Text = frequency.ToString();
	}

	private: System::Void Btn_Fine_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------
		// Get Fine tuning value
		// 获取微调值
		// ---------------------------------------
		int errorcode;
		double ftval;
		errorcode = TSL.Get_Finetuning(ftval);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtfine->Text = ftval.ToString();
	}

	private: System::Void Btn_Busy_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------
		// Get Busy status
		// 获取繁忙状态
		// ---------------------------------------------

		int errorcord;
		bool busy;

		errorcord = TSL.Get_Busy_Status(busy);

		if (errorcord != 0)
		{
			Show_Error(errorcord);
			return;
		}

		if (busy == true)
			txtbusy->Text = "Busy";
		else
			txtbusy->Text = "Standby";
	}

	private: System::Void Btn_Stangby_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------------
		// Waiting for standby until wait time
		// 等待待机直到等待时间
		// -----------------------------------------------------------
		double waittime;
		int errorcode;
		System::Diagnostics::Stopwatch st;
		double busy_time;

		waittime = double::Parse(txtwait->Text);

		st.Start();
		errorcode = TSL.TSL_Busy_Check((int)(waittime));
		busy_time = st.ElapsedMilliseconds;

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		MessageBox::Show("Busy time :" + Convert::ToString(busy_time) + "ms");
	}

	private: System::Void Btn_error_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------
		// Get TSL error code
		// 获取TSL错误代码
		// ----------------------------------------------------

		int errorcode;
		String^ TSL_error = String::Empty;

		errorcode = TSL.Get_System_Error(TSL_error);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}
		txttsl_err->Text = TSL_error;
	}

	private: System::Void Btn_GetLD_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------
		// Get LD Status
		// 获取LD状态
		// ------------------------------------------------
		int errcord;
		TSL::LD_Status LD_status;

		errcord = TSL.Get_LD_Status(LD_status);
		if (errcord != 0)
			Show_Error(errcord);

		if (LD_status == TSL::LD_Status::LD_OFF)
			txtlds->Text = "OFF";
		else
			txtlds->Text = "ON";
	}

	private: System::Void BtnPower_mode_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------
		// Get Power Mode
		// 获取功率模式
		// -----------------------------------------------
		int errcode;
		TSL::Power_Mode powermode;

		errcode = TSL.Get_Power_Mode(powermode);
		if (errcode != 0)
		{
			Show_Error(errcode);
			return;
		}

		if (powermode == TSL::Power_Mode::ACC)
			txtpms->Text = "ACC";
		else
			txtpms->Text = "APC";
	}

	private: System::Void BtnCoh_Status_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------
		// Get coh Status
		// 获取coh状态
		// ------------------------------------------------------
		int errcode;
		TSL::Coh_Status coh_status;

		errcode = TSL.Get_Coh_Control_Status(coh_status);
		if (errcode != 0)
		{
			Show_Error(errcode);
			return;
		}

		if (coh_status == TSL::Coh_Status::Coh_ON)
			txtcoh->Text = "ON";
		else
			txtcoh->Text = "OFF";

	}

	private: System::Void BtnShutter_Status_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------
		// Get  shutter status
		// 获取遮挡状态
		// ---------------------------------------------
		int errorcode;
		TSL::Shutter_Status shutter_su;

		errorcode = TSL.Get_Shutter_Status(shutter_su);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (shutter_su == TSL::Shutter_Status::Shutter_Open)
			txtshutter_su->Text = "Open";
		else
			txtshutter_su->Text = "Close";

	}

	private: System::Void BtnUnit_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------
		// Get Unit
		// 获得单位
		// --------------------------------------------------
		int errorcode;
		TSL::Power_Unit unit;

		errorcode = TSL.Get_Power_Unit(unit);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (unit == TSL::Power_Unit::dBm)
			txtunit->Text = "dBm";
		else
			txtunit->Text = "mW";
	}

	private: System::Void BtnAtt_value_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------------
		// Get Att value
		// 获取Att值
		// -------------------------------------------------------

		int errorcode;
		double att_value;
		errorcode = TSL.Get_ATT_Value(att_value);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtreadatt->Text = att_value.ToString();
	}

	private: System::Void BtnPower_dBm_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------------
		// Get Setting power dBm
		// 获取设置功率（dBm）
		// ----------------------------------------------------------
		int errorcode;
		double set_pow;

		errorcode = TSL.Get_Setting_Power_dBm(set_pow);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtreadpow->Text = set_pow.ToString();
	}

	private: System::Void BtnPower_mW_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------
		// Get Setting power mW
		// 获取设置功率（mW）
		// ---------------------------------------------
		int errorcode;
		double set_pow;

		errorcode = TSL.Get_Setting_Power_mW(set_pow);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtreadmw->Text = set_pow.ToString();
	}

	private: System::Void Btnmonitor_dBm_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------------
		// Get Monitor power dBm
		// 读取现在的监控功率（ｄBm）
		// ------------------------------------------------------
		int errorcode;
		double moni_pow;

		errorcode = TSL.Get_Monitor_Power_dBm(moni_pow);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtreadmoni->Text = moni_pow.ToString();
	}

	private: System::Void Btnmonitor_mW_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------------
		// Get Monitor power mW
		// 读取现在的监控功率（mW）
		// ------------------------------------------------------
		int errorcode;
		double moni_pow;

		errorcode = TSL.Get_Monitor_Power_mW(moni_pow);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtradmoni_mw->Text = moni_pow.ToString();
	}

	private: System::Void Btn_SetWavelength_Click(System::Object^  sender, System::EventArgs^  e) {
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
		startwavelength = double::Parse(txtstart->Text);
		stopwavelength = double::Parse(txtstop->Text);

		errorcode = TSL.Set_Sweep_Wavelength(startwavelength, stopwavelength);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ------Trigger & wavelength Step
		// ------触发和波长步长
		wavestep = double::Parse(txtstep->Text);

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

	private: System::Void Btn_Other_Click(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------------
		// Set Sweep Parameters
		// 设置扫描参数
		// --------------------------------------------------------
		int errorcode;

		// -----Set Speed 
		// -----设定的速度
		double speed;
		speed = double::Parse(txtspeed->Text);

		errorcode = TSL.Set_Sweep_Speed(speed);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ----Set Sweep Delay
		// ----设置扫描延时
		double delay;

		delay = double::Parse(txtdelay->Text);

		errorcode = TSL.Set_Sweep_Delay(delay);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}


		// -----Set Sweep cycle 
		// -----设置扫描周期
		double cycle;
		cycle = double::Parse(txtcycle->Text);

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

	private:void Set_Sweep_parameter()
	{
		// ---------------------------------------------------------
		// Set Sweep parameters 
		// 设置扫描参数
		// ---------------------------------------------------------
		TSL::Sweep_Mode smode;
		TSL::Trigger_Input_Mode tr_inp_mode;
		TSL::Trigger_Output_Mode tr_out_mode;
		TSL::Sweep_Start_Mode start_mode;
		TSL::TriggerOut_Source source;

		if ((cmbsm->Text == "") | (cmbtin->Text == "") | (cmbtout->Text == "") | (cmbst_mod->Text == ""))
		{
			MessageBox::Show("Please enter the value");
			return;
		}

		// ---Sweep mode
		// --- 扫描模式
		switch (cmbsm->SelectedIndex)
		{
		case 0:
		{
			smode = TSL::Sweep_Mode::Step_Oneway;
			break;
		}

		case 1:
		{
			smode = TSL::Sweep_Mode::Continuous_Oneway;
			break;
		}

		case 2:
		{
			smode = TSL::Sweep_Mode::Step_Twoway;
			break;
		}

		case 3:
		{
			smode = TSL::Sweep_Mode::Continuous_Twoway;
			break;
		}
		}

		// ----Trigger input mode
		// ----触发输入模式
		if (cmbtin->Text == "Disable")
			tr_inp_mode = TSL::Trigger_Input_Mode::Disable;
		else
			tr_inp_mode = TSL::Trigger_Input_Mode::Enable;

		// -----Trigger output mode
		// -----触发输出模式
		switch (cmbtout->SelectedIndex)
		{
		case 0:
		{
			tr_out_mode = TSL::Trigger_Output_Mode::None;
			break;
		}

		case 1:
		{
			tr_out_mode = TSL::Trigger_Output_Mode::Stop;
			break;
		}

		case 2:
		{
			tr_out_mode = TSL::Trigger_Output_Mode::Start;
			break;
		}

		case 3:
		{
			tr_out_mode = TSL::Trigger_Output_Mode::Step;
			break;
		}
		}

		// ----Startmode
		// ---- 启动模式

		if (cmbst_mod->Text == "Normal")
			start_mode = TSL::Sweep_Start_Mode::Normal;
		else
			start_mode = TSL::Sweep_Start_Mode::WaitingforTrigger;
		int errorcode;

		errorcode = TSL.Set_Sweep_Mode_Parameters(smode, tr_out_mode, tr_inp_mode, start_mode);

		if (errorcode != 0)
			Show_Error(errorcode);
		if (cmbTrigger_Source->Text == "Wavelength")
			source = TSL::TriggerOut_Source::Wavelength;
		else
			source = TSL::TriggerOut_Source::Time;

		if (rdo570->Checked || rdo770->Checked == true)
		{
			errorcode = TSL.Set_TriggerOutput_Source(source);
			if (errorcode != 0)
			{
				Show_Error(errorcode);
				return;
			}
		}

	}

	private: System::Void BtnGet_setting_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// get sweep paremters
		// 获取扫描参数
		// -----------------------------------------------
		TSL::Sweep_Mode s_mode;
		TSL::Trigger_Output_Mode tr_outputmode;
		TSL::Trigger_Input_Mode tr_inputmode;
		TSL::Sweep_Start_Mode start_mode;
		TSL::TriggerOut_Source source;
		int errorcode;


		// ----get Sweep mode
		// ----获取扫描模式
		errorcode = TSL.Get_Sweep_Mode(s_mode);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (s_mode == TSL::Sweep_Mode::Continuous_Oneway)
			txtg_smod->Text = "Continuous Oneway";
		else if (s_mode == TSL::Sweep_Mode::Continuous_Twoway)
			txtg_smod->Text = "Continuous Round trip";
		else if (s_mode == TSL::Sweep_Mode::Step_Oneway)
			txtg_smod->Text = "Step Oneway";
		else
			txtg_smod->Text = "Step Round trip";

		// ---Trigger input mode 
		// ---触发输入模式
		errorcode = TSL.Get_Input_Trigger_Mode(tr_inputmode);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (tr_inputmode == TSL::Trigger_Input_Mode::Disable)
			txtg_tr_inp->Text = "Disable";
		else
			txtg_tr_inp->Text = "Enable";

		// ----Trigger output mode 
		// ----触发输出模式
		errorcode = TSL.Get_Trigger_Output_Mode(tr_outputmode);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (tr_outputmode == TSL::Trigger_Output_Mode::None)
			txtg_tri_out->Text = "None";
		else if (tr_outputmode == TSL::Trigger_Output_Mode::Start)
			txtg_tri_out->Text = "Start";
		else if (tr_outputmode == TSL::Trigger_Output_Mode::Step)
			txtg_tri_out->Text = "Step";
		else
			txtg_tri_out->Text = "Stop";


		// ----start mode
		// ---- 启动模式

		errorcode = TSL.Get_Sweep_Start_Mode(start_mode);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (start_mode == TSL::Sweep_Start_Mode::Normal)
			txtg_startmode->Text = "Normal";
		else
			txtg_startmode->Text = "Waiting for trigger";


		// ----Stop& Start wavelength
		// ----Stop& Start波长
		double startwave;
		double stopwave;

		errorcode = TSL.Get_Sweep_Wavelength(startwave, stopwave);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_startwave->Text = startwave.ToString();
		txtg_stopwave->Text = stopwave.ToString();

		// ---Sweep delay
		// --- 扫描延迟
		double delay;

		errorcode = TSL.Get_Sweep_Delay(delay);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_delay->Text = delay.ToString();

		// -----Sweep Cycle
		// ----- 扫描周期
		int cycle;

		errorcode = TSL.Get_Sweep_Cycle(cycle);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_cycle->Text = cycle.ToString();

		// ----wavelength Step 
		// ---- 波长的步长
		double wavestep;

		errorcode = TSL.Get_Wavelength_Step(wavestep);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_wavestep->Text = wavestep.ToString();


		// -----Trigger step 
		// ----- 触发步长

		errorcode = TSL.Get_Trigger_Step(wavestep);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_triggerstep->Text = wavestep.ToString();

		// ----Sweep Speed 
		// ---- 扫描速度
		double speed;

		errorcode = TSL.Get_Sweep_Speed(speed);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_speed->Text = speed.ToString();

		if (rdo570->Checked || rdo770->Checked == true)
		{
			errorcode = TSL.Get_TriggerOutput_Source(source);
			if (errorcode != 0)
			{
				Show_Error(errorcode);
				return;
			}
			if (source == TSL::TriggerOut_Source::Wavelength)
				txtTrigger_Source->Text = "Wavelength";
			else
				txtTrigger_Source->Text = "Time";
		}

	}

	private: System::Void Btn_Start_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------
		// Sweep Start
		// 扫描开始
		// -------------------------------------------------
		int errorcode;
		errorcode = TSL.Sweep_Start();

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void Btn_Pause_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------
		// Sweep Pause
		// 扫描暂停
		// -------------------------------------------------
		int errorcode;
		errorcode = TSL.Sweep_Pause();

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void Btn_ReStart_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------
		// Sweep Restart
		// 扫描继续
		// -------------------------------------------------
		int errorcode;
		errorcode = TSL.Sweep_Restart();

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void Btn_Stop_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------
		// Sweep Stop
		// 扫描停止
		// -----------------------------------------------------
		int errorcode;
		if (lblproductname->Text->IndexOf("TSL-570") > -1)
		{
			TSL::Sweep_Status Status;
			System::Threading::Thread::Sleep(50);
			TSL.Get_Sweep_Status(Status);
			if (Status != TSL::Sweep_Status::Standby)
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

	private: System::Void Btn_SoftwareTrigger_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------
		// software trigger
		// 软件触发
		// ------------------------------------------------------
		int errorcode;
		errorcode = TSL.Set_Software_Trigger();

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void Btn_Current_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------
		// Get current cycles
		// 获取当前周期
		// ---------------------------------------------------
		int errorcode;
		int cycles;

		errorcode = TSL.Get_Sweep_Count(cycles);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}
		txtcurrentc->Text = cycles.ToString();

	}

	private: System::Void Btn_GetLogg_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------------------
		// Get Sweep Loggdata
		// 获取测试数据
		// ---------------------------------------------------------------
		int errorcord;
		int logcount;
		cli::array<double>^ logdata;

		errorcord = TSL.Get_Logging_Data(logcount, logdata);

		if (errorcord != 0)
		{
			Show_Error(errorcord);
			return;
		}

		String^ fpath = String::Empty;
		System::IO::StreamWriter^ writer;
		int loop1;

		SaveFileDialog1->ShowDialog();
		fpath = SaveFileDialog1->FileName;

		writer = gcnew System::IO::StreamWriter(fpath);

		for (loop1 = 0; loop1 <= logdata->GetUpperBound(0); loop1++)
			writer->WriteLine(logdata[loop1]);

		writer->Close();


		MessageBox::Show("Logg data read completed.");

	}
	private: System::Void Btn_Minstep_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------------------------
		// Calcurate Trigger minimum step form sweep speed
		// 从扫描速度计算触发最小步长
		// ------------------------------------------------------------------

		double tr_step;
		double speed;
		int errorcode;

		speed = double::Parse(txtminstep->Text);

		errorcode = TSL.Cal_MinimumTriggerStep_from_SweepSpeed(speed, tr_step, true);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		MessageBox::Show("Minimum trigger step = " + System::Convert::ToString(tr_step) + "nm");
	}
	private: System::Void Btn_Waiting_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------------------
		// Waititng for sweep status
		// 等待扫描状态
		// -----------------------------------------------------------

		int errorcode;
		TSL::Sweep_Status sweep_su;
		int wait_time;
		System::Diagnostics::Stopwatch st;
		double timed;

		wait_time = int::Parse(txtsw_wait->Text);


		if (cmbsweep_su->Text == "Standby")
			sweep_su = TSL::Sweep_Status::Standby;
		else if (cmbsweep_su->Text == "Running")
			sweep_su = TSL::Sweep_Status::Running;
		else if (cmbsweep_su->Text == "Pausing")
			sweep_su = TSL::Sweep_Status::Pausing;
		else if (cmbsweep_su->Text == "WaitingforTrigger")
			sweep_su = TSL::Sweep_Status::WaitingforTrigger;
		else
			sweep_su = TSL::Sweep_Status::Returning;


		st.Start();
		errorcode = TSL.Waiting_For_Sweep_Status(wait_time, sweep_su);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		timed = st.ElapsedMilliseconds;
		MessageBox::Show("waiting time:" + Convert::ToString(timed) + "msec");
	}

	private: System::Void Btn_Status_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------
		// Get Sweep status
		// 获取扫描状态
		// ---------------------------------------------------

		int errorcode;
		TSL::Sweep_Status sweep_su;

		errorcode = TSL.Get_Sweep_Status(sweep_su);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (sweep_su == TSL::Sweep_Status::Pausing)
			txtg_sweep_su->Text = "Pause";
		else if (sweep_su == TSL::Sweep_Status::Returning)
			txtg_sweep_su->Text = "Returning";
		else if (sweep_su == TSL::Sweep_Status::Running)
			txtg_sweep_su->Text = "Runing";
		else if (sweep_su == TSL::Sweep_Status::Standby)
			txtg_sweep_su->Text = "Standby";
		else
			txtg_sweep_su->Text = "Waiting for Trigger";
	}

	private: System::Void btnSplit_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------------
		//  Split Visa resouce string 
		//  将字符串分割
		// -----------------------------------------------------

		if (cmbgpib_resouce->Text == "")
		{
			MessageBox::Show("Please enter the visa string for GPIB resouce commbbox");
			return;
		}
		array<System::String^>^sp = nullptr;
		int board_number;
		int address;
		array<wchar_t>^ c = { ':',':' };
		sp = cmbgpib_resouce->Text->Split(c);

		board_number = Convert::ToInt32(sp[0]->Substring(4));
		address = Convert::ToInt32(sp[2]);

		txtboad->Text = board_number.ToString();
		txtaddressnum->Text = address.ToString();
	}

	private: System::Void btnGet_Visa_Click(System::Object^  sender, System::EventArgs^  e) {
		//----------------------------------------------
		//  Get GPIB resouce
		//  获取GPIB资源
		//  This function need to instlle NIVisa.Dll
		//  这个函数需要安装NIVisa.Dll
		//----------------------------------------------

		array<System::String^>^resouce;
		resouce = Communication::MainCommunication::Get_GPIB_Resources();

		if (resouce->Length == 0)
		{
			return;
		}

		for (int loop1 = 0; loop1 < resouce->Length; loop1++)
		{
			cmbgpib_resouce->Items->Add(resouce[loop1]);
		}
	}

	private: System::Void btnUsb_resouce_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------
		// Get usb resouce
		// 获取usb资源
		// ------------------------------------------------------
		array<System::String^>^resouce = nullptr;

		resouce = Communication::MainCommunication::Get_USB_Resouce();
		if (resouce->Length == 0)
			return;

		int loop1;

		for (loop1 = 0; loop1 < resouce->Length; loop1++)

			cmbusbresouce->Items->Add(resouce[loop1]);
	}

	private: System::Void rdo550_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------
		// target TSL-550 checked
		// 选择目标为TSL-550
		// ------------------------------------------------

		if (rdo550->Checked == true)
		{
			// TSL-550 can't Control from LAN & USB
			// TSL-550不能从LAN和USB控制
			rdiUSB->Enabled = false;
			rdoLAN->Enabled = false;
			btnGetIP->Enabled = false;
			btnGetPort->Enabled = false;
			btnSpeed->Enabled = false;
			Btn_Pause->Enabled = true;
			Btn_ReStart->Enabled = true;
			txtPort->Enabled = false;
			Btn_SetATT->Enabled = true;
			BtnAtt_value->Enabled = true;

		}
	}

	private: System::Void rdo570_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------
		// target TSL-570 checked
		// 选择目标为TSL-570
		// ------------------------------------------------

		if (rdo570->Checked == true)
		{
			rdiUSB->Enabled = true;
			rdoLAN->Enabled = true;
			btnGetIP->Enabled = true;
			btnGetPort->Enabled = true;
			btnSpeed->Enabled = true;
			Btn_Pause->Enabled = false;
			Btn_ReStart->Enabled = false;
			txtPort->Enabled = true;
			Btn_SetATT->Enabled = true;
			BtnAtt_value->Enabled = true;

		}
	}

	private: System::Void rdiUSB_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		//  --------------------------------------------------------------
		//  USB communcation checked
		//  选择USB 通讯
		// --------------------------------------------------------------

		if (rdiUSB->Checked == true)
		{
			TextBox1->Text = txtdev_num->Text;         // USB Control Device ID //USB控制设备ID
			txtPort->Enabled = true;
			txtPort->Text = "5000";
		}

	}

	private: System::Void rdoLAN_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (rdoLAN->Checked == true)
		{
			txtPort->Enabled = true;
			txtPort->Text = "5000";
		}
	}
	private: System::Void btnSpeed_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------
		// Get SweepSpeed table
		// 获取SweepSpeed表
		// ------------------------------------------------------

		int errorcode;
		array<System::Double>^table = nullptr;

		cmb570_Speed->Items->Clear();

		if (rdo570->Checked || rdo770->Checked == true)
		{
			errorcode = TSL.Get_Sweep_Speed_table(table);
			int loop1;

			for (loop1 = 0; loop1 < table->Length; loop1++)

				cmb570_Speed->Items->Add(table[loop1]);

			if (errorcode != 0)
			{
				Show_Error(errorcode);
				return;
			}

		}

	}
	private: System::Void cmbusbresouce_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------------
		// Select usb  resouce & Show deveice number
		// 选择usb资源并显示设备号
		// -------------------------------------------------------

		if (cmbusbresouce->Text == "")
			return;
		txtdev_num->Text = cmbusbresouce->SelectedIndex.ToString();
	}

	private: System::Void btnGetIP_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// Get IP Address
		// this function only support for TSL-570
		// 获取IP地址
		// 这个功能只支持TSL-570
		// ------------------------------------------------
		int errorcode;
		String^ address = String::Empty;
		errorcode = TSL.Get_IPAddress(address);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtip_add->Text = address;

	}

	private: System::Void btnGetPort_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// Get Port
		// this function only support for TSL-570
		// 获取端口
		// 这个功能只支持TSL-570
		// ------------------------------------------------
		int errorcode;
		int Port;

		errorcode = TSL.Get_LAN_Portnumber(Port);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtlan_port->Text = Port.ToString();

	}
	private: System::Void rdo770_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------
		// target TSL-770 checked
		// 选择目标为TSL-770
		// ------------------------------------------------

		if (rdo770->Checked == true)
		{
			rdiUSB->Enabled = true;
			rdoLAN->Enabled = true;
			btnGetIP->Enabled = true;
			btnGetPort->Enabled = true;
			btnSpeed->Enabled = true;
			Btn_Pause->Enabled = false;
			Btn_ReStart->Enabled = false;
			txtPort->Enabled = true;
			Btn_SetATT->Enabled = false;
			BtnAtt_value->Enabled = false;
		}
	}
	};
}
