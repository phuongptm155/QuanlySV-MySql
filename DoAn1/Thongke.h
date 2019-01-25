#pragma once
#include"monhoc.h"
#include"sv.h"
#include"function.h"
namespace DoAn1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Thongke
	/// </summary>
	public ref class Thongke : public System::Windows::Forms::Form
	{
		function f;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::BindingSource^  bindingSource2;

	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  heso;
	private: System::Windows::Forms::TextBox^  CK;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::ComboBox^  maGV;
	private: System::Windows::Forms::Label^  label6;



	public:
	
	public:
		Thongke(void)


		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			combo1();
			combo2();
		
		}


		void combo1() {
			f.cmd = gcnew MySqlCommand("select * from sinhvien order by MSSV ", f.con);
			try {
				f.con->Open();
				f.dr = f.cmd->ExecuteReader();

				while (f.dr->Read()) {
					String^ masoSV = f.dr->GetString("MSSV");
					MS->Items->Add(masoSV);
				}
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}
			finally{
				f.con->Close();
			}
		}

		void combo2() {

			String^ t = "select monhoc_Malop from gv_mh order by monhoc_Malop";
			f.cmd = gcnew MySqlCommand(t, f.con);
			try {
				f.con->Open();
				f.dr = f.cmd->ExecuteReader();
				while (f.dr->Read()) {
					String^ mon = f.dr->GetString("monhoc_Malop");
					maGV->Items->Add(mon);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			finally{
				f.con->Close();
			}
		}

	
		
	

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  lt;

	private: System::Windows::Forms::TextBox^  GK;

	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::ComboBox^  MS;





	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Thongke()
		{
			if (components)
			{
				delete components;
			}
		}
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Thongke::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lt = (gcnew System::Windows::Forms::Label());
			this->GK = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->maGV = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->heso = (gcnew System::Windows::Forms::TextBox());
			this->CK = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->MS = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(391, 164);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(903, 373);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(522, 588);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 45);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Sửa";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Thongke::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Điểm GK   :";
			// 
			// lt
			// 
			this->lt->AutoSize = true;
			this->lt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lt->Location = System::Drawing::Point(6, 56);
			this->lt->Name = L"lt";
			this->lt->Size = System::Drawing::Size(96, 20);
			this->lt->TabIndex = 1;
			this->lt->Text = L"MSSV       :";
			// 
			// GK
			// 
			this->GK->Location = System::Drawing::Point(117, 163);
			this->GK->Name = L"GK";
			this->GK->Size = System::Drawing::Size(156, 34);
			this->GK->TabIndex = 7;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->maGV);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->heso);
			this->groupBox1->Controls->Add(this->CK);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->MS);
			this->groupBox1->Controls->Add(this->GK);
			this->groupBox1->Controls->Add(this->lt);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(36, 164);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(315, 373);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Điểm sinh viên";
			// 
			// maGV
			// 
			this->maGV->FormattingEnabled = true;
			this->maGV->Location = System::Drawing::Point(117, 100);
			this->maGV->Name = L"maGV";
			this->maGV->Size = System::Drawing::Size(156, 37);
			this->maGV->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-1, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 20);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Mã Lớp       :";
			// 
			// heso
			// 
			this->heso->Location = System::Drawing::Point(117, 296);
			this->heso->Name = L"heso";
			this->heso->Size = System::Drawing::Size(156, 34);
			this->heso->TabIndex = 14;
			// 
			// CK
			// 
			this->CK->Location = System::Drawing::Point(117, 236);
			this->CK->Name = L"CK";
			this->CK->Size = System::Drawing::Size(156, 34);
			this->CK->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(5, 306);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Hệ số       :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Điểm CK    :";
			// 
			// MS
			// 
			this->MS->FormattingEnabled = true;
			this->MS->Location = System::Drawing::Point(117, 40);
			this->MS->Name = L"MS";
			this->MS->Size = System::Drawing::Size(156, 37);
			this->MS->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1323, 539);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 41);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Hiển thị";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Thongke::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1108, 588);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(166, 45);
			this->button4->TabIndex = 13;
			this->button4->Text = L" Thêm";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Thongke::button4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1122, 598);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(33, 25);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(537, 598);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(733, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(310, 44);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Kết quả sinh viên";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(182, 103);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(857, 588);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(169, 45);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Xoá";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Thongke::button5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(870, 598);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(32, 25);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 32;
			this->pictureBox4->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(1361, 396);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 50);
			this->button6->TabIndex = 33;
			this->button6->Text = L"Kết quả";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Thongke::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(1361, 193);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(118, 48);
			this->button7->TabIndex = 34;
			this->button7->Text = L"Bảng điểm Lớp";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Thongke::button7_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(1361, 294);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(118, 45);
			this->button9->TabIndex = 36;
			this->button9->Text = L"Bảng điểm SV";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Thongke::button9_Click);
			// 
			// Thongke
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1658, 692);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Thongke";
			this->Text = L"Sinhvien-monhoc";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//Cap nhat

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str = "update sinhvien_has_monhoc  set " 
			 "DiemGK = '" + this->GK->Text + "',DiemCK = '" + this->CK->Text + "',heso = '" + this->heso->Text + "' where sinhvien_MSSV= N'" + this->MS->Text+ "' and monhoc_Malop= N'" + this->maGV->Text + "'";
	
		f.update(str);
	}
			 //Hien thi
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ t = "select* from sinhvien_has_monhoc";
		f.sda = gcnew  MySqlDataAdapter(t, f.con);
		DataTable^ tb = gcnew DataTable();
		f.sda->Fill(tb);
		bindingSource2->DataSource = tb;
		dataGridView1->DataSource = bindingSource2;
	}


			 //thêm
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ t = "insert into sinhvien_has_monhoc(sinhvien_MSSV,monhoc_Malop,DiemGK,DiemCK,heso) " 
			"values('" + this->MS->Text + "' ,N'" + this->maGV->Text + "','"+ this->GK->Text + "','" + this->CK->Text + "','" + this->heso->Text + "')";
		
		f.Insert(t);
	}
	

