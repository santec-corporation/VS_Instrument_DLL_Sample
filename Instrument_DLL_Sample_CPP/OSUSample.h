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
	/// OSUSample 摘要
	/// </summary>
	public ref class OSUSample : public System::Windows::Forms::Form
	{
	public:
		OSUSample(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~OSUSample()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


		OSU ^osu = gcnew OSU();
		SPU ^spu = gcnew SPU();
	internal: System::Windows::Forms::Label^  Label1;
	protected:
	internal: System::Windows::Forms::GroupBox^  Group100;
	internal: System::Windows::Forms::ComboBox^  cmbdevname;
	internal: System::Windows::Forms::GroupBox^  GroupBox21;
	internal: System::Windows::Forms::GroupBox^  Group110;
	internal: System::Windows::Forms::Label^  Label4;
	internal: System::Windows::Forms::RadioButton^  rdiNI488;
	internal: System::Windows::Forms::ComboBox^  cmbosu_usb;
	internal: System::Windows::Forms::RadioButton^  rdiUSB;
	internal: System::Windows::Forms::RadioButton^  rdiNIvisa;
	internal: System::Windows::Forms::Label^  Label58;
	internal: System::Windows::Forms::RadioButton^  rdikysightvisa;
	internal: System::Windows::Forms::RadioButton^  rdoLAN;
	internal: System::Windows::Forms::TextBox^  txtAddress;
	internal: System::Windows::Forms::TextBox^  txtPort;
	internal: System::Windows::Forms::Label^  Label3;
	internal: System::Windows::Forms::RadioButton^  rdo110;
	internal: System::Windows::Forms::RadioButton^  rdo100;
	internal: System::Windows::Forms::GroupBox^  GroupBox18;
	internal: System::Windows::Forms::GroupBox^  GroupBox1;
	internal: System::Windows::Forms::Button^  Button3;
	internal: System::Windows::Forms::Button^  Button1;
	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::Button^  Button2;
	internal: System::Windows::Forms::GroupBox^  GroupBox2;
	internal: System::Windows::Forms::ComboBox^  cmbch;
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
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->Group100 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbdevname = (gcnew System::Windows::Forms::ComboBox());
			this->GroupBox21 = (gcnew System::Windows::Forms::GroupBox());
			this->Group110 = (gcnew System::Windows::Forms::GroupBox());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->rdiNI488 = (gcnew System::Windows::Forms::RadioButton());
			this->cmbosu_usb = (gcnew System::Windows::Forms::ComboBox());
			this->rdiUSB = (gcnew System::Windows::Forms::RadioButton());
			this->rdiNIvisa = (gcnew System::Windows::Forms::RadioButton());
			this->Label58 = (gcnew System::Windows::Forms::Label());
			this->rdikysightvisa = (gcnew System::Windows::Forms::RadioButton());
			this->rdoLAN = (gcnew System::Windows::Forms::RadioButton());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtPort = (gcnew System::Windows::Forms::TextBox());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->rdo110 = (gcnew System::Windows::Forms::RadioButton());
			this->rdo100 = (gcnew System::Windows::Forms::RadioButton());
			this->GroupBox18 = (gcnew System::Windows::Forms::GroupBox());
			this->GroupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Button3 = (gcnew System::Windows::Forms::Button());
			this->Button1 = (gcnew System::Windows::Forms::Button());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->Button2 = (gcnew System::Windows::Forms::Button());
			this->GroupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbch = (gcnew System::Windows::Forms::ComboBox());
			this->Group100->SuspendLayout();
			this->GroupBox21->SuspendLayout();
			this->Group110->SuspendLayout();
			this->GroupBox18->SuspendLayout();
			this->GroupBox1->SuspendLayout();
			this->GroupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Location = System::Drawing::Point(6, 22);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(68, 13);
			this->Label1->TabIndex = 1;
			this->Label1->Text = L"device name";
			// 
			// Group100
			// 
			this->Group100->Controls->Add(this->cmbdevname);
			this->Group100->Controls->Add(this->Label1);
			this->Group100->Location = System::Drawing::Point(356, 20);
			this->Group100->Name = L"Group100";
			this->Group100->Size = System::Drawing::Size(164, 190);
			this->Group100->TabIndex = 21;
			this->Group100->TabStop = false;
			this->Group100->Text = L"OSU-100";
			// 
			// cmbdevname
			// 
			this->cmbdevname->FormattingEnabled = true;
			this->cmbdevname->Location = System::Drawing::Point(6, 46);
			this->cmbdevname->Name = L"cmbdevname";
			this->cmbdevname->Size = System::Drawing::Size(137, 21);
			this->cmbdevname->TabIndex = 0;
			// 
			// GroupBox21
			// 
			this->GroupBox21->Controls->Add(this->Group100);
			this->GroupBox21->Controls->Add(this->Group110);
			this->GroupBox21->Location = System::Drawing::Point(149, 20);
			this->GroupBox21->Name = L"GroupBox21";
			this->GroupBox21->Size = System::Drawing::Size(537, 221);
			this->GroupBox21->TabIndex = 24;
			this->GroupBox21->TabStop = false;
			this->GroupBox21->Text = L"Communication";
			// 
			// Group110
			// 
			this->Group110->Controls->Add(this->Label4);
			this->Group110->Controls->Add(this->rdiNI488);
			this->Group110->Controls->Add(this->cmbosu_usb);
			this->Group110->Controls->Add(this->rdiUSB);
			this->Group110->Controls->Add(this->rdiNIvisa);
			this->Group110->Controls->Add(this->Label58);
			this->Group110->Controls->Add(this->rdikysightvisa);
			this->Group110->Controls->Add(this->rdoLAN);
			this->Group110->Controls->Add(this->txtAddress);
			this->Group110->Controls->Add(this->txtPort);
			this->Group110->Controls->Add(this->Label3);
			this->Group110->Location = System::Drawing::Point(6, 20);
			this->Group110->Name = L"Group110";
			this->Group110->Size = System::Drawing::Size(331, 190);
			this->Group110->TabIndex = 21;
			this->Group110->TabStop = false;
			this->Group110->Text = L"OSU-110";
			// 
			// Label4
			// 
			this->Label4->AutoSize = true;
			this->Label4->Location = System::Drawing::Point(13, 141);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(78, 13);
			this->Label4->TabIndex = 27;
			this->Label4->Text = L"USB Resource";
			// 
			// rdiNI488
			// 
			this->rdiNI488->AutoSize = true;
			this->rdiNI488->Checked = true;
			this->rdiNI488->Location = System::Drawing::Point(15, 20);
			this->rdiNI488->Name = L"rdiNI488";
			this->rdiNI488->Size = System::Drawing::Size(63, 17);
			this->rdiNI488->TabIndex = 16;
			this->rdiNI488->TabStop = true;
			this->rdiNI488->Text = L"NI488.2";
			this->rdiNI488->UseVisualStyleBackColor = true;
			// 
			// cmbosu_usb
			// 
			this->cmbosu_usb->FormattingEnabled = true;
			this->cmbosu_usb->Location = System::Drawing::Point(6, 157);
			this->cmbosu_usb->Name = L"cmbosu_usb";
			this->cmbosu_usb->Size = System::Drawing::Size(172, 21);
			this->cmbosu_usb->TabIndex = 26;
			// 
			// rdiUSB
			// 
			this->rdiUSB->AutoSize = true;
			this->rdiUSB->Location = System::Drawing::Point(87, 50);
			this->rdiUSB->Name = L"rdiUSB";
			this->rdiUSB->Size = System::Drawing::Size(47, 17);
			this->rdiUSB->TabIndex = 19;
			this->rdiUSB->Text = L"USB";
			this->rdiUSB->UseVisualStyleBackColor = true;
			// 
			// rdiNIvisa
			// 
			this->rdiNIvisa->AutoSize = true;
			this->rdiNIvisa->Location = System::Drawing::Point(87, 20);
			this->rdiNIvisa->Name = L"rdiNIvisa";
			this->rdiNIvisa->Size = System::Drawing::Size(56, 17);
			this->rdiNIvisa->TabIndex = 17;
			this->rdiNIvisa->Text = L"NIVisa";
			this->rdiNIvisa->UseVisualStyleBackColor = true;
			// 
			// Label58
			// 
			this->Label58->AutoSize = true;
			this->Label58->Location = System::Drawing::Point(187, 88);
			this->Label58->Name = L"Label58";
			this->Label58->Size = System::Drawing::Size(91, 13);
			this->Label58->TabIndex = 22;
			this->Label58->Text = L"Port number(LAN)";
			// 
			// rdikysightvisa
			// 
			this->rdikysightvisa->AutoSize = true;
			this->rdikysightvisa->Location = System::Drawing::Point(159, 20);
			this->rdikysightvisa->Name = L"rdikysightvisa";
			this->rdikysightvisa->Size = System::Drawing::Size(85, 17);
			this->rdikysightvisa->TabIndex = 18;
			this->rdikysightvisa->Text = L"KeysightVisa";
			this->rdikysightvisa->UseVisualStyleBackColor = true;
			// 
			// rdoLAN
			// 
			this->rdoLAN->AutoSize = true;
			this->rdoLAN->Location = System::Drawing::Point(15, 50);
			this->rdoLAN->Name = L"rdoLAN";
			this->rdoLAN->Size = System::Drawing::Size(46, 17);
			this->rdoLAN->TabIndex = 20;
			this->rdoLAN->Text = L"LAN";
			this->rdoLAN->UseVisualStyleBackColor = true;
			this->rdoLAN->CheckedChanged += gcnew System::EventHandler(this, &OSUSample::rdoLAN_CheckedChanged);
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(8, 104);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(175, 20);
			this->txtAddress->TabIndex = 23;
			// 
			// txtPort
			// 
			this->txtPort->Location = System::Drawing::Point(189, 104);
			this->txtPort->Name = L"txtPort";
			this->txtPort->Size = System::Drawing::Size(112, 20);
			this->txtPort->TabIndex = 21;
			// 
			// Label3
			// 
			this->Label3->AutoSize = true;
			this->Label3->Location = System::Drawing::Point(9, 88);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(109, 13);
			this->Label3->TabIndex = 1;
			this->Label3->Text = L"Address(GPIB、LAN)";
			// 
			// rdo110
			// 
			this->rdo110->AutoSize = true;
			this->rdo110->Location = System::Drawing::Point(21, 56);
			this->rdo110->Name = L"rdo110";
			this->rdo110->Size = System::Drawing::Size(69, 17);
			this->rdo110->TabIndex = 1;
			this->rdo110->Text = L"OSU-110";
			this->rdo110->UseVisualStyleBackColor = true;
			this->rdo110->CheckedChanged += gcnew System::EventHandler(this, &OSUSample::rdo110_CheckedChanged);
			// 
			// rdo100
			// 
			this->rdo100->AutoSize = true;
			this->rdo100->Checked = true;
			this->rdo100->Location = System::Drawing::Point(21, 31);
			this->rdo100->Name = L"rdo100";
			this->rdo100->Size = System::Drawing::Size(69, 17);
			this->rdo100->TabIndex = 0;
			this->rdo100->TabStop = true;
			this->rdo100->Text = L"OSU-100";
			this->rdo100->UseVisualStyleBackColor = true;
			this->rdo100->CheckedChanged += gcnew System::EventHandler(this, &OSUSample::rdo100_CheckedChanged);
			// 
			// GroupBox18
			// 
			this->GroupBox18->Controls->Add(this->rdo110);
			this->GroupBox18->Controls->Add(this->rdo100);
			this->GroupBox18->Location = System::Drawing::Point(6, 20);
			this->GroupBox18->Name = L"GroupBox18";
			this->GroupBox18->Size = System::Drawing::Size(137, 221);
			this->GroupBox18->TabIndex = 25;
			this->GroupBox18->TabStop = false;
			this->GroupBox18->Text = L"Target";
			// 
			// GroupBox1
			// 
			this->GroupBox1->Controls->Add(this->GroupBox18);
			this->GroupBox1->Controls->Add(this->GroupBox21);
			this->GroupBox1->Controls->Add(this->Button3);
			this->GroupBox1->Controls->Add(this->Button1);
			this->GroupBox1->Location = System::Drawing::Point(11, 15);
			this->GroupBox1->Name = L"GroupBox1";
			this->GroupBox1->Size = System::Drawing::Size(702, 306);
			this->GroupBox1->TabIndex = 4;
			this->GroupBox1->TabStop = false;
			this->GroupBox1->Text = L"1.Connect";
			// 
			// Button3
			// 
			this->Button3->Location = System::Drawing::Point(586, 257);
			this->Button3->Name = L"Button3";
			this->Button3->Size = System::Drawing::Size(83, 28);
			this->Button3->TabIndex = 3;
			this->Button3->Text = L"Dis connect";
			this->Button3->UseVisualStyleBackColor = true;
			this->Button3->Click += gcnew System::EventHandler(this, &OSUSample::btnDisconnect_Click);
			// 
			// Button1
			// 
			this->Button1->Location = System::Drawing::Point(497, 257);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(83, 28);
			this->Button1->TabIndex = 2;
			this->Button1->Text = L"Connect";
			this->Button1->UseVisualStyleBackColor = true;
			this->Button1->Click += gcnew System::EventHandler(this, &OSUSample::btnConnect_Click);
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->Location = System::Drawing::Point(40, 31);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(45, 13);
			this->Label2->TabIndex = 5;
			this->Label2->Text = L"channel";
			// 
			// Button2
			// 
			this->Button2->Location = System::Drawing::Point(196, 42);
			this->Button2->Name = L"Button2";
			this->Button2->Size = System::Drawing::Size(84, 37);
			this->Button2->TabIndex = 3;
			this->Button2->Text = L"Switch";
			this->Button2->UseVisualStyleBackColor = true;
			this->Button2->Click += gcnew System::EventHandler(this, &OSUSample::btnSwitch_Click);
			// 
			// GroupBox2
			// 
			this->GroupBox2->Controls->Add(this->Label2);
			this->GroupBox2->Controls->Add(this->cmbch);
			this->GroupBox2->Controls->Add(this->Button2);
			this->GroupBox2->Location = System::Drawing::Point(11, 344);
			this->GroupBox2->Name = L"GroupBox2";
			this->GroupBox2->Size = System::Drawing::Size(702, 96);
			this->GroupBox2->TabIndex = 5;
			this->GroupBox2->TabStop = false;
			this->GroupBox2->Text = L"2. Setting function";
			// 
			// cmbch
			// 
			this->cmbch->FormattingEnabled = true;
			this->cmbch->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Ch1", L"Ch2", L"Ch3", L"Ch4" });
			this->cmbch->Location = System::Drawing::Point(33, 51);
			this->cmbch->Name = L"cmbch";
			this->cmbch->Size = System::Drawing::Size(137, 21);
			this->cmbch->TabIndex = 4;
			// 
			// OSUSample
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 454);
			this->Controls->Add(this->GroupBox1);
			this->Controls->Add(this->GroupBox2);
			this->Name = L"OSUSample";
			this->Text = L"OSUSample";
			this->Load += gcnew System::EventHandler(this, &OSUSample::OSUSample_Load);
			this->Click += gcnew System::EventHandler(this, &OSUSample::OSUSample_Load);
			this->Group100->ResumeLayout(false);
			this->Group100->PerformLayout();
			this->GroupBox21->ResumeLayout(false);
			this->Group110->ResumeLayout(false);
			this->Group110->PerformLayout();
			this->GroupBox18->ResumeLayout(false);
			this->GroupBox18->PerformLayout();
			this->GroupBox1->ResumeLayout(false);
			this->GroupBox2->ResumeLayout(false);
			this->GroupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void OSUSample_Load(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------------------
		// Form Load
		// -------------------------------------------------------------
		array<System::String^>^dev = nullptr;
		array<System::String^>^usb_resource = nullptr;

		int errorcord;
		int loop1;

		usb_resource = Santec::Communication::MainCommunication::Get_USB_Resouce();

		// ---Add Item to combobox for usb resource
		for (loop1 = 0; loop1 <= usb_resource->GetUpperBound(0); loop1++)
			this->cmbosu_usb->Items->Add(usb_resource[loop1]);

		errorcord = spu->Get_Device_ID(dev);

		if (errorcord != 0)
		{
			Show_Error(errorcord);
			return;
		}

		// ---Add Item to combobox for device name
		for (loop1 = 0; loop1 <= dev->GetUpperBound(0); loop1++)
			this->cmbdevname->Items->Add(dev[loop1]);
	}

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

	private: System::Void btnConnect_Click(System::Object^  sender, System::EventArgs^  e) {
		// -------------------------------------------------------
		// Connect to OSU
		// -------------------------------------------------------
		int errorcord;
		Santec::Communication::CommunicationMethod comm_method;
		String^ address = this->txtAddress->Text;
		String^ osu_dev = String::Empty;                // osu control device
		String^ ans = String::Empty;                    // answer for the device


		if (rdo110->Checked)
		{
			// OSU-110

			osu->Terminator = CommunicationTerminator::Cr;

			if (rdiUSB->Checked == true)
			{
				// ' USB Communication
				// ' USB 通信

				if (this->cmbosu_usb->Text == "")
				{
					MessageBox::Show("Please enter to the OSU USB Resource");
					return;
				}

				comm_method = Santec::Communication::CommunicationMethod::USB;
				osu->DeviceID = System::Convert::ToUInt32(this->cmbosu_usb->SelectedIndex);
			}
			else if (rdoLAN->Checked == true)
			{

				// LAN Communication
				// LAN 通信
				comm_method = Santec::Communication::CommunicationMethod::TCPIP;
				osu->Port = int::Parse(txtPort->Text);
				osu->IPAddress = address;
			}
			else
			{
				// ' GPIB Communication
				// ' GPIB通信
				comm_method = Santec::Communication::CommunicationMethod::GPIB;

				Santec::Communication::GPIBConnectType gpibmethod;
				if (rdikysightvisa->Checked == true)
					gpibmethod = Santec::Communication::GPIBConnectType::KeysightIO;
				else if (rdiNI488->Checked == true)
					gpibmethod = Santec::Communication::GPIBConnectType::NI4882;
				else
					gpibmethod = Santec::Communication::GPIBConnectType::NIVisa;

				osu->GPIBAddress = System::Convert::ToInt32(address);
				osu->GPIBBoard = 0;
				osu->GPIBConnectType = gpibmethod;
			}

			errorcord = osu->Connect(comm_method);
		}
		else
		{
			// OSU-100

			if (this->cmbdevname->Text == "")
			{
				MessageBox::Show("Please enter to the OSU device Resource");
				return;
			}

			osu->DeviceName = this->cmbdevname->Text;
			errorcord = osu->Connect();
		}

		if (errorcord != 0)
		{
			Show_Error(errorcord);
			return;
		}

	}
	private: System::Void btnDisconnect_Click(System::Object^  sender, System::EventArgs^  e) {
		// -----------------------------------------------
		// Disconnect 
		// -----------------------------------------------
		int errorcord;

		errorcord = osu->DisConnect();

		if (errorcord != 0)
		{
			Show_Error(errorcord);
			return;
		}

		cmbdevname->Text = "";
	}
	private: System::Void btnSwitch_Click(System::Object^  sender, System::EventArgs^  e) {
		// --------------------------------------------------------
		// switch for  OSU ch
		// --------------------------------------------------------
		int errorcord; // errorcord
		int ch = int();

		// ---check Combobox text 

		if (cmbch->Text == L"")
		{
			MessageBox::Show(L"Please enter the osu switch channel number.");
			return;
		}

		if (cmbch->Text == L"Ch1")
		{
			ch = 1;

		}
		else if (cmbch->Text == L"Ch2")
		{
			ch = 2;

		}
		else if (cmbch->Text == L"Ch3")
		{
			ch = 3;

		}
		else if (cmbch->Text == L"Ch4")
		{
			ch = 4;
		}

		errorcord = osu->Set_Switch(ch);

		if (errorcord != 0)
		{
			Show_Error(errorcord);
			return;
		}
	}

	private: System::Void rdo100_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (rdo100->Checked == true)
		{
			//OSU-100
			Group100->Enabled = true;
			Group110->Enabled = false;
		}
		else
		{
			//OSU-110
			Group100->Enabled = false;
			Group110->Enabled = true;
		}

	}

	private: System::Void rdo110_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (rdo110->Enabled == true)
		{
			//OSU-110
			Group100->Enabled = false;
			Group110->Enabled = true;
		}
		else
		{
			//OSU-100
			Group100->Enabled = true;
			Group110->Enabled = false;
		}

	}

	private: System::Void rdoLAN_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (rdoLAN->Checked == true)
		{
			txtPort->Text = "5000";
		}
		else
		{
			txtPort->Text = "";
		}

	}
	};
}
