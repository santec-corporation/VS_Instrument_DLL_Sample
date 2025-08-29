#pragma once
#include "TSLSample.h"
#include "PCUSample.h"
#include "MPMSample.h"
#include "OSUSample.h"

namespace Instrument_DLL_Sample_CPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Main 摘要
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnOSU;
	protected:
	private: System::Windows::Forms::Button^  btnPCU;
	private: System::Windows::Forms::Button^  btnMPM;
	private: System::Windows::Forms::Button^  btnTSL;

	protected:

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
			this->btnOSU = (gcnew System::Windows::Forms::Button());
			this->btnPCU = (gcnew System::Windows::Forms::Button());
			this->btnMPM = (gcnew System::Windows::Forms::Button());
			this->btnTSL = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnOSU
			// 
			this->btnOSU->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnOSU->FlatAppearance->BorderSize = 0;
			this->btnOSU->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOSU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOSU->ForeColor = System::Drawing::Color::White;
			this->btnOSU->Location = System::Drawing::Point(261, 168);
			this->btnOSU->Name = L"btnOSU";
			this->btnOSU->Size = System::Drawing::Size(108, 58);
			this->btnOSU->TabIndex = 7;
			this->btnOSU->Text = L"OSU";
			this->btnOSU->UseVisualStyleBackColor = false;
			this->btnOSU->Click += gcnew System::EventHandler(this, &Main::btnOSU_Click);
			// 
			// btnPCU
			// 
			this->btnPCU->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnPCU->FlatAppearance->BorderSize = 0;
			this->btnPCU->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPCU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPCU->ForeColor = System::Drawing::Color::White;
			this->btnPCU->Location = System::Drawing::Point(68, 168);
			this->btnPCU->Name = L"btnPCU";
			this->btnPCU->Size = System::Drawing::Size(108, 58);
			this->btnPCU->TabIndex = 6;
			this->btnPCU->Text = L"PCU";
			this->btnPCU->UseVisualStyleBackColor = false;
			this->btnPCU->Click += gcnew System::EventHandler(this, &Main::btnPCU_Click);
			// 
			// btnMPM
			// 
			this->btnMPM->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMPM->FlatAppearance->BorderSize = 0;
			this->btnMPM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMPM->ForeColor = System::Drawing::Color::White;
			this->btnMPM->Location = System::Drawing::Point(261, 69);
			this->btnMPM->Name = L"btnMPM";
			this->btnMPM->Size = System::Drawing::Size(108, 58);
			this->btnMPM->TabIndex = 5;
			this->btnMPM->Text = L"MPM";
			this->btnMPM->UseVisualStyleBackColor = false;
			this->btnMPM->Click += gcnew System::EventHandler(this, &Main::btnMPM_Click);
			// 
			// btnTSL
			// 
			this->btnTSL->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnTSL->FlatAppearance->BorderSize = 0;
			this->btnTSL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTSL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTSL->ForeColor = System::Drawing::Color::White;
			this->btnTSL->Location = System::Drawing::Point(68, 69);
			this->btnTSL->Name = L"btnTSL";
			this->btnTSL->Size = System::Drawing::Size(108, 58);
			this->btnTSL->TabIndex = 4;
			this->btnTSL->Text = L"TSL";
			this->btnTSL->UseVisualStyleBackColor = false;
			this->btnTSL->Click += gcnew System::EventHandler(this, &Main::btnTSL_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(451, 331);
			this->Controls->Add(this->btnOSU);
			this->Controls->Add(this->btnPCU);
			this->Controls->Add(this->btnMPM);
			this->Controls->Add(this->btnTSL);
			this->Name = L"Main";
			this->Text = L"Main";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnTSL_Click(System::Object^  sender, System::EventArgs^  e) {
		TSLSample^ tsl = gcnew TSLSample();
		tsl->Show();
	}
	private: System::Void btnPCU_Click(System::Object^  sender, System::EventArgs^  e) {
		PCUSample^ PCU = gcnew PCUSample();
		PCU->Show();
	}
	private: System::Void btnMPM_Click(System::Object^  sender, System::EventArgs^  e) {
		MPMSample^ MPM = gcnew MPMSample();
		MPM->Show();

	}
	private: System::Void btnOSU_Click(System::Object^  sender, System::EventArgs^  e) {
		OSUSample^ OSU = gcnew OSUSample();
		OSU->Show();
	}
	};
}
