#pragma once

namespace Instrument_DLL_Sample_CPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Santec;

	/// <summary>
	/// MPMSample 摘要
	/// </summary>
	public ref class MPMSample : public System::Windows::Forms::Form
	{
	public:
		MPMSample(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		MPM mpm;                 //MPM Control Class// MPM控制类
		array<Label^>^ lbl_type= gcnew array<Label^>(5);
		array<Label^>^ lbl_version= gcnew array<Label^>(5);
		array<Label^>^ lbl_sn=gcnew array<Label^>(5);

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MPMSample()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::TextBox^  txtfr_point;
	protected:
	internal: System::Windows::Forms::GroupBox^  GroupBox13;
	internal: System::Windows::Forms::Button^  btnStop;
	internal: System::Windows::Forms::Label^  Label68;
	internal: System::Windows::Forms::Label^  Label67;
	internal: System::Windows::Forms::Label^  Label66;
	internal: System::Windows::Forms::TextBox^  txtlog_status;
	internal: System::Windows::Forms::TextBox^  txte_slot;
	internal: System::Windows::Forms::Button^  btnGetSlot;
	internal: System::Windows::Forms::TextBox^  txtlog_ch;
	internal: System::Windows::Forms::TextBox^  txtlog_slot;
	internal: System::Windows::Forms::Button^  btnGetch;
	internal: System::Windows::Forms::Button^  btnStatus;
	internal: System::Windows::Forms::Button^  btnStart;
	internal: System::Windows::Forms::TabPage^  TabPage3;
	internal: System::Windows::Forms::GroupBox^  GroupBox12;
	internal: System::Windows::Forms::Label^  Label65;
	internal: System::Windows::Forms::TextBox^  txtfr_wave;
	internal: System::Windows::Forms::Button^  btnSetFreerun;
	internal: System::Windows::Forms::Label^  Label50;
	internal: System::Windows::Forms::ComboBox^  cmbfr_tin_mode;
	internal: System::Windows::Forms::Label^  Label49;
	internal: System::Windows::Forms::TextBox^  txtfr_range;
	internal: System::Windows::Forms::Label^  Label48;
	internal: System::Windows::Forms::Label^  Label47;
	internal: System::Windows::Forms::TextBox^  txtfr_ave;
	internal: System::Windows::Forms::GroupBox^  GroupBox6;
	internal: System::Windows::Forms::Button^  btnSetSweep;
	internal: System::Windows::Forms::TextBox^  txtsm_range;
	internal: System::Windows::Forms::Label^  Label45;
	internal: System::Windows::Forms::Label^  Label39;
	internal: System::Windows::Forms::ComboBox^  cmbsm_rangemode;
	internal: System::Windows::Forms::Label^  Label44;
	internal: System::Windows::Forms::TextBox^  txtspeed;
	internal: System::Windows::Forms::Label^  Label43;
	internal: System::Windows::Forms::TextBox^  txtwavestep;
	internal: System::Windows::Forms::Label^  Label42;
	internal: System::Windows::Forms::TextBox^  txtstopwave;
	internal: System::Windows::Forms::Label^  Label41;
	internal: System::Windows::Forms::TextBox^  txtstartwave;
	internal: System::Windows::Forms::GroupBox^  GroupBox5;
	internal: System::Windows::Forms::Label^  Label64;
	internal: System::Windows::Forms::TextBox^  txtcon_wave;
	internal: System::Windows::Forms::Label^  Label46;
	internal: System::Windows::Forms::Button^  btnSetConst;
	internal: System::Windows::Forms::TextBox^  txtcon_range;
	internal: System::Windows::Forms::Label^  Label38;
	internal: System::Windows::Forms::ComboBox^  cmbcon_rangemode;
	internal: System::Windows::Forms::Label^  Label37;
	internal: System::Windows::Forms::TextBox^  txtcon_point;
	internal: System::Windows::Forms::Label^  Label34;
	internal: System::Windows::Forms::TextBox^  txtcon_ave;
	internal: System::Windows::Forms::Label^  Label16;
	internal: System::Windows::Forms::TextBox^  txte_range;
	internal: System::Windows::Forms::TextBox^  txtget_unit;
	internal: System::Windows::Forms::Button^  btnSetSlot;
	internal: System::Windows::Forms::TextBox^  txtget_wave;
	internal: System::Windows::Forms::Label^  Label19;
	internal: System::Windows::Forms::Label^  Label15;
	internal: System::Windows::Forms::TextBox^  txtr_ch;
	internal: System::Windows::Forms::Label^  Label20;
	internal: System::Windows::Forms::TextBox^  txtr_slot;
	internal: System::Windows::Forms::Button^  btnSetUnit;
	internal: System::Windows::Forms::Label^  Label14;
	internal: System::Windows::Forms::ComboBox^  cmbunit;
	internal: System::Windows::Forms::Button^  btnSetAveraging;
	internal: System::Windows::Forms::Label^  Label13;
	internal: System::Windows::Forms::TextBox^  txtsetavg;
	internal: System::Windows::Forms::Button^  btnSetWavelength;
	internal: System::Windows::Forms::Label^  Label12;
	internal: System::Windows::Forms::TextBox^  txtsetwave;
	internal: System::Windows::Forms::Button^  btnSetRangeAll;
	internal: System::Windows::Forms::Button^  btnSetRangeMode;
	internal: System::Windows::Forms::Label^  Label4;
	internal: System::Windows::Forms::Button^  btnGet;
	internal: System::Windows::Forms::Label^  Label22;
	internal: System::Windows::Forms::TextBox^  txtget_avg;
	internal: System::Windows::Forms::TextBox^  txtsetrange;
	internal: System::Windows::Forms::ComboBox^  cmbset_rangemode;
	internal: System::Windows::Forms::Label^  Label21;
	internal: System::Windows::Forms::Label^  Label3;
	internal: System::Windows::Forms::Label^  Label63;
	internal: System::Windows::Forms::TextBox^  txtg_wavelength;
	internal: System::Windows::Forms::Button^  btnGetParameter;
	internal: System::Windows::Forms::GroupBox^  GroupBox15;
	internal: System::Windows::Forms::Label^  Label60;
	internal: System::Windows::Forms::TextBox^  txtg_speed;
	internal: System::Windows::Forms::Label^  Label59;
	internal: System::Windows::Forms::TextBox^  txtg_stepwave;
	internal: System::Windows::Forms::Label^  Label58;
	internal: System::Windows::Forms::TextBox^  txtg_stopwave;
	internal: System::Windows::Forms::Label^  Label57;
	internal: System::Windows::Forms::TextBox^  txtg_statwave;
	internal: System::Windows::Forms::Label^  Label56;
	internal: System::Windows::Forms::TextBox^  txtg_settingrange;
	internal: System::Windows::Forms::Label^  Label55;
	internal: System::Windows::Forms::TextBox^  txtg_rangemode;
	internal: System::Windows::Forms::Label^  Label54;
	internal: System::Windows::Forms::TextBox^  txtg_tinmode;
	internal: System::Windows::Forms::TextBox^  txtlog_mode;
	internal: System::Windows::Forms::Label^  Label53;
	internal: System::Windows::Forms::TextBox^  txtg_point;
	internal: System::Windows::Forms::TextBox^  txtg_ave;
	internal: System::Windows::Forms::Label^  Label52;
	internal: System::Windows::Forms::GroupBox^  GroupBox14;
	internal: System::Windows::Forms::Label^  Label51;
	internal: System::Windows::Forms::SaveFileDialog^  SaveFileDialog1;
	internal: System::Windows::Forms::TabPage^  TabPage4;
	internal: System::Windows::Forms::TextBox^  txtgetrang;
	internal: System::Windows::Forms::Label^  Label1;
	internal: System::Windows::Forms::TextBox^  txtaddress;
	internal: System::Windows::Forms::TextBox^  txtport;
	internal: System::Windows::Forms::Label^  Label31;
	internal: System::Windows::Forms::Label^  Label30;
	internal: System::Windows::Forms::Label^  Label29;
	internal: System::Windows::Forms::Label^  Label28;
	internal: System::Windows::Forms::Label^  Label27;
	internal: System::Windows::Forms::Button^  btnDisconnect;
	internal: System::Windows::Forms::Button^  btnConnect;
	internal: System::Windows::Forms::Label^  lblver4;
	internal: System::Windows::Forms::Label^  lblver3;
	internal: System::Windows::Forms::Label^  lblver2;
	internal: System::Windows::Forms::Label^  lblver1;
	internal: System::Windows::Forms::Label^  lblver0;
	internal: System::Windows::Forms::Label^  lblseri4;
	internal: System::Windows::Forms::GroupBox^  GroupBox3;
	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::RadioButton^  rdo232C;
	internal: System::Windows::Forms::RadioButton^  rdolan;
	internal: System::Windows::Forms::RadioButton^  rdokeysightvisa;
	internal: System::Windows::Forms::RadioButton^  rdovisa;
	internal: System::Windows::Forms::RadioButton^  rdo488;
	internal: System::Windows::Forms::Label^  Label6;
	internal: System::Windows::Forms::Label^  lblseri3;
	internal: System::Windows::Forms::Label^  lblseri2;
	internal: System::Windows::Forms::Label^  lblseri1;
	internal: System::Windows::Forms::Label^  lbltype4;
	internal: System::Windows::Forms::Label^  lbltype3;
	internal: System::Windows::Forms::Label^  lbltype2;
	internal: System::Windows::Forms::Label^  lbltype1;
	internal: System::Windows::Forms::Label^  Label5;
	internal: System::Windows::Forms::Label^  lblseri0;
	internal: System::Windows::Forms::GroupBox^  GroupBox1;
	internal: System::Windows::Forms::Label^  Label72;
	internal: System::Windows::Forms::Label^  Label71;
	internal: System::Windows::Forms::Button^  btnSplit;
	internal: System::Windows::Forms::TextBox^  txtsp_add;
	internal: System::Windows::Forms::TextBox^  txtboard_num;
	internal: System::Windows::Forms::Label^  Label62;
	internal: System::Windows::Forms::Label^  Label61;
	internal: System::Windows::Forms::Button^  GetComport;
	internal: System::Windows::Forms::ComboBox^  cmbcomport;
	internal: System::Windows::Forms::Button^  btnVisa;
	internal: System::Windows::Forms::ComboBox^  cmbvisaresouce;
	internal: System::Windows::Forms::Label^  lbltype0;
	internal: System::Windows::Forms::Label^  lblmodulecount;
	internal: System::Windows::Forms::Label^  lblversion;
	internal: System::Windows::Forms::Label^  lblserial;
	internal: System::Windows::Forms::Label^  lblproduct;
	internal: System::Windows::Forms::Label^  Label8;
	internal: System::Windows::Forms::Label^  Label11;
	internal: System::Windows::Forms::Label^  Label10;
	internal: System::Windows::Forms::Label^  Label9;
	internal: System::Windows::Forms::GroupBox^  GroupBox8;
	internal: System::Windows::Forms::GroupBox^  GroupBox4;
	internal: System::Windows::Forms::Label^  Label7;
	internal: System::Windows::Forms::GroupBox^  GroupBox2;
	internal: System::Windows::Forms::TabPage^  TabPage1;
	internal: System::Windows::Forms::TabControl^  TabControl1;
	internal: System::Windows::Forms::TabPage^  TabPage2;
	internal: System::Windows::Forms::GroupBox^  GroupBox11;
	internal: System::Windows::Forms::Label^  Label70;
	internal: System::Windows::Forms::Label^  Label69;
	internal: System::Windows::Forms::TextBox^  txtwave_ch;
	internal: System::Windows::Forms::TextBox^  txtwave_slot;
	internal: System::Windows::Forms::TextBox^  txtlan_port;
	internal: System::Windows::Forms::Button^  btnGetPort;
	internal: System::Windows::Forms::TextBox^  txtipaddress;
	internal: System::Windows::Forms::Button^  btnGetIP;
	internal: System::Windows::Forms::TextBox^  txtsyst_error;
	internal: System::Windows::Forms::Button^  btnGetError;
	internal: System::Windows::Forms::Button^  btnGetWavelength;
	internal: System::Windows::Forms::Button^  btnZeroing;
	internal: System::Windows::Forms::GroupBox^  GroupBox9;
	internal: System::Windows::Forms::Label^  Label35;
	internal: System::Windows::Forms::TextBox^  txtreadp_all;
	internal: System::Windows::Forms::Button^  btnSlot_Power;
	internal: System::Windows::Forms::Label^  Label36;
	internal: System::Windows::Forms::TextBox^  txtread_slotall;
	internal: System::Windows::Forms::Label^  Label26;
	internal: System::Windows::Forms::Label^  Label32;
	internal: System::Windows::Forms::TextBox^  txt_readp_ch;
	internal: System::Windows::Forms::Button^  btnSlot_Ch_Power;
	internal: System::Windows::Forms::Label^  Label33;
	internal: System::Windows::Forms::TextBox^  txtread_ch;
	internal: System::Windows::Forms::TextBox^  txtread_slot;
	internal: System::Windows::Forms::Label^  Label23;
	internal: System::Windows::Forms::Label^  Label24;
	internal: System::Windows::Forms::TextBox^  txtget_erange;
	internal: System::Windows::Forms::Button^  btnSlot_Ch_Range;
	internal: System::Windows::Forms::Label^  Label25;
	internal: System::Windows::Forms::TextBox^  txtget_rangech;
	internal: System::Windows::Forms::TextBox^  txtget_rangeslot;
	internal: System::Windows::Forms::GroupBox^  GroupBox10;
	internal: System::Windows::Forms::Label^  Label18;
	internal: System::Windows::Forms::TextBox^  txtgetrmode;
	internal: System::Windows::Forms::GroupBox^  GroupBox7;
	internal: System::Windows::Forms::Label^  Label17;

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
			this->txtfr_point = (gcnew System::Windows::Forms::TextBox());
			this->GroupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->Label68 = (gcnew System::Windows::Forms::Label());
			this->Label67 = (gcnew System::Windows::Forms::Label());
			this->Label66 = (gcnew System::Windows::Forms::Label());
			this->txtlog_status = (gcnew System::Windows::Forms::TextBox());
			this->txte_slot = (gcnew System::Windows::Forms::TextBox());
			this->btnGetSlot = (gcnew System::Windows::Forms::Button());
			this->txtlog_ch = (gcnew System::Windows::Forms::TextBox());
			this->txtlog_slot = (gcnew System::Windows::Forms::TextBox());
			this->btnGetch = (gcnew System::Windows::Forms::Button());
			this->btnStatus = (gcnew System::Windows::Forms::Button());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->TabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->GroupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->Label65 = (gcnew System::Windows::Forms::Label());
			this->txtfr_wave = (gcnew System::Windows::Forms::TextBox());
			this->btnSetFreerun = (gcnew System::Windows::Forms::Button());
			this->Label50 = (gcnew System::Windows::Forms::Label());
			this->cmbfr_tin_mode = (gcnew System::Windows::Forms::ComboBox());
			this->Label49 = (gcnew System::Windows::Forms::Label());
			this->txtfr_range = (gcnew System::Windows::Forms::TextBox());
			this->Label48 = (gcnew System::Windows::Forms::Label());
			this->Label47 = (gcnew System::Windows::Forms::Label());
			this->txtfr_ave = (gcnew System::Windows::Forms::TextBox());
			this->GroupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->btnSetSweep = (gcnew System::Windows::Forms::Button());
			this->txtsm_range = (gcnew System::Windows::Forms::TextBox());
			this->Label45 = (gcnew System::Windows::Forms::Label());
			this->Label39 = (gcnew System::Windows::Forms::Label());
			this->cmbsm_rangemode = (gcnew System::Windows::Forms::ComboBox());
			this->Label44 = (gcnew System::Windows::Forms::Label());
			this->txtspeed = (gcnew System::Windows::Forms::TextBox());
			this->Label43 = (gcnew System::Windows::Forms::Label());
			this->txtwavestep = (gcnew System::Windows::Forms::TextBox());
			this->Label42 = (gcnew System::Windows::Forms::Label());
			this->txtstopwave = (gcnew System::Windows::Forms::TextBox());
			this->Label41 = (gcnew System::Windows::Forms::Label());
			this->txtstartwave = (gcnew System::Windows::Forms::TextBox());
			this->GroupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->Label64 = (gcnew System::Windows::Forms::Label());
			this->txtcon_wave = (gcnew System::Windows::Forms::TextBox());
			this->Label46 = (gcnew System::Windows::Forms::Label());
			this->btnSetConst = (gcnew System::Windows::Forms::Button());
			this->txtcon_range = (gcnew System::Windows::Forms::TextBox());
			this->Label38 = (gcnew System::Windows::Forms::Label());
			this->cmbcon_rangemode = (gcnew System::Windows::Forms::ComboBox());
			this->Label37 = (gcnew System::Windows::Forms::Label());
			this->txtcon_point = (gcnew System::Windows::Forms::TextBox());
			this->Label34 = (gcnew System::Windows::Forms::Label());
			this->txtcon_ave = (gcnew System::Windows::Forms::TextBox());
			this->Label16 = (gcnew System::Windows::Forms::Label());
			this->txte_range = (gcnew System::Windows::Forms::TextBox());
			this->txtget_unit = (gcnew System::Windows::Forms::TextBox());
			this->btnSetSlot = (gcnew System::Windows::Forms::Button());
			this->txtget_wave = (gcnew System::Windows::Forms::TextBox());
			this->Label19 = (gcnew System::Windows::Forms::Label());
			this->Label15 = (gcnew System::Windows::Forms::Label());
			this->txtr_ch = (gcnew System::Windows::Forms::TextBox());
			this->Label20 = (gcnew System::Windows::Forms::Label());
			this->txtr_slot = (gcnew System::Windows::Forms::TextBox());
			this->btnSetUnit = (gcnew System::Windows::Forms::Button());
			this->Label14 = (gcnew System::Windows::Forms::Label());
			this->cmbunit = (gcnew System::Windows::Forms::ComboBox());
			this->btnSetAveraging = (gcnew System::Windows::Forms::Button());
			this->Label13 = (gcnew System::Windows::Forms::Label());
			this->txtsetavg = (gcnew System::Windows::Forms::TextBox());
			this->btnSetWavelength = (gcnew System::Windows::Forms::Button());
			this->Label12 = (gcnew System::Windows::Forms::Label());
			this->txtsetwave = (gcnew System::Windows::Forms::TextBox());
			this->btnSetRangeAll = (gcnew System::Windows::Forms::Button());
			this->btnSetRangeMode = (gcnew System::Windows::Forms::Button());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->btnGet = (gcnew System::Windows::Forms::Button());
			this->Label22 = (gcnew System::Windows::Forms::Label());
			this->txtget_avg = (gcnew System::Windows::Forms::TextBox());
			this->txtsetrange = (gcnew System::Windows::Forms::TextBox());
			this->cmbset_rangemode = (gcnew System::Windows::Forms::ComboBox());
			this->Label21 = (gcnew System::Windows::Forms::Label());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->Label63 = (gcnew System::Windows::Forms::Label());
			this->txtg_wavelength = (gcnew System::Windows::Forms::TextBox());
			this->btnGetParameter = (gcnew System::Windows::Forms::Button());
			this->GroupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->Label60 = (gcnew System::Windows::Forms::Label());
			this->txtg_speed = (gcnew System::Windows::Forms::TextBox());
			this->Label59 = (gcnew System::Windows::Forms::Label());
			this->txtg_stepwave = (gcnew System::Windows::Forms::TextBox());
			this->Label58 = (gcnew System::Windows::Forms::Label());
			this->txtg_stopwave = (gcnew System::Windows::Forms::TextBox());
			this->Label57 = (gcnew System::Windows::Forms::Label());
			this->txtg_statwave = (gcnew System::Windows::Forms::TextBox());
			this->Label56 = (gcnew System::Windows::Forms::Label());
			this->txtg_settingrange = (gcnew System::Windows::Forms::TextBox());
			this->Label55 = (gcnew System::Windows::Forms::Label());
			this->txtg_rangemode = (gcnew System::Windows::Forms::TextBox());
			this->Label54 = (gcnew System::Windows::Forms::Label());
			this->txtg_tinmode = (gcnew System::Windows::Forms::TextBox());
			this->txtlog_mode = (gcnew System::Windows::Forms::TextBox());
			this->Label53 = (gcnew System::Windows::Forms::Label());
			this->txtg_point = (gcnew System::Windows::Forms::TextBox());
			this->txtg_ave = (gcnew System::Windows::Forms::TextBox());
			this->Label52 = (gcnew System::Windows::Forms::Label());
			this->GroupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->Label51 = (gcnew System::Windows::Forms::Label());
			this->SaveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->TabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->txtgetrang = (gcnew System::Windows::Forms::TextBox());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->txtaddress = (gcnew System::Windows::Forms::TextBox());
			this->txtport = (gcnew System::Windows::Forms::TextBox());
			this->Label31 = (gcnew System::Windows::Forms::Label());
			this->Label30 = (gcnew System::Windows::Forms::Label());
			this->Label29 = (gcnew System::Windows::Forms::Label());
			this->Label28 = (gcnew System::Windows::Forms::Label());
			this->Label27 = (gcnew System::Windows::Forms::Label());
			this->btnDisconnect = (gcnew System::Windows::Forms::Button());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->lblver4 = (gcnew System::Windows::Forms::Label());
			this->lblver3 = (gcnew System::Windows::Forms::Label());
			this->lblver2 = (gcnew System::Windows::Forms::Label());
			this->lblver1 = (gcnew System::Windows::Forms::Label());
			this->lblver0 = (gcnew System::Windows::Forms::Label());
			this->lblseri4 = (gcnew System::Windows::Forms::Label());
			this->GroupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->rdo232C = (gcnew System::Windows::Forms::RadioButton());
			this->rdolan = (gcnew System::Windows::Forms::RadioButton());
			this->rdokeysightvisa = (gcnew System::Windows::Forms::RadioButton());
			this->rdovisa = (gcnew System::Windows::Forms::RadioButton());
			this->rdo488 = (gcnew System::Windows::Forms::RadioButton());
			this->Label6 = (gcnew System::Windows::Forms::Label());
			this->lblseri3 = (gcnew System::Windows::Forms::Label());
			this->lblseri2 = (gcnew System::Windows::Forms::Label());
			this->lblseri1 = (gcnew System::Windows::Forms::Label());
			this->lbltype4 = (gcnew System::Windows::Forms::Label());
			this->lbltype3 = (gcnew System::Windows::Forms::Label());
			this->lbltype2 = (gcnew System::Windows::Forms::Label());
			this->lbltype1 = (gcnew System::Windows::Forms::Label());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->lblseri0 = (gcnew System::Windows::Forms::Label());
			this->GroupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Label72 = (gcnew System::Windows::Forms::Label());
			this->Label71 = (gcnew System::Windows::Forms::Label());
			this->btnSplit = (gcnew System::Windows::Forms::Button());
			this->txtsp_add = (gcnew System::Windows::Forms::TextBox());
			this->txtboard_num = (gcnew System::Windows::Forms::TextBox());
			this->Label62 = (gcnew System::Windows::Forms::Label());
			this->Label61 = (gcnew System::Windows::Forms::Label());
			this->GetComport = (gcnew System::Windows::Forms::Button());
			this->cmbcomport = (gcnew System::Windows::Forms::ComboBox());
			this->btnVisa = (gcnew System::Windows::Forms::Button());
			this->cmbvisaresouce = (gcnew System::Windows::Forms::ComboBox());
			this->lbltype0 = (gcnew System::Windows::Forms::Label());
			this->lblmodulecount = (gcnew System::Windows::Forms::Label());
			this->lblversion = (gcnew System::Windows::Forms::Label());
			this->lblserial = (gcnew System::Windows::Forms::Label());
			this->lblproduct = (gcnew System::Windows::Forms::Label());
			this->Label8 = (gcnew System::Windows::Forms::Label());
			this->Label11 = (gcnew System::Windows::Forms::Label());
			this->Label10 = (gcnew System::Windows::Forms::Label());
			this->Label9 = (gcnew System::Windows::Forms::Label());
			this->GroupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->GroupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->Label7 = (gcnew System::Windows::Forms::Label());
			this->GroupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->TabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->TabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->TabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->GroupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->Label70 = (gcnew System::Windows::Forms::Label());
			this->Label69 = (gcnew System::Windows::Forms::Label());
			this->txtwave_ch = (gcnew System::Windows::Forms::TextBox());
			this->txtwave_slot = (gcnew System::Windows::Forms::TextBox());
			this->txtlan_port = (gcnew System::Windows::Forms::TextBox());
			this->btnGetPort = (gcnew System::Windows::Forms::Button());
			this->txtipaddress = (gcnew System::Windows::Forms::TextBox());
			this->btnGetIP = (gcnew System::Windows::Forms::Button());
			this->txtsyst_error = (gcnew System::Windows::Forms::TextBox());
			this->btnGetError = (gcnew System::Windows::Forms::Button());
			this->btnGetWavelength = (gcnew System::Windows::Forms::Button());
			this->btnZeroing = (gcnew System::Windows::Forms::Button());
			this->GroupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->Label35 = (gcnew System::Windows::Forms::Label());
			this->txtreadp_all = (gcnew System::Windows::Forms::TextBox());
			this->btnSlot_Power = (gcnew System::Windows::Forms::Button());
			this->Label36 = (gcnew System::Windows::Forms::Label());
			this->txtread_slotall = (gcnew System::Windows::Forms::TextBox());
			this->Label26 = (gcnew System::Windows::Forms::Label());
			this->Label32 = (gcnew System::Windows::Forms::Label());
			this->txt_readp_ch = (gcnew System::Windows::Forms::TextBox());
			this->btnSlot_Ch_Power = (gcnew System::Windows::Forms::Button());
			this->Label33 = (gcnew System::Windows::Forms::Label());
			this->txtread_ch = (gcnew System::Windows::Forms::TextBox());
			this->txtread_slot = (gcnew System::Windows::Forms::TextBox());
			this->Label23 = (gcnew System::Windows::Forms::Label());
			this->Label24 = (gcnew System::Windows::Forms::Label());
			this->txtget_erange = (gcnew System::Windows::Forms::TextBox());
			this->btnSlot_Ch_Range = (gcnew System::Windows::Forms::Button());
			this->Label25 = (gcnew System::Windows::Forms::Label());
			this->txtget_rangech = (gcnew System::Windows::Forms::TextBox());
			this->txtget_rangeslot = (gcnew System::Windows::Forms::TextBox());
			this->GroupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->Label18 = (gcnew System::Windows::Forms::Label());
			this->txtgetrmode = (gcnew System::Windows::Forms::TextBox());
			this->GroupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->Label17 = (gcnew System::Windows::Forms::Label());
			this->GroupBox13->SuspendLayout();
			this->TabPage3->SuspendLayout();
			this->GroupBox12->SuspendLayout();
			this->GroupBox6->SuspendLayout();
			this->GroupBox5->SuspendLayout();
			this->GroupBox15->SuspendLayout();
			this->GroupBox14->SuspendLayout();
			this->TabPage4->SuspendLayout();
			this->GroupBox3->SuspendLayout();
			this->GroupBox1->SuspendLayout();
			this->GroupBox8->SuspendLayout();
			this->GroupBox4->SuspendLayout();
			this->GroupBox2->SuspendLayout();
			this->TabPage1->SuspendLayout();
			this->TabControl1->SuspendLayout();
			this->TabPage2->SuspendLayout();
			this->GroupBox11->SuspendLayout();
			this->GroupBox9->SuspendLayout();
			this->GroupBox10->SuspendLayout();
			this->GroupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtfr_point
			// 
			this->txtfr_point->Location = System::Drawing::Point(139, 47);
			this->txtfr_point->Name = L"txtfr_point";
			this->txtfr_point->Size = System::Drawing::Size(115, 20);
			this->txtfr_point->TabIndex = 4;
			// 
			// GroupBox13
			// 
			this->GroupBox13->Controls->Add(this->btnStop);
			this->GroupBox13->Controls->Add(this->Label68);
			this->GroupBox13->Controls->Add(this->Label67);
			this->GroupBox13->Controls->Add(this->Label66);
			this->GroupBox13->Controls->Add(this->txtlog_status);
			this->GroupBox13->Controls->Add(this->txte_slot);
			this->GroupBox13->Controls->Add(this->btnGetSlot);
			this->GroupBox13->Controls->Add(this->txtlog_ch);
			this->GroupBox13->Controls->Add(this->txtlog_slot);
			this->GroupBox13->Controls->Add(this->btnGetch);
			this->GroupBox13->Controls->Add(this->btnStatus);
			this->GroupBox13->Controls->Add(this->btnStart);
			this->GroupBox13->Location = System::Drawing::Point(21, 343);
			this->GroupBox13->Name = L"GroupBox13";
			this->GroupBox13->Size = System::Drawing::Size(711, 107);
			this->GroupBox13->TabIndex = 24;
			this->GroupBox13->TabStop = false;
			this->GroupBox13->Text = L"Common";
			// 
			// btnStop
			// 
			this->btnStop->Location = System::Drawing::Point(206, 36);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(82, 35);
			this->btnStop->TabIndex = 28;
			this->btnStop->Text = L"LoggingStop";
			this->btnStop->UseVisualStyleBackColor = true;
			this->btnStop->Click += gcnew System::EventHandler(this, &MPMSample::btnStop_Click);
			// 
			// Label68
			// 
			this->Label68->AutoSize = true;
			this->Label68->Location = System::Drawing::Point(520, 27);
			this->Label68->Name = L"Label68";
			this->Label68->Size = System::Drawing::Size(25, 13);
			this->Label68->TabIndex = 27;
			this->Label68->Text = L"Slot";
			// 
			// Label67
			// 
			this->Label67->AutoSize = true;
			this->Label67->Location = System::Drawing::Point(357, 27);
			this->Label67->Name = L"Label67";
			this->Label67->Size = System::Drawing::Size(20, 13);
			this->Label67->TabIndex = 26;
			this->Label67->Text = L"Ch";
			// 
			// Label66
			// 
			this->Label66->AutoSize = true;
			this->Label66->Location = System::Drawing::Point(300, 27);
			this->Label66->Name = L"Label66";
			this->Label66->Size = System::Drawing::Size(25, 13);
			this->Label66->TabIndex = 25;
			this->Label66->Text = L"Slot";
			// 
			// txtlog_status
			// 
			this->txtlog_status->Location = System::Drawing::Point(111, 77);
			this->txtlog_status->Name = L"txtlog_status";
			this->txtlog_status->Size = System::Drawing::Size(89, 20);
			this->txtlog_status->TabIndex = 24;
			// 
			// txte_slot
			// 
			this->txte_slot->Location = System::Drawing::Point(522, 43);
			this->txte_slot->Name = L"txte_slot";
			this->txte_slot->Size = System::Drawing::Size(47, 20);
			this->txte_slot->TabIndex = 23;
			// 
			// btnGetSlot
			// 
			this->btnGetSlot->Location = System::Drawing::Point(575, 31);
			this->btnGetSlot->Name = L"btnGetSlot";
			this->btnGetSlot->Size = System::Drawing::Size(116, 43);
			this->btnGetSlot->TabIndex = 22;
			this->btnGetSlot->Text = L"Get Loggdata for Each Slot";
			this->btnGetSlot->UseVisualStyleBackColor = true;
			this->btnGetSlot->Click += gcnew System::EventHandler(this, &MPMSample::btnGetSlot_Click);
			// 
			// txtlog_ch
			// 
			this->txtlog_ch->Location = System::Drawing::Point(359, 43);
			this->txtlog_ch->Name = L"txtlog_ch";
			this->txtlog_ch->Size = System::Drawing::Size(45, 20);
			this->txtlog_ch->TabIndex = 21;
			// 
			// txtlog_slot
			// 
			this->txtlog_slot->Location = System::Drawing::Point(302, 43);
			this->txtlog_slot->Name = L"txtlog_slot";
			this->txtlog_slot->Size = System::Drawing::Size(51, 20);
			this->txtlog_slot->TabIndex = 20;
			// 
			// btnGetch
			// 
			this->btnGetch->Location = System::Drawing::Point(410, 31);
			this->btnGetch->Name = L"btnGetch";
			this->btnGetch->Size = System::Drawing::Size(104, 43);
			this->btnGetch->TabIndex = 19;
			this->btnGetch->Text = L"Get Loggdata for Each ch";
			this->btnGetch->UseVisualStyleBackColor = true;
			this->btnGetch->Click += gcnew System::EventHandler(this, &MPMSample::btnGetch_Click);
			// 
			// btnStatus
			// 
			this->btnStatus->Location = System::Drawing::Point(111, 36);
			this->btnStatus->Name = L"btnStatus";
			this->btnStatus->Size = System::Drawing::Size(89, 35);
			this->btnStatus->TabIndex = 18;
			this->btnStatus->Text = L"LoggingStatus";
			this->btnStatus->UseVisualStyleBackColor = true;
			this->btnStatus->Click += gcnew System::EventHandler(this, &MPMSample::btnStatus_Click);
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(16, 36);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(89, 35);
			this->btnStart->TabIndex = 17;
			this->btnStart->Text = L"LoggingStart";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MPMSample::btnStart_Click);
			// 
			// TabPage3
			// 
			this->TabPage3->Controls->Add(this->GroupBox13);
			this->TabPage3->Controls->Add(this->GroupBox12);
			this->TabPage3->Controls->Add(this->GroupBox6);
			this->TabPage3->Controls->Add(this->GroupBox5);
			this->TabPage3->Location = System::Drawing::Point(4, 22);
			this->TabPage3->Name = L"TabPage3";
			this->TabPage3->Padding = System::Windows::Forms::Padding(3);
			this->TabPage3->Size = System::Drawing::Size(751, 521);
			this->TabPage3->TabIndex = 2;
			this->TabPage3->Text = L"Logging 1";
			this->TabPage3->UseVisualStyleBackColor = true;
			// 
			// GroupBox12
			// 
			this->GroupBox12->Controls->Add(this->Label65);
			this->GroupBox12->Controls->Add(this->txtfr_wave);
			this->GroupBox12->Controls->Add(this->btnSetFreerun);
			this->GroupBox12->Controls->Add(this->Label50);
			this->GroupBox12->Controls->Add(this->cmbfr_tin_mode);
			this->GroupBox12->Controls->Add(this->Label49);
			this->GroupBox12->Controls->Add(this->txtfr_range);
			this->GroupBox12->Controls->Add(this->Label48);
			this->GroupBox12->Controls->Add(this->txtfr_point);
			this->GroupBox12->Controls->Add(this->Label47);
			this->GroupBox12->Controls->Add(this->txtfr_ave);
			this->GroupBox12->Location = System::Drawing::Point(21, 225);
			this->GroupBox12->Name = L"GroupBox12";
			this->GroupBox12->Size = System::Drawing::Size(708, 94);
			this->GroupBox12->TabIndex = 2;
			this->GroupBox12->TabStop = false;
			this->GroupBox12->Text = L"FreerunMode";
			// 
			// Label65
			// 
			this->Label65->AutoSize = true;
			this->Label65->Location = System::Drawing::Point(266, 31);
			this->Label65->Name = L"Label65";
			this->Label65->Size = System::Drawing::Size(85, 13);
			this->Label65->TabIndex = 18;
			this->Label65->Text = L"Wavelength(nm)";
			// 
			// txtfr_wave
			// 
			this->txtfr_wave->Location = System::Drawing::Point(265, 47);
			this->txtfr_wave->Name = L"txtfr_wave";
			this->txtfr_wave->Size = System::Drawing::Size(86, 20);
			this->txtfr_wave->TabIndex = 17;
			// 
			// btnSetFreerun
			// 
			this->btnSetFreerun->Location = System::Drawing::Point(624, 34);
			this->btnSetFreerun->Name = L"btnSetFreerun";
			this->btnSetFreerun->Size = System::Drawing::Size(67, 35);
			this->btnSetFreerun->TabIndex = 16;
			this->btnSetFreerun->Text = L"Set";
			this->btnSetFreerun->UseVisualStyleBackColor = true;
			this->btnSetFreerun->Click += gcnew System::EventHandler(this, &MPMSample::btnSetFreerun_Click);
			// 
			// Label50
			// 
			this->Label50->AutoSize = true;
			this->Label50->Location = System::Drawing::Point(475, 30);
			this->Label50->Name = L"Label50";
			this->Label50->Size = System::Drawing::Size(95, 13);
			this->Label50->TabIndex = 15;
			this->Label50->Text = L"Trigger input mode";
			// 
			// cmbfr_tin_mode
			// 
			this->cmbfr_tin_mode->FormattingEnabled = true;
			this->cmbfr_tin_mode->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Internal", L"External" });
			this->cmbfr_tin_mode->Location = System::Drawing::Point(477, 47);
			this->cmbfr_tin_mode->Name = L"cmbfr_tin_mode";
			this->cmbfr_tin_mode->Size = System::Drawing::Size(111, 21);
			this->cmbfr_tin_mode->TabIndex = 14;
			// 
			// Label49
			// 
			this->Label49->AutoSize = true;
			this->Label49->Location = System::Drawing::Point(377, 30);
			this->Label49->Name = L"Label49";
			this->Label49->Size = System::Drawing::Size(39, 13);
			this->Label49->TabIndex = 13;
			this->Label49->Text = L"Range";
			// 
			// txtfr_range
			// 
			this->txtfr_range->Location = System::Drawing::Point(374, 47);
			this->txtfr_range->Name = L"txtfr_range";
			this->txtfr_range->Size = System::Drawing::Size(86, 20);
			this->txtfr_range->TabIndex = 12;
			// 
			// Label48
			// 
			this->Label48->AutoSize = true;
			this->Label48->Location = System::Drawing::Point(137, 30);
			this->Label48->Name = L"Label48";
			this->Label48->Size = System::Drawing::Size(80, 13);
			this->Label48->TabIndex = 5;
			this->Label48->Text = L"number of point";
			// 
			// Label47
			// 
			this->Label47->AutoSize = true;
			this->Label47->Location = System::Drawing::Point(12, 31);
			this->Label47->Name = L"Label47";
			this->Label47->Size = System::Drawing::Size(112, 13);
			this->Label47->TabIndex = 3;
			this->Label47->Text = L"Averaging Time(msec)";
			// 
			// txtfr_ave
			// 
			this->txtfr_ave->Location = System::Drawing::Point(14, 48);
			this->txtfr_ave->Name = L"txtfr_ave";
			this->txtfr_ave->Size = System::Drawing::Size(115, 20);
			this->txtfr_ave->TabIndex = 2;
			// 
			// GroupBox6
			// 
			this->GroupBox6->Controls->Add(this->btnSetSweep);
			this->GroupBox6->Controls->Add(this->txtsm_range);
			this->GroupBox6->Controls->Add(this->Label45);
			this->GroupBox6->Controls->Add(this->Label39);
			this->GroupBox6->Controls->Add(this->cmbsm_rangemode);
			this->GroupBox6->Controls->Add(this->Label44);
			this->GroupBox6->Controls->Add(this->txtspeed);
			this->GroupBox6->Controls->Add(this->Label43);
			this->GroupBox6->Controls->Add(this->txtwavestep);
			this->GroupBox6->Controls->Add(this->Label42);
			this->GroupBox6->Controls->Add(this->txtstopwave);
			this->GroupBox6->Controls->Add(this->Label41);
			this->GroupBox6->Controls->Add(this->txtstartwave);
			this->GroupBox6->Location = System::Drawing::Point(21, 121);
			this->GroupBox6->Name = L"GroupBox6";
			this->GroupBox6->Size = System::Drawing::Size(708, 98);
			this->GroupBox6->TabIndex = 1;
			this->GroupBox6->TabStop = false;
			this->GroupBox6->Text = L"Sweep Mode";
			// 
			// btnSetSweep
			// 
			this->btnSetSweep->Location = System::Drawing::Point(630, 38);
			this->btnSetSweep->Name = L"btnSetSweep";
			this->btnSetSweep->Size = System::Drawing::Size(62, 35);
			this->btnSetSweep->TabIndex = 12;
			this->btnSetSweep->Text = L"Set";
			this->btnSetSweep->UseVisualStyleBackColor = true;
			this->btnSetSweep->Click += gcnew System::EventHandler(this, &MPMSample::btnSetSweep_Click);
			// 
			// txtsm_range
			// 
			this->txtsm_range->Location = System::Drawing::Point(553, 46);
			this->txtsm_range->Name = L"txtsm_range";
			this->txtsm_range->Size = System::Drawing::Size(71, 20);
			this->txtsm_range->TabIndex = 11;
			// 
			// Label45
			// 
			this->Label45->AutoSize = true;
			this->Label45->Location = System::Drawing::Point(464, 29);
			this->Label45->Name = L"Label45";
			this->Label45->Size = System::Drawing::Size(68, 13);
			this->Label45->TabIndex = 10;
			this->Label45->Text = L"Range mode";
			// 
			// Label39
			// 
			this->Label39->AutoSize = true;
			this->Label39->Location = System::Drawing::Point(551, 30);
			this->Label39->Name = L"Label39";
			this->Label39->Size = System::Drawing::Size(39, 13);
			this->Label39->TabIndex = 8;
			this->Label39->Text = L"Range";
			// 
			// cmbsm_rangemode
			// 
			this->cmbsm_rangemode->FormattingEnabled = true;
			this->cmbsm_rangemode->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Auto", L"Manual" });
			this->cmbsm_rangemode->Location = System::Drawing::Point(466, 46);
			this->cmbsm_rangemode->Name = L"cmbsm_rangemode";
			this->cmbsm_rangemode->Size = System::Drawing::Size(81, 21);
			this->cmbsm_rangemode->TabIndex = 9;
			// 
			// Label44
			// 
			this->Label44->AutoSize = true;
			this->Label44->Location = System::Drawing::Point(377, 30);
			this->Label44->Name = L"Label44";
			this->Label44->Size = System::Drawing::Size(80, 13);
			this->Label44->TabIndex = 8;
			this->Label44->Text = L"Speed(nm/sec)";
			// 
			// txtspeed
			// 
			this->txtspeed->Location = System::Drawing::Point(379, 47);
			this->txtspeed->Name = L"txtspeed";
			this->txtspeed->Size = System::Drawing::Size(81, 20);
			this->txtspeed->TabIndex = 7;
			// 
			// Label43
			// 
			this->Label43->AutoSize = true;
			this->Label43->Location = System::Drawing::Point(256, 30);
			this->Label43->Name = L"Label43";
			this->Label43->Size = System::Drawing::Size(107, 13);
			this->Label43->TabIndex = 6;
			this->Label43->Text = L"Step wavelenght(nm)";
			// 
			// txtwavestep
			// 
			this->txtwavestep->Location = System::Drawing::Point(258, 47);
			this->txtwavestep->Name = L"txtwavestep";
			this->txtwavestep->Size = System::Drawing::Size(115, 20);
			this->txtwavestep->TabIndex = 5;
			// 
			// Label42
			// 
			this->Label42->AutoSize = true;
			this->Label42->Location = System::Drawing::Point(137, 30);
			this->Label42->Name = L"Label42";
			this->Label42->Size = System::Drawing::Size(107, 13);
			this->Label42->TabIndex = 4;
			this->Label42->Text = L"Stop wavelenght(nm)";
			// 
			// txtstopwave
			// 
			this->txtstopwave->Location = System::Drawing::Point(137, 47);
			this->txtstopwave->Name = L"txtstopwave";
			this->txtstopwave->Size = System::Drawing::Size(115, 20);
			this->txtstopwave->TabIndex = 3;
			// 
			// Label41
			// 
			this->Label41->AutoSize = true;
			this->Label41->Location = System::Drawing::Point(14, 31);
			this->Label41->Name = L"Label41";
			this->Label41->Size = System::Drawing::Size(107, 13);
			this->Label41->TabIndex = 2;
			this->Label41->Text = L"Start wavelength(nm)";
			// 
			// txtstartwave
			// 
			this->txtstartwave->Location = System::Drawing::Point(16, 48);
			this->txtstartwave->Name = L"txtstartwave";
			this->txtstartwave->Size = System::Drawing::Size(115, 20);
			this->txtstartwave->TabIndex = 1;
			// 
			// GroupBox5
			// 
			this->GroupBox5->Controls->Add(this->Label64);
			this->GroupBox5->Controls->Add(this->txtcon_wave);
			this->GroupBox5->Controls->Add(this->Label46);
			this->GroupBox5->Controls->Add(this->btnSetConst);
			this->GroupBox5->Controls->Add(this->txtcon_range);
			this->GroupBox5->Controls->Add(this->Label38);
			this->GroupBox5->Controls->Add(this->cmbcon_rangemode);
			this->GroupBox5->Controls->Add(this->Label37);
			this->GroupBox5->Controls->Add(this->txtcon_point);
			this->GroupBox5->Controls->Add(this->Label34);
			this->GroupBox5->Controls->Add(this->txtcon_ave);
			this->GroupBox5->Location = System::Drawing::Point(21, 24);
			this->GroupBox5->Name = L"GroupBox5";
			this->GroupBox5->Size = System::Drawing::Size(708, 91);
			this->GroupBox5->TabIndex = 0;
			this->GroupBox5->TabStop = false;
			this->GroupBox5->Text = L"Const Mode";
			// 
			// Label64
			// 
			this->Label64->AutoSize = true;
			this->Label64->Location = System::Drawing::Point(303, 28);
			this->Label64->Name = L"Label64";
			this->Label64->Size = System::Drawing::Size(85, 13);
			this->Label64->TabIndex = 13;
			this->Label64->Text = L"Wavelength(nm)";
			// 
			// txtcon_wave
			// 
			this->txtcon_wave->Location = System::Drawing::Point(302, 43);
			this->txtcon_wave->Name = L"txtcon_wave";
			this->txtcon_wave->Size = System::Drawing::Size(86, 20);
			this->txtcon_wave->TabIndex = 12;
			// 
			// Label46
			// 
			this->Label46->AutoSize = true;
			this->Label46->Location = System::Drawing::Point(523, 30);
			this->Label46->Name = L"Label46";
			this->Label46->Size = System::Drawing::Size(39, 13);
			this->Label46->TabIndex = 11;
			this->Label46->Text = L"Range";
			// 
			// btnSetConst
			// 
			this->btnSetConst->Location = System::Drawing::Point(613, 31);
			this->btnSetConst->Name = L"btnSetConst";
			this->btnSetConst->Size = System::Drawing::Size(78, 35);
			this->btnSetConst->TabIndex = 10;
			this->btnSetConst->Text = L"Set";
			this->btnSetConst->UseVisualStyleBackColor = true;
			this->btnSetConst->Click += gcnew System::EventHandler(this, &MPMSample::btnSetConst_Click);
			// 
			// txtcon_range
			// 
			this->txtcon_range->Location = System::Drawing::Point(526, 46);
			this->txtcon_range->Name = L"txtcon_range";
			this->txtcon_range->Size = System::Drawing::Size(51, 20);
			this->txtcon_range->TabIndex = 7;
			// 
			// Label38
			// 
			this->Label38->AutoSize = true;
			this->Label38->Location = System::Drawing::Point(421, 27);
			this->Label38->Name = L"Label38";
			this->Label38->Size = System::Drawing::Size(68, 13);
			this->Label38->TabIndex = 5;
			this->Label38->Text = L"Range mode";
			// 
			// cmbcon_rangemode
			// 
			this->cmbcon_rangemode->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Auto", L"Mnual" });
			this->cmbcon_rangemode->FormattingEnabled = true;
			this->cmbcon_rangemode->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Auto", L"Manual" });
			this->cmbcon_rangemode->Location = System::Drawing::Point(423, 43);
			this->cmbcon_rangemode->Name = L"cmbcon_rangemode";
			this->cmbcon_rangemode->Size = System::Drawing::Size(66, 21);
			this->cmbcon_rangemode->TabIndex = 4;
			// 
			// Label37
			// 
			this->Label37->AutoSize = true;
			this->Label37->Location = System::Drawing::Point(169, 27);
			this->Label37->Name = L"Label37";
			this->Label37->Size = System::Drawing::Size(80, 13);
			this->Label37->TabIndex = 3;
			this->Label37->Text = L"number of point";
			// 
			// txtcon_point
			// 
			this->txtcon_point->Location = System::Drawing::Point(168, 43);
			this->txtcon_point->Name = L"txtcon_point";
			this->txtcon_point->Size = System::Drawing::Size(86, 20);
			this->txtcon_point->TabIndex = 2;
			// 
			// Label34
			// 
			this->Label34->AutoSize = true;
			this->Label34->Location = System::Drawing::Point(14, 27);
			this->Label34->Name = L"Label34";
			this->Label34->Size = System::Drawing::Size(112, 13);
			this->Label34->TabIndex = 1;
			this->Label34->Text = L"Averaging Time(msec)";
			// 
			// txtcon_ave
			// 
			this->txtcon_ave->Location = System::Drawing::Point(16, 43);
			this->txtcon_ave->Name = L"txtcon_ave";
			this->txtcon_ave->Size = System::Drawing::Size(115, 20);
			this->txtcon_ave->TabIndex = 0;
			// 
			// Label16
			// 
			this->Label16->AutoSize = true;
			this->Label16->Location = System::Drawing::Point(417, 75);
			this->Label16->Name = L"Label16";
			this->Label16->Size = System::Drawing::Size(25, 13);
			this->Label16->TabIndex = 21;
			this->Label16->Text = L"Slot";
			// 
			// txte_range
			// 
			this->txte_range->Location = System::Drawing::Point(538, 91);
			this->txte_range->Name = L"txte_range";
			this->txte_range->Size = System::Drawing::Size(99, 20);
			this->txte_range->TabIndex = 20;
			// 
			// txtget_unit
			// 
			this->txtget_unit->Location = System::Drawing::Point(458, 40);
			this->txtget_unit->Name = L"txtget_unit";
			this->txtget_unit->Size = System::Drawing::Size(74, 20);
			this->txtget_unit->TabIndex = 9;
			// 
			// btnSetSlot
			// 
			this->btnSetSlot->Location = System::Drawing::Point(643, 90);
			this->btnSetSlot->Name = L"btnSetSlot";
			this->btnSetSlot->Size = System::Drawing::Size(54, 24);
			this->btnSetSlot->TabIndex = 19;
			this->btnSetSlot->Text = L"Set";
			this->btnSetSlot->UseVisualStyleBackColor = true;
			this->btnSetSlot->Click += gcnew System::EventHandler(this, &MPMSample::btnSetSlot_Click);
			// 
			// txtget_wave
			// 
			this->txtget_wave->Location = System::Drawing::Point(234, 40);
			this->txtget_wave->Name = L"txtget_wave";
			this->txtget_wave->Size = System::Drawing::Size(84, 20);
			this->txtget_wave->TabIndex = 7;
			// 
			// Label19
			// 
			this->Label19->AutoSize = true;
			this->Label19->Location = System::Drawing::Point(149, 24);
			this->Label19->Name = L"Label19";
			this->Label19->Size = System::Drawing::Size(53, 13);
			this->Label19->TabIndex = 6;
			this->Label19->Text = L"Range All";
			// 
			// Label15
			// 
			this->Label15->AutoSize = true;
			this->Label15->Location = System::Drawing::Point(538, 76);
			this->Label15->Name = L"Label15";
			this->Label15->Size = System::Drawing::Size(96, 13);
			this->Label15->TabIndex = 18;
			this->Label15->Text = L"Range for each ch";
			// 
			// txtr_ch
			// 
			this->txtr_ch->Location = System::Drawing::Point(478, 91);
			this->txtr_ch->Name = L"txtr_ch";
			this->txtr_ch->Size = System::Drawing::Size(54, 20);
			this->txtr_ch->TabIndex = 17;
			// 
			// Label20
			// 
			this->Label20->AutoSize = true;
			this->Label20->Location = System::Drawing::Point(232, 24);
			this->Label20->Name = L"Label20";
			this->Label20->Size = System::Drawing::Size(85, 13);
			this->Label20->TabIndex = 8;
			this->Label20->Text = L"Wavelength(nm)";
			// 
			// txtr_slot
			// 
			this->txtr_slot->Location = System::Drawing::Point(418, 91);
			this->txtr_slot->Name = L"txtr_slot";
			this->txtr_slot->Size = System::Drawing::Size(54, 20);
			this->txtr_slot->TabIndex = 16;
			// 
			// btnSetUnit
			// 
			this->btnSetUnit->Location = System::Drawing::Point(350, 88);
			this->btnSetUnit->Name = L"btnSetUnit";
			this->btnSetUnit->Size = System::Drawing::Size(54, 24);
			this->btnSetUnit->TabIndex = 15;
			this->btnSetUnit->Text = L"Set";
			this->btnSetUnit->UseVisualStyleBackColor = true;
			this->btnSetUnit->Click += gcnew System::EventHandler(this, &MPMSample::btnSetUnit_Click);
			// 
			// Label14
			// 
			this->Label14->AutoSize = true;
			this->Label14->Location = System::Drawing::Point(219, 74);
			this->Label14->Name = L"Label14";
			this->Label14->Size = System::Drawing::Size(26, 13);
			this->Label14->TabIndex = 14;
			this->Label14->Text = L"Unit";
			// 
			// cmbunit
			// 
			this->cmbunit->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Auto", L"Manual" });
			this->cmbunit->FormattingEnabled = true;
			this->cmbunit->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"dBm", L"mW" });
			this->cmbunit->Location = System::Drawing::Point(221, 90);
			this->cmbunit->Name = L"cmbunit";
			this->cmbunit->Size = System::Drawing::Size(123, 21);
			this->cmbunit->TabIndex = 13;
			// 
			// btnSetAveraging
			// 
			this->btnSetAveraging->Location = System::Drawing::Point(547, 40);
			this->btnSetAveraging->Name = L"btnSetAveraging";
			this->btnSetAveraging->Size = System::Drawing::Size(54, 24);
			this->btnSetAveraging->TabIndex = 12;
			this->btnSetAveraging->Text = L"Set";
			this->btnSetAveraging->UseVisualStyleBackColor = true;
			this->btnSetAveraging->Click += gcnew System::EventHandler(this, &MPMSample::btnSetAveraging_Click);
			// 
			// Label13
			// 
			this->Label13->AutoSize = true;
			this->Label13->Location = System::Drawing::Point(417, 25);
			this->Label13->Name = L"Label13";
			this->Label13->Size = System::Drawing::Size(108, 13);
			this->Label13->TabIndex = 11;
			this->Label13->Text = L"Averaging time(msec)";
			// 
			// txtsetavg
			// 
			this->txtsetavg->Location = System::Drawing::Point(419, 43);
			this->txtsetavg->Name = L"txtsetavg";
			this->txtsetavg->Size = System::Drawing::Size(122, 20);
			this->txtsetavg->TabIndex = 10;
			// 
			// btnSetWavelength
			// 
			this->btnSetWavelength->Location = System::Drawing::Point(349, 41);
			this->btnSetWavelength->Name = L"btnSetWavelength";
			this->btnSetWavelength->Size = System::Drawing::Size(54, 24);
			this->btnSetWavelength->TabIndex = 8;
			this->btnSetWavelength->Text = L"Set";
			this->btnSetWavelength->UseVisualStyleBackColor = true;
			this->btnSetWavelength->Click += gcnew System::EventHandler(this, &MPMSample::btnSetWavelength_Click);
			// 
			// Label12
			// 
			this->Label12->AutoSize = true;
			this->Label12->Location = System::Drawing::Point(219, 25);
			this->Label12->Name = L"Label12";
			this->Label12->Size = System::Drawing::Size(85, 13);
			this->Label12->TabIndex = 7;
			this->Label12->Text = L"Wavelength(nm)";
			// 
			// txtsetwave
			// 
			this->txtsetwave->Location = System::Drawing::Point(221, 41);
			this->txtsetwave->Name = L"txtsetwave";
			this->txtsetwave->Size = System::Drawing::Size(122, 20);
			this->txtsetwave->TabIndex = 6;
			// 
			// btnSetRangeAll
			// 
			this->btnSetRangeAll->Location = System::Drawing::Point(150, 88);
			this->btnSetRangeAll->Name = L"btnSetRangeAll";
			this->btnSetRangeAll->Size = System::Drawing::Size(54, 24);
			this->btnSetRangeAll->TabIndex = 5;
			this->btnSetRangeAll->Text = L"Set";
			this->btnSetRangeAll->UseVisualStyleBackColor = true;
			this->btnSetRangeAll->Click += gcnew System::EventHandler(this, &MPMSample::btnSetRangeAll_Click);
			// 
			// btnSetRangeMode
			// 
			this->btnSetRangeMode->Location = System::Drawing::Point(150, 41);
			this->btnSetRangeMode->Name = L"btnSetRangeMode";
			this->btnSetRangeMode->Size = System::Drawing::Size(54, 24);
			this->btnSetRangeMode->TabIndex = 4;
			this->btnSetRangeMode->Text = L"Set";
			this->btnSetRangeMode->UseVisualStyleBackColor = true;
			this->btnSetRangeMode->Click += gcnew System::EventHandler(this, &MPMSample::btnSetRangeMode_Click);
			// 
			// Label4
			// 
			this->Label4->AutoSize = true;
			this->Label4->Location = System::Drawing::Point(20, 72);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(53, 13);
			this->Label4->TabIndex = 3;
			this->Label4->Text = L"Range All";
			// 
			// btnGet
			// 
			this->btnGet->Location = System::Drawing::Point(538, 37);
			this->btnGet->Name = L"btnGet";
			this->btnGet->Size = System::Drawing::Size(61, 24);
			this->btnGet->TabIndex = 20;
			this->btnGet->Text = L"Get";
			this->btnGet->UseVisualStyleBackColor = true;
			this->btnGet->Click += gcnew System::EventHandler(this, &MPMSample::btnGet_Click);
			// 
			// Label22
			// 
			this->Label22->AutoSize = true;
			this->Label22->Location = System::Drawing::Point(328, 24);
			this->Label22->Name = L"Label22";
			this->Label22->Size = System::Drawing::Size(108, 13);
			this->Label22->TabIndex = 12;
			this->Label22->Text = L"Averaging time(msec)";
			// 
			// txtget_avg
			// 
			this->txtget_avg->Location = System::Drawing::Point(330, 40);
			this->txtget_avg->Name = L"txtget_avg";
			this->txtget_avg->Size = System::Drawing::Size(122, 20);
			this->txtget_avg->TabIndex = 11;
			// 
			// txtsetrange
			// 
			this->txtsetrange->Location = System::Drawing::Point(22, 88);
			this->txtsetrange->Name = L"txtsetrange";
			this->txtsetrange->Size = System::Drawing::Size(122, 20);
			this->txtsetrange->TabIndex = 2;
			// 
			// cmbset_rangemode
			// 
			this->cmbset_rangemode->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Auto", L"Manual" });
			this->cmbset_rangemode->FormattingEnabled = true;
			this->cmbset_rangemode->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Auto", L"Manual" });
			this->cmbset_rangemode->Location = System::Drawing::Point(21, 43);
			this->cmbset_rangemode->Name = L"cmbset_rangemode";
			this->cmbset_rangemode->Size = System::Drawing::Size(123, 21);
			this->cmbset_rangemode->TabIndex = 0;
			// 
			// Label21
			// 
			this->Label21->AutoSize = true;
			this->Label21->Location = System::Drawing::Point(456, 24);
			this->Label21->Name = L"Label21";
			this->Label21->Size = System::Drawing::Size(26, 13);
			this->Label21->TabIndex = 10;
			this->Label21->Text = L"Unit";
			// 
			// Label3
			// 
			this->Label3->AutoSize = true;
			this->Label3->Location = System::Drawing::Point(19, 27);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(126, 13);
			this->Label3->TabIndex = 1;
			this->Label3->Text = L"Range mode for \"READ\"";
			// 
			// Label63
			// 
			this->Label63->AutoSize = true;
			this->Label63->Location = System::Drawing::Point(353, 86);
			this->Label63->Name = L"Label63";
			this->Label63->Size = System::Drawing::Size(85, 13);
			this->Label63->TabIndex = 25;
			this->Label63->Text = L"Wavelength(nm)";
			// 
			// txtg_wavelength
			// 
			this->txtg_wavelength->Location = System::Drawing::Point(355, 102);
			this->txtg_wavelength->Name = L"txtg_wavelength";
			this->txtg_wavelength->Size = System::Drawing::Size(123, 20);
			this->txtg_wavelength->TabIndex = 24;
			// 
			// btnGetParameter
			// 
			this->btnGetParameter->Location = System::Drawing::Point(522, 290);
			this->btnGetParameter->Name = L"btnGetParameter";
			this->btnGetParameter->Size = System::Drawing::Size(163, 38);
			this->btnGetParameter->TabIndex = 23;
			this->btnGetParameter->Text = L"Get";
			this->btnGetParameter->UseVisualStyleBackColor = true;
			this->btnGetParameter->Click += gcnew System::EventHandler(this, &MPMSample::btnGetParameter_Click);
			// 
			// GroupBox15
			// 
			this->GroupBox15->Controls->Add(this->Label60);
			this->GroupBox15->Controls->Add(this->txtg_speed);
			this->GroupBox15->Controls->Add(this->Label59);
			this->GroupBox15->Controls->Add(this->txtg_stepwave);
			this->GroupBox15->Controls->Add(this->Label58);
			this->GroupBox15->Controls->Add(this->txtg_stopwave);
			this->GroupBox15->Controls->Add(this->Label57);
			this->GroupBox15->Controls->Add(this->txtg_statwave);
			this->GroupBox15->Location = System::Drawing::Point(18, 145);
			this->GroupBox15->Name = L"GroupBox15";
			this->GroupBox15->Size = System::Drawing::Size(678, 95);
			this->GroupBox15->TabIndex = 22;
			this->GroupBox15->TabStop = false;
			this->GroupBox15->Text = L"Sweep mode parameter";
			// 
			// Label60
			// 
			this->Label60->AutoSize = true;
			this->Label60->Location = System::Drawing::Point(492, 27);
			this->Label60->Name = L"Label60";
			this->Label60->Size = System::Drawing::Size(92, 13);
			this->Label60->TabIndex = 21;
			this->Label60->Text = L"Sweep speed(nm)";
			// 
			// txtg_speed
			// 
			this->txtg_speed->Location = System::Drawing::Point(494, 43);
			this->txtg_speed->Name = L"txtg_speed";
			this->txtg_speed->Size = System::Drawing::Size(123, 20);
			this->txtg_speed->TabIndex = 20;
			// 
			// Label59
			// 
			this->Label59->AutoSize = true;
			this->Label59->Location = System::Drawing::Point(334, 27);
			this->Label59->Name = L"Label59";
			this->Label59->Size = System::Drawing::Size(107, 13);
			this->Label59->TabIndex = 19;
			this->Label59->Text = L"Step wavelength(nm)";
			// 
			// txtg_stepwave
			// 
			this->txtg_stepwave->Location = System::Drawing::Point(337, 43);
			this->txtg_stepwave->Name = L"txtg_stepwave";
			this->txtg_stepwave->Size = System::Drawing::Size(123, 20);
			this->txtg_stepwave->TabIndex = 18;
			// 
			// Label58
			// 
			this->Label58->AutoSize = true;
			this->Label58->Location = System::Drawing::Point(184, 27);
			this->Label58->Name = L"Label58";
			this->Label58->Size = System::Drawing::Size(107, 13);
			this->Label58->TabIndex = 17;
			this->Label58->Text = L"Stop wavelength(nm)";
			// 
			// txtg_stopwave
			// 
			this->txtg_stopwave->Location = System::Drawing::Point(187, 43);
			this->txtg_stopwave->Name = L"txtg_stopwave";
			this->txtg_stopwave->Size = System::Drawing::Size(123, 20);
			this->txtg_stopwave->TabIndex = 16;
			// 
			// Label57
			// 
			this->Label57->AutoSize = true;
			this->Label57->Location = System::Drawing::Point(31, 27);
			this->Label57->Name = L"Label57";
			this->Label57->Size = System::Drawing::Size(107, 13);
			this->Label57->TabIndex = 14;
			this->Label57->Text = L"Start wavelength(nm)";
			// 
			// txtg_statwave
			// 
			this->txtg_statwave->Location = System::Drawing::Point(32, 43);
			this->txtg_statwave->Name = L"txtg_statwave";
			this->txtg_statwave->Size = System::Drawing::Size(124, 20);
			this->txtg_statwave->TabIndex = 13;
			// 
			// Label56
			// 
			this->Label56->AutoSize = true;
			this->Label56->Location = System::Drawing::Point(202, 86);
			this->Label56->Name = L"Label56";
			this->Label56->Size = System::Drawing::Size(75, 13);
			this->Label56->TabIndex = 12;
			this->Label56->Text = L"Setting Range";
			// 
			// txtg_settingrange
			// 
			this->txtg_settingrange->Location = System::Drawing::Point(205, 102);
			this->txtg_settingrange->Name = L"txtg_settingrange";
			this->txtg_settingrange->Size = System::Drawing::Size(123, 20);
			this->txtg_settingrange->TabIndex = 11;
			// 
			// Label55
			// 
			this->Label55->AutoSize = true;
			this->Label55->Location = System::Drawing::Point(49, 83);
			this->Label55->Name = L"Label55";
			this->Label55->Size = System::Drawing::Size(68, 13);
			this->Label55->TabIndex = 10;
			this->Label55->Text = L"Range mode";
			// 
			// txtg_rangemode
			// 
			this->txtg_rangemode->Location = System::Drawing::Point(51, 102);
			this->txtg_rangemode->Name = L"txtg_rangemode";
			this->txtg_rangemode->Size = System::Drawing::Size(123, 20);
			this->txtg_rangemode->TabIndex = 9;
			// 
			// Label54
			// 
			this->Label54->AutoSize = true;
			this->Label54->Location = System::Drawing::Point(510, 28);
			this->Label54->Name = L"Label54";
			this->Label54->Size = System::Drawing::Size(95, 13);
			this->Label54->TabIndex = 8;
			this->Label54->Text = L"Trigger input mode";
			// 
			// txtg_tinmode
			// 
			this->txtg_tinmode->Location = System::Drawing::Point(512, 47);
			this->txtg_tinmode->Name = L"txtg_tinmode";
			this->txtg_tinmode->Size = System::Drawing::Size(123, 20);
			this->txtg_tinmode->TabIndex = 7;
			// 
			// txtlog_mode
			// 
			this->txtlog_mode->Location = System::Drawing::Point(51, 46);
			this->txtlog_mode->Name = L"txtlog_mode";
			this->txtlog_mode->Size = System::Drawing::Size(123, 20);
			this->txtlog_mode->TabIndex = 6;
			// 
			// Label53
			// 
			this->Label53->AutoSize = true;
			this->Label53->Location = System::Drawing::Point(353, 29);
			this->Label53->Name = L"Label53";
			this->Label53->Size = System::Drawing::Size(80, 13);
			this->Label53->TabIndex = 5;
			this->Label53->Text = L"number of point";
			// 
			// txtg_point
			// 
			this->txtg_point->Location = System::Drawing::Point(355, 46);
			this->txtg_point->Name = L"txtg_point";
			this->txtg_point->Size = System::Drawing::Size(123, 20);
			this->txtg_point->TabIndex = 4;
			// 
			// txtg_ave
			// 
			this->txtg_ave->Location = System::Drawing::Point(205, 47);
			this->txtg_ave->Name = L"txtg_ave";
			this->txtg_ave->Size = System::Drawing::Size(123, 20);
			this->txtg_ave->TabIndex = 3;
			// 
			// Label52
			// 
			this->Label52->AutoSize = true;
			this->Label52->Location = System::Drawing::Point(203, 29);
			this->Label52->Name = L"Label52";
			this->Label52->Size = System::Drawing::Size(77, 13);
			this->Label52->TabIndex = 2;
			this->Label52->Text = L"Averaging time";
			// 
			// GroupBox14
			// 
			this->GroupBox14->Controls->Add(this->Label63);
			this->GroupBox14->Controls->Add(this->txtg_wavelength);
			this->GroupBox14->Controls->Add(this->btnGetParameter);
			this->GroupBox14->Controls->Add(this->GroupBox15);
			this->GroupBox14->Controls->Add(this->Label56);
			this->GroupBox14->Controls->Add(this->txtg_settingrange);
			this->GroupBox14->Controls->Add(this->Label55);
			this->GroupBox14->Controls->Add(this->txtg_rangemode);
			this->GroupBox14->Controls->Add(this->Label54);
			this->GroupBox14->Controls->Add(this->txtg_tinmode);
			this->GroupBox14->Controls->Add(this->txtlog_mode);
			this->GroupBox14->Controls->Add(this->Label53);
			this->GroupBox14->Controls->Add(this->txtg_point);
			this->GroupBox14->Controls->Add(this->txtg_ave);
			this->GroupBox14->Controls->Add(this->Label52);
			this->GroupBox14->Controls->Add(this->Label51);
			this->GroupBox14->Location = System::Drawing::Point(14, 35);
			this->GroupBox14->Name = L"GroupBox14";
			this->GroupBox14->Size = System::Drawing::Size(719, 350);
			this->GroupBox14->TabIndex = 22;
			this->GroupBox14->TabStop = false;
			this->GroupBox14->Text = L"Get Parameter";
			// 
			// Label51
			// 
			this->Label51->AutoSize = true;
			this->Label51->Location = System::Drawing::Point(49, 28);
			this->Label51->Name = L"Label51";
			this->Label51->Size = System::Drawing::Size(67, 13);
			this->Label51->TabIndex = 1;
			this->Label51->Text = L"SweepMode";
			// 
			// TabPage4
			// 
			this->TabPage4->Controls->Add(this->GroupBox14);
			this->TabPage4->Location = System::Drawing::Point(4, 22);
			this->TabPage4->Name = L"TabPage4";
			this->TabPage4->Padding = System::Windows::Forms::Padding(3);
			this->TabPage4->Size = System::Drawing::Size(751, 521);
			this->TabPage4->TabIndex = 3;
			this->TabPage4->Text = L"logging 2";
			this->TabPage4->UseVisualStyleBackColor = true;
			// 
			// txtgetrang
			// 
			this->txtgetrang->Location = System::Drawing::Point(151, 40);
			this->txtgetrang->Name = L"txtgetrang";
			this->txtgetrang->Size = System::Drawing::Size(75, 20);
			this->txtgetrang->TabIndex = 5;
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Location = System::Drawing::Point(13, 43);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(90, 13);
			this->Label1->TabIndex = 7;
			this->Label1->Text = L"Address/ComPort";
			// 
			// txtaddress
			// 
			this->txtaddress->Location = System::Drawing::Point(15, 60);
			this->txtaddress->Name = L"txtaddress";
			this->txtaddress->Size = System::Drawing::Size(169, 20);
			this->txtaddress->TabIndex = 6;
			// 
			// txtport
			// 
			this->txtport->Location = System::Drawing::Point(221, 60);
			this->txtport->Name = L"txtport";
			this->txtport->Size = System::Drawing::Size(87, 20);
			this->txtport->TabIndex = 5;
			// 
			// Label31
			// 
			this->Label31->AutoSize = true;
			this->Label31->ForeColor = System::Drawing::Color::Blue;
			this->Label31->Location = System::Drawing::Point(368, 29);
			this->Label31->Name = L"Label31";
			this->Label31->Size = System::Drawing::Size(31, 13);
			this->Label31->TabIndex = 24;
			this->Label31->Text = L"Slot4";
			// 
			// Label30
			// 
			this->Label30->AutoSize = true;
			this->Label30->ForeColor = System::Drawing::Color::Blue;
			this->Label30->Location = System::Drawing::Point(290, 29);
			this->Label30->Name = L"Label30";
			this->Label30->Size = System::Drawing::Size(31, 13);
			this->Label30->TabIndex = 23;
			this->Label30->Text = L"Slot3";
			// 
			// Label29
			// 
			this->Label29->AutoSize = true;
			this->Label29->ForeColor = System::Drawing::Color::Blue;
			this->Label29->Location = System::Drawing::Point(215, 29);
			this->Label29->Name = L"Label29";
			this->Label29->Size = System::Drawing::Size(31, 13);
			this->Label29->TabIndex = 22;
			this->Label29->Text = L"Slot2";
			// 
			// Label28
			// 
			this->Label28->AutoSize = true;
			this->Label28->ForeColor = System::Drawing::Color::Blue;
			this->Label28->Location = System::Drawing::Point(143, 29);
			this->Label28->Name = L"Label28";
			this->Label28->Size = System::Drawing::Size(34, 13);
			this->Label28->TabIndex = 21;
			this->Label28->Text = L"Slot1 ";
			// 
			// Label27
			// 
			this->Label27->AutoSize = true;
			this->Label27->ForeColor = System::Drawing::Color::Blue;
			this->Label27->Location = System::Drawing::Point(72, 29);
			this->Label27->Name = L"Label27";
			this->Label27->Size = System::Drawing::Size(31, 13);
			this->Label27->TabIndex = 20;
			this->Label27->Text = L"Slot0";
			// 
			// btnDisconnect
			// 
			this->btnDisconnect->Location = System::Drawing::Point(462, 53);
			this->btnDisconnect->Name = L"btnDisconnect";
			this->btnDisconnect->Size = System::Drawing::Size(93, 27);
			this->btnDisconnect->TabIndex = 10;
			this->btnDisconnect->Text = L"DisConnect";
			this->btnDisconnect->UseVisualStyleBackColor = true;
			this->btnDisconnect->Click += gcnew System::EventHandler(this, &MPMSample::btnDisconnect_Click);
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(346, 53);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(93, 27);
			this->btnConnect->TabIndex = 9;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MPMSample::btnConnect_Click);
			// 
			// lblver4
			// 
			this->lblver4->AutoSize = true;
			this->lblver4->ForeColor = System::Drawing::Color::Black;
			this->lblver4->Location = System::Drawing::Point(366, 148);
			this->lblver4->Name = L"lblver4";
			this->lblver4->Size = System::Drawing::Size(44, 13);
			this->lblver4->TabIndex = 19;
			this->lblver4->Text = L"Product";
			// 
			// lblver3
			// 
			this->lblver3->AutoSize = true;
			this->lblver3->ForeColor = System::Drawing::Color::Black;
			this->lblver3->Location = System::Drawing::Point(288, 148);
			this->lblver3->Name = L"lblver3";
			this->lblver3->Size = System::Drawing::Size(44, 13);
			this->lblver3->TabIndex = 18;
			this->lblver3->Text = L"Product";
			// 
			// lblver2
			// 
			this->lblver2->AutoSize = true;
			this->lblver2->ForeColor = System::Drawing::Color::Black;
			this->lblver2->Location = System::Drawing::Point(213, 148);
			this->lblver2->Name = L"lblver2";
			this->lblver2->Size = System::Drawing::Size(44, 13);
			this->lblver2->TabIndex = 17;
			this->lblver2->Text = L"Product";
			// 
			// lblver1
			// 
			this->lblver1->AutoSize = true;
			this->lblver1->ForeColor = System::Drawing::Color::Black;
			this->lblver1->Location = System::Drawing::Point(141, 148);
			this->lblver1->Name = L"lblver1";
			this->lblver1->Size = System::Drawing::Size(44, 13);
			this->lblver1->TabIndex = 16;
			this->lblver1->Text = L"Product";
			// 
			// lblver0
			// 
			this->lblver0->AutoSize = true;
			this->lblver0->ForeColor = System::Drawing::Color::Black;
			this->lblver0->Location = System::Drawing::Point(70, 148);
			this->lblver0->Name = L"lblver0";
			this->lblver0->Size = System::Drawing::Size(44, 13);
			this->lblver0->TabIndex = 15;
			this->lblver0->Text = L"Product";
			// 
			// lblseri4
			// 
			this->lblseri4->AutoSize = true;
			this->lblseri4->ForeColor = System::Drawing::Color::Black;
			this->lblseri4->Location = System::Drawing::Point(366, 100);
			this->lblseri4->Name = L"lblseri4";
			this->lblseri4->Size = System::Drawing::Size(44, 13);
			this->lblseri4->TabIndex = 14;
			this->lblseri4->Text = L"Product";
			// 
			// GroupBox3
			// 
			this->GroupBox3->Controls->Add(this->btnDisconnect);
			this->GroupBox3->Controls->Add(this->btnConnect);
			this->GroupBox3->Controls->Add(this->Label2);
			this->GroupBox3->Controls->Add(this->Label1);
			this->GroupBox3->Controls->Add(this->txtaddress);
			this->GroupBox3->Controls->Add(this->txtport);
			this->GroupBox3->Controls->Add(this->rdo232C);
			this->GroupBox3->Controls->Add(this->rdolan);
			this->GroupBox3->Controls->Add(this->rdokeysightvisa);
			this->GroupBox3->Controls->Add(this->rdovisa);
			this->GroupBox3->Controls->Add(this->rdo488);
			this->GroupBox3->Location = System::Drawing::Point(24, 20);
			this->GroupBox3->Name = L"GroupBox3";
			this->GroupBox3->Size = System::Drawing::Size(648, 91);
			this->GroupBox3->TabIndex = 5;
			this->GroupBox3->TabStop = false;
			this->GroupBox3->Text = L"Communication setting";
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->Location = System::Drawing::Point(219, 43);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(61, 13);
			this->Label2->TabIndex = 8;
			this->Label2->Text = L"Portnumber";
			// 
			// rdo232C
			// 
			this->rdo232C->AutoSize = true;
			this->rdo232C->Location = System::Drawing::Point(355, 20);
			this->rdo232C->Name = L"rdo232C";
			this->rdo232C->Size = System::Drawing::Size(50, 17);
			this->rdo232C->TabIndex = 4;
			this->rdo232C->TabStop = true;
			this->rdo232C->Text = L"232C";
			this->rdo232C->UseVisualStyleBackColor = true;
			this->rdo232C->CheckedChanged += gcnew System::EventHandler(this, &MPMSample::rdo232C_CheckedChanged);
			// 
			// rdolan
			// 
			this->rdolan->AutoSize = true;
			this->rdolan->Location = System::Drawing::Point(269, 20);
			this->rdolan->Name = L"rdolan";
			this->rdolan->Size = System::Drawing::Size(46, 17);
			this->rdolan->TabIndex = 3;
			this->rdolan->TabStop = true;
			this->rdolan->Text = L"LAN";
			this->rdolan->UseVisualStyleBackColor = true;
			this->rdolan->CheckedChanged += gcnew System::EventHandler(this, &MPMSample::rdolan_CheckedChanged);
			// 
			// rdokeysightvisa
			// 
			this->rdokeysightvisa->AutoSize = true;
			this->rdokeysightvisa->Location = System::Drawing::Point(158, 18);
			this->rdokeysightvisa->Name = L"rdokeysightvisa";
			this->rdokeysightvisa->Size = System::Drawing::Size(85, 17);
			this->rdokeysightvisa->TabIndex = 2;
			this->rdokeysightvisa->TabStop = true;
			this->rdokeysightvisa->Text = L"KeysightVisa";
			this->rdokeysightvisa->UseVisualStyleBackColor = true;
			this->rdokeysightvisa->CheckedChanged += gcnew System::EventHandler(this, &MPMSample::rdokeysightvisa_CheckedChanged);
			// 
			// rdovisa
			// 
			this->rdovisa->AutoSize = true;
			this->rdovisa->Location = System::Drawing::Point(86, 18);
			this->rdovisa->Name = L"rdovisa";
			this->rdovisa->Size = System::Drawing::Size(56, 17);
			this->rdovisa->TabIndex = 1;
			this->rdovisa->TabStop = true;
			this->rdovisa->Text = L"NIVisa";
			this->rdovisa->UseVisualStyleBackColor = true;
			this->rdovisa->CheckedChanged += gcnew System::EventHandler(this, &MPMSample::rdovisa_CheckedChanged);
			// 
			// rdo488
			// 
			this->rdo488->AutoSize = true;
			this->rdo488->Location = System::Drawing::Point(9, 18);
			this->rdo488->Name = L"rdo488";
			this->rdo488->Size = System::Drawing::Size(63, 17);
			this->rdo488->TabIndex = 0;
			this->rdo488->TabStop = true;
			this->rdo488->Text = L"NI488.2";
			this->rdo488->UseVisualStyleBackColor = true;
			this->rdo488->CheckedChanged += gcnew System::EventHandler(this, &MPMSample::rdo488_CheckedChanged);
			// 
			// Label6
			// 
			this->Label6->AutoSize = true;
			this->Label6->ForeColor = System::Drawing::Color::Blue;
			this->Label6->Location = System::Drawing::Point(16, 85);
			this->Label6->Name = L"Label6";
			this->Label6->Size = System::Drawing::Size(33, 13);
			this->Label6->TabIndex = 1;
			this->Label6->Text = L"Serial";
			// 
			// lblseri3
			// 
			this->lblseri3->AutoSize = true;
			this->lblseri3->ForeColor = System::Drawing::Color::Black;
			this->lblseri3->Location = System::Drawing::Point(288, 100);
			this->lblseri3->Name = L"lblseri3";
			this->lblseri3->Size = System::Drawing::Size(44, 13);
			this->lblseri3->TabIndex = 13;
			this->lblseri3->Text = L"Product";
			// 
			// lblseri2
			// 
			this->lblseri2->AutoSize = true;
			this->lblseri2->ForeColor = System::Drawing::Color::Black;
			this->lblseri2->Location = System::Drawing::Point(213, 100);
			this->lblseri2->Name = L"lblseri2";
			this->lblseri2->Size = System::Drawing::Size(44, 13);
			this->lblseri2->TabIndex = 12;
			this->lblseri2->Text = L"Product";
			// 
			// lblseri1
			// 
			this->lblseri1->AutoSize = true;
			this->lblseri1->ForeColor = System::Drawing::Color::Black;
			this->lblseri1->Location = System::Drawing::Point(141, 100);
			this->lblseri1->Name = L"lblseri1";
			this->lblseri1->Size = System::Drawing::Size(44, 13);
			this->lblseri1->TabIndex = 11;
			this->lblseri1->Text = L"Product";
			// 
			// lbltype4
			// 
			this->lbltype4->AutoSize = true;
			this->lbltype4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->lbltype4->ForeColor = System::Drawing::Color::Black;
			this->lbltype4->Location = System::Drawing::Point(366, 53);
			this->lbltype4->Name = L"lbltype4";
			this->lbltype4->Size = System::Drawing::Size(44, 13);
			this->lbltype4->TabIndex = 9;
			this->lbltype4->Text = L"Product";
			// 
			// lbltype3
			// 
			this->lbltype3->AutoSize = true;
			this->lbltype3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->lbltype3->ForeColor = System::Drawing::Color::Black;
			this->lbltype3->Location = System::Drawing::Point(288, 53);
			this->lbltype3->Name = L"lbltype3";
			this->lbltype3->Size = System::Drawing::Size(44, 13);
			this->lbltype3->TabIndex = 8;
			this->lbltype3->Text = L"Product";
			// 
			// lbltype2
			// 
			this->lbltype2->AutoSize = true;
			this->lbltype2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->lbltype2->ForeColor = System::Drawing::Color::Black;
			this->lbltype2->Location = System::Drawing::Point(213, 53);
			this->lbltype2->Name = L"lbltype2";
			this->lbltype2->Size = System::Drawing::Size(44, 13);
			this->lbltype2->TabIndex = 7;
			this->lbltype2->Text = L"Product";
			// 
			// lbltype1
			// 
			this->lbltype1->AutoSize = true;
			this->lbltype1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->lbltype1->ForeColor = System::Drawing::Color::Black;
			this->lbltype1->Location = System::Drawing::Point(141, 53);
			this->lbltype1->Name = L"lbltype1";
			this->lbltype1->Size = System::Drawing::Size(44, 13);
			this->lbltype1->TabIndex = 6;
			this->lbltype1->Text = L"Product";
			// 
			// Label5
			// 
			this->Label5->AutoSize = true;
			this->Label5->ForeColor = System::Drawing::Color::Blue;
			this->Label5->Location = System::Drawing::Point(16, 49);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(44, 13);
			this->Label5->TabIndex = 0;
			this->Label5->Text = L"Product";
			// 
			// lblseri0
			// 
			this->lblseri0->AutoSize = true;
			this->lblseri0->ForeColor = System::Drawing::Color::Black;
			this->lblseri0->Location = System::Drawing::Point(70, 100);
			this->lblseri0->Name = L"lblseri0";
			this->lblseri0->Size = System::Drawing::Size(44, 13);
			this->lblseri0->TabIndex = 10;
			this->lblseri0->Text = L"Product";
			// 
			// GroupBox1
			// 
			this->GroupBox1->Controls->Add(this->Label72);
			this->GroupBox1->Controls->Add(this->Label71);
			this->GroupBox1->Controls->Add(this->btnSplit);
			this->GroupBox1->Controls->Add(this->txtsp_add);
			this->GroupBox1->Controls->Add(this->txtboard_num);
			this->GroupBox1->Controls->Add(this->Label62);
			this->GroupBox1->Controls->Add(this->Label61);
			this->GroupBox1->Controls->Add(this->GetComport);
			this->GroupBox1->Controls->Add(this->cmbcomport);
			this->GroupBox1->Controls->Add(this->btnVisa);
			this->GroupBox1->Controls->Add(this->cmbvisaresouce);
			this->GroupBox1->Location = System::Drawing::Point(34, 18);
			this->GroupBox1->Name = L"GroupBox1";
			this->GroupBox1->Size = System::Drawing::Size(694, 98);
			this->GroupBox1->TabIndex = 0;
			this->GroupBox1->TabStop = false;
			this->GroupBox1->Text = L"0. Connect Tool";
			// 
			// Label72
			// 
			this->Label72->AutoSize = true;
			this->Label72->Location = System::Drawing::Point(205, 20);
			this->Label72->Name = L"Label72";
			this->Label72->Size = System::Drawing::Size(72, 13);
			this->Label72->TabIndex = 15;
			this->Label72->Text = L"board number";
			// 
			// Label71
			// 
			this->Label71->AutoSize = true;
			this->Label71->Location = System::Drawing::Point(285, 20);
			this->Label71->Name = L"Label71";
			this->Label71->Size = System::Drawing::Size(45, 13);
			this->Label71->TabIndex = 14;
			this->Label71->Text = L"Address";
			// 
			// btnSplit
			// 
			this->btnSplit->Location = System::Drawing::Point(207, 63);
			this->btnSplit->Name = L"btnSplit";
			this->btnSplit->Size = System::Drawing::Size(143, 27);
			this->btnSplit->TabIndex = 13;
			this->btnSplit->Text = L"Split visa string";
			this->btnSplit->UseVisualStyleBackColor = true;
			this->btnSplit->Click += gcnew System::EventHandler(this, &MPMSample::btnSplit_Click);
			// 
			// txtsp_add
			// 
			this->txtsp_add->Location = System::Drawing::Point(287, 36);
			this->txtsp_add->Name = L"txtsp_add";
			this->txtsp_add->Size = System::Drawing::Size(63, 20);
			this->txtsp_add->TabIndex = 12;
			// 
			// txtboard_num
			// 
			this->txtboard_num->Location = System::Drawing::Point(206, 36);
			this->txtboard_num->Name = L"txtboard_num";
			this->txtboard_num->Size = System::Drawing::Size(73, 20);
			this->txtboard_num->TabIndex = 11;
			// 
			// Label62
			// 
			this->Label62->AutoSize = true;
			this->Label62->Location = System::Drawing::Point(25, 18);
			this->Label62->Name = L"Label62";
			this->Label62->Size = System::Drawing::Size(60, 13);
			this->Label62->TabIndex = 10;
			this->Label62->Text = L"Visa String ";
			// 
			// Label61
			// 
			this->Label61->AutoSize = true;
			this->Label61->Location = System::Drawing::Point(393, 18);
			this->Label61->Name = L"Label61";
			this->Label61->Size = System::Drawing::Size(47, 13);
			this->Label61->TabIndex = 9;
			this->Label61->Text = L"ComPort";
			// 
			// GetComport
			// 
			this->GetComport->Location = System::Drawing::Point(482, 63);
			this->GetComport->Name = L"GetComport";
			this->GetComport->Size = System::Drawing::Size(57, 27);
			this->GetComport->TabIndex = 3;
			this->GetComport->Text = L"Get";
			this->GetComport->UseVisualStyleBackColor = true;
			this->GetComport->Click += gcnew System::EventHandler(this, &MPMSample::GetComport_Click);
			// 
			// cmbcomport
			// 
			this->cmbcomport->FormattingEnabled = true;
			this->cmbcomport->Location = System::Drawing::Point(391, 35);
			this->cmbcomport->Name = L"cmbcomport";
			this->cmbcomport->Size = System::Drawing::Size(148, 21);
			this->cmbcomport->TabIndex = 2;
			// 
			// btnVisa
			// 
			this->btnVisa->Location = System::Drawing::Point(115, 63);
			this->btnVisa->Name = L"btnVisa";
			this->btnVisa->Size = System::Drawing::Size(57, 27);
			this->btnVisa->TabIndex = 1;
			this->btnVisa->Text = L"Get";
			this->btnVisa->UseVisualStyleBackColor = true;
			this->btnVisa->Click += gcnew System::EventHandler(this, &MPMSample::btnVisa_Click);
			// 
			// cmbvisaresouce
			// 
			this->cmbvisaresouce->FormattingEnabled = true;
			this->cmbvisaresouce->Location = System::Drawing::Point(24, 35);
			this->cmbvisaresouce->Name = L"cmbvisaresouce";
			this->cmbvisaresouce->Size = System::Drawing::Size(148, 21);
			this->cmbvisaresouce->TabIndex = 0;
			// 
			// lbltype0
			// 
			this->lbltype0->AutoSize = true;
			this->lbltype0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->lbltype0->ForeColor = System::Drawing::Color::Black;
			this->lbltype0->Location = System::Drawing::Point(70, 53);
			this->lbltype0->Name = L"lbltype0";
			this->lbltype0->Size = System::Drawing::Size(44, 13);
			this->lbltype0->TabIndex = 5;
			this->lbltype0->Text = L"Product";
			// 
			// lblmodulecount
			// 
			this->lblmodulecount->AutoSize = true;
			this->lblmodulecount->ForeColor = System::Drawing::Color::Black;
			this->lblmodulecount->Location = System::Drawing::Point(105, 160);
			this->lblmodulecount->Name = L"lblmodulecount";
			this->lblmodulecount->Size = System::Drawing::Size(44, 13);
			this->lblmodulecount->TabIndex = 7;
			this->lblmodulecount->Text = L"Product";
			// 
			// lblversion
			// 
			this->lblversion->AutoSize = true;
			this->lblversion->ForeColor = System::Drawing::Color::Black;
			this->lblversion->Location = System::Drawing::Point(105, 121);
			this->lblversion->Name = L"lblversion";
			this->lblversion->Size = System::Drawing::Size(44, 13);
			this->lblversion->TabIndex = 6;
			this->lblversion->Text = L"Product";
			// 
			// lblserial
			// 
			this->lblserial->AutoSize = true;
			this->lblserial->ForeColor = System::Drawing::Color::Black;
			this->lblserial->Location = System::Drawing::Point(105, 85);
			this->lblserial->Name = L"lblserial";
			this->lblserial->Size = System::Drawing::Size(44, 13);
			this->lblserial->TabIndex = 5;
			this->lblserial->Text = L"Product";
			// 
			// lblproduct
			// 
			this->lblproduct->AutoSize = true;
			this->lblproduct->ForeColor = System::Drawing::Color::Black;
			this->lblproduct->Location = System::Drawing::Point(105, 49);
			this->lblproduct->Name = L"lblproduct";
			this->lblproduct->Size = System::Drawing::Size(44, 13);
			this->lblproduct->TabIndex = 4;
			this->lblproduct->Text = L"Product";
			// 
			// Label8
			// 
			this->Label8->AutoSize = true;
			this->Label8->ForeColor = System::Drawing::Color::Blue;
			this->Label8->Location = System::Drawing::Point(16, 160);
			this->Label8->Name = L"Label8";
			this->Label8->Size = System::Drawing::Size(71, 13);
			this->Label8->TabIndex = 3;
			this->Label8->Text = L"module count";
			// 
			// Label11
			// 
			this->Label11->AutoSize = true;
			this->Label11->ForeColor = System::Drawing::Color::Blue;
			this->Label11->Location = System::Drawing::Point(18, 148);
			this->Label11->Name = L"Label11";
			this->Label11->Size = System::Drawing::Size(42, 13);
			this->Label11->TabIndex = 3;
			this->Label11->Text = L"Version";
			// 
			// Label10
			// 
			this->Label10->AutoSize = true;
			this->Label10->ForeColor = System::Drawing::Color::Blue;
			this->Label10->Location = System::Drawing::Point(18, 100);
			this->Label10->Name = L"Label10";
			this->Label10->Size = System::Drawing::Size(33, 13);
			this->Label10->TabIndex = 2;
			this->Label10->Text = L"Serial";
			// 
			// Label9
			// 
			this->Label9->AutoSize = true;
			this->Label9->ForeColor = System::Drawing::Color::Blue;
			this->Label9->Location = System::Drawing::Point(18, 53);
			this->Label9->Name = L"Label9";
			this->Label9->Size = System::Drawing::Size(31, 13);
			this->Label9->TabIndex = 1;
			this->Label9->Text = L"Type";
			// 
			// GroupBox8
			// 
			this->GroupBox8->Controls->Add(this->Label31);
			this->GroupBox8->Controls->Add(this->Label30);
			this->GroupBox8->Controls->Add(this->Label29);
			this->GroupBox8->Controls->Add(this->Label28);
			this->GroupBox8->Controls->Add(this->Label27);
			this->GroupBox8->Controls->Add(this->lblver4);
			this->GroupBox8->Controls->Add(this->lblver3);
			this->GroupBox8->Controls->Add(this->lblver2);
			this->GroupBox8->Controls->Add(this->lblver1);
			this->GroupBox8->Controls->Add(this->lblver0);
			this->GroupBox8->Controls->Add(this->lblseri4);
			this->GroupBox8->Controls->Add(this->lblseri3);
			this->GroupBox8->Controls->Add(this->lblseri2);
			this->GroupBox8->Controls->Add(this->lblseri1);
			this->GroupBox8->Controls->Add(this->lblseri0);
			this->GroupBox8->Controls->Add(this->lbltype4);
			this->GroupBox8->Controls->Add(this->lbltype3);
			this->GroupBox8->Controls->Add(this->lbltype2);
			this->GroupBox8->Controls->Add(this->lbltype1);
			this->GroupBox8->Controls->Add(this->lbltype0);
			this->GroupBox8->Controls->Add(this->Label11);
			this->GroupBox8->Controls->Add(this->Label10);
			this->GroupBox8->Controls->Add(this->Label9);
			this->GroupBox8->Location = System::Drawing::Point(183, 20);
			this->GroupBox8->Name = L"GroupBox8";
			this->GroupBox8->Size = System::Drawing::Size(445, 187);
			this->GroupBox8->TabIndex = 8;
			this->GroupBox8->TabStop = false;
			this->GroupBox8->Text = L"Module Information";
			// 
			// GroupBox4
			// 
			this->GroupBox4->Controls->Add(this->GroupBox8);
			this->GroupBox4->Controls->Add(this->lblmodulecount);
			this->GroupBox4->Controls->Add(this->lblversion);
			this->GroupBox4->Controls->Add(this->lblserial);
			this->GroupBox4->Controls->Add(this->lblproduct);
			this->GroupBox4->Controls->Add(this->Label8);
			this->GroupBox4->Controls->Add(this->Label7);
			this->GroupBox4->Controls->Add(this->Label6);
			this->GroupBox4->Controls->Add(this->Label5);
			this->GroupBox4->Location = System::Drawing::Point(24, 128);
			this->GroupBox4->Name = L"GroupBox4";
			this->GroupBox4->Size = System::Drawing::Size(648, 226);
			this->GroupBox4->TabIndex = 6;
			this->GroupBox4->TabStop = false;
			this->GroupBox4->Text = L"Information";
			// 
			// Label7
			// 
			this->Label7->AutoSize = true;
			this->Label7->ForeColor = System::Drawing::Color::Blue;
			this->Label7->Location = System::Drawing::Point(16, 121);
			this->Label7->Name = L"Label7";
			this->Label7->Size = System::Drawing::Size(64, 13);
			this->Label7->TabIndex = 2;
			this->Label7->Text = L"F/W Vesion";
			// 
			// GroupBox2
			// 
			this->GroupBox2->Controls->Add(this->GroupBox4);
			this->GroupBox2->Controls->Add(this->GroupBox3);
			this->GroupBox2->Location = System::Drawing::Point(34, 122);
			this->GroupBox2->Name = L"GroupBox2";
			this->GroupBox2->Size = System::Drawing::Size(694, 374);
			this->GroupBox2->TabIndex = 1;
			this->GroupBox2->TabStop = false;
			this->GroupBox2->Text = L"1. Connect";
			// 
			// TabPage1
			// 
			this->TabPage1->Controls->Add(this->GroupBox2);
			this->TabPage1->Controls->Add(this->GroupBox1);
			this->TabPage1->Location = System::Drawing::Point(4, 22);
			this->TabPage1->Name = L"TabPage1";
			this->TabPage1->Padding = System::Windows::Forms::Padding(3);
			this->TabPage1->Size = System::Drawing::Size(751, 521);
			this->TabPage1->TabIndex = 0;
			this->TabPage1->Text = L"TabPage1";
			this->TabPage1->UseVisualStyleBackColor = true;
			// 
			// TabControl1
			// 
			this->TabControl1->Controls->Add(this->TabPage1);
			this->TabControl1->Controls->Add(this->TabPage2);
			this->TabControl1->Controls->Add(this->TabPage3);
			this->TabControl1->Controls->Add(this->TabPage4);
			this->TabControl1->Location = System::Drawing::Point(12, 12);
			this->TabControl1->Name = L"TabControl1";
			this->TabControl1->SelectedIndex = 0;
			this->TabControl1->Size = System::Drawing::Size(759, 547);
			this->TabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->TabControl1->TabIndex = 2;
			// 
			// TabPage2
			// 
			this->TabPage2->Controls->Add(this->GroupBox11);
			this->TabPage2->Controls->Add(this->GroupBox9);
			this->TabPage2->Controls->Add(this->GroupBox7);
			this->TabPage2->Location = System::Drawing::Point(4, 22);
			this->TabPage2->Name = L"TabPage2";
			this->TabPage2->Padding = System::Windows::Forms::Padding(3);
			this->TabPage2->Size = System::Drawing::Size(751, 521);
			this->TabPage2->TabIndex = 1;
			this->TabPage2->Text = L"Normal function";
			this->TabPage2->UseVisualStyleBackColor = true;
			// 
			// GroupBox11
			// 
			this->GroupBox11->Controls->Add(this->Label70);
			this->GroupBox11->Controls->Add(this->Label69);
			this->GroupBox11->Controls->Add(this->txtwave_ch);
			this->GroupBox11->Controls->Add(this->txtwave_slot);
			this->GroupBox11->Controls->Add(this->txtlan_port);
			this->GroupBox11->Controls->Add(this->btnGetPort);
			this->GroupBox11->Controls->Add(this->txtipaddress);
			this->GroupBox11->Controls->Add(this->btnGetIP);
			this->GroupBox11->Controls->Add(this->txtsyst_error);
			this->GroupBox11->Controls->Add(this->btnGetError);
			this->GroupBox11->Controls->Add(this->btnGetWavelength);
			this->GroupBox11->Controls->Add(this->btnZeroing);
			this->GroupBox11->Location = System::Drawing::Point(23, 390);
			this->GroupBox11->Name = L"GroupBox11";
			this->GroupBox11->Size = System::Drawing::Size(701, 111);
			this->GroupBox11->TabIndex = 2;
			this->GroupBox11->TabStop = false;
			this->GroupBox11->Text = L"Common function";
			// 
			// Label70
			// 
			this->Label70->AutoSize = true;
			this->Label70->Location = System::Drawing::Point(190, 16);
			this->Label70->Name = L"Label70";
			this->Label70->Size = System::Drawing::Size(20, 13);
			this->Label70->TabIndex = 37;
			this->Label70->Text = L"Ch";
			// 
			// Label69
			// 
			this->Label69->AutoSize = true;
			this->Label69->Location = System::Drawing::Point(130, 16);
			this->Label69->Name = L"Label69";
			this->Label69->Size = System::Drawing::Size(25, 13);
			this->Label69->TabIndex = 36;
			this->Label69->Text = L"Slot";
			// 
			// txtwave_ch
			// 
			this->txtwave_ch->Location = System::Drawing::Point(192, 33);
			this->txtwave_ch->Name = L"txtwave_ch";
			this->txtwave_ch->Size = System::Drawing::Size(54, 20);
			this->txtwave_ch->TabIndex = 32;
			// 
			// txtwave_slot
			// 
			this->txtwave_slot->Location = System::Drawing::Point(132, 33);
			this->txtwave_slot->Name = L"txtwave_slot";
			this->txtwave_slot->Size = System::Drawing::Size(54, 20);
			this->txtwave_slot->TabIndex = 31;
			// 
			// txtlan_port
			// 
			this->txtlan_port->Location = System::Drawing::Point(371, 77);
			this->txtlan_port->Name = L"txtlan_port";
			this->txtlan_port->Size = System::Drawing::Size(213, 20);
			this->txtlan_port->TabIndex = 17;
			// 
			// btnGetPort
			// 
			this->btnGetPort->Location = System::Drawing::Point(596, 77);
			this->btnGetPort->Name = L"btnGetPort";
			this->btnGetPort->Size = System::Drawing::Size(95, 35);
			this->btnGetPort->TabIndex = 16;
			this->btnGetPort->Text = L"Get Port number";
			this->btnGetPort->UseVisualStyleBackColor = true;
			this->btnGetPort->Click += gcnew System::EventHandler(this, &MPMSample::btnGetPort_Click);
			// 
			// txtipaddress
			// 
			this->txtipaddress->Location = System::Drawing::Point(32, 77);
			this->txtipaddress->Name = L"txtipaddress";
			this->txtipaddress->Size = System::Drawing::Size(214, 20);
			this->txtipaddress->TabIndex = 15;
			// 
			// btnGetIP
			// 
			this->btnGetIP->Location = System::Drawing::Point(264, 69);
			this->btnGetIP->Name = L"btnGetIP";
			this->btnGetIP->Size = System::Drawing::Size(95, 35);
			this->btnGetIP->TabIndex = 14;
			this->btnGetIP->Text = L"Get IP Address";
			this->btnGetIP->UseVisualStyleBackColor = true;
			this->btnGetIP->Click += gcnew System::EventHandler(this, &MPMSample::btnGetIP_Click);
			// 
			// txtsyst_error
			// 
			this->txtsyst_error->Location = System::Drawing::Point(371, 33);
			this->txtsyst_error->Name = L"txtsyst_error";
			this->txtsyst_error->Size = System::Drawing::Size(213, 20);
			this->txtsyst_error->TabIndex = 13;
			// 
			// btnGetError
			// 
			this->btnGetError->Location = System::Drawing::Point(596, 25);
			this->btnGetError->Name = L"btnGetError";
			this->btnGetError->Size = System::Drawing::Size(95, 35);
			this->btnGetError->TabIndex = 12;
			this->btnGetError->Text = L"Get System Error";
			this->btnGetError->UseVisualStyleBackColor = true;
			this->btnGetError->Click += gcnew System::EventHandler(this, &MPMSample::btnGetError_Click);
			// 
			// btnGetWavelength
			// 
			this->btnGetWavelength->Location = System::Drawing::Point(264, 25);
			this->btnGetWavelength->Name = L"btnGetWavelength";
			this->btnGetWavelength->Size = System::Drawing::Size(95, 35);
			this->btnGetWavelength->TabIndex = 11;
			this->btnGetWavelength->Text = L"Get Wavelength Sencitivity";
			this->btnGetWavelength->UseVisualStyleBackColor = true;
			this->btnGetWavelength->Click += gcnew System::EventHandler(this, &MPMSample::btnGetWavelength_Click);
			// 
			// btnZeroing
			// 
			this->btnZeroing->Location = System::Drawing::Point(39, 25);
			this->btnZeroing->Name = L"btnZeroing";
			this->btnZeroing->Size = System::Drawing::Size(84, 35);
			this->btnZeroing->TabIndex = 10;
			this->btnZeroing->Text = L"Zeroing";
			this->btnZeroing->UseVisualStyleBackColor = true;
			this->btnZeroing->Click += gcnew System::EventHandler(this, &MPMSample::btnZeroing_Click);
			// 
			// GroupBox9
			// 
			this->GroupBox9->Controls->Add(this->Label35);
			this->GroupBox9->Controls->Add(this->txtreadp_all);
			this->GroupBox9->Controls->Add(this->btnSlot_Power);
			this->GroupBox9->Controls->Add(this->Label36);
			this->GroupBox9->Controls->Add(this->txtread_slotall);
			this->GroupBox9->Controls->Add(this->Label26);
			this->GroupBox9->Controls->Add(this->Label32);
			this->GroupBox9->Controls->Add(this->txt_readp_ch);
			this->GroupBox9->Controls->Add(this->btnSlot_Ch_Power);
			this->GroupBox9->Controls->Add(this->Label33);
			this->GroupBox9->Controls->Add(this->txtread_ch);
			this->GroupBox9->Controls->Add(this->txtread_slot);
			this->GroupBox9->Controls->Add(this->Label23);
			this->GroupBox9->Controls->Add(this->Label24);
			this->GroupBox9->Controls->Add(this->txtget_erange);
			this->GroupBox9->Controls->Add(this->btnSlot_Ch_Range);
			this->GroupBox9->Controls->Add(this->Label25);
			this->GroupBox9->Controls->Add(this->txtget_rangech);
			this->GroupBox9->Controls->Add(this->txtget_rangeslot);
			this->GroupBox9->Controls->Add(this->GroupBox10);
			this->GroupBox9->Location = System::Drawing::Point(19, 165);
			this->GroupBox9->Name = L"GroupBox9";
			this->GroupBox9->Size = System::Drawing::Size(706, 219);
			this->GroupBox9->TabIndex = 1;
			this->GroupBox9->TabStop = false;
			this->GroupBox9->Text = L"Get";
			// 
			// Label35
			// 
			this->Label35->AutoSize = true;
			this->Label35->Location = System::Drawing::Point(374, 164);
			this->Label35->Name = L"Label35";
			this->Label35->Size = System::Drawing::Size(25, 13);
			this->Label35->TabIndex = 42;
			this->Label35->Text = L"Slot";
			// 
			// txtreadp_all
			// 
			this->txtreadp_all->Location = System::Drawing::Point(435, 179);
			this->txtreadp_all->Name = L"txtreadp_all";
			this->txtreadp_all->Size = System::Drawing::Size(159, 20);
			this->txtreadp_all->TabIndex = 41;
			// 
			// btnSlot_Power
			// 
			this->btnSlot_Power->Location = System::Drawing::Point(600, 179);
			this->btnSlot_Power->Name = L"btnSlot_Power";
			this->btnSlot_Power->Size = System::Drawing::Size(54, 24);
			this->btnSlot_Power->TabIndex = 40;
			this->btnSlot_Power->Text = L"Get";
			this->btnSlot_Power->UseVisualStyleBackColor = true;
			this->btnSlot_Power->Click += gcnew System::EventHandler(this, &MPMSample::btnSlot_Power_Click);
			// 
			// Label36
			// 
			this->Label36->AutoSize = true;
			this->Label36->Location = System::Drawing::Point(433, 164);
			this->Label36->Name = L"Label36";
			this->Label36->Size = System::Drawing::Size(127, 13);
			this->Label36->TabIndex = 39;
			this->Label36->Text = L"Read Power for each slot";
			// 
			// txtread_slotall
			// 
			this->txtread_slotall->Location = System::Drawing::Point(375, 180);
			this->txtread_slotall->Name = L"txtread_slotall";
			this->txtread_slotall->Size = System::Drawing::Size(54, 20);
			this->txtread_slotall->TabIndex = 37;
			// 
			// Label26
			// 
			this->Label26->AutoSize = true;
			this->Label26->Location = System::Drawing::Point(101, 163);
			this->Label26->Name = L"Label26";
			this->Label26->Size = System::Drawing::Size(20, 13);
			this->Label26->TabIndex = 36;
			this->Label26->Text = L"Ch";
			// 
			// Label32
			// 
			this->Label32->AutoSize = true;
			this->Label32->Location = System::Drawing::Point(42, 163);
			this->Label32->Name = L"Label32";
			this->Label32->Size = System::Drawing::Size(25, 13);
			this->Label32->TabIndex = 35;
			this->Label32->Text = L"Slot";
			// 
			// txt_readp_ch
			// 
			this->txt_readp_ch->Location = System::Drawing::Point(163, 179);
			this->txt_readp_ch->Name = L"txt_readp_ch";
			this->txt_readp_ch->Size = System::Drawing::Size(99, 20);
			this->txt_readp_ch->TabIndex = 34;
			// 
			// btnSlot_Ch_Power
			// 
			this->btnSlot_Ch_Power->Location = System::Drawing::Point(268, 178);
			this->btnSlot_Ch_Power->Name = L"btnSlot_Ch_Power";
			this->btnSlot_Ch_Power->Size = System::Drawing::Size(54, 24);
			this->btnSlot_Ch_Power->TabIndex = 33;
			this->btnSlot_Ch_Power->Text = L"Get";
			this->btnSlot_Ch_Power->UseVisualStyleBackColor = true;
			this->btnSlot_Ch_Power->Click += gcnew System::EventHandler(this, &MPMSample::btnSlot_Ch_Power_Click);
			// 
			// Label33
			// 
			this->Label33->AutoSize = true;
			this->Label33->Location = System::Drawing::Point(163, 164);
			this->Label33->Name = L"Label33";
			this->Label33->Size = System::Drawing::Size(123, 13);
			this->Label33->TabIndex = 32;
			this->Label33->Text = L"Read Power for each ch";
			// 
			// txtread_ch
			// 
			this->txtread_ch->Location = System::Drawing::Point(103, 179);
			this->txtread_ch->Name = L"txtread_ch";
			this->txtread_ch->Size = System::Drawing::Size(54, 20);
			this->txtread_ch->TabIndex = 31;
			// 
			// txtread_slot
			// 
			this->txtread_slot->Location = System::Drawing::Point(43, 179);
			this->txtread_slot->Name = L"txtread_slot";
			this->txtread_slot->Size = System::Drawing::Size(54, 20);
			this->txtread_slot->TabIndex = 30;
			// 
			// Label23
			// 
			this->Label23->AutoSize = true;
			this->Label23->Location = System::Drawing::Point(101, 108);
			this->Label23->Name = L"Label23";
			this->Label23->Size = System::Drawing::Size(20, 13);
			this->Label23->TabIndex = 29;
			this->Label23->Text = L"Ch";
			// 
			// Label24
			// 
			this->Label24->AutoSize = true;
			this->Label24->Location = System::Drawing::Point(42, 108);
			this->Label24->Name = L"Label24";
			this->Label24->Size = System::Drawing::Size(25, 13);
			this->Label24->TabIndex = 28;
			this->Label24->Text = L"Slot";
			// 
			// txtget_erange
			// 
			this->txtget_erange->Location = System::Drawing::Point(163, 125);
			this->txtget_erange->Name = L"txtget_erange";
			this->txtget_erange->Size = System::Drawing::Size(99, 20);
			this->txtget_erange->TabIndex = 27;
			// 
			// btnSlot_Ch_Range
			// 
			this->btnSlot_Ch_Range->Location = System::Drawing::Point(268, 124);
			this->btnSlot_Ch_Range->Name = L"btnSlot_Ch_Range";
			this->btnSlot_Ch_Range->Size = System::Drawing::Size(54, 24);
			this->btnSlot_Ch_Range->TabIndex = 26;
			this->btnSlot_Ch_Range->Text = L"Get";
			this->btnSlot_Ch_Range->UseVisualStyleBackColor = true;
			this->btnSlot_Ch_Range->Click += gcnew System::EventHandler(this, &MPMSample::btnSlot_Ch_Range_Click);
			// 
			// Label25
			// 
			this->Label25->AutoSize = true;
			this->Label25->Location = System::Drawing::Point(163, 109);
			this->Label25->Name = L"Label25";
			this->Label25->Size = System::Drawing::Size(96, 13);
			this->Label25->TabIndex = 25;
			this->Label25->Text = L"Range for each ch";
			// 
			// txtget_rangech
			// 
			this->txtget_rangech->Location = System::Drawing::Point(103, 125);
			this->txtget_rangech->Name = L"txtget_rangech";
			this->txtget_rangech->Size = System::Drawing::Size(54, 20);
			this->txtget_rangech->TabIndex = 24;
			// 
			// txtget_rangeslot
			// 
			this->txtget_rangeslot->Location = System::Drawing::Point(43, 125);
			this->txtget_rangeslot->Name = L"txtget_rangeslot";
			this->txtget_rangeslot->Size = System::Drawing::Size(54, 20);
			this->txtget_rangeslot->TabIndex = 23;
			// 
			// GroupBox10
			// 
			this->GroupBox10->Controls->Add(this->btnGet);
			this->GroupBox10->Controls->Add(this->Label22);
			this->GroupBox10->Controls->Add(this->txtget_avg);
			this->GroupBox10->Controls->Add(this->Label21);
			this->GroupBox10->Controls->Add(this->txtget_unit);
			this->GroupBox10->Controls->Add(this->Label20);
			this->GroupBox10->Controls->Add(this->txtget_wave);
			this->GroupBox10->Controls->Add(this->Label19);
			this->GroupBox10->Controls->Add(this->txtgetrang);
			this->GroupBox10->Controls->Add(this->Label18);
			this->GroupBox10->Controls->Add(this->txtgetrmode);
			this->GroupBox10->Location = System::Drawing::Point(38, 20);
			this->GroupBox10->Name = L"GroupBox10";
			this->GroupBox10->Size = System::Drawing::Size(627, 78);
			this->GroupBox10->TabIndex = 13;
			this->GroupBox10->TabStop = false;
			// 
			// Label18
			// 
			this->Label18->AutoSize = true;
			this->Label18->Location = System::Drawing::Point(12, 24);
			this->Label18->Name = L"Label18";
			this->Label18->Size = System::Drawing::Size(126, 13);
			this->Label18->TabIndex = 4;
			this->Label18->Text = L"Range mode for \"READ\"";
			// 
			// txtgetrmode
			// 
			this->txtgetrmode->Location = System::Drawing::Point(13, 40);
			this->txtgetrmode->Name = L"txtgetrmode";
			this->txtgetrmode->Size = System::Drawing::Size(122, 20);
			this->txtgetrmode->TabIndex = 3;
			// 
			// GroupBox7
			// 
			this->GroupBox7->Controls->Add(this->Label17);
			this->GroupBox7->Controls->Add(this->Label16);
			this->GroupBox7->Controls->Add(this->txte_range);
			this->GroupBox7->Controls->Add(this->btnSetSlot);
			this->GroupBox7->Controls->Add(this->Label15);
			this->GroupBox7->Controls->Add(this->txtr_ch);
			this->GroupBox7->Controls->Add(this->txtr_slot);
			this->GroupBox7->Controls->Add(this->btnSetUnit);
			this->GroupBox7->Controls->Add(this->Label14);
			this->GroupBox7->Controls->Add(this->cmbunit);
			this->GroupBox7->Controls->Add(this->btnSetAveraging);
			this->GroupBox7->Controls->Add(this->Label13);
			this->GroupBox7->Controls->Add(this->txtsetavg);
			this->GroupBox7->Controls->Add(this->btnSetWavelength);
			this->GroupBox7->Controls->Add(this->Label12);
			this->GroupBox7->Controls->Add(this->txtsetwave);
			this->GroupBox7->Controls->Add(this->btnSetRangeAll);
			this->GroupBox7->Controls->Add(this->btnSetRangeMode);
			this->GroupBox7->Controls->Add(this->Label4);
			this->GroupBox7->Controls->Add(this->txtsetrange);
			this->GroupBox7->Controls->Add(this->Label3);
			this->GroupBox7->Controls->Add(this->cmbset_rangemode);
			this->GroupBox7->Location = System::Drawing::Point(19, 16);
			this->GroupBox7->Name = L"GroupBox7";
			this->GroupBox7->Size = System::Drawing::Size(706, 142);
			this->GroupBox7->TabIndex = 0;
			this->GroupBox7->TabStop = false;
			this->GroupBox7->Text = L"Set";
			// 
			// Label17
			// 
			this->Label17->AutoSize = true;
			this->Label17->Location = System::Drawing::Point(476, 75);
			this->Label17->Name = L"Label17";
			this->Label17->Size = System::Drawing::Size(20, 13);
			this->Label17->TabIndex = 22;
			this->Label17->Text = L"Ch";
			// 
			// MPMSample
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 570);
			this->Controls->Add(this->TabControl1);
			this->Name = L"MPMSample";
			this->Text = L"MPMSample";
			this->Load += gcnew System::EventHandler(this, &MPMSample::MPMSample_Load);
			this->GroupBox13->ResumeLayout(false);
			this->GroupBox13->PerformLayout();
			this->TabPage3->ResumeLayout(false);
			this->GroupBox12->ResumeLayout(false);
			this->GroupBox12->PerformLayout();
			this->GroupBox6->ResumeLayout(false);
			this->GroupBox6->PerformLayout();
			this->GroupBox5->ResumeLayout(false);
			this->GroupBox5->PerformLayout();
			this->GroupBox15->ResumeLayout(false);
			this->GroupBox15->PerformLayout();
			this->GroupBox14->ResumeLayout(false);
			this->GroupBox14->PerformLayout();
			this->TabPage4->ResumeLayout(false);
			this->GroupBox3->ResumeLayout(false);
			this->GroupBox3->PerformLayout();
			this->GroupBox1->ResumeLayout(false);
			this->GroupBox1->PerformLayout();
			this->GroupBox8->ResumeLayout(false);
			this->GroupBox8->PerformLayout();
			this->GroupBox4->ResumeLayout(false);
			this->GroupBox4->PerformLayout();
			this->GroupBox2->ResumeLayout(false);
			this->TabPage1->ResumeLayout(false);
			this->TabControl1->ResumeLayout(false);
			this->TabPage2->ResumeLayout(false);
			this->GroupBox11->ResumeLayout(false);
			this->GroupBox11->PerformLayout();
			this->GroupBox9->ResumeLayout(false);
			this->GroupBox9->PerformLayout();
			this->GroupBox10->ResumeLayout(false);
			this->GroupBox10->PerformLayout();
			this->GroupBox7->ResumeLayout(false);
			this->GroupBox7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MPMSample_Load(System::Object^  sender, System::EventArgs^  e) {
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

	private: System::Void btnVisa_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------------
		// Get Visa GPIB Visa resouce 
		// 获取Visa GPIB资源
		// ----------------------------------------------------------
		array<System::String^>^ resouce = nullptr;

		resouce = Santec::Communication::MainCommunication::Get_GPIB_Resources();

		if (resouce->Length == 0)
			return;


		int loop1;

		for (loop1 = 0; loop1 <= resouce->GetUpperBound(0); loop1++)
			cmbvisaresouce->Items->Add(resouce[loop1]);
	}

	private: System::Void btnSplit_Click(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------
		// Split visa string 
		// 分割字符串
		// --------------------------------------------------
		String^ visa_str = String::Empty;
		array<System::String^>^ split_st = nullptr;             // split string array//拆分字符串数组

		visa_str = cmbvisaresouce->Text;
		array<wchar_t>^ c = { ':',':' };
		split_st = visa_str->Split(c);

		txtboard_num->Text = split_st[0]->Substring(4);
		txtsp_add->Text = split_st[2];
	}

	private: System::Void GetComport_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------
		// Get Comport on PC
		// 在PC上获取Comport
		// ---------------------------------------------------
		array<System::String^>^ portname = nullptr;
		portname = Santec::Communication::MainCommunication::Get_Serial_Port();

		if (portname->Length == 0)
			return;

		int loop1;

		for (loop1 = 0; loop1 <= portname->GetUpperBound(0); loop1++)
			cmbcomport->Items->Add(portname[loop1]);
	}

	private: System::Void btnConnect_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------------------
		// Connect
		// 连接
		// ----------------------------------------------------------------
		Santec::Communication::CommunicationMethod communication_method;               // Communication　method //通信方法
		Santec::Communication::GPIBConnectType gpib_type;                              // GPIB type //GPIB类型

		// ----GPIB Connection
		// ----GPIB连接
		if (rdo488->Checked == true | rdokeysightvisa->Checked == true | rdovisa->Checked == true)
		{
			communication_method = Santec::Communication::CommunicationMethod::GPIB;
			// 488.2
			if (rdo488->Checked == true)
				gpib_type = Santec::Communication::GPIBConnectType::NI4882;
			// keysight visa
			if (rdokeysightvisa->Checked == true)
				gpib_type = Santec::Communication::GPIBConnectType::KeysightIO;
			// visa
			if (rdovisa->Checked == true)
				gpib_type = Santec::Communication::GPIBConnectType::NIVisa;

			mpm.GPIBConnectType = gpib_type;                     // Gpib type //通用接口总线类型
			mpm.GPIBAddress = int::Parse(txtaddress->Text);        // gpib address // gpib地址
			if (txtboard_num->Text == "")                         // board　number //GPIB板卡板号
			{
				mpm.GPIBBoard = 0;
			}
			else
			{
				mpm.GPIBBoard = Convert::ToInt32(txtboard_num->Text);
			}

			TabPage3->Enabled = true;
			TabPage4->Enabled = true;
		}

		// ------LAN　Communication
		// ------ 局域网通信
		if (rdolan->Checked == true)
		{
			communication_method = Santec::Communication::CommunicationMethod::TCPIP;
			mpm.IPAddress = txtaddress->Text;                // IP Address/ / IP地址
			mpm.Port = int::Parse(txtport->Text);                           // LAN Port number// LAN端口号

			TabPage3->Enabled = true;
			TabPage4->Enabled = true;
		}

		// ------232C Communication
		// ------ 232 c通信
		if (rdo232C->Checked == true)
		{
			communication_method = Santec::Communication::CommunicationMethod::C232C;
			mpm.ComPort = txtaddress->Text;
			mpm.BaudRate = 115200;

			// 232C communication can't use Logging mode
			// 232C通信不能使用测量模式
			TabPage3->Enabled = false;
			TabPage4->Enabled = false;
		}

		// -----Connect 
		// -----连接
		int errorcode;                // errorcode //错误代码 
		String^ ans = String::Empty; // return string //返回字符串

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
		lblproduct->Text = mpm.Information->ProductName;                           // Main frameProduct name//产品名称
		lblserial->Text = mpm.Information->SerialNumber;                           // Main frame Serial number//序列号
		lblversion->Text = mpm.Information->FWversion;                             // Main frame F/W version//F/W版本
		lblmodulecount->Text = mpm.Information->NumberofModule.ToString();         // Main frame inserted module count //插入模块数

		int loop1;                   // loop counter //循环计数

		for (loop1 = 0; loop1 <= 4; loop1++)
		{
			lbl_type[loop1]->Text = mpm.Information->ModuleType[loop1];   // Module type //模块类型 
			lbl_sn[loop1]->Text = mpm.Information->ModuelSerial[loop1];   // module serial //模块序列号
			lbl_version[loop1]->Text = mpm.Information->ModuleFW[loop1];  // module F/W version //模块F/W版本
			if (mpm.Information->ModuleEnable[loop1] == false)
			{
				lbl_type[loop1]->Enabled = false;
				lbl_sn[loop1]->Enabled = false;
				lbl_version[loop1]->Enabled = false;
			}
		}
	}

	private: void Show_Error(int errordata)
	{
		// ------------------------------------
		// Show error code
		// 显示错误编号
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

	private: System::Void btnDisconnect_Click(System::Object^  sender, System::EventArgs^  e) {
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
		lblproduct->Text = "";
		lblserial->Text = "";
		lblversion->Text = "";
		lblmodulecount->Text = "";

		int loop1;

		for (loop1 = 0; loop1 <= 4; loop1++)
		{
			lbl_sn[loop1]->Text = "";
			lbl_type[loop1]->Text = "";
			lbl_version[loop1]->Text = "";
		}

		// ----Tab page show
		// ----页签显示
		TabPage3->Enabled = true;
		TabPage4->Enabled = true;
	}

	private: System::Void btnSetRangeMode_Click(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------
		// Set Range Mode for "READ"
		// 设置“READ”的范围模式
		// --------------------------------------------------
		MPM::READ_Range_Mode range_mode;
		int errorcode;

		if (cmbset_rangemode->Text == "Auto")
		{
			// Auto Range
			// 自动调整范围
			range_mode = MPM::READ_Range_Mode::Auto;
			txtsetrange->Enabled = false;
			txte_range->Enabled = false;
			txtr_slot->Enabled = false;
			txtr_ch->Enabled = false;
		}
		else
		{
			// Manual range
			// 手动调整范围
			range_mode = MPM::READ_Range_Mode::Manual;
			txtsetrange->Enabled = true;
			txte_range->Enabled = true;
			txtr_slot->Enabled = true;
			txtr_ch->Enabled = true;
		}

		errorcode = mpm.Set_READ_Range_Mode(range_mode);     // set Range mode for all slot //设置所有模块的范围模式

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void btnSetWavelength_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------------------
		// Set Wavelength(nm)
		// 设置波长(nm)
		// ---------------------------------------------------------------
		double wavelength;
		int errorcode;

		wavelength = double::Parse(txtsetwave->Text);

		errorcode = mpm.Set_Wavelength(wavelength);

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void btnSetAveraging_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------------------
		// Set Averaging Time(mse)
		// MPM can set 0.01msec～10000msec
		// 设置平均时间(mse)
		// MPM可设置0.01 ~10000msec
		// -------------------------------------------------------------------
		double ave_time;
		int errorcode;

		ave_time = double::Parse(txtsetavg->Text);

		errorcode = mpm.Set_Averaging_Time(ave_time);
		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void btnSetRangeAll_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------------------------
		// Set range for munal range
		// MPM-211/212 : 1～5 MPM213 : 1～4　　MPM215 : Nothing　　
		// 设置munal范围
		// mpm -211: 1~5 MPM213: 1~4 MPM215:无
		// ----------------------------------------------------------------

		int range;
		int errorcode;

		range = int::Parse(txtsetrange->Text);

		errorcode = mpm.Set_Range(range);
		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void btnSetUnit_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------
		// Set Power unit
		// 设置功率单位
		// ---------------------------------------------------
		MPM::Power_Unit unit;
		int errorcode;

		if (cmbunit->Text == "dBm")
			unit = MPM::Power_Unit::dBm;
		else
			unit = MPM::Power_Unit::mA;

		errorcode = mpm.Set_Unit(unit);

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void btnSetSlot_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------------
		// Set Range for each ch
		// 为每个通道设置范围
		// ----------------------------------------------------------
		int slot;
		int ch;
		int errorcode;
		int range;

		slot = int::Parse(txtr_slot->Text);          // Slot number 0 ～4//槽位号0 ~4
		ch = int::Parse(txtr_ch->Text);
		range = int::Parse(txte_range->Text);

		errorcode = mpm.Set_Range_Each_Channel(slot, ch, range);

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void btnGet_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------------
		// Get normal function parameter
		// 获取正常模式的函数参数
		// -----------------------------------------------------------
		MPM::READ_Range_Mode rangemode;
		int range;
		double wavelength;
		double averaging_time;
		int errorcode;
		MPM::Power_Unit unit;

		// ---get "READ"range mode
		// ---获取Range模式
		errorcode = mpm.Get_READ_Range_Mode(rangemode);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (rangemode == MPM::READ_Range_Mode::Auto)
			txtgetrmode->Text = "Auto";
		else
			txtgetrmode->Text = "Manual";

		// -----get setting range for all slot
		// -----获取所有槽位的设置范围
		errorcode = mpm.Get_Range(range);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtgetrang->Text = range.ToString();

		// ---get setting wavelength(nm)
		// ---获取设置波长
		errorcode = mpm.Get_Wavelength(wavelength);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtget_wave->Text = wavelength.ToString();

		// ---get setting averaging time(msec)
		// ---获取设置平均时间
		errorcode = mpm.Get_Averaging_Time(averaging_time);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtget_avg->Text = averaging_time.ToString();

		// ----get setting unit
		// ----获取设置单位
		errorcode = mpm.Get_Unit(unit);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (unit == MPM::Power_Unit::dBm | unit == MPM::Power_Unit::dBmA)
			txtget_unit->Text = "dBm";
		else
			txtget_unit->Text = "mW";
	}

	private: System::Void btnSlot_Ch_Range_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------------
		// Get Range for each ch
		// 获取每个通道的范围
		// ----------------------------------------------------------
		int slot;                 // Slot 0～
		int ch;                   // Ch 1～
		int range;
		int errorcode = 0;


		slot = int::Parse(txtget_rangeslot->Text);   // Slot 0～
		ch = int::Parse(txtget_rangech->Text);

		errorcode = mpm.Get_Range_Each_Channel(slot, ch, range);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtget_erange->Text = range.ToString();
	}

	private: System::Void btnSlot_Ch_Power_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------------------
		// Read Power for each ch
		// 读取每个通道的功率
		// -----------------------------------------------------------
		int slot;                         // Slot 0 ～4//槽位号0 ~4
		int ch;                           // ch 1～4 // 通道 1 ~ 4
		double power;
		int errorcode;

		slot = int::Parse(txtread_slot->Text);
		ch = int::Parse(txtread_ch->Text);

		errorcode = mpm.Get_READ_Power_Channel(slot, ch, power);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txt_readp_ch->Text = power.ToString();
	}

	private: System::Void btnSlot_Power_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------------
		// Read Power for Slot
		// 读取槽位功率
		// ----------------------------------------------------------
		int slot;                     // Slot 0～
		cli::array<System::Double>^power = nullptr;

		int errorcode;
		int loop1;
		String^ pow_string = String::Empty;

		slot = int::Parse(txtread_slotall->Text);

		errorcode = mpm.Get_READ_Power_for_Module(slot, power);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		for (loop1 = 0; loop1 <= power->GetUpperBound(0); loop1++)
		{
			if (loop1 == 0)
				pow_string = Convert::ToString(power[loop1]);
			else
				pow_string = pow_string + "," + Convert::ToString(power[loop1]);
		}

		txtreadp_all->Text = pow_string;
	}

	private: System::Void btnZeroing_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------
		// Zeroing function
		// 归零功能
		// -----------------------------------------------------
		int errorcode;

		errorcode = mpm.Zeroing();

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void btnGetWavelength_Click(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------------------------
		// Get Wavelength Sencitvity data for each ch
		// 获取每个通道的波长灵敏度数据
		// --------------------------------------------------------------------
		int slot;
		int ch;
		cli::array<float>^sence_data = nullptr;
		cli::array<System::Double>^wave_data = nullptr;

		int errorcode;

		slot = int::Parse(txtwave_slot->Text);         // Slot　0～
		ch = int::Parse(txtwave_ch->Text);             // Ch 1～

		errorcode = mpm.Get_Wavelength_Senctivity_Data(slot, ch, wave_data, sence_data);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}
		String^ filepath = String::Empty;           // faile path
		System::IO::StreamWriter^ writer;          // writer

		SaveFileDialog1->ShowDialog();
		filepath = SaveFileDialog1->FileName;

		writer = gcnew System::IO::StreamWriter(filepath);

		writer->WriteLine("Wavelength,Senctivity");

		for (int loop1 = 0; loop1 <= wave_data->GetUpperBound(0); loop1++)
			writer->WriteLine(Convert::ToString(wave_data[loop1]) + "," + Convert::ToString(sence_data[loop1]));

		writer->Close();
	}

	private: System::Void btnGetError_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------------------
		// Get MPM System Error
		// 获取MPM系统错误
		// ------------------------------------------------------------------
		int errorcode;
		String^ error_string = String::Empty;

		errorcode = mpm.Get_System_Error(error_string);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtsyst_error->Text = error_string;
	}

	private: System::Void btnGetIP_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------------
		// Get MPM IP Address
		// 获取MPM IP地址
		// ------------------------------------------------------------

		int errorcod;
		String^ ip = String::Empty;

		errorcod = mpm.Get_IPAddress(ip);

		if (errorcod != 0)
		{
			Show_Error(errorcod);
			return;
		}

		txtipaddress->Text = ip;
	}

	private: System::Void btnGetPort_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------
		// Get MPM LAN Port number
		// 获取MPM LAN端口号
		// ---------------------------------------------------

		int errorcod;
		int port;

		errorcod = mpm.Get_LAN_Portnumber(port);

		if (errorcod != 0)
		{
			Show_Error(errorcod);
			return;
		}

		txtlan_port->Text = port.ToString();

	}

	private: System::Void btnSetConst_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------------------------
		// Set Const Mode parameter
		// 设置Const模式参数
		// ------------------------------------------------------------------------
		double ave;                                   // Averaging time(msec) //平均时间(毫秒)
		int point;                                // number of logging point //测试数据点个数
		double wave;                                  // wavelength(nm)//波长(nm)
		MPM::Trigger_Input_Mode trigger_input_mode;    // trigger input mode     //触发输入模式
		MPM::Measurement_Mode logg_mode;               // Logging mode  / /测试模式
		int errorcode;                            // errorcode / /错误代码
		int range;                                // Range

		 // -----1.Setting for logging mode 
		 // -----1.测试模式设置
		if (cmbcon_rangemode->Text == "Auto")
			// Auto range mode
			logg_mode = MPM::Measurement_Mode::AutoRangeConstant;
		else
			// manual range mode 
			logg_mode = MPM::Measurement_Mode::ManualRangeConstant;

		errorcode = mpm.Set_Mode(logg_mode);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// -----2.Setting for averaging time (msec)
		// -----2.设置平均时间(msec)
		ave = double::Parse(txtcon_ave->Text);

		errorcode = mpm.Set_Averaging_Time(ave);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// -----3. Setting for logging number of point 
		// -----3. 设置测试点数
		point = int::Parse(txtcon_point->Text);

		errorcode = mpm.Set_Logging_Data_Point(point);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ----4. Setting for wavelength(nm)
		// ----4. 设置波长(nm)
		wave = int::Parse(txtcon_wave->Text);
		errorcode = mpm.Set_Wavelength(wave);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ----5. Setting for range(Manual range mode )
		// ----5. 范围设置(手动范围模式)
		if (cmbset_rangemode->Text == "Manual")
		{
			range = int::Parse(txtcon_range->Text);

			errorcode = mpm.Set_Range(range);
			if (errorcode != 0)
			{
				Show_Error(errorcode);
				return;
			}
		}

		// ----6. Setting for trigger input mode
		// ----6. 触发输入模式设置
		errorcode = mpm.Set_Trigger_Input_Mode(MPM::Trigger_Input_Mode::Extarnal);


		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void btnSetSweep_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------------------
		// Set Sweep mode parameter
		// 设置扫描模式参数
		// ------------------------------------------------------------------
		MPM::Measurement_Mode logg_mode;           // logging mode/ /测试模式
		double startwave;                         // start wavelength(nm) //开始波长(nm)
		double stopwave;                          // stop wavelength(nm) //停止波长(nm)
		double wavestep;                          // wavelength step(nm) //步进波长(nm)
		double speed;                             // sweep speed(nm/sec) //扫描速度(nm /秒)
		int range;                            // power range //功率范围
		int errorcode;                        // errorcode / /错误代码

		// ----1. Setting for logging mode 
		// -----1.测试模式设置
		if (cmbsm_rangemode->Text == "Auto")
			// Auto range mode
			logg_mode = MPM::Measurement_Mode::AutoRangeSweep;
		else
			// Manual range mode
			logg_mode = MPM::Measurement_Mode::ManualRangeSweep;

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
		errorcode = mpm.Set_Trigger_Input_Mode(MPM::Trigger_Input_Mode::Extarnal);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ---3. Setting for wavelength parameter
		// ---3. 波长参数设置
		startwave = double::Parse(txtstartwave->Text);
		stopwave = double::Parse(txtstopwave->Text);
		wavestep = double::Parse(txtwavestep->Text);

		errorcode = mpm.Set_Sweep_Wavelength(startwave, stopwave, wavestep);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ----4. Setting for sweep speed 
		// ----4. 扫描速度设置
		speed = double::Parse(txtspeed->Text);

		errorcode = mpm.Set_Sweep_Speed(speed);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ----5. Setting for Range with Maunal range
		// ----5. 设置rang范围
		if (cmbsm_rangemode->Text == "Manual")
		{
			range = int::Parse(txtsm_range->Text);
			errorcode = mpm.Set_Range(range);
			if (errorcode != 0)
			{
				Show_Error(errorcode);
				return;
			}
		}

	}

	private: System::Void btnSetFreerun_Click(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------------------------
		// Set Freerun mode parameter
		// 设置Freerun模式参数
		// -------------------------------------------------------------------
		double ave;                           // averaging time(msec)/ /平均时间(毫秒)
		int point;                        // number of sampling point //采样点个数
		MPM::Measurement_Mode logg_mode;       // logging mode / /测试模式
		double wave;                          // Wavelength(nm)/ /波长(nm)
		int range;                        // range
		int errorcode;                    // errorcode / /错误代码
		MPM::Trigger_Input_Mode t_inmode;      // Trigger input mode//触发输入模式

		// ----1. Setting for logging mode
		// Freerun can set only manual range mode
		// ----1. 测试模式设置
		// Freerun只能设置手动范围模式
		logg_mode = MPM::Measurement_Mode::Freerun;

		errorcode = mpm.Set_Mode(logg_mode);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ----2.Setting for  Range
		// ----2.设置Range
		range = int::Parse(txtfr_range->Text);

		errorcode = mpm.Set_Range(range);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ----3.Setting for averaging time 
		// ----3.平均时间设置
		ave = double::Parse(txtfr_ave->Text);

		errorcode = mpm.Set_Averaging_Time(ave);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ---4.Setting for number of logging point 
		// ---4.设置测试点的数量
		point = int::Parse(txtfr_point->Text);

		errorcode = mpm.Set_Logging_Data_Point(point);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ---5.Setting for wavelength
		// ---5.设置波长
		wave = double::Parse(txtfr_wave->Text);

		errorcode = mpm.Set_Wavelength(wave);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ----6.setting for trigger input mode
		// ----6.触发输入模式设置
		if (cmbfr_tin_mode->Text == "Internal")
			t_inmode = MPM::Trigger_Input_Mode::Internal;
		else
			t_inmode = MPM::Trigger_Input_Mode::Extarnal;

		errorcode = mpm.Set_Trigger_Input_Mode(t_inmode);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}
	}

	private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e) {
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

	private: System::Void btnStatus_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------------
		// Get logging status
		// 获取测试状态
		// -------------------------------------------------------
		int errorcode;
		int status;                   // logging status  0: not completed 1: completed -1: stopped //测试状态 0:未完成。1:已完成 -1:停止
		int count;                    // finished count of logging //完成测试计数

		errorcode = mpm.Get_Logging_Status(status, count);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtlog_status->Text = Convert::ToString(status) + "," + Convert::ToString(count);
	}

	private: System::Void btnStop_Click(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------------
		// logging stop
		// 测试停止
		// ----------------------------------------------------------
		int errorcode;

		errorcode = mpm.Logging_Stop();

		if (errorcode != 0)
			Show_Error(errorcode);
	}

	private: System::Void btnGetch_Click(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------------
		// Get Logging data
		// 获取日志数据
		// ---------------------------------------------------------
		int errorcode;
		int slot;                         // Slot 0～
		int ch;                           // ch　1～
		cli::array<float>^logdata = nullptr;   // logging data/ /日志数据
		slot = int::Parse(txtlog_slot->Text);
		ch = int::Parse(txtlog_ch->Text);

		errorcode = mpm.Get_Each_Channel_Logdata(slot, ch, logdata);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ----Save data for csv file
		// ----保存数据为csv文件
		String^ filepath = String::Empty;               // save file path//保存文件路径
		System::IO::StreamWriter^ writer;
		int loop1;

		SaveFileDialog1->ShowDialog();

		filepath = SaveFileDialog1->FileName;

		writer = gcnew System::IO::StreamWriter(filepath);

		for (loop1 = 0; loop1 <= logdata->GetUpperBound(0); loop1++)
			writer->WriteLine(logdata[loop1]);

		writer->Close();
	}

	private: System::Void btnGetSlot_Click(System::Object^  sender, System::EventArgs^  e) {

		// ------------------------------------------------------------------------
		// Get Logging data for slot
		// 获取模块的日志数据
		// -----------------------------------------------------------------------
		int errorcode;
		cli::array<float, 2>^logdata = nullptr;
		int slot;                             // slot 0～

		slot = int::Parse(txte_slot->Text);

		errorcode = mpm.Get_Each_Module_Loggdata(slot, logdata);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		// ----Save data for csv file
		// ----保存数据为csv文件
		String^ filepath = String::Empty;               // save file path//保存文件路径
		System::IO::StreamWriter^ writer;
		int numberofch;                           // number of channel//通道数
		int loop1;
		int loop2;
		String^ write_st = String::Empty;

		numberofch = logdata->GetLength(0) - 1;

		SaveFileDialog1->ShowDialog();
		filepath = SaveFileDialog1->FileName;
		writer = gcnew System::IO::StreamWriter(filepath, false, System::Text::Encoding::GetEncoding("Shift-jis"));

		// heddre write
		for (loop1 = 0; loop1 <= numberofch; loop1++)
			write_st = write_st + ",Ch" + System::Convert::ToString(loop1 + 1);

		writer->WriteLine(write_st);

		for (loop1 = 0; loop1 <= logdata->GetLength(1) - 1; loop1++)
		{
			write_st = System::Convert::ToString(loop1 + 1);
			for (loop2 = 0; loop2 <= numberofch; loop2++)

				write_st = write_st + "," + System::Convert::ToString(logdata[loop2, loop1]);

			writer->WriteLine(write_st);
		}

		writer->Close();
	}

	private: System::Void btnGetParameter_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------------------------
		// Get Logging mode parameter
		// 获取测试模式参数
		// -----------------------------------------------------------------------
		MPM::Measurement_Mode logmode;
		int errorcode;

		// --Get logging mode
		// --获取测试模式
		errorcode = mpm.Get_Mode(logmode);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (logmode == MPM::Measurement_Mode::AutoRangeConstant)
		{
			txtg_rangemode->Text = "Auto";
			txtlog_mode->Text = "Const2";
		}
		else if (logmode == MPM::Measurement_Mode::ManualRangeConstant)
		{
			txtg_rangemode->Text = "Manual";
			txtlog_mode->Text = "Const1";
		}
		else if (logmode == MPM::Measurement_Mode::AutoRangeSweep)
		{
			txtg_rangemode->Text = "Auto";
			txtlog_mode->Text = "Sweep2";
		}
		else if (logmode == MPM::Measurement_Mode::ManualRangeSweep)
		{
			txtlog_mode->Text = "Sweep1";
			txtg_rangemode->Text = "Manual";
		}
		else
		{
			txtlog_mode->Text = "Freerun";
			txtg_rangemode->Text = "Manual";
		}

		// ----Get averaging time(msec)
		// ----获取平均时间(msec)
		double ave;

		errorcode = mpm.Get_Averaging_Time(ave);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_ave->Text = ave.ToString();

		if (txtlog_mode->Text->IndexOf("Sweep") != -1)
			// if WMOD is Sweep , Get_Averaging_Time function is not available.
			//如果WMOD是Sweep, Get_Averaging_Time函数不可用。
			txtg_ave->Text = "";

		// ----Get logging nubmer of point 
		// ----获取测试点数
		int point;

		errorcode = mpm.Get_Logging_Data_Point(point);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_point->Text = point.ToString();

		// ---Get Wavelength            
		// ---获取波长
		double wave;    // wavelength(nm)

		errorcode = mpm.Get_Wavelength(wave);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtg_wavelength->Text = wave.ToString();

		// ----Get Trigger input mode 
		// ----获取触发器输入模式
		MPM::Trigger_Input_Mode inputmode;

		errorcode = mpm.Get_Trigger_Input_Mode(inputmode);
		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		if (inputmode == MPM::Trigger_Input_Mode::Extarnal)
			txtg_tinmode->Text = "Extarnal";
		else
			txtg_tinmode->Text = "Internal";

		// ----Get Setting range 
		// ----获取设置rane
		if (txtg_rangemode->Text == "Manual")
		{
			int range;
			errorcode = mpm.Get_Range(range);
			if (errorcode != 0)
			{
				Show_Error(errorcode);
				return;
			}

			txtg_settingrange->Text = range.ToString();
		}
		else
			txtg_settingrange->Text = "";

		// -----Sweep mode parameter 
		// -----扫描模式参数
		if (txtlog_mode->Text->IndexOf("Sweep") > -1)
		{
			double startwave;             // startwave (nm)
			double stopwave;               // stopwave(nm)
			double wavestep;               // wavelength step(nm)
			double speed;                  // sweep speed(nm/sec)

			// wavelength parameter
			// 波长参数
			errorcode = mpm.Get_Sweep_Wavelength(startwave, stopwave, wavestep);
			if (errorcode != 0)
			{
				Show_Error(errorcode);
				return;
			}

			txtg_statwave->Text = startwave.ToString();
			txtg_stopwave->Text = stopwave.ToString();
			txtg_stepwave->Text = wavestep.ToString();

			// sweep speed
			// 扫描速度
			errorcode = mpm.Get_Sweep_Speed(speed);
			if (errorcode != 0)
			{
				Show_Error(errorcode);
				return;
			}

			txtg_speed->Text = speed.ToString();
		}
	}

	private: System::Void rdo488_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------
		// 488.2 Checked
		// -------------------------------------------
		txtport->Enabled = false;
		txtaddress->Text = txtsp_add->Text;
	}

	private: System::Void rdovisa_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------
		// NI visa checked
		// --------------------------------------
		txtport->Enabled = false;
		txtaddress->Text = txtsp_add->Text;
	}

	private: System::Void rdolan_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// ---------------------------------------------------------
		// LAN Checked
		// ----------------------------------------------------------
		txtport->Enabled = true;
	}

	private: System::Void rdo232C_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------
		// 232C checked 
		// -----------------------------------
		txtport->Enabled = false;
		txtaddress->Text = cmbcomport->Text;
	}

	private: System::Void rdokeysightvisa_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------
		// Keysight visa checked
		// --------------------------------------
		txtport->Enabled = false;
		txtaddress->Text = txtsp_add->Text;
	}
	};
}
