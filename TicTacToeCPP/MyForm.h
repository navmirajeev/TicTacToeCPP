#pragma once

namespace TicTacToeCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnTic6;

	private: System::Windows::Forms::Button^ btnTic5;

	private: System::Windows::Forms::Button^ btnTic4;

	private: System::Windows::Forms::Button^ btnTic3;

	private: System::Windows::Forms::Button^ btnTic2;

	private: System::Windows::Forms::Button^ btnTic1;
	private: System::Windows::Forms::Button^ btnTic9;



	private: System::Windows::Forms::Button^ btnTic8;

	private: System::Windows::Forms::Button^ btnTic7;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnNewGame;
	private: System::Windows::Forms::Button^ btnReset;


	private: System::Windows::Forms::Label^ lblPlayerO;

	private: System::Windows::Forms::Label^ lblPlayerX;

	private: System::Windows::Forms::Label^ PlayerOlabel;

	private: System::Windows::Forms::Label^ PlayerXlabel;




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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->PlayerOlabel = (gcnew System::Windows::Forms::Label());
			this->PlayerXlabel = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(41, 38);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1272, 129);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(203, -18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(907, 145);
			this->label5->TabIndex = 3;
			this->label5->Text = L"TIC TAC TOE";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Tan;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(40, 203);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1272, 511);
			this->panel2->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(688, 36);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(543, 424);
			this->panel4->TabIndex = 2;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::LightBlue;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->btnNewGame);
			this->panel6->Controls->Add(this->btnReset);
			this->panel6->Location = System::Drawing::Point(20, 181);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(498, 218);
			this->panel6->TabIndex = 1;
			// 
			// btnNewGame
			// 
			this->btnNewGame->Font = (gcnew System::Drawing::Font(L"Ebrima", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewGame->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->btnNewGame->Location = System::Drawing::Point(23, 110);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(446, 86);
			this->btnNewGame->TabIndex = 3;
			this->btnNewGame->Text = L"New Game";
			this->btnNewGame->UseVisualStyleBackColor = true;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &MyForm::btnNewGame_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Ebrima", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->btnReset->Location = System::Drawing::Point(23, 18);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(446, 86);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::LightBlue;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->lblPlayerO);
			this->panel5->Controls->Add(this->lblPlayerX);
			this->panel5->Controls->Add(this->PlayerOlabel);
			this->panel5->Controls->Add(this->PlayerXlabel);
			this->panel5->Location = System::Drawing::Point(20, 23);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(498, 140);
			this->panel5->TabIndex = 1;
			// 
			// lblPlayerO
			// 
			this->lblPlayerO->BackColor = System::Drawing::Color::White;
			this->lblPlayerO->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerO->ForeColor = System::Drawing::Color::SlateBlue;
			this->lblPlayerO->Location = System::Drawing::Point(233, 76);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(236, 48);
			this->lblPlayerO->TabIndex = 3;
			this->lblPlayerO->Text = L"0";
			this->lblPlayerO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblPlayerO->Click += gcnew System::EventHandler(this, &MyForm::lblPlayerO_Click);
			// 
			// lblPlayerX
			// 
			this->lblPlayerX->BackColor = System::Drawing::Color::White;
			this->lblPlayerX->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerX->ForeColor = System::Drawing::Color::SlateBlue;
			this->lblPlayerX->Location = System::Drawing::Point(234, 20);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(236, 48);
			this->lblPlayerX->TabIndex = 2;
			this->lblPlayerX->Text = L"0";
			this->lblPlayerX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblPlayerX->Click += gcnew System::EventHandler(this, &MyForm::lblPlayerX_Click);
			// 
			// PlayerOlabel
			// 
			this->PlayerOlabel->AutoSize = true;
			this->PlayerOlabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerOlabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->PlayerOlabel->Location = System::Drawing::Point(24, 76);
			this->PlayerOlabel->Name = L"PlayerOlabel";
			this->PlayerOlabel->Size = System::Drawing::Size(182, 56);
			this->PlayerOlabel->TabIndex = 1;
			this->PlayerOlabel->Text = L"Player O";
			this->PlayerOlabel->Click += gcnew System::EventHandler(this, &MyForm::PlayerOlabel_Click);
			// 
			// PlayerXlabel
			// 
			this->PlayerXlabel->AutoSize = true;
			this->PlayerXlabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerXlabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->PlayerXlabel->Location = System::Drawing::Point(24, 20);
			this->PlayerXlabel->Name = L"PlayerXlabel";
			this->PlayerXlabel->Size = System::Drawing::Size(179, 56);
			this->PlayerXlabel->TabIndex = 0;
			this->PlayerXlabel->Text = L"Player X";
			this->PlayerXlabel->Click += gcnew System::EventHandler(this, &MyForm::PlayerXlabel_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->btnTic8);
			this->panel3->Controls->Add(this->btnTic2);
			this->panel3->Controls->Add(this->btnTic9);
			this->panel3->Controls->Add(this->btnTic7);
			this->panel3->Controls->Add(this->btnTic6);
			this->panel3->Controls->Add(this->btnTic5);
			this->panel3->Controls->Add(this->btnTic4);
			this->panel3->Controls->Add(this->btnTic3);
			this->panel3->Controls->Add(this->btnTic1);
			this->panel3->Location = System::Drawing::Point(23, 20);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(635, 465);
			this->panel3->TabIndex = 1;
			// 
			// btnTic8
			// 
			this->btnTic8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic8->Location = System::Drawing::Point(226, 310);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(185, 136);
			this->btnTic8->TabIndex = 8;
			this->btnTic8->UseVisualStyleBackColor = true;
			this->btnTic8->Click += gcnew System::EventHandler(this, &MyForm::btnTic8_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic2->ForeColor = System::Drawing::Color::Indigo;
			this->btnTic2->Location = System::Drawing::Point(226, 14);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(185, 137);
			this->btnTic2->TabIndex = 2;
			this->btnTic2->UseVisualStyleBackColor = true;
			this->btnTic2->Click += gcnew System::EventHandler(this, &MyForm::btnTic2_Click);
			// 
			// btnTic9
			// 
			this->btnTic9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic9->Location = System::Drawing::Point(427, 310);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(185, 136);
			this->btnTic9->TabIndex = 9;
			this->btnTic9->UseVisualStyleBackColor = true;
			this->btnTic9->Click += gcnew System::EventHandler(this, &MyForm::btnTic9_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic7->Location = System::Drawing::Point(22, 310);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(185, 136);
			this->btnTic7->TabIndex = 7;
			this->btnTic7->UseVisualStyleBackColor = true;
			this->btnTic7->Click += gcnew System::EventHandler(this, &MyForm::btnTic7_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic6->Location = System::Drawing::Point(427, 163);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(185, 135);
			this->btnTic6->TabIndex = 6;
			this->btnTic6->UseVisualStyleBackColor = true;
			this->btnTic6->Click += gcnew System::EventHandler(this, &MyForm::btnTic6_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic5->Location = System::Drawing::Point(226, 163);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(185, 135);
			this->btnTic5->TabIndex = 5;
			this->btnTic5->UseVisualStyleBackColor = true;
			this->btnTic5->Click += gcnew System::EventHandler(this, &MyForm::btnTic5_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic4->Location = System::Drawing::Point(23, 163);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(185, 135);
			this->btnTic4->TabIndex = 4;
			this->btnTic4->UseVisualStyleBackColor = true;
			this->btnTic4->Click += gcnew System::EventHandler(this, &MyForm::btnTic4_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic3->Location = System::Drawing::Point(427, 14);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(185, 137);
			this->btnTic3->TabIndex = 3;
			this->btnTic3->UseVisualStyleBackColor = true;
			this->btnTic3->Click += gcnew System::EventHandler(this, &MyForm::btnTic3_Click);
			// 
			// btnTic1
			// 
			this->btnTic1->BackColor = System::Drawing::Color::White;
			this->btnTic1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic1->ForeColor = System::Drawing::Color::Indigo;
			this->btnTic1->Location = System::Drawing::Point(22, 14);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(185, 136);
			this->btnTic1->TabIndex = 1;
			this->btnTic1->UseVisualStyleBackColor = true;
			this->btnTic1->Click += gcnew System::EventHandler(this, &MyForm::btnTic1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(1352, 753);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		Boolean checker;
		int plusone;
#pragma endregion
		
		void Enable_False()
		{
			btnTic1->Enabled = false;
			btnTic2->Enabled = false;
			btnTic3->Enabled = false;
			btnTic4->Enabled = false;
			btnTic5->Enabled = false;
			btnTic6->Enabled = false;
			btnTic7->Enabled = false;
			btnTic8->Enabled = false;
			btnTic9->Enabled = false;
		}

		void score()
		{
			if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::MediumPurple;
				btnTic2->BackColor = System::Drawing::Color::MediumPurple;
				btnTic3->BackColor = System::Drawing::Color::MediumPurple;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::MediumPurple;
				btnTic4->BackColor = System::Drawing::Color::MediumPurple;
				btnTic7->BackColor = System::Drawing::Color::MediumPurple;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::MediumPurple;
				btnTic5->BackColor = System::Drawing::Color::MediumPurple;
				btnTic9->BackColor = System::Drawing::Color::MediumPurple;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X")
			{
				btnTic4->BackColor = System::Drawing::Color::MediumPurple;
				btnTic5->BackColor = System::Drawing::Color::MediumPurple;
				btnTic6->BackColor = System::Drawing::Color::MediumPurple;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X")
			{
				btnTic7->BackColor = System::Drawing::Color::MediumPurple;
				btnTic8->BackColor = System::Drawing::Color::MediumPurple;
				btnTic9->BackColor = System::Drawing::Color::MediumPurple;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::MediumPurple;
				btnTic5->BackColor = System::Drawing::Color::MediumPurple;
				btnTic7->BackColor = System::Drawing::Color::MediumPurple;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if(btnTic2->Text == "X" && btnTic5->Text == "X" && btnTic8->Text == "X")
			{
				btnTic2->BackColor = System::Drawing::Color::MediumPurple;
				btnTic5->BackColor = System::Drawing::Color::MediumPurple;
				btnTic8->BackColor = System::Drawing::Color::MediumPurple;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (btnTic3->Text == "X" && btnTic6->Text == "X" && btnTic9->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::MediumPurple;
				btnTic6->BackColor = System::Drawing::Color::MediumPurple;
				btnTic9->BackColor = System::Drawing::Color::MediumPurple;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			//----------------------------------------------------------------------------------------------
			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::AliceBlue;
				btnTic2->BackColor = System::Drawing::Color::AliceBlue;
				btnTic3->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::AliceBlue;
				btnTic4->BackColor = System::Drawing::Color::AliceBlue;
				btnTic7->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::AliceBlue;
				btnTic5->BackColor = System::Drawing::Color::AliceBlue;
				btnTic9->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic4->Text == "O" && btnTic4->Text == "O" && btnTic6->Text == "O")
			{
				btnTic4->BackColor = System::Drawing::Color::AliceBlue;
				btnTic5->BackColor = System::Drawing::Color::AliceBlue;
				btnTic6->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O")
			{
				btnTic7->BackColor = System::Drawing::Color::AliceBlue;
				btnTic8->BackColor = System::Drawing::Color::AliceBlue;
				btnTic9->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::AliceBlue;
				btnTic5->BackColor = System::Drawing::Color::AliceBlue;
				btnTic7->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (btnTic2->Text == "O" && btnTic5->Text == "O" && btnTic8->Text == "O")
			{
				btnTic2->BackColor = System::Drawing::Color::AliceBlue;
				btnTic5->BackColor = System::Drawing::Color::AliceBlue;
				btnTic8->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (btnTic3->Text == "O" && btnTic6->Text == "O" && btnTic9->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::AliceBlue;
				btnTic6->BackColor = System::Drawing::Color::AliceBlue;
				btnTic9->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {



	}
private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic1->Text = "X";
			checker = true;
	}
	else
	{
		btnTic1->Text = "O";
		checker = false;
	}
	score();
	btnTic1->Enabled = false;
}

private: System::Void btnTic2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic2->Text = "X";
		checker = true;
	}
	else
	{
		btnTic2->Text = "O";
		checker = false;
	}
	score();
	btnTic2->Enabled = false;
}
private: System::Void btnTic3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic3->Text = "X";
		checker = true;
	}
	else
	{
		btnTic3->Text = "O";
		checker = false;
	}
	score();
	btnTic3->Enabled = false;
}
private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic4->Text = "X";
		checker = true;
	}
	else
	{
		btnTic4->Text = "O";
		checker = false;
	}
	score();
	btnTic4->Enabled = false;
}
private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic5->Text = "X";
		checker = true;
	}
	else
	{
		btnTic5->Text = "O";
		checker = false;
	}
	score();
	btnTic5->Enabled = false;
}
private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic6->Text = "X";
		checker = true;
	}
	else
	{
		btnTic6->Text = "O";
		checker = false;
	}
	score();
	btnTic6->Enabled = false;
}
private: System::Void btnTic7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic7->Text = "X";
		checker = true;
	}
	else
	{
		btnTic7->Text = "O";
		checker = false;
	}
	score();
	btnTic7->Enabled = false;
}
private: System::Void btnTic8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic8->Text = "X";
		checker = true;
	}
	else
	{
		btnTic8->Text = "O";
		checker = false;
	}
	score();
	btnTic8->Enabled = false;
}
private: System::Void btnTic9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic9->Text = "X";
		checker = true;
	}
	else
	{
		btnTic9->Text = "O";
		checker = false;
	}
	score();
	btnTic9->Enabled = false;
}

private: System::Void PlayerOlabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PlayerXlabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblPlayerO_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblPlayerX_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";

	btnNewGame->Enabled = true;

	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;


}
private: System::Void btnNewGame_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";

	lblPlayerO->Text = "0";
	lblPlayerX->Text = "0";

	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;


}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
