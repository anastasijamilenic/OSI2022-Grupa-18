#pragma once

namespace hotelOSI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dodavanjeSoba
	/// </summary>
	public ref class dodavanjeSoba : public System::Windows::Forms::Form
	{
	public:
		dodavanjeSoba(void)
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
		~dodavanjeSoba()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label8;
	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ dodaj_Button;
	private: System::Windows::Forms::TextBox^ cijenaNocenja_TextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ brojKreveta_TextBox;
	private: System::Windows::Forms::TextBox^ brojSobe_TextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ tipSobe_ComboBox;
	private: System::Windows::Forms::CheckBox^ checkBox1;

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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dodaj_Button = (gcnew System::Windows::Forms::Button());
			this->cijenaNocenja_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->brojKreveta_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->brojSobe_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tipSobe_ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(149, 313);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 21);
			this->label8->TabIndex = 42;
			this->label8->Text = L"Zauzeta";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(149, 273);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 21);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Tip sobe";
			// 
			// dodaj_Button
			// 
			this->dodaj_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dodaj_Button->Location = System::Drawing::Point(563, 395);
			this->dodaj_Button->Margin = System::Windows::Forms::Padding(2);
			this->dodaj_Button->Name = L"dodaj_Button";
			this->dodaj_Button->Size = System::Drawing::Size(68, 23);
			this->dodaj_Button->TabIndex = 39;
			this->dodaj_Button->Text = L"Dodaj";
			this->dodaj_Button->UseVisualStyleBackColor = true;
			// 
			// cijenaNocenja_TextBox
			// 
			this->cijenaNocenja_TextBox->Location = System::Drawing::Point(371, 220);
			this->cijenaNocenja_TextBox->Margin = System::Windows::Forms::Padding(2);
			this->cijenaNocenja_TextBox->Name = L"cijenaNocenja_TextBox";
			this->cijenaNocenja_TextBox->Size = System::Drawing::Size(261, 20);
			this->cijenaNocenja_TextBox->TabIndex = 38;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(149, 220);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 21);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Cijena nocenja";
			// 
			// brojKreveta_TextBox
			// 
			this->brojKreveta_TextBox->Location = System::Drawing::Point(371, 165);
			this->brojKreveta_TextBox->Margin = System::Windows::Forms::Padding(2);
			this->brojKreveta_TextBox->Name = L"brojKreveta_TextBox";
			this->brojKreveta_TextBox->Size = System::Drawing::Size(261, 20);
			this->brojKreveta_TextBox->TabIndex = 36;
			// 
			// brojSobe_TextBox
			// 
			this->brojSobe_TextBox->Location = System::Drawing::Point(371, 117);
			this->brojSobe_TextBox->Margin = System::Windows::Forms::Padding(2);
			this->brojSobe_TextBox->Name = L"brojSobe_TextBox";
			this->brojSobe_TextBox->Size = System::Drawing::Size(261, 20);
			this->brojSobe_TextBox->TabIndex = 35;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(305, 57);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 25);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Dodavanje Sobe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(149, 165);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 21);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Broj kreveta u sobi";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(149, 114);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 21);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Broj Sobe";
			// 
			// tipSobe_ComboBox
			// 
			this->tipSobe_ComboBox->FormattingEnabled = true;
			this->tipSobe_ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Obicna", L"Premium", L"Luksuz" });
			this->tipSobe_ComboBox->Location = System::Drawing::Point(371, 276);
			this->tipSobe_ComboBox->Name = L"tipSobe_ComboBox";
			this->tipSobe_ComboBox->Size = System::Drawing::Size(260, 21);
			this->tipSobe_ComboBox->TabIndex = 44;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(371, 320);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 45;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// dodavanjeSoba
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 591);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->tipSobe_ComboBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dodaj_Button);
			this->Controls->Add(this->cijenaNocenja_TextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->brojKreveta_TextBox);
			this->Controls->Add(this->brojSobe_TextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"dodavanjeSoba";
			this->Text = L"dodavanjeSoba";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
