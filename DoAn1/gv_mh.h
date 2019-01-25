#pragma once
#include"function.h"
namespace DoAn1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gv_mh
	/// </summary>
	public ref class gv_mh : public System::Windows::Forms::Form
	{
		function f;
	private: System::Windows::Forms::ComboBox^  maGV;
	private: System::Windows::Forms::Button^  hienthi;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  malop;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	public:
	public:static MySqlDataAdapter ^ sda;
	public:
		gv_mh(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			combo1();
			combo2();
		}
		void combo1() {
			f.cmd = gcnew MySqlCommand("select * from giangvien ", f.con);
			try {
				f.con->Open();
				f.dr = f.cmd->ExecuteReader();

				while (f.dr->Read()) {
					String^ masoSV = f.dr->GetString("MaGV");
					maGV->Items->Add(masoSV);
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
			f.cmd = gcnew MySqlCommand(" select Malop from monhoc where Malop not in(select monhoc_Malop from gv_mh)", f.con);
			
			try {
				f.con->Open();
				f.dr =f.cmd->ExecuteReader();

				while (f.dr->Read()) {
					String^ masoSV = f.dr->GetString("Malop");
					malop->Items->Add(masoSV);
				}
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}
			finally{
				f.con->Close();
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gv_mh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox5;





	private: System::Windows::Forms::TextBox^  tl;

	private: System::Windows::Forms::Label^  T;



	private: System::Windows::Forms::Label^  MS;
	private: System::Windows::Forms::Label^  HT;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  xoa;
	private: System::Windows::Forms::Button^  Them;
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(gv_mh::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->tl = (gcnew System::Windows::Forms::TextBox());
			this->T = (gcnew System::Windows::Forms::Label());
			this->MS = (gcnew System::Windows::Forms::Label());
			this->HT = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->malop = (gcnew System::Windows::Forms::ComboBox());
			this->maGV = (gcnew System::Windows::Forms::ComboBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->xoa = (gcnew System::Windows::Forms::Button());
			this->Them = (gcnew System::Windows::Forms::Button());
			this->hienthi = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(462, 147);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(746, 383);
			this->dataGridView1->TabIndex = 90;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(27, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(161, 112);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 93;
			this->pictureBox5->TabStop = false;
			// 
			// tl
			// 
			this->tl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tl->Location = System::Drawing::Point(136, 189);
			this->tl->Name = L"tl";
			this->tl->Size = System::Drawing::Size(190, 24);
			this->tl->TabIndex = 77;
			// 
			// T
			// 
			this->T->AutoSize = true;
			this->T->Location = System::Drawing::Point(5, 198);
			this->T->Name = L"T";
			this->T->Size = System::Drawing::Size(104, 25);
			this->T->TabIndex = 76;
			this->T->Text = L"Thời lượng";
			// 
			// MS
			// 
			this->MS->AutoSize = true;
			this->MS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MS->Location = System::Drawing::Point(5, 69);
			this->MS->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MS->Name = L"MS";
			this->MS->Size = System::Drawing::Size(74, 25);
			this->MS->TabIndex = 67;
			this->MS->Text = L"Mã GV";
			// 
			// HT
			// 
			this->HT->AutoSize = true;
			this->HT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->HT->Location = System::Drawing::Point(5, 129);
			this->HT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->HT->Name = L"HT";
			this->HT->Size = System::Drawing::Size(71, 25);
			this->HT->TabIndex = 68;
			this->HT->Text = L"Mã lớp";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox1->Controls->Add(this->malop);
			this->groupBox1->Controls->Add(this->maGV);
			this->groupBox1->Controls->Add(this->tl);
			this->groupBox1->Controls->Add(this->T);
			this->groupBox1->Controls->Add(this->MS);
			this->groupBox1->Controls->Add(this->HT);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(57, 147);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(359, 386);
			this->groupBox1->TabIndex = 91;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Đăng kí dạy";
			// 
			// malop
			// 
			this->malop->FormattingEnabled = true;
			this->malop->Location = System::Drawing::Point(136, 129);
			this->malop->Name = L"malop";
			this->malop->Size = System::Drawing::Size(190, 33);
			this->malop->TabIndex = 79;
			// 
			// maGV
			// 
			this->maGV->FormattingEnabled = true;
			this->maGV->Location = System::Drawing::Point(136, 69);
			this->maGV->Name = L"maGV";
			this->maGV->Size = System::Drawing::Size(190, 33);
			this->maGV->TabIndex = 78;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(711, 564);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 42);
			this->button1->TabIndex = 89;
			this->button1->Text = L"Sửa";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &gv_mh::button1_Click);
			// 
			// xoa
			// 
			this->xoa->BackColor = System::Drawing::Color::White;
			this->xoa->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->xoa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xoa->Location = System::Drawing::Point(477, 564);
			this->xoa->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->xoa->Name = L"xoa";
			this->xoa->Size = System::Drawing::Size(160, 42);
			this->xoa->TabIndex = 86;
			this->xoa->Text = L"Xoá";
			this->xoa->UseVisualStyleBackColor = false;
			this->xoa->Click += gcnew System::EventHandler(this, &gv_mh::xoa_Click);
			// 
			// Them
			// 
			this->Them->BackColor = System::Drawing::Color::White;
			this->Them->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Them->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Them->Location = System::Drawing::Point(937, 564);
			this->Them->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Them->Name = L"Them";
			this->Them->Size = System::Drawing::Size(151, 42);
			this->Them->TabIndex = 85;
			this->Them->Text = L"Thêm";
			this->Them->UseVisualStyleBackColor = false;
			this->Them->Click += gcnew System::EventHandler(this, &gv_mh::Them_Click);
			// 
			// hienthi
			// 
			this->hienthi->BackColor = System::Drawing::Color::White;
			this->hienthi->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->hienthi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hienthi->Location = System::Drawing::Point(1242, 429);
			this->hienthi->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->hienthi->Name = L"hienthi";
			this->hienthi->Size = System::Drawing::Size(117, 39);
			this->hienthi->TabIndex = 94;
			this->hienthi->Text = L"Hiển thị";
			this->hienthi->UseVisualStyleBackColor = false;
			this->hienthi->Click += gcnew System::EventHandler(this, &gv_mh::hienthi_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1242, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 43);
			this->button2->TabIndex = 79;
			this->button2->Text = L"GV đăng kí";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &gv_mh::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(1242, 323);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 37);
			this->button3->TabIndex = 95;
			this->button3->Text = L"Thống kê";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &gv_mh::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(564, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 38);
			this->label1->TabIndex = 96;
			this->label1->Text = L"Giảng viên đăng kí ";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(950, 570);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(33, 25);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 97;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(725, 570);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 98;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(492, 570);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(32, 25);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 99;
			this->pictureBox4->TabStop = false;
			// 
			// gv_mh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1396, 630);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->hienthi);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->xoa);
			this->Controls->Add(this->Them);
			this->Name = L"gv_mh";
			this->Text = L"gv_mh";
			this->Load += gcnew System::EventHandler(this, &gv_mh::gv_mh_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Them_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ themsv = "Insert into gv_mh(monhoc_Malop,giangvien_MaGV,Sogio) values('" + this->malop->Text + "' , '" + this->maGV->Text + "' ,  '" + this->tl->Text + "')";
		f.Insert(themsv);
		malop->Items->Clear();
		combo2();
	}


private: System::Void xoa_Click(System::Object^  sender, System::EventArgs^  e) {
	DialogResult = MessageBox::Show("Ban chac chan muon xoa?", "Canh bao", MessageBoxButtons::YesNo, MessageBoxIcon::Hand, MessageBoxDefaultButton::Button1, MessageBoxOptions::ServiceNotification);
	if (DialogResult == System::Windows::Forms::DialogResult::Yes) {
		String^s=	"delete from gv_mh Where giangvien_MaGV=" + this->maGV->Text + " and monhoc_Malop = '"+this->malop->Text+"'";
		f.Delete(s);
		}
	else {
			MessageBox::Show("Huy viec xoa!");
		}
	malop->Items->Clear();
	combo2();
}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ update = "update gv_mh set Sogio='" + this->tl->Text + "' where giangvien_MaGV=" + this->maGV->Text + " and monhoc_Malop = " + this->malop->Text + " " ;
	f.update(update);
}


private: System::Void hienthi_Click(System::Object^  sender, System::EventArgs^  e) {
	sda = gcnew MySqlDataAdapter("select * from gv_mh", f.con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->MS->Text == "") MessageBox::Show("Hay dien MSGV de tim kiem!");
		else {
		String^ s = " select distinct giangvien_MaGV, hovaten, monhoc_Malop,TenMh "
			"from giangvien, gv_mh, monhoc "
			"where giangvien_MaGV = MaGV and monhoc_Malop = Malop and giangvien_MaGV = N'" + this->maGV->Text + "'";
		try {
			sda = gcnew MySqlDataAdapter(s, f.con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally{
			f.con->Close();
		}
	}
}



private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	
	String^ s = " select distinct giangvien_MaGV, hovaten, count(giangvien_MaGV) Tong_so_lop, sum(sogio) thoigian  "
		"from giangvien, gv_mh "
		"where giangvien_MaGV = MaGV "
		"group by giangvien_MaGV "
		" Order by tong_so_lop DESC ";
		try {
			sda = gcnew MySqlDataAdapter(s, f.con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally{
			f.con->Close();
		}
}
private: System::Void gv_mh_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
