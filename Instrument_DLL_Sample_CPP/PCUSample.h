#pragma once

namespace Instrument_DLL_Sample_CPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Santec;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// PCUSample 摘要
	/// </summary>
	public ref class PCUSample : public System::Windows::Forms::Form
	{
	public:
		PCUSample(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	internal: System::Windows::Forms::Button^  btnGetPort;
	public:
	internal: System::Windows::Forms::Label^  Label17;
	internal: System::Windows::Forms::TextBox^  txtlan_port;
	internal: System::Windows::Forms::Label^  Label16;
	internal: System::Windows::Forms::TextBox^  txtip_add;
	internal: System::Windows::Forms::Button^  btnGetIP;
			  PCU PCU;//pcu control class/ / pcu控制类

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~PCUSample()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Label^  Label13;
	protected:
	internal: System::Windows::Forms::Label^  Label12;
	internal: System::Windows::Forms::TextBox^  txtdev_num;
	internal: System::Windows::Forms::Label^  Label14;
	internal: System::Windows::Forms::TextBox^  txt100controlid;
	internal: System::Windows::Forms::Label^  Label3;
	internal: System::Windows::Forms::TextBox^  txtport;
	internal: System::Windows::Forms::RadioButton^  rdolan;
	internal: System::Windows::Forms::RadioButton^  rdousb;
	internal: System::Windows::Forms::RadioButton^  rdokeysightvisa;
	internal: System::Windows::Forms::RadioButton^  rdonivisa;
	internal: System::Windows::Forms::ComboBox^  cmb100controlid;
	internal: System::Windows::Forms::Label^  Label11;
	internal: System::Windows::Forms::Label^  Label10;
	internal: System::Windows::Forms::TextBox^  txtaddressnum;
	internal: System::Windows::Forms::TextBox^  txtboad;
	internal: System::Windows::Forms::Button^  btnSplit;
	internal: System::Windows::Forms::GroupBox^  GroupBox5;
	internal: System::Windows::Forms::GroupBox^  GroupBox7;
	internal: System::Windows::Forms::TextBox^  txtcurrentrange;
	internal: System::Windows::Forms::Button^  btnAdjust_Range;
	internal: System::Windows::Forms::Button^  btnGet_Range;
	internal: System::Windows::Forms::GroupBox^  GroupBox6;
	internal: System::Windows::Forms::Label^  Label7;
	internal: System::Windows::Forms::Button^  btnSet_SOP;
	internal: System::Windows::Forms::ComboBox^  cmbsop;
	internal: System::Windows::Forms::Label^  Label9;
	internal: System::Windows::Forms::GroupBox^  GroupBox10;
	internal: System::Windows::Forms::Button^  btnControl_ID;
	internal: System::Windows::Forms::Button^  btnGet_resouce;
	internal: System::Windows::Forms::Label^  Label8;
	internal: System::Windows::Forms::Button^  btnUsb_resouce;
	internal: System::Windows::Forms::ComboBox^  cmbusbresouce;
	internal: System::Windows::Forms::ComboBox^  cmbgpib_resouce;
	internal: System::Windows::Forms::RadioButton^  rdo488;
	internal: System::Windows::Forms::GroupBox^  GroupBox1;
	internal: System::Windows::Forms::GroupBox^  GroupBox9;
	internal: System::Windows::Forms::RadioButton^  rdo110;
	internal: System::Windows::Forms::RadioButton^  rdo100;
	internal: System::Windows::Forms::GroupBox^  GroupBox2;
	internal: System::Windows::Forms::Label^  lblwavelength;
	internal: System::Windows::Forms::Label^  lblserial;
	internal: System::Windows::Forms::Label^  lblvesion;
	internal: System::Windows::Forms::Label^  lblprduct;
	internal: System::Windows::Forms::Label^  Label15;
	internal: System::Windows::Forms::Label^  Label6;
	internal: System::Windows::Forms::Label^  Label5;
	internal: System::Windows::Forms::Label^  Label4;
	internal: System::Windows::Forms::GroupBox^  GroupBox4;
	internal: System::Windows::Forms::RadioButton^  rdocrlf;
	internal: System::Windows::Forms::RadioButton^  rdolf;
	internal: System::Windows::Forms::RadioButton^  rdocr;
	internal: System::Windows::Forms::Button^  btnDisConnect;
	internal: System::Windows::Forms::Button^  btnConnect;
	internal: System::Windows::Forms::GroupBox^  GroupBox3;
	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::TextBox^  txtaddress;

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
			this->Label13 = (gcnew System::Windows::Forms::Label());
			this->Label12 = (gcnew System::Windows::Forms::Label());
			this->txtdev_num = (gcnew System::Windows::Forms::TextBox());
			this->Label14 = (gcnew System::Windows::Forms::Label());
			this->txt100controlid = (gcnew System::Windows::Forms::TextBox());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->txtport = (gcnew System::Windows::Forms::TextBox());
			this->rdolan = (gcnew System::Windows::Forms::RadioButton());
			this->rdousb = (gcnew System::Windows::Forms::RadioButton());
			this->rdokeysightvisa = (gcnew System::Windows::Forms::RadioButton());
			this->rdonivisa = (gcnew System::Windows::Forms::RadioButton());
			this->cmb100controlid = (gcnew System::Windows::Forms::ComboBox());
			this->Label11 = (gcnew System::Windows::Forms::Label());
			this->Label10 = (gcnew System::Windows::Forms::Label());
			this->txtaddressnum = (gcnew System::Windows::Forms::TextBox());
			this->txtboad = (gcnew System::Windows::Forms::TextBox());
			this->btnSplit = (gcnew System::Windows::Forms::Button());
			this->GroupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->btnGetPort = (gcnew System::Windows::Forms::Button());
			this->Label17 = (gcnew System::Windows::Forms::Label());
			this->txtlan_port = (gcnew System::Windows::Forms::TextBox());
			this->Label16 = (gcnew System::Windows::Forms::Label());
			this->txtip_add = (gcnew System::Windows::Forms::TextBox());
			this->btnGetIP = (gcnew System::Windows::Forms::Button());
			this->GroupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->txtcurrentrange = (gcnew System::Windows::Forms::TextBox());
			this->btnAdjust_Range = (gcnew System::Windows::Forms::Button());
			this->btnGet_Range = (gcnew System::Windows::Forms::Button());
			this->GroupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->Label7 = (gcnew System::Windows::Forms::Label());
			this->btnSet_SOP = (gcnew System::Windows::Forms::Button());
			this->cmbsop = (gcnew System::Windows::Forms::ComboBox());
			this->Label9 = (gcnew System::Windows::Forms::Label());
			this->GroupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->btnControl_ID = (gcnew System::Windows::Forms::Button());
			this->btnGet_resouce = (gcnew System::Windows::Forms::Button());
			this->Label8 = (gcnew System::Windows::Forms::Label());
			this->btnUsb_resouce = (gcnew System::Windows::Forms::Button());
			this->cmbusbresouce = (gcnew System::Windows::Forms::ComboBox());
			this->cmbgpib_resouce = (gcnew System::Windows::Forms::ComboBox());
			this->rdo488 = (gcnew System::Windows::Forms::RadioButton());
			this->GroupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->GroupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->rdo110 = (gcnew System::Windows::Forms::RadioButton());
			this->rdo100 = (gcnew System::Windows::Forms::RadioButton());
			this->GroupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblwavelength = (gcnew System::Windows::Forms::Label());
			this->lblserial = (gcnew System::Windows::Forms::Label());
			this->lblvesion = (gcnew System::Windows::Forms::Label());
			this->lblprduct = (gcnew System::Windows::Forms::Label());
			this->Label15 = (gcnew System::Windows::Forms::Label());
			this->Label6 = (gcnew System::Windows::Forms::Label());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->GroupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->rdocrlf = (gcnew System::Windows::Forms::RadioButton());
			this->rdolf = (gcnew System::Windows::Forms::RadioButton());
			this->rdocr = (gcnew System::Windows::Forms::RadioButton());
			this->btnDisConnect = (gcnew System::Windows::Forms::Button());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->GroupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->txtaddress = (gcnew System::Windows::Forms::TextBox());
			this->GroupBox5->SuspendLayout();
			this->GroupBox7->SuspendLayout();
			this->GroupBox6->SuspendLayout();
			this->GroupBox10->SuspendLayout();
			this->GroupBox1->SuspendLayout();
			this->GroupBox9->SuspendLayout();
			this->GroupBox2->SuspendLayout();
			this->GroupBox4->SuspendLayout();
			this->GroupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Label13
			// 
			this->Label13->AutoSize = true;
			this->Label13->Location = System::Drawing::Point(599, 23);
			this->Label13->Name = L"Label13";
			this->Label13->Size = System::Drawing::Size(100, 13);
			this->Label13->TabIndex = 15;
			this->Label13->Text = L"PCU-100 Control ID";
			// 
			// Label12
			// 
			this->Label12->AutoSize = true;
			this->Label12->Location = System::Drawing::Point(476, 23);
			this->Label12->Name = L"Label12";
			this->Label12->Size = System::Drawing::Size(102, 13);
			this->Label12->TabIndex = 13;
			this->Label12->Text = L"USB device number";
			// 
			// txtdev_num
			// 
			this->txtdev_num->Location = System::Drawing::Point(478, 39);
			this->txtdev_num->Name = L"txtdev_num";
			this->txtdev_num->Size = System::Drawing::Size(104, 20);
			this->txtdev_num->TabIndex = 12;
			// 
			// Label14
			// 
			this->Label14->AutoSize = true;
			this->Label14->Location = System::Drawing::Point(247, 44);
			this->Label14->Name = L"Label14";
			this->Label14->Size = System::Drawing::Size(100, 13);
			this->Label14->TabIndex = 16;
			this->Label14->Text = L"PCU-100 Control ID";
			// 
			// txt100controlid
			// 
			this->txt100controlid->Location = System::Drawing::Point(246, 59);
			this->txt100controlid->Name = L"txt100controlid";
			this->txt100controlid->Size = System::Drawing::Size(115, 20);
			this->txt100controlid->TabIndex = 7;
			// 
			// Label3
			// 
			this->Label3->AutoSize = true;
			this->Label3->Location = System::Drawing::Point(133, 47);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(64, 13);
			this->Label3->TabIndex = 6;
			this->Label3->Text = L"Port number";
			// 
			// txtport
			// 
			this->txtport->Enabled = false;
			this->txtport->Location = System::Drawing::Point(135, 61);
			this->txtport->Name = L"txtport";
			this->txtport->Size = System::Drawing::Size(87, 20);
			this->txtport->TabIndex = 5;
			// 
			// rdolan
			// 
			this->rdolan->AutoSize = true;
			this->rdolan->Location = System::Drawing::Point(24, 62);
			this->rdolan->Name = L"rdolan";
			this->rdolan->Size = System::Drawing::Size(95, 17);
			this->rdolan->TabIndex = 4;
			this->rdolan->TabStop = true;
			this->rdolan->Text = L"LAN(PCU-110)";
			this->rdolan->UseVisualStyleBackColor = true;
			this->rdolan->CheckedChanged += gcnew System::EventHandler(this, &PCUSample::rdolan_CheckedChanged);
			// 
			// rdousb
			// 
			this->rdousb->AutoSize = true;
			this->rdousb->Location = System::Drawing::Point(250, 20);
			this->rdousb->Name = L"rdousb";
			this->rdousb->Size = System::Drawing::Size(96, 17);
			this->rdousb->TabIndex = 3;
			this->rdousb->TabStop = true;
			this->rdousb->Text = L"USB(PCU-110)";
			this->rdousb->UseVisualStyleBackColor = true;
			this->rdousb->CheckedChanged += gcnew System::EventHandler(this, &PCUSample::rdousb_CheckedChanged);
			// 
			// rdokeysightvisa
			// 
			this->rdokeysightvisa->AutoSize = true;
			this->rdokeysightvisa->Location = System::Drawing::Point(149, 20);
			this->rdokeysightvisa->Name = L"rdokeysightvisa";
			this->rdokeysightvisa->Size = System::Drawing::Size(88, 17);
			this->rdokeysightvisa->TabIndex = 2;
			this->rdokeysightvisa->TabStop = true;
			this->rdokeysightvisa->Text = L"Keysight Visa";
			this->rdokeysightvisa->UseVisualStyleBackColor = true;
			this->rdokeysightvisa->CheckedChanged += gcnew System::EventHandler(this, &PCUSample::rdokeysightvisa_CheckedChanged);
			// 
			// rdonivisa
			// 
			this->rdonivisa->AutoSize = true;
			this->rdonivisa->Location = System::Drawing::Point(86, 21);
			this->rdonivisa->Name = L"rdonivisa";
			this->rdonivisa->Size = System::Drawing::Size(56, 17);
			this->rdonivisa->TabIndex = 1;
			this->rdonivisa->TabStop = true;
			this->rdonivisa->Text = L"NIVisa";
			this->rdonivisa->UseVisualStyleBackColor = true;
			this->rdonivisa->CheckedChanged += gcnew System::EventHandler(this, &PCUSample::rdonivisa_CheckedChanged);
			// 
			// cmb100controlid
			// 
			this->cmb100controlid->FormattingEnabled = true;
			this->cmb100controlid->Location = System::Drawing::Point(601, 37);
			this->cmb100controlid->Name = L"cmb100controlid";
			this->cmb100controlid->Size = System::Drawing::Size(114, 21);
			this->cmb100controlid->TabIndex = 14;
			this->cmb100controlid->SelectedIndexChanged += gcnew System::EventHandler(this, &PCUSample::cmb100controlid_SelectedIndexChanged);
			// 
			// Label11
			// 
			this->Label11->AutoSize = true;
			this->Label11->Location = System::Drawing::Point(276, 20);
			this->Label11->Name = L"Label11";
			this->Label11->Size = System::Drawing::Size(73, 13);
			this->Label11->TabIndex = 11;
			this->Label11->Text = L"GPIB Address";
			// 
			// Label10
			// 
			this->Label10->AutoSize = true;
			this->Label10->Location = System::Drawing::Point(209, 20);
			this->Label10->Name = L"Label10";
			this->Label10->Size = System::Drawing::Size(60, 13);
			this->Label10->TabIndex = 10;
			this->Label10->Text = L"GPIB Boad";
			// 
			// txtaddressnum
			// 
			this->txtaddressnum->Location = System::Drawing::Point(277, 37);
			this->txtaddressnum->Name = L"txtaddressnum";
			this->txtaddressnum->Size = System::Drawing::Size(63, 20);
			this->txtaddressnum->TabIndex = 9;
			// 
			// txtboad
			// 
			this->txtboad->Location = System::Drawing::Point(211, 37);
			this->txtboad->Name = L"txtboad";
			this->txtboad->Size = System::Drawing::Size(57, 20);
			this->txtboad->TabIndex = 8;
			// 
			// btnSplit
			// 
			this->btnSplit->Location = System::Drawing::Point(211, 61);
			this->btnSplit->Name = L"btnSplit";
			this->btnSplit->Size = System::Drawing::Size(129, 28);
			this->btnSplit->TabIndex = 7;
			this->btnSplit->Text = L"split";
			this->btnSplit->UseVisualStyleBackColor = true;
			this->btnSplit->Click += gcnew System::EventHandler(this, &PCUSample::btnSplit_Click);
			// 
			// GroupBox5
			// 
			this->GroupBox5->Controls->Add(this->btnGetPort);
			this->GroupBox5->Controls->Add(this->Label17);
			this->GroupBox5->Controls->Add(this->txtlan_port);
			this->GroupBox5->Controls->Add(this->Label16);
			this->GroupBox5->Controls->Add(this->txtip_add);
			this->GroupBox5->Controls->Add(this->btnGetIP);
			this->GroupBox5->Controls->Add(this->GroupBox7);
			this->GroupBox5->Controls->Add(this->GroupBox6);
			this->GroupBox5->Location = System::Drawing::Point(30, 430);
			this->GroupBox5->Name = L"GroupBox5";
			this->GroupBox5->Size = System::Drawing::Size(746, 149);
			this->GroupBox5->TabIndex = 11;
			this->GroupBox5->TabStop = false;
			this->GroupBox5->Text = L"2.Function";
			// 
			// btnGetPort
			// 
			this->btnGetPort->Location = System::Drawing::Point(478, 108);
			this->btnGetPort->Name = L"btnGetPort";
			this->btnGetPort->Size = System::Drawing::Size(94, 26);
			this->btnGetPort->TabIndex = 30;
			this->btnGetPort->Text = L"Get LAN Port";
			this->btnGetPort->UseVisualStyleBackColor = true;
			this->btnGetPort->Click += gcnew System::EventHandler(this, &PCUSample::btnGetPort_Click);
			// 
			// Label17
			// 
			this->Label17->AutoSize = true;
			this->Label17->Location = System::Drawing::Point(330, 95);
			this->Label17->Name = L"Label17";
			this->Label17->Size = System::Drawing::Size(88, 13);
			this->Label17->TabIndex = 29;
			this->Label17->Text = L"LAN Port number";
			// 
			// txtlan_port
			// 
			this->txtlan_port->Enabled = false;
			this->txtlan_port->Location = System::Drawing::Point(332, 111);
			this->txtlan_port->Name = L"txtlan_port";
			this->txtlan_port->Size = System::Drawing::Size(135, 20);
			this->txtlan_port->TabIndex = 28;
			// 
			// Label16
			// 
			this->Label16->AutoSize = true;
			this->Label16->Location = System::Drawing::Point(62, 95);
			this->Label16->Name = L"Label16";
			this->Label16->Size = System::Drawing::Size(58, 13);
			this->Label16->TabIndex = 27;
			this->Label16->Text = L"IP Address";
			// 
			// txtip_add
			// 
			this->txtip_add->Enabled = false;
			this->txtip_add->Location = System::Drawing::Point(57, 111);
			this->txtip_add->Name = L"txtip_add";
			this->txtip_add->Size = System::Drawing::Size(135, 20);
			this->txtip_add->TabIndex = 26;
			// 
			// btnGetIP
			// 
			this->btnGetIP->Location = System::Drawing::Point(198, 108);
			this->btnGetIP->Name = L"btnGetIP";
			this->btnGetIP->Size = System::Drawing::Size(94, 26);
			this->btnGetIP->TabIndex = 25;
			this->btnGetIP->Text = L"Get IP Address";
			this->btnGetIP->UseVisualStyleBackColor = true;
			this->btnGetIP->Click += gcnew System::EventHandler(this, &PCUSample::btnGetIP_Click);
			// 
			// GroupBox7
			// 
			this->GroupBox7->Controls->Add(this->txtcurrentrange);
			this->GroupBox7->Controls->Add(this->btnAdjust_Range);
			this->GroupBox7->Controls->Add(this->btnGet_Range);
			this->GroupBox7->Location = System::Drawing::Point(333, 20);
			this->GroupBox7->Name = L"GroupBox7";
			this->GroupBox7->Size = System::Drawing::Size(343, 70);
			this->GroupBox7->TabIndex = 5;
			this->GroupBox7->TabStop = false;
			this->GroupBox7->Text = L"Power Control";
			// 
			// txtcurrentrange
			// 
			this->txtcurrentrange->Enabled = false;
			this->txtcurrentrange->Location = System::Drawing::Point(249, 28);
			this->txtcurrentrange->Name = L"txtcurrentrange";
			this->txtcurrentrange->Size = System::Drawing::Size(72, 20);
			this->txtcurrentrange->TabIndex = 3;
			// 
			// btnAdjust_Range
			// 
			this->btnAdjust_Range->Location = System::Drawing::Point(45, 24);
			this->btnAdjust_Range->Name = L"btnAdjust_Range";
			this->btnAdjust_Range->Size = System::Drawing::Size(89, 29);
			this->btnAdjust_Range->TabIndex = 4;
			this->btnAdjust_Range->Text = L"Adjust range";
			this->btnAdjust_Range->UseVisualStyleBackColor = true;
			this->btnAdjust_Range->Click += gcnew System::EventHandler(this, &PCUSample::btnAdjust_Range_Click);
			// 
			// btnGet_Range
			// 
			this->btnGet_Range->Location = System::Drawing::Point(162, 25);
			this->btnGet_Range->Name = L"btnGet_Range";
			this->btnGet_Range->Size = System::Drawing::Size(81, 27);
			this->btnGet_Range->TabIndex = 1;
			this->btnGet_Range->Text = L"Get Range";
			this->btnGet_Range->UseVisualStyleBackColor = true;
			this->btnGet_Range->Click += gcnew System::EventHandler(this, &PCUSample::btnGet_Range_Click);
			// 
			// GroupBox6
			// 
			this->GroupBox6->Controls->Add(this->Label7);
			this->GroupBox6->Controls->Add(this->btnSet_SOP);
			this->GroupBox6->Controls->Add(this->cmbsop);
			this->GroupBox6->Location = System::Drawing::Point(15, 20);
			this->GroupBox6->Name = L"GroupBox6";
			this->GroupBox6->Size = System::Drawing::Size(277, 70);
			this->GroupBox6->TabIndex = 4;
			this->GroupBox6->TabStop = false;
			this->GroupBox6->Text = L"SOP Control";
			// 
			// Label7
			// 
			this->Label7->AutoSize = true;
			this->Label7->Location = System::Drawing::Point(47, 16);
			this->Label7->Name = L"Label7";
			this->Label7->Size = System::Drawing::Size(62, 13);
			this->Label7->TabIndex = 2;
			this->Label7->Text = L"SOP Stauts";
			// 
			// btnSet_SOP
			// 
			this->btnSet_SOP->Location = System::Drawing::Point(183, 29);
			this->btnSet_SOP->Name = L"btnSet_SOP";
			this->btnSet_SOP->Size = System::Drawing::Size(82, 26);
			this->btnSet_SOP->TabIndex = 1;
			this->btnSet_SOP->Text = L"Set";
			this->btnSet_SOP->UseVisualStyleBackColor = true;
			this->btnSet_SOP->Click += gcnew System::EventHandler(this, &PCUSample::btnSet_SOP_Click);
			// 
			// cmbsop
			// 
			this->cmbsop->FormattingEnabled = true;
			this->cmbsop->Location = System::Drawing::Point(42, 33);
			this->cmbsop->Name = L"cmbsop";
			this->cmbsop->Size = System::Drawing::Size(135, 21);
			this->cmbsop->TabIndex = 0;
			// 
			// Label9
			// 
			this->Label9->AutoSize = true;
			this->Label9->Location = System::Drawing::Point(25, 18);
			this->Label9->Name = L"Label9";
			this->Label9->Size = System::Drawing::Size(96, 13);
			this->Label9->TabIndex = 5;
			this->Label9->Text = L"Visa GPIB resouce";
			// 
			// GroupBox10
			// 
			this->GroupBox10->Controls->Add(this->btnControl_ID);
			this->GroupBox10->Controls->Add(this->Label13);
			this->GroupBox10->Controls->Add(this->cmb100controlid);
			this->GroupBox10->Controls->Add(this->Label12);
			this->GroupBox10->Controls->Add(this->txtdev_num);
			this->GroupBox10->Controls->Add(this->Label11);
			this->GroupBox10->Controls->Add(this->Label10);
			this->GroupBox10->Controls->Add(this->txtaddressnum);
			this->GroupBox10->Controls->Add(this->txtboad);
			this->GroupBox10->Controls->Add(this->btnSplit);
			this->GroupBox10->Controls->Add(this->btnGet_resouce);
			this->GroupBox10->Controls->Add(this->Label9);
			this->GroupBox10->Controls->Add(this->Label8);
			this->GroupBox10->Controls->Add(this->btnUsb_resouce);
			this->GroupBox10->Controls->Add(this->cmbusbresouce);
			this->GroupBox10->Controls->Add(this->cmbgpib_resouce);
			this->GroupBox10->Location = System::Drawing::Point(30, 20);
			this->GroupBox10->Name = L"GroupBox10";
			this->GroupBox10->Size = System::Drawing::Size(746, 105);
			this->GroupBox10->TabIndex = 12;
			this->GroupBox10->TabStop = false;
			this->GroupBox10->Text = L"0. Connect tool";
			// 
			// btnControl_ID
			// 
			this->btnControl_ID->Location = System::Drawing::Point(645, 65);
			this->btnControl_ID->Name = L"btnControl_ID";
			this->btnControl_ID->Size = System::Drawing::Size(70, 28);
			this->btnControl_ID->TabIndex = 16;
			this->btnControl_ID->Text = L"Get";
			this->btnControl_ID->UseVisualStyleBackColor = true;
			this->btnControl_ID->Click += gcnew System::EventHandler(this, &PCUSample::btnControl_ID_Click);
			// 
			// btnGet_resouce
			// 
			this->btnGet_resouce->Location = System::Drawing::Point(116, 60);
			this->btnGet_resouce->Name = L"btnGet_resouce";
			this->btnGet_resouce->Size = System::Drawing::Size(72, 29);
			this->btnGet_resouce->TabIndex = 6;
			this->btnGet_resouce->Text = L"Get";
			this->btnGet_resouce->UseVisualStyleBackColor = true;
			this->btnGet_resouce->Click += gcnew System::EventHandler(this, &PCUSample::btnGet_resouce_Click);
			// 
			// Label8
			// 
			this->Label8->AutoSize = true;
			this->Label8->Location = System::Drawing::Point(363, 21);
			this->Label8->Name = L"Label8";
			this->Label8->Size = System::Drawing::Size(67, 13);
			this->Label8->TabIndex = 4;
			this->Label8->Text = L"Usb resouce";
			// 
			// btnUsb_resouce
			// 
			this->btnUsb_resouce->Location = System::Drawing::Point(402, 65);
			this->btnUsb_resouce->Name = L"btnUsb_resouce";
			this->btnUsb_resouce->Size = System::Drawing::Size(70, 28);
			this->btnUsb_resouce->TabIndex = 3;
			this->btnUsb_resouce->Text = L"Get";
			this->btnUsb_resouce->UseVisualStyleBackColor = true;
			this->btnUsb_resouce->Click += gcnew System::EventHandler(this, &PCUSample::btnUsb_resouce_Click);
			// 
			// cmbusbresouce
			// 
			this->cmbusbresouce->FormattingEnabled = true;
			this->cmbusbresouce->Location = System::Drawing::Point(365, 37);
			this->cmbusbresouce->Name = L"cmbusbresouce";
			this->cmbusbresouce->Size = System::Drawing::Size(107, 21);
			this->cmbusbresouce->TabIndex = 1;
			this->cmbusbresouce->SelectedIndexChanged += gcnew System::EventHandler(this, &PCUSample::cmbusbresouce_SelectedIndexChanged);
			// 
			// cmbgpib_resouce
			// 
			this->cmbgpib_resouce->FormattingEnabled = true;
			this->cmbgpib_resouce->Location = System::Drawing::Point(27, 35);
			this->cmbgpib_resouce->Name = L"cmbgpib_resouce";
			this->cmbgpib_resouce->Size = System::Drawing::Size(161, 21);
			this->cmbgpib_resouce->TabIndex = 0;
			// 
			// rdo488
			// 
			this->rdo488->AutoSize = true;
			this->rdo488->Location = System::Drawing::Point(20, 22);
			this->rdo488->Name = L"rdo488";
			this->rdo488->Size = System::Drawing::Size(63, 17);
			this->rdo488->TabIndex = 0;
			this->rdo488->TabStop = true;
			this->rdo488->Text = L"NI488.2";
			this->rdo488->UseVisualStyleBackColor = true;
			this->rdo488->CheckedChanged += gcnew System::EventHandler(this, &PCUSample::rdo488_CheckedChanged);
			// 
			// GroupBox1
			// 
			this->GroupBox1->Controls->Add(this->GroupBox9);
			this->GroupBox1->Controls->Add(this->GroupBox2);
			this->GroupBox1->Controls->Add(this->GroupBox4);
			this->GroupBox1->Controls->Add(this->btnDisConnect);
			this->GroupBox1->Controls->Add(this->btnConnect);
			this->GroupBox1->Controls->Add(this->GroupBox3);
			this->GroupBox1->Controls->Add(this->Label2);
			this->GroupBox1->Controls->Add(this->txtaddress);
			this->GroupBox1->Location = System::Drawing::Point(30, 131);
			this->GroupBox1->Name = L"GroupBox1";
			this->GroupBox1->Size = System::Drawing::Size(746, 293);
			this->GroupBox1->TabIndex = 10;
			this->GroupBox1->TabStop = false;
			this->GroupBox1->Text = L"1. Connect";
			// 
			// GroupBox9
			// 
			this->GroupBox9->Controls->Add(this->rdo110);
			this->GroupBox9->Controls->Add(this->rdo100);
			this->GroupBox9->Location = System::Drawing::Point(19, 20);
			this->GroupBox9->Name = L"GroupBox9";
			this->GroupBox9->Size = System::Drawing::Size(173, 75);
			this->GroupBox9->TabIndex = 9;
			this->GroupBox9->TabStop = false;
			this->GroupBox9->Text = L"Target";
			// 
			// rdo110
			// 
			this->rdo110->AutoSize = true;
			this->rdo110->Location = System::Drawing::Point(45, 42);
			this->rdo110->Name = L"rdo110";
			this->rdo110->Size = System::Drawing::Size(68, 17);
			this->rdo110->TabIndex = 1;
			this->rdo110->Text = L"PCU-110";
			this->rdo110->UseVisualStyleBackColor = true;
			this->rdo110->CheckedChanged += gcnew System::EventHandler(this, &PCUSample::rdo110_CheckedChanged);
			// 
			// rdo100
			// 
			this->rdo100->AutoSize = true;
			this->rdo100->Checked = true;
			this->rdo100->Location = System::Drawing::Point(45, 17);
			this->rdo100->Name = L"rdo100";
			this->rdo100->Size = System::Drawing::Size(68, 17);
			this->rdo100->TabIndex = 0;
			this->rdo100->TabStop = true;
			this->rdo100->Text = L"PCU-100";
			this->rdo100->UseVisualStyleBackColor = true;
			this->rdo100->CheckedChanged += gcnew System::EventHandler(this, &PCUSample::rdo100_CheckedChanged);
			// 
			// GroupBox2
			// 
			this->GroupBox2->Controls->Add(this->lblwavelength);
			this->GroupBox2->Controls->Add(this->lblserial);
			this->GroupBox2->Controls->Add(this->lblvesion);
			this->GroupBox2->Controls->Add(this->lblprduct);
			this->GroupBox2->Controls->Add(this->Label15);
			this->GroupBox2->Controls->Add(this->Label6);
			this->GroupBox2->Controls->Add(this->Label5);
			this->GroupBox2->Controls->Add(this->Label4);
			this->GroupBox2->Location = System::Drawing::Point(396, 20);
			this->GroupBox2->Name = L"GroupBox2";
			this->GroupBox2->Size = System::Drawing::Size(330, 191);
			this->GroupBox2->TabIndex = 8;
			this->GroupBox2->TabStop = false;
			this->GroupBox2->Text = L"Information";
			// 
			// lblwavelength
			// 
			this->lblwavelength->AutoSize = true;
			this->lblwavelength->ForeColor = System::Drawing::Color::Black;
			this->lblwavelength->Location = System::Drawing::Point(159, 148);
			this->lblwavelength->Name = L"lblwavelength";
			this->lblwavelength->Size = System::Drawing::Size(44, 13);
			this->lblwavelength->TabIndex = 7;
			this->lblwavelength->Text = L"Product";
			// 
			// lblserial
			// 
			this->lblserial->AutoSize = true;
			this->lblserial->ForeColor = System::Drawing::Color::Black;
			this->lblserial->Location = System::Drawing::Point(159, 104);
			this->lblserial->Name = L"lblserial";
			this->lblserial->Size = System::Drawing::Size(44, 13);
			this->lblserial->TabIndex = 6;
			this->lblserial->Text = L"Product";
			// 
			// lblvesion
			// 
			this->lblvesion->AutoSize = true;
			this->lblvesion->ForeColor = System::Drawing::Color::Black;
			this->lblvesion->Location = System::Drawing::Point(159, 72);
			this->lblvesion->Name = L"lblvesion";
			this->lblvesion->Size = System::Drawing::Size(44, 13);
			this->lblvesion->TabIndex = 5;
			this->lblvesion->Text = L"Product";
			// 
			// lblprduct
			// 
			this->lblprduct->AutoSize = true;
			this->lblprduct->ForeColor = System::Drawing::Color::Black;
			this->lblprduct->Location = System::Drawing::Point(159, 31);
			this->lblprduct->Name = L"lblprduct";
			this->lblprduct->Size = System::Drawing::Size(44, 13);
			this->lblprduct->TabIndex = 4;
			this->lblprduct->Text = L"Product";
			// 
			// Label15
			// 
			this->Label15->AutoSize = true;
			this->Label15->ForeColor = System::Drawing::Color::Blue;
			this->Label15->Location = System::Drawing::Point(27, 104);
			this->Label15->Name = L"Label15";
			this->Label15->Size = System::Drawing::Size(71, 13);
			this->Label15->TabIndex = 3;
			this->Label15->Text = L"Serial number";
			// 
			// Label6
			// 
			this->Label6->AutoSize = true;
			this->Label6->ForeColor = System::Drawing::Color::Blue;
			this->Label6->Location = System::Drawing::Point(27, 148);
			this->Label6->Name = L"Label6";
			this->Label6->Size = System::Drawing::Size(95, 13);
			this->Label6->TabIndex = 2;
			this->Label6->Text = L"Wavelength range";
			// 
			// Label5
			// 
			this->Label5->AutoSize = true;
			this->Label5->ForeColor = System::Drawing::Color::Blue;
			this->Label5->Location = System::Drawing::Point(27, 72);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(67, 13);
			this->Label5->TabIndex = 1;
			this->Label5->Text = L"F/W Version";
			// 
			// Label4
			// 
			this->Label4->AutoSize = true;
			this->Label4->ForeColor = System::Drawing::Color::Blue;
			this->Label4->Location = System::Drawing::Point(27, 31);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(44, 13);
			this->Label4->TabIndex = 0;
			this->Label4->Text = L"Product";
			// 
			// GroupBox4
			// 
			this->GroupBox4->Controls->Add(this->rdocrlf);
			this->GroupBox4->Controls->Add(this->rdolf);
			this->GroupBox4->Controls->Add(this->rdocr);
			this->GroupBox4->Location = System::Drawing::Point(19, 217);
			this->GroupBox4->Name = L"GroupBox4";
			this->GroupBox4->Size = System::Drawing::Size(222, 60);
			this->GroupBox4->TabIndex = 7;
			this->GroupBox4->TabStop = false;
			this->GroupBox4->Text = L"Tarminerter";
			// 
			// rdocrlf
			// 
			this->rdocrlf->AutoSize = true;
			this->rdocrlf->Location = System::Drawing::Point(149, 23);
			this->rdocrlf->Name = L"rdocrlf";
			this->rdocrlf->Size = System::Drawing::Size(44, 17);
			this->rdocrlf->TabIndex = 3;
			this->rdocrlf->Text = L"CrLf";
			this->rdocrlf->UseVisualStyleBackColor = true;
			// 
			// rdolf
			// 
			this->rdolf->AutoSize = true;
			this->rdolf->Location = System::Drawing::Point(86, 23);
			this->rdolf->Name = L"rdolf";
			this->rdolf->Size = System::Drawing::Size(34, 17);
			this->rdolf->TabIndex = 2;
			this->rdolf->Text = L"Lf";
			this->rdolf->UseVisualStyleBackColor = true;
			// 
			// rdocr
			// 
			this->rdocr->AutoSize = true;
			this->rdocr->Checked = true;
			this->rdocr->Location = System::Drawing::Point(24, 23);
			this->rdocr->Name = L"rdocr";
			this->rdocr->Size = System::Drawing::Size(35, 17);
			this->rdocr->TabIndex = 1;
			this->rdocr->TabStop = true;
			this->rdocr->Text = L"Cr";
			this->rdocr->UseVisualStyleBackColor = true;
			// 
			// btnDisConnect
			// 
			this->btnDisConnect->Location = System::Drawing::Point(381, 242);
			this->btnDisConnect->Name = L"btnDisConnect";
			this->btnDisConnect->Size = System::Drawing::Size(86, 28);
			this->btnDisConnect->TabIndex = 6;
			this->btnDisConnect->Text = L"DisConnect";
			this->btnDisConnect->UseVisualStyleBackColor = true;
			this->btnDisConnect->Click += gcnew System::EventHandler(this, &PCUSample::btnDisConnect_Click);
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(267, 242);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(86, 28);
			this->btnConnect->TabIndex = 5;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &PCUSample::btnConnect_Click);
			// 
			// GroupBox3
			// 
			this->GroupBox3->Controls->Add(this->Label14);
			this->GroupBox3->Controls->Add(this->txt100controlid);
			this->GroupBox3->Controls->Add(this->Label3);
			this->GroupBox3->Controls->Add(this->txtport);
			this->GroupBox3->Controls->Add(this->rdolan);
			this->GroupBox3->Controls->Add(this->rdousb);
			this->GroupBox3->Controls->Add(this->rdokeysightvisa);
			this->GroupBox3->Controls->Add(this->rdonivisa);
			this->GroupBox3->Controls->Add(this->rdo488);
			this->GroupBox3->Location = System::Drawing::Point(15, 104);
			this->GroupBox3->Name = L"GroupBox3";
			this->GroupBox3->Size = System::Drawing::Size(375, 106);
			this->GroupBox3->TabIndex = 4;
			this->GroupBox3->TabStop = false;
			this->GroupBox3->Text = L"Communication";
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->Location = System::Drawing::Point(211, 35);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(122, 13);
			this->Label2->TabIndex = 3;
			this->Label2->Text = L"Address/Device number";
			// 
			// txtaddress
			// 
			this->txtaddress->Location = System::Drawing::Point(209, 51);
			this->txtaddress->Name = L"txtaddress";
			this->txtaddress->Size = System::Drawing::Size(167, 20);
			this->txtaddress->TabIndex = 2;
			// 
			// PCUSample
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 591);
			this->Controls->Add(this->GroupBox5);
			this->Controls->Add(this->GroupBox10);
			this->Controls->Add(this->GroupBox1);
			this->Name = L"PCUSample";
			this->Text = L"PCUSample";
			this->Load += gcnew System::EventHandler(this, &PCUSample::MyForm_Load);
			this->GroupBox5->ResumeLayout(false);
			this->GroupBox5->PerformLayout();
			this->GroupBox7->ResumeLayout(false);
			this->GroupBox7->PerformLayout();
			this->GroupBox6->ResumeLayout(false);
			this->GroupBox6->PerformLayout();
			this->GroupBox10->ResumeLayout(false);
			this->GroupBox10->PerformLayout();
			this->GroupBox1->ResumeLayout(false);
			this->GroupBox1->PerformLayout();
			this->GroupBox9->ResumeLayout(false);
			this->GroupBox9->PerformLayout();
			this->GroupBox2->ResumeLayout(false);
			this->GroupBox2->PerformLayout();
			this->GroupBox4->ResumeLayout(false);
			this->GroupBox4->PerformLayout();
			this->GroupBox3->ResumeLayout(false);
			this->GroupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnGet_resouce_Click(System::Object^  sender, System::EventArgs^  e) {
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

	private: System::Void btnConnect_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------------------------
		// Connect
		// 连接
		// ------------------------------------------------------------------
		String^ address = txtaddress->Text;
		String^ port = String::Empty;
		Communication::GPIBConnectType gpib_type;
		Communication::CommunicationMethod com_method;

		// -------Communication Method
		// -------连接的方法

		if (rdokeysightvisa->Checked == true | rdo488->Checked == true | rdonivisa->Checked == true)
		{
			// ---GPIB communiction
			// ---GPIB通讯
			com_method = Communication::CommunicationMethod::GPIB;

			// --GPIB type
			// --GPIB类型
			if (rdokeysightvisa->Checked == true)
				gpib_type = Communication::GPIBConnectType::KeysightIO;
			else if (rdonivisa->Checked == true
				)
				gpib_type = Communication::GPIBConnectType::NIVisa;
			else
				gpib_type = Communication::GPIBConnectType::NI4882;

			PCU.GPIBAddress = int::Parse(txtaddress->Text);
			if (txtboad->Text == "")
			{
				PCU.GPIBBoard = 0;
			}
			else
			{
				PCU.GPIBBoard = Convert::ToInt32(txtboad->Text);
			}
		}


		if (rdolan->Checked == true)
		{
			// -----LAN Communication
			// -----LAN通讯
			com_method = Santec::Communication::CommunicationMethod::TCPIP;
			PCU.IPAddress = txtaddress->Text;
			PCU.Port = int::Parse(txtport->Text);
			PCU.Waittime = 20;
		}


		if (rdousb->Checked == true)
		{
			// -----USB communucation
			// -----USB通讯
			com_method = Santec::Communication::CommunicationMethod::USB;
			PCU.DeviceID = int::Parse(txtaddress->Text);                       // USB control device id// USB控制设备id
			PCU.TimeOut = 5000;
		}


		if (rdo100->Checked == true)
			// ---Target PCU-100
			// ---目标 PCU-100
			PCU.DeviceName = txt100controlid->Text;

		// ---Tarminater
		// ---终止符
		CommunicationTerminator termineter;

		if (rdocr->Checked == true)
			termineter = CommunicationTerminator::Cr;
		else if (rdolf->Checked == true)
			termineter = CommunicationTerminator::Lf;
		else
			termineter = CommunicationTerminator::CrLf;

		PCU.Terminator = termineter;

		String^ ans = String::Empty;
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
		lblprduct->Text = PCU.Information->ProductName;
		lblserial->Text = PCU.Information->SerialNumber;
		lblvesion->Text = PCU.Information->FWversion;
		lblwavelength->Text = PCU.Information->Band;

		// -----Add set SOP to combbox
		// -----添加set SOP到combbox

		if (PCU.Information->ProductName == "PCU-110")
		{
			cmbsop->Items->Add("LVP");
			cmbsop->Items->Add("LHP");
			cmbsop->Items->Add("LP45");
			cmbsop->Items->Add("LN45");
			cmbsop->Items->Add("RCP");
			cmbsop->Items->Add("LCP");
		}
		else
		{
			cmbsop->Items->Add("LVP");
			cmbsop->Items->Add("LHP");
			cmbsop->Items->Add("LP45");
			cmbsop->Items->Add("RCP");
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

	private: System::Void btnDisConnect_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------------------
		// Dis Connect
		// 断开连接
		// -----------------------------------------------------------

		PCU.DisConnect();

		lblprduct->Text = "";
		lblserial->Text = "";
		lblvesion->Text = "";
		lblwavelength->Text = "";

		cmbsop->Items->Clear();
		cmbsop->Text = "";

	}

	private: System::Void btnSet_SOP_Click(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------
		// Set SOP
		// 设置SOP
		// ------------------------------------------------
		int errorcode;
		PCU::SOP_Stauts sop_stauts;

		if (cmbsop->Text == "")
		{
			MessageBox::Show("Please enter the value.");
			return;
		}
		if (cmbsop->Text == "LVP")
		{
			sop_stauts = PCU::SOP_Stauts::LVP;

		}
		else if (cmbsop->Text == "LHP")
		{
			sop_stauts = PCU::SOP_Stauts::LHP;

		}
		else if (cmbsop->Text == "LP45")
		{
			sop_stauts = PCU::SOP_Stauts::LP45;

		}
		else if (cmbsop->Text == "LN45")
		{
			sop_stauts = PCU::SOP_Stauts::LN45;

		}
		else if (cmbsop->Text == "RCP")
		{
			sop_stauts = PCU::SOP_Stauts::RCP;

		}
		else if (cmbsop->Text == "LCP")
		{
			sop_stauts = PCU::SOP_Stauts::LCP;
		}
		errorcode = PCU.Set_SOP_Stauts(sop_stauts);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}
	}

	private: System::Void btnAdjust_Range_Click(System::Object^  sender, System::EventArgs^  e) {
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

	private: System::Void btnGet_Range_Click(System::Object^  sender, System::EventArgs^  e) {
		//------------------------------------------------------
		//  Get Current Range
		//  获取当前范围
		//------------------------------------------------------

		int errorcode;
		int range;

		errorcode = PCU.Get_Power_Range(range);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtcurrentrange->Text = range.ToString();
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

	private: System::Void cmb100controlid_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//------------------------------------------------
		//      Select control device number for PCU-100 
		//      选择PCU-100的控制设备号
		//------------------------------------------------
		txt100controlid->Text = cmb100controlid->Text;
	}

	private: System::Void rdo100_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------
		// target PCU-100 checked
		// 选择目标为PCU-100
		// ------------------------------------------------

		if (rdo100->Checked == true)
		{
			// PCU-100 can't Control from LAN & USB
			// PCU-100不能从LAN和USB控制
			// PCU-100 need to  device number of DAQ
			// PCU-100需要设备的DAQ编号
			txt100controlid->Enabled = true;
			rdolan->Enabled = false;
			txtport->Enabled = false;
			rdousb->Enabled = false;
		}
	}

	private: System::Void rdo110_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------
		// target PCU-110 Checked
		// 选择目标为PCU-110
		// 
		// PCU-110 can control from LAN & USB & GPIB
		// PCU-110可以通过LAN、USB和GPIB进行控制
		// PCU-110 not need to device number of DAQ
		// PCU-110不需要设备的DAQ编号
		// -------------------------------------------------

		if (rdo110->Checked == true)
		{
			txt100controlid->Enabled = false;
			rdolan->Enabled = true;
			rdousb->Enabled = true;
		}
	}

	private: System::Void rdo488_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------------
		// 488.2　checked
		// 选中 488.2
		// -----------------------------------------------------

		if (rdo488->Checked == true)
		{
			txtaddress->Text = txtaddressnum->Text;
			rdolf->Enabled = true;
			rdocrlf->Enabled = true;
			rdocr->Enabled = true;
		}

	}

	private: System::Void rdonivisa_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// ------------------------------------------------------------------------
		// NI Visa Communication Checked
		// 选中 NI Visa 通讯 
		// ------------------------------------------------------------------------

		if (rdonivisa->Checked == true)
		{
			txtaddress->Text = txtaddressnum->Text;
			rdolf->Enabled = true;
			rdocrlf->Enabled = true;
			rdocr->Enabled = true;
		}
	}

	private: System::Void rdokeysightvisa_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// ----------------------------------------------------
		// keysigth visa communication checked
		// 选中keysigth visa 通讯
		// ----------------------------------------------------

		if (rdokeysightvisa->Checked == true)
		{
			txtaddress->Text = txtaddressnum->Text;
			rdolf->Enabled = true;
			rdocrlf->Enabled = true;
			rdocr->Enabled = true;
		}

	}

	private: System::Void rdousb_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------------------
		// USB communcation checked
		// 选择USB 通讯
		// --------------------------------------------------------------

		// USB can control Only PCU-110
		// USB只能控制PCU-110
		if (rdousb->Checked == true)
		{
			txtaddress->Text = txtdev_num->Text;         // USB Control Device ID //USB控制设备ID
			rdocrlf->Enabled = false;                     // USB Tarminerter must be "Cr"   //USB 终止符必须是“Cr”
			rdolf->Enabled = false;
		}

	}

	private: System::Void rdolan_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------------------
		// LAN Commnuncation Checked
		// 选择 LAN 通讯
		// --------------------------------------------------------------

		// LAN communication can control ONLY PCU-110
		// LAN通讯只能控制PCU-110
		if (rdolan->Checked == true)
		{
			txt100controlid->Enabled = false;
			txtport->Enabled = true;
			rdolf->Enabled = true;
			rdocrlf->Enabled = true;
			rdocr->Enabled = true;
		}
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------------------
		// Form Load
		// 窗体载入
		// --------------------------------------------------------------

		// ----PCU-100　check
		// ----选择 PCU-100　
		rdo100->Checked = true;
	}

	private: System::Void btnControl_ID_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------------
		// Get PCU-100 Control device id
		// 获取PCU-100控制设备id
		// -------------------------------------------------------
		array<System::String^>^ id = nullptr;
		int errorcode;
		int loop1;


		errorcode = PCU.Get_Device_ID(id);

		if (errorcode != 0 | id->Length == 0)
			return;
		for (loop1 = 0; loop1 < id->Length; loop1++)
			cmb100controlid->Items->Add(id[loop1]);
	}

	private: System::Void btnGetIP_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// Get IP Address
		// this function only support for PCU-110
		// 获取IP地址
		// 这个功能只支持PCU-110
		// ------------------------------------------------
		int errorcode;
		String^ address = String::Empty;

		errorcode = PCU.Get_IPAddress(address);

		if (errorcode != 0)
		{
			Show_Error(errorcode);
			return;
		}

		txtip_add->Text = address;
	}

private: System::Void btnGetPort_Click(System::Object^  sender, System::EventArgs^  e) {
	// -----------------------------------------------------
	// Get LAN Port number
	// this function only support for PCU-110
	// 获取LAN端口号
	// 这个功能只支持PCU-110
	// -----------------------------------------------------
	int errorcode;
	int port ;

	errorcode = PCU.Get_LAN_Portnumber(port);

	if (errorcode != 0)
	{
		Show_Error(errorcode);
		return;
	}
	txtlan_port->Text = port.ToString();
}
};
}
