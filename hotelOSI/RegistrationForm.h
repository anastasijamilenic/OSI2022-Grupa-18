#pragma once
#include <fstream>
#include <string>
namespace hotelOSI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
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
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(519, 735);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 36);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Potvrda";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegistrationForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(277, 189);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(344, 26);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &RegistrationForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(277, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(344, 26);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &RegistrationForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(255, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 37);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Registracija";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 189);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 30);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Prezime";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 30);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Ime";
			this->label1->Click += gcnew System::EventHandler(this, &RegistrationForm::label1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(277, 342);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(344, 26);
			this->textBox3->TabIndex = 15;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(277, 267);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(344, 26);
			this->textBox4->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 342);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 30);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Lozinka";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(7, 262);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(189, 30);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Korisničko ime";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(277, 418);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(344, 26);
			this->textBox5->TabIndex = 17;
			this->textBox5->UseSystemPasswordChar = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(7, 413);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(194, 30);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Potvrda lozinke";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(7, 489);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 30);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Odabir pitanja";
			this->label7->Click += gcnew System::EventHandler(this, &RegistrationForm::label7_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Ime prvog ljubimca\?", L"Ime roditelja\?", L"Ime omiljene pjesme\?",
					L"Ime omiljenog filma\?"
			});
			this->listBox1->Location = System::Drawing::Point(277, 495);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(344, 24);
			this->listBox1->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(277, 556);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(344, 26);
			this->textBox6->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(7, 551);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 30);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Odgovor";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(7, 620);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(135, 30);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Tip naloga";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(277, 625);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(186, 24);
			this->checkBox1->TabIndex = 23;
			this->checkBox1->Text = L"Administrator resursa";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &RegistrationForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(277, 655);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(202, 24);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->Text = L"Sisitemski administrator";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(277, 685);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(77, 24);
			this->checkBox3->TabIndex = 25;
			this->checkBox3->Text = L"Klijent";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 783);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegistrationForm";
			this->Text = L"RegistrationForm";
			this->Load += gcnew System::EventHandler(this, &RegistrationForm::RegistrationForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegistrationForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked==true)
	{
		checkBox2->Checked = false;
		checkBox3->Checked = false;
	}
	else if (checkBox2->Checked == true)
	{
		checkBox1->Checked = false;
		checkBox3->Checked = false;
	}
	else
	{
		checkBox1->Checked = false;
		checkBox2->Checked = false;
	}
}
	   
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && (
			(checkBox1->Checked && checkBox2->Checked == false && checkBox3->Checked == false) ||
			(checkBox2->Checked && checkBox1->Checked == false && checkBox3->Checked == false) ||
			(checkBox3->Checked && checkBox2->Checked == false && checkBox1->Checked == false)
			))
	{
		button1->Enabled = true;
		MessageBox::Show("Uspješno ste se registovali!", "Registracija", MessageBoxButtons::OK, MessageBoxIcon::Information);
		FILE* fp;
		if ((checkBox1->Checked && checkBox2->Checked == false && checkBox3->Checked == false))
		{
			if (fp = fopen("Administratori resursa.txt", "a"))
			{
				MessageBox::Show("Uspjesan upis!", "Upis", MessageBoxButtons::OK, MessageBoxIcon::Information);
				fprintf(fp, "%s %s %s %s %s %s", textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text);
				fclose(fp);
			}
		}
		else if((checkBox2->Checked && checkBox1->Checked == false && checkBox3->Checked == false))
		{
			if (fp = fopen("Sistemski administrator.txt", "a"))
			{
				MessageBox::Show("Uspjesan upis!", "Upis", MessageBoxButtons::OK, MessageBoxIcon::Information);
				fprintf(fp, "%s %s %s %s %s %s", textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text);
				fclose(fp);
			}
		}
		else if ((checkBox3->Checked && checkBox2->Checked == false && checkBox1->Checked == false))
		{
			if (fp = fopen("Klijenti.txt", "a"))
			{
				MessageBox::Show("Uspjesan upis!", "Upis", MessageBoxButtons::OK, MessageBoxIcon::Information);
				fprintf(fp, "%s %s %s %s %s %s", textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text);
				fclose(fp);
			}

		}
		

	}
	else {
		button1->Enabled = false;
		MessageBox::Show("Neuspješna registracija!", "Registracija", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Hide();
		RegistrationForm^ form2 = gcnew RegistrationForm;
		form2->Show();

	}


}
	   


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
