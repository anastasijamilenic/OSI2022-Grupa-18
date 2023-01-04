#pragma once

namespace hotelOSI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProvjeraIdentiteta
	/// </summary>
	public ref class ProvjeraIdentiteta : public System::Windows::Forms::Form
	{
	public:
		ProvjeraIdentiteta(void)
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
		~ProvjeraIdentiteta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox6;
	protected:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;

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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(287, 115);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(344, 26);
			this->textBox6->TabIndex = 26;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(17, 110);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 30);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Odgovor";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Ime prvog ljubimca\?", L"Ime roditelja\?", L"Ime omiljene pjesme\?",
					L"Ime omiljenog filma\?"
			});
			this->listBox1->Location = System::Drawing::Point(287, 54);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(344, 24);
			this->listBox1->TabIndex = 24;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(17, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 30);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Odabir pitanja";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(529, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 36);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Potvrda";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// ProvjeraIdentiteta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 216);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Name = L"ProvjeraIdentiteta";
			this->Text = L"ProvjeraIdentiteta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