//xoá
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ X = "DELETE from sinhvien_has_monhoc where sinhvien_MSSV =N'" + this->MS->Text + "' and monhoc_Malop =N'" + this->maGV->Text + "'";
	f.Delete(X);

}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ X = "select  sinhvien_MSSV,hovaten, TenMH, DiemGK , DiemCK, heso, (left(heso,1)*DiemGK +right(heso,1)*DiemCK)/10 as DiemKT " 
		"from sinhvien , monhoc , sinhvien_has_monhoc" 
		" where MSSV = sinhvien_MSSV and Malop = monhoc_Malop ";
	try{
	f.sda = gcnew MySqlDataAdapter(X, f.con);
	DataTable^ dt = gcnew DataTable();
	f.sda->Fill(dt);
	bindingSource2->DataSource = dt;
	dataGridView1->DataSource = bindingSource2;
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	finally{
		f.con->Close();
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ X = "select  sinhvien_MSSV,hovaten,heso,DiemGK, DiemCK , (left(heso,1)*DiemGK +right(heso,1)*DiemCK)/10 as DiemKT " 
		"from sinhvien , monhoc , sinhvien_has_monhoc " 
	" where MSSV = sinhvien_MSSV and Malop = monhoc_Malop  and monhoc_Malop=N'"+this->maGV->Text+"'";

	f.sda = gcnew MySqlDataAdapter(X, f.con);
	DataTable^ dt = gcnew DataTable();
	f.sda->Fill(dt);
	bindingSource2->DataSource = dt;
	dataGridView1->DataSource = bindingSource2;
}


private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->MS->Text == "") MessageBox::Show("Hay dien MSSV de tim kiem!");
	else {
		String^ X = "CREATE VIEW D AS "

			"(select sinhvien_MSSV, MSMH, TenMH, Tinchi,DiemGK,DiemCK, (left(heso, 1)*DiemGK + right(heso, 1)*DiemCK) / 10 as DiemKT "
			"from sinhvien, monhoc, sinhvien_has_monhoc "
			"where MSSV = sinhvien_MSSV and monhoc_Malop = Malop and sinhvien_MSSV ="+this->MS->Text+"); "
			"select distinct sinhvien_MSSV, MSMH, TenMH,DiemGK,DiemCK, DiemKT, "
			"	(case "
			"		when(DiemCK < 3 or DiemGK < 3) then 'F' "
			"		when DiemKT >= 9.5 then 'A+' "
			"		when DiemKT >= 8.5 then 'A' "
			"		when DiemKT >= 8 then 'B+' "
			"		when DiemKT >= 7 then 'B' "
			"		When DiemKT >= 6.5 then 'C+' "
			"		when DiemKT >= 5.5 then 'C' "
			"		when DiemKT >= 5 then 'D+' "
			"		when DiemKT >= 4 then 'D' "
			"	 else 'F' "
			"		end)as Diemchu "
			"	from D; ";
		String^s=	"	select  sinhvien_MSSV,"
			"		sum((case "
			"		when(DiemCK < 3 or DiemGK < 3) then 0 "
			"			when DiemKT >= 8.5 then 4 * Tinchi "
			"			when DiemKT >= 8 then 3.5*Tinchi "
			"			when DiemKT >= 7 then 3 * Tinchi "
			"			when DiemKT >= 6.5 then 2.5*Tinchi "
			"			when DiemKT >= 5.5 then 2 * Tinchi "
			"			when DiemKT >= 5 then 1.5*Tinchi "
			"			when (DiemKT >= 4) then Tinchi "
			"			 else 0 "
			"			end)) / sum(Tinchi)as GPA "
			"			from D; "
			"			Drop view D; ";

	try{
		f.sda = gcnew MySqlDataAdapter(X, f.con);
		MySqlDataAdapter^ sda1 = gcnew MySqlDataAdapter(s, f.con);
		DataTable^ dt = gcnew DataTable();
		f.sda->Fill(dt);
		sda1->Fill(dt);
		bindingSource2->DataSource = dt;
		dataGridView1->DataSource = bindingSource2;
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
	finally{
		f.con->Close();
	}
	
	}
}



};
}