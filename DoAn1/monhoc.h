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
	/// Summary for monhoc
	/// </summary>
	public ref class monhoc : public System::Windows::Forms::Form
	{
		function f;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  mGV;
	public:static MySqlDataReader ^ dr;
	public:
		monhoc(void)


	{	
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			combo1();
		}
		void combo1() {

			String^ t = "select*from monhoc";
			f.cmd = gcnew MySqlCommand(t, f.con);
			try {
				f.con->Open();
				dr = f.cmd->ExecuteReader();
				while (dr->Read()) {
					String^ mon = dr->GetString("Malop");
					mGV->Items->Add(mon);
				}
			}
			catch (Exception^ ex) {
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
		~monhoc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  tgv;


	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  tenMH;

	private: System::Windows::Forms::Label^  MsMH;
	private: System::Windows::Forms::TextBox^  Tmh;


	private: System::Windows::Forms::Button^  them;
	private: System::Windows::Forms::Button^  xoa;
	private: System::Windows::Forms::Button^  sua;

	private: System::Windows::Forms::TextBox^  ms;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::BindingSource^  bindingSource2;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::ComponentModel::IContainer^  components;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(monhoc::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->mGV = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ms = (gcnew System::Windows::Forms::TextBox());
			this->Tmh = (gcnew System::Windows::Forms::TextBox());
			this->tgv = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tenMH = (gcnew System::Windows::Forms::Label());
			this->MsMH = (gcnew System::Windows::Forms::Label());
			this->them = (gcnew System::Windows::Forms::Button());
			this->xoa = (gcnew System::Windows::Forms::Button());
			this->sua = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox1->Controls->Add(this->mGV);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->ms);
			this->groupBox1->Controls->Add(this->Tmh);
			this->groupBox1->Controls->Add(this->tgv);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->tenMH);
			this->groupBox1->Controls->Add(this->MsMH);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 147);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(334, 270);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Môn học";
			// 
			// mGV
			// 
			this->mGV->FormattingEnabled = true;
			this->mGV->Location = System::Drawing::Point(123, 206);
			this->mGV->Name = L"mGV";
			this->mGV->Size = System::Drawing::Size(186, 33);
			this->mGV->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Mã lớp";
			// 
			// ms
			// 
			this->ms->Location = System::Drawing::Point(123, 59);
			this->ms->Name = L"ms";
			this->ms->Size = System::Drawing::Size(186, 30);
			this->ms->TabIndex = 22;
			// 
			// Tmh
			// 
			this->Tmh->Location = System::Drawing::Point(123, 116);
			this->Tmh->Name = L"Tmh";
			this->Tmh->Size = System::Drawing::Size(186, 30);
			this->Tmh->TabIndex = 21;
			// 
			// tgv
			// 
			this->tgv->Location = System::Drawing::Point(123, 165);
			this->tgv->Name = L"tgv";
			this->tgv->Size = System::Drawing::Size(186, 30);
			this->tgv->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(8, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Số tín chỉ";
			// 
			// tenMH
			// 
			this->tenMH->AutoSize = true;
			this->tenMH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tenMH->Location = System::Drawing::Point(5, 116);
			this->tenMH->Name = L"tenMH";
			this->tenMH->Size = System::Drawing::Size(106, 20);
			this->tenMH->TabIndex = 11;
			this->tenMH->Text = L"Tên môn học";
			// 
			// MsMH
			// 
			this->MsMH->AutoSize = true;
			this->MsMH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MsMH->Location = System::Drawing::Point(5, 66);
			this->MsMH->Name = L"MsMH";
			this->MsMH->Size = System::Drawing::Size(103, 20);
			this->MsMH->TabIndex = 10;
			this->MsMH->Text = L"MS môn học";
			// 
			// them
			// 
			this->them->BackColor = System::Drawing::Color::White;
			this->them->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->them->Location = System::Drawing::Point(1048, 147);
			this->them->Name = L"them";
			this->them->Size = System::Drawing::Size(146, 48);
			this->them->TabIndex = 12;
			this->them->Text = L" Thêm";
			this->them->UseVisualStyleBackColor = false;
			this->them->Click += gcnew System::EventHandler(this, &monhoc::them_Click);
			// 
			// xoa
			// 
			this->xoa->BackColor = System::Drawing::Color::White;
			this->xoa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xoa->Location = System::Drawing::Point(1048, 332);
			this->xoa->Name = L"xoa";
			this->xoa->Size = System::Drawing::Size(146, 48);
			this->xoa->TabIndex = 13;
			this->xoa->Text = L"Xoá";
			this->xoa->UseVisualStyleBackColor = false;
			this->xoa->Click += gcnew System::EventHandler(this, &monhoc::xoa_Click_1);
			// 
			// sua
			// 
			this->sua->BackColor = System::Drawing::Color::White;
			this->sua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sua->Location = System::Drawing::Point(1048, 234);
			this->sua->Name = L"sua";
			this->sua->Size = System::Drawing::Size(146, 49);
			this->sua->TabIndex = 14;
			this->sua->Text = L" Sửa";
			this->sua->UseVisualStyleBackColor = false;
			this->sua->Click += gcnew System::EventHandler(this, &monhoc::sua_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1004, 496);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 34);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Hiển thị";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &monhoc::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(379, 138);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(633, 339);
			this->dataGridView1->TabIndex = 12;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1058, 341);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(33, 29);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1058, 245);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(39, 28);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1058, 162);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(35, 24);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 27;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(341, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 44);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Quản Lý môn học";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(-1, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(146, 111);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 23;
			this->pictureBox4->TabStop = false;
			// 
			// monhoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1206, 561);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->sua);
			this->Controls->Add(this->xoa);
			this->Controls->Add(this->them);
			this->Controls->Add(this->groupBox1);
			this->Name = L"monhoc";
			this->Text = L"monhoc";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	

private: System::Void them_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ them = "Insert into monhoc(MSMH , TenMH,Tinchi,Malop)  values (N'" + this->ms->Text + "', N'" + this->Tmh->Text + "',N'" + this->tgv->Text + "',N'" + this->mGV->Text + "')";
	f.Insert(them);

}



private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from monhoc", f.con);
	DataTable^ dt = gcnew DataTable();
	sda->Fill(dt);
	bindingSource2->DataSource = dt;
	dataGridView1->DataSource = bindingSource2;
}


private: System::Void sua_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ update = "update monhoc set  MSMH = '" + this->ms->Text + "', TenMH = '" + this->Tmh->Text + "', Tinchi = '" + this->tgv->Text + "' where MaLop = N'" + this->mGV->Text + "'";
	f.update(update);
}





private: System::Void xoa_Click_1(System::Object^  sender, System::EventArgs^  e) {
	DialogResult = MessageBox::Show("Ban chac chan muon xoa?", "Canh bao", MessageBoxButtons::YesNo, MessageBoxIcon::Hand, MessageBoxDefaultButton::Button1, MessageBoxOptions::ServiceNotification);
	if (DialogResult == System::Windows::Forms::DialogResult::Yes) {

		String^ de = "delete from monhoc where MaLop = N'" + this->mGV->Text + "'";
		f.Delete(de);
	}
	else {
		MessageBox::Show("Huy viec xoa!");
	}
	
}
};
}
