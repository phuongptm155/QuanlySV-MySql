#pragma once
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
ref class function
{
public:
public: MySqlConnection^ con = gcnew MySqlConnection("server=localhost;user id=root;pwd=15520498;database=sinhvien;charset=UTF8");
public: MySqlDataReader^ dr;
public: MySqlCommand^ cmd;
public: MySqlDataAdapter ^ sda;
	function();
	public: void Insert(String^s) {
		cmd = gcnew MySqlCommand(s, con);

		try {
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Them thanh cong!");
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}
		finally{
			con->Close();
		}
	}

public: void Delete (String^ s){
	
		try {
			cmd = gcnew MySqlCommand(s, con);
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Ban da xoa thanh cong!");
			
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
			
		}
		finally{
			con->Close();
		}	
	}
public: void update(String^s) {
	cmd = gcnew MySqlCommand(s, con);
	try {
		con->Open();
		dr = cmd->ExecuteReader();
		MessageBox::Show("Ban da cap nhat thong tin");

	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
	finally{
		con->Close();
	}
}
};

