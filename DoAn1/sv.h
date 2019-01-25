#pragma once
#include "function.h"

namespace DoAn1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for sv
	/// </summary>
	public ref class sv : public System::Windows::Forms::Form
	{
	
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	public:
	
	public:
		sv(void)
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
		~sv()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  hienthi;
	private: System::Windows::Forms::Button^  tim;
	private: System::Windows::Forms::Button^  xoa;
	private: System::Windows::Forms::Button^  Them;








	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DateTimePicker^  date;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  dt;
	private: System::Windows::Forms::TextBox^  dc;
	private: System::Windows::Forms::TextBox^  textHT;
	private: System::Windows::Forms::TextBox^  textMS;
	private: System::Windows::Forms::Label^  MS;
	private: System::Windows::Forms::Label^  t;
	private: System::Windows::Forms::Label^  HT;
	private: System::Windows::Forms::Label^  N;

	private: System::Windows::Forms::DataGridView^  dataGridView1;




	private: System::ComponentModel::IContainer^  components;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(sv::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->hienthi = (gcnew System::Windows::Forms::Button());
			this->tim = (gcnew System::Windows::Forms::Button());
			this->xoa = (gcnew System::Windows::Forms::Button());
			this->Them = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dt = (gcnew System::Windows::Forms::TextBox());
			this->dc = (gcnew System::Windows::Forms::TextBox());
			this->textHT = (gcnew System::Windows::Forms::TextBox());
			this->textMS = (gcnew System::Windows::Forms::TextBox());
			this->MS = (gcnew System::Windows::Forms::Label());
			this->t = (gcnew System::Windows::Forms::Label());
			this->HT = (gcnew System::Windows::Forms::Label());
			this->N = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1120, 407);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 46);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Sửa";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &sv::button1_Click);
			// 
			// hienthi
			// 
			this->hienthi->BackColor = System::Drawing::Color::White;
			this->hienthi->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->hienthi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hienthi->Location = System::Drawing::Point(1120, 489);
			this->hienthi->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->hienthi->Name = L"hienthi";
			this->hienthi->Size = System::Drawing::Size(154, 42);
			this->hienthi->TabIndex = 19;
			this->hienthi->Text = L"Hiển thị";
			this->hienthi->UseVisualStyleBackColor = false;
			this->hienthi->Click += gcnew System::EventHandler(this, &sv::hienthi_Click);
			// 
			// tim
			// 
			this->tim->BackColor = System::Drawing::Color::White;
			this->tim->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->tim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tim->Location = System::Drawing::Point(1120, 256);
			this->tim->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tim->Name = L"tim";
			this->tim->Size = System::Drawing::Size(154, 46);
			this->tim->TabIndex = 18;
			this->tim->Text = L"Tìm";
			this->tim->UseVisualStyleBackColor = false;
			this->tim->Click += gcnew System::EventHandler(this, &sv::tim_Click);
			// 
			// xoa
			// 
			this->xoa->BackColor = System::Drawing::Color::White;
			this->xoa->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->xoa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xoa->Location = System::Drawing::Point(1120, 334);
			this->xoa->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->xoa->Name = L"xoa";
			this->xoa->Size = System::Drawing::Size(154, 44);
			this->xoa->TabIndex = 17;
			this->xoa->Text = L"Xoá";
			this->xoa->UseVisualStyleBackColor = false;
			this->xoa->Click += gcnew System::EventHandler(this, &sv::xoa_Click);
			// 
			// Them
			// 
			this->Them->BackColor = System::Drawing::Color::White;
			this->Them->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Them->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Them->Location = System::Drawing::Point(1120, 177);
			this->Them->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Them->Name = L"Them";
			this->Them->Size = System::Drawing::Size(154, 49);
			this->Them->TabIndex = 16;
			this->Them->Text = L"Thêm";
			this->Them->UseVisualStyleBackColor = false;
			this->Them->Click += gcnew System::EventHandler(this, &sv::Them_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox1->Controls->Add(this->date);
			this->groupBox1->Controls->Add(this->email);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dt);
			this->groupBox1->Controls->Add(this->dc);
			this->groupBox1->Controls->Add(this->textHT);
			this->groupBox1->Controls->Add(this->textMS);
			this->groupBox1->Controls->Add(this->MS);
			this->groupBox1->Controls->Add(this->t);
			this->groupBox1->Controls->Add(this->HT);
			this->groupBox1->Controls->Add(this->N);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(39, 174);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(359, 386);
			this->groupBox1->TabIndex = 54;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Thông tin sinh viên";
			// 
			// date
			// 
			this->date->CustomFormat = L"yyyy/MM/dd";
			this->date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date->Location = System::Drawing::Point(136, 187);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(200, 24);
			this->date->TabIndex = 79;
			this->date->Value = System::DateTime(1998, 11, 4, 0, 0, 0, 0);
			// 
			// email
			// 
			this->email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(136, 347);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(200, 24);
			this->email->TabIndex = 77;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 25);
			this->label2->TabIndex = 76;
			this->label2->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 297);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 25);
			this->label1->TabIndex = 75;
			this->label1->Text = L"SDT";
			// 
			// dt
			// 
			this->dt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dt->Location = System::Drawing::Point(136, 292);
			this->dt->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dt->Name = L"dt";
			this->dt->Size = System::Drawing::Size(200, 24);
			this->dt->TabIndex = 74;
			// 
			// dc
			// 
			this->dc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dc->Location = System::Drawing::Point(136, 246);
			this->dc->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dc->Name = L"dc";
			this->dc->Size = System::Drawing::Size(200, 24);
			this->dc->TabIndex = 73;
			// 
			// textHT
			// 
			this->textHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textHT->Location = System::Drawing::Point(136, 131);
			this->textHT->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textHT->Name = L"textHT";
			this->textHT->Size = System::Drawing::Size(200, 24);
			this->textHT->TabIndex = 72;
			// 
			// textMS
			// 
			this->textMS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textMS->Location = System::Drawing::Point(136, 71);
			this->textMS->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->textMS->Name = L"textMS";
			this->textMS->Size = System::Drawing::Size(200, 24);
			this->textMS->TabIndex = 71;
			// 
			// MS
			// 
			this->MS->AutoSize = true;
			this->MS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MS->Location = System::Drawing::Point(5, 69);
			this->MS->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MS->Name = L"MS";
			this->MS->Size = System::Drawing::Size(71, 25);
			this->MS->TabIndex = 67;
			this->MS->Text = L"MSSV";
			// 
			// t
			// 
			this->t->AutoSize = true;
			this->t->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->t->Location = System::Drawing::Point(5, 244);
			this->t->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->t->Name = L"t";
			this->t->Size = System::Drawing::Size(71, 25);
			this->t->TabIndex = 70;
			this->t->Text = L"Địa chỉ";
			// 
			// HT
			// 
			this->HT->AutoSize = true;
			this->HT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->HT->Location = System::Drawing::Point(5, 129);
			this->HT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->HT->Name = L"HT";
			this->HT->Size = System::Drawing::Size(95, 25);
			this->HT->TabIndex = 68;
			this->HT->Text = L"Họ và tên";
			// 
			// N
			// 
			this->N->AutoSize = true;
			this->N->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->N->Location = System::Drawing::Point(5, 186);
			this->N->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->N->Name = L"N";
			this->N->Size = System::Drawing::Size(103, 25);
			this->N->TabIndex = 69;
			this->N->Text = L"Ngày Sinh";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1076, 574);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 26);
			this->button2->TabIndex = 78;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &sv::button2_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(460, 177);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(606, 383);
			this->dataGridView1->TabIndex = 48;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1136, 188);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(37, 28);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 80;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1136, 265);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(37, 27);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 81;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1136, 347);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(37, 21);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 82;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1136, 420);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(37, 26);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 83;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &sv::pictureBox4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(482, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(338, 44);
			this->label3->TabIndex = 84;
			this->label3->Text = L"Thông tin sinh viên";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(12, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(161, 123);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 80;
			this->pictureBox5->TabStop = false;
			// 
			// sv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1344, 647);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->hienthi);
			this->Controls->Add(this->tim);
			this->Controls->Add(this->xoa);
			this->Controls->Add(this->Them);
			this->Name = L"sv";
			this->Text = L"sv";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		function f;


	private: System::Void Them_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ themsv="Insert into sinhvien(MSSV,hovaten,NgaySinh,Diachi,SDT,Email) values( '" + this->textMS->Text + "' , '" + this->textHT->Text + "' , '" + this->date->Text + "','" + this->dc->Text + "','" + this->dt->Text + "','" + this->email->Text + "')";
		
		f.Insert(themsv);
	}

	

	private: System::Void hienthi_Click(System::Object^  sender, System::EventArgs^  e) {
	
	
		f.sda = gcnew MySqlDataAdapter("select * from sinhvien", f.con);
		DataTable^ dt = gcnew DataTable();
		f.sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;
	}


	private: System::Void tim_Click(System::Object^  sender, System::EventArgs^  e) {

			f.cmd = gcnew MySqlCommand("select * from sinhvien Where MSSV=" + this->textMS->Text + "", f.con);
			try {
			f.con->Open();
			f.dr = f.cmd->ExecuteReader();
		
			while (f.dr->Read()) {
				this->textHT->Text = f.dr->GetString(1);
				this->date->Text = f.dr->GetString(2);
				this->dc->Text = f.dr->GetString(3);
				this->dt->Text =f.dr->GetString(4);
				this->email->Text = f.dr->GetString(5);
				}
			}
			catch (Exception^ex){
					MessageBox::Show(ex->Message);
				}
			finally{
				f.con->Close();
			}
	}


	private: System::Void xoa_Click(System::Object^  sender, System::EventArgs^  e) {

		DialogResult = MessageBox::Show("Ban chac chan muon xoa?", "Canh bao", MessageBoxButtons::YesNo, MessageBoxIcon::Hand, MessageBoxDefaultButton::Button1, MessageBoxOptions::ServiceNotification);
		if (DialogResult == System::Windows::Forms::DialogResult::Yes) {			
			String^s = "delete from sinhvien Where MSSV=" + this->textMS->Text + "";
			f.Delete(s);
		}
		else {
			MessageBox::Show("Huy viec xoa!");
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ update = "update sinhvien set hovaten='" + this->textHT->Text + "',NgaySinh='" + this->date->Text + "',Diachi='" + this->dc->Text + "',SDT='" + this->dt->Text + "',Email='" + this->email->Text + "' where MSSV=" + this->textMS->Text + "";
		f.update(update);
	}

	

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->textMS->Text = "";
	this->textHT->Text = "";
	this->dt->Text = "";
	this->email->Text = "";
	this->dc->Text = "";
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
