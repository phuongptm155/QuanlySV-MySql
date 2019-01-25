#pragma once

#include "sv.h"
#include "monhoc.h"
#include "Thongke.h"
#include "GV.h"
#include"gv_mh.h"
namespace DoAn1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Gvien;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Gvien = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(24, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Thông tin sinh viên";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(24, 253);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(211, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Thông tin môn học";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(24, 417);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(211, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Kết quả học tập sinh viên";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(253, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(466, 32);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Chương trình quản lý điểm sinh viên";
			// 
			// Gvien
			// 
			this->Gvien->BackColor = System::Drawing::Color::White;
			this->Gvien->Location = System::Drawing::Point(24, 180);
			this->Gvien->Name = L"Gvien";
			this->Gvien->Size = System::Drawing::Size(211, 43);
			this->Gvien->TabIndex = 4;
			this->Gvien->Text = L"Thông tin giảng viên";
			this->Gvien->UseVisualStyleBackColor = false;
			this->Gvien->Click += gcnew System::EventHandler(this, &MyForm::GV_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(24, 335);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(211, 46);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Giảng viên đăng kí dạy";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(320, 107);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(571, 353);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(999, 520);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->Gvien);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Sinh viên khoa CNTT";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//this->Hide();
		sv^ sinhvien = gcnew sv();
		sinhvien->Show();
		
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		monhoc^ mh = gcnew monhoc();
		mh->Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Thongke^ tk= gcnew Thongke();
		tk->Show();
	}
	private: System::Void GV_Click(System::Object^  sender, System::EventArgs^  e) {
		GV^ gv = gcnew GV();
		gv->Show();

	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	gv_mh^ gv = gcnew gv_mh();
	gv->Show();
}
};
}
