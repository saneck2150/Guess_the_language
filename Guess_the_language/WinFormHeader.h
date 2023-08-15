#pragma once
#include "CodeHeader.h"

namespace Guessthelanguage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::Reflection;



	/// <summary>
	/// Сводка для WinForm
	/// </summary>
	public ref class WinForm : public System::Windows::Forms::Form
	{
	private: static bool buttonOnOff = false; // Variable to detect is audio on or off;
	public:


		WinForm(void)
		{
			InitializeComponent();
			startingPositionSettings();

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~WinForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::Label^ labelhp;

	private: System::Windows::Forms::Label^ labelPoints;
	private: System::Windows::Forms::Button^ buttonPlay;
	private: System::Windows::Forms::Label^ labelGameOver;
	private: System::Windows::Forms::Button^ buttonGameOver;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->labelhp = (gcnew System::Windows::Forms::Label());
			this->labelPoints = (gcnew System::Windows::Forms::Label());
			this->buttonPlay = (gcnew System::Windows::Forms::Button());
			this->labelGameOver = (gcnew System::Windows::Forms::Label());
			this->buttonGameOver = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Location = System::Drawing::Point(50, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 50);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &WinForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Location = System::Drawing::Point(227, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 50);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &WinForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Location = System::Drawing::Point(50, 275);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 50);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &WinForm::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Location = System::Drawing::Point(227, 275);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 50);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &WinForm::button4_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->FlatAppearance->BorderSize = 0;
			this->buttonStart->Location = System::Drawing::Point(151, 362);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(75, 23);
			this->buttonStart->TabIndex = 4;
			this->buttonStart->Text = L"START";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &WinForm::buttonStart_Click);
			// 
			// labelhp
			// 
			this->labelhp->AutoSize = true;
			this->labelhp->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelhp->Location = System::Drawing::Point(47, 68);
			this->labelhp->Name = L"labelhp";
			this->labelhp->Size = System::Drawing::Size(43, 17);
			this->labelhp->TabIndex = 5;
			this->labelhp->Text = L"label1";
			// 
			// labelPoints
			// 
			this->labelPoints->AutoSize = true;
			this->labelPoints->Location = System::Drawing::Point(299, 68);
			this->labelPoints->Name = L"labelPoints";
			this->labelPoints->Size = System::Drawing::Size(14, 16);
			this->labelPoints->TabIndex = 6;
			this->labelPoints->Text = L"0";
			// 
			// buttonPlay
			// 
			this->buttonPlay->BackColor = System::Drawing::Color::Transparent;
			this->buttonPlay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonPlay->FlatAppearance->BorderSize = 0;
			this->buttonPlay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlay->Location = System::Drawing::Point(151, 117);
			this->buttonPlay->Name = L"buttonPlay";
			this->buttonPlay->Size = System::Drawing::Size(75, 59);
			this->buttonPlay->TabIndex = 7;
			this->buttonPlay->Text = L"⏯️";
			this->buttonPlay->UseVisualStyleBackColor = false;
			this->buttonPlay->Click += gcnew System::EventHandler(this, &WinForm::buttonPlay_Click);
			// 
			// labelGameOver
			// 
			this->labelGameOver->AutoSize = true;
			this->labelGameOver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelGameOver->Location = System::Drawing::Point(172, 200);
			this->labelGameOver->Name = L"labelGameOver";
			this->labelGameOver->Size = System::Drawing::Size(0, 25);
			this->labelGameOver->TabIndex = 8;
			// 
			// buttonGameOver
			// 
			this->buttonGameOver->Location = System::Drawing::Point(151, 362);
			this->buttonGameOver->Name = L"buttonGameOver";
			this->buttonGameOver->Size = System::Drawing::Size(75, 23);
			this->buttonGameOver->TabIndex = 9;
			this->buttonGameOver->Text = L"Ok";
			this->buttonGameOver->UseVisualStyleBackColor = true;
			this->buttonGameOver->Visible = false;
			this->buttonGameOver->Click += gcnew System::EventHandler(this, &WinForm::buttonGameOver_Click);
			// 
			// WinForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 453);
			this->Controls->Add(this->buttonGameOver);
			this->Controls->Add(this->labelGameOver);
			this->Controls->Add(this->buttonPlay);
			this->Controls->Add(this->labelPoints);
			this->Controls->Add(this->labelhp);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"WinForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int centreX() // winForm X axis centre  
	{
		//buttonStart->Width *= 2;
		int centerX = this->ClientSize.Width / 2;
		int buttonWidth = this->buttonStart->Size.Width;
		return centerX - buttonWidth / 2;
	}
	private: int centreY() // winForm Y axis centre  
	{
		//buttonStart->Height *= 2;
		int centerY = this->ClientSize.Height / 2;
		int buttonHeight = this->buttonStart->Size.Height;
		return centerY - buttonHeight / 2;
	
	}

	private: void startingPositionSettings()
	{
		// Configure initial element positions and visibility on the form
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		button4->Visible = false;
		labelhp->Visible = false;
		labelPoints->Visible = false;
		buttonPlay->Visible = false;
		this->MaximizeBox = false;
		labelGameOver->Visible = false;
		

		// Centre of the form: 

		buttonStart->Height *= 2;
		buttonStart->Width *= 2;

		this->buttonStart->Left = centreX();
		this->buttonStart->Top = centreY();

	//	
	}

	private: void defaultPositionSettings()
	{
		// Restore elements and positions after starting the game
		button1->Visible = true;
		button2->Visible = true;
		button3->Visible = true;
		button4->Visible = true;
		labelhp->Visible = true;
		labelPoints->Visible = true;
		buttonPlay->Visible = true;
		
		// Centre of the form: 


		this->buttonStart->Left = centreX();
		this->buttonStart->Top = centreY()+125;

	}
	private: void buttonDisabler() // functoin to disable all buttons exept button "Next"
	{
		this->button1->Enabled = false;
		this->button2->Enabled = false;
		this->button3->Enabled = false;
		this->button4->Enabled = false;
		this->buttonStart->Enabled = true;
	}
	private: void buttonEnabler() // functoin to enable all buttons exept button "Next"
	{
		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->button4->Enabled = true;
		this->buttonStart->Enabled = false;
	}

	private: void rightAnswerButtonLighter() // function lights the button with right answer
	{
		if (button1->Text == labelPoints->Text) this->button1->BackColor = Drawing::Color::Green;
		if (button2->Text == labelPoints->Text) this->button2->BackColor = Drawing::Color::Green;
		if (button3->Text == labelPoints->Text) this->button3->BackColor = Drawing::Color::Green;
		if (button4->Text == labelPoints->Text) this->button4->BackColor = Drawing::Color::Green;
	}
		// -------------------------------
		// Start of aplication and generating standart parameters for winForm
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
		
		defaultPositionSettings(); // Restore positions after starting the game

		buttonEnabler(); // Enable choice buttons


		// Variables and objects
		GuessTheLanguageLogic start;
		vector<int> distribution = start.randomDistribution();
		start.rigthAnwerGeneration(distribution);
		string strAnswer = start.languageIdPair[GuessTheLanguageLogic::rightAnswer];

		// Generation of the right answer
		this->labelPoints->Text = gcnew String(strAnswer.c_str());

		// Filling the button texts with coutry names
		string countryName = start.languageIdPair[distribution[0]];
		this->button1->Text = gcnew String(countryName.c_str());
		countryName = start.languageIdPair[distribution[1]];
		this->button2->Text = gcnew String(countryName.c_str());
		countryName = start.languageIdPair[distribution[2]];
		this->button3->Text = gcnew String(countryName.c_str());
		countryName = start.languageIdPair[distribution[3]];
		this->button4->Text = gcnew String(countryName.c_str());

		// Reset colours to white, after each round
		this->button1->BackColor = Drawing::Color::White;
		this->button2->BackColor = Drawing::Color::White;
		this->button3->BackColor = Drawing::Color::White;
		this->button4->BackColor = Drawing::Color::White;

		// Rename the start button to "Next"
		this->buttonStart->Text = "Next";

		// Show of lables with HP and Health indicators
		this->labelhp->Text = "HP: " + (GuessTheLanguageLogic::healthPoints).ToString();
		this->labelPoints->Text = "Score: " + GuessTheLanguageLogic::scorePoints.ToString();

		// Pause of audio player when user clicks "Next" without audio pause
		SoundPlayer^ simpleSound;
		simpleSound->Stop();

		// Checks if the number of HP points != 0 or == 0
		if (GuessTheLanguageLogic::healthCheck()) 
		{
			// disabling all buttons and lables on form
			for each (Control ^ control in Controls)
			{
				control->Visible = false;
			}

			// Prints text on before invisible label "Game over" and turning it on
			this->labelGameOver->Text = "Game over, your score is: " + GuessTheLanguageLogic::scorePoints.ToString();
			this->labelGameOver->Visible = true;
			this->buttonGameOver->Visible = true;

			// Centering "Game over" label
			this->labelGameOver->Left = centreX()-50;
			this->labelGameOver->Top = centreY();

		}		
}
//-------------------------------
		   //User answer return.

		   // All button1 to button4  have the same functions exept the button name 

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	GuessTheLanguageLogic User;

	// Print country name on button
	User.chosenLanguage = marshal_as<std::string>(this->button1->Text);

	// function lights the button with right answer
	rightAnswerButtonLighter();

	// Coloring button green if the answer is rigth or red if it is not
	if (User.rightAnswerCheck())
	{
		this->button1->BackColor = Drawing::Color::Green;
		// if the answer is right, give user a score points
		GuessTheLanguageLogic::scorePoints += POINS_GAIN;
	}
	else
	{
		this->button1->BackColor = Drawing::Color::Red;

		// if the answer is right, decrese users health 
		GuessTheLanguageLogic::healthPoints--;
	}

	// After users answer disable all buttons exept "Next"
	buttonDisabler();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	GuessTheLanguageLogic User;

	User.chosenLanguage = marshal_as<std::string>(this->button2->Text);

	rightAnswerButtonLighter();

	if (User.rightAnswerCheck())
	{
		this->button2->BackColor = Drawing::Color::Green;
		GuessTheLanguageLogic::scorePoints += POINS_GAIN;
	}
	else
	{
		this->button2->BackColor = Drawing::Color::Red;
		GuessTheLanguageLogic::healthPoints--;
	}

	buttonDisabler();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	GuessTheLanguageLogic User;

	User.chosenLanguage = marshal_as<std::string>(this->button3->Text);

	rightAnswerButtonLighter();

	if (User.rightAnswerCheck())
	{
		this->button3->BackColor = Drawing::Color::Green;
		GuessTheLanguageLogic::scorePoints += POINS_GAIN;
	}
	else
	{
		this->button3->BackColor = Drawing::Color::Red;
		GuessTheLanguageLogic::healthPoints--;
	}

	buttonDisabler();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	GuessTheLanguageLogic User;

	User.chosenLanguage = marshal_as<std::string>(this->button4->Text); 

	rightAnswerButtonLighter();

	if (User.rightAnswerCheck())
	{
		this->button4->BackColor = Drawing::Color::Green;
		GuessTheLanguageLogic::scorePoints += POINS_GAIN;
	}
	else
	{
		this->button4->BackColor = Drawing::Color::Red;
		GuessTheLanguageLogic::healthPoints--;
	}

	buttonDisabler();
}

// This button is for turn on an audio file
private: System::Void buttonPlay_Click(System::Object^ sender, System::EventArgs^ e) {

	
	GuessTheLanguageLogic User;

	//  converting a link to file from string to String^
	String^ str = gcnew String(User.rightAnswerLanguageAudioPath().c_str());

	// Making an audio object with file link that rules an audio file
	SoundPlayer^ simpleSound = gcnew SoundPlayer(str);

	// if the audio is on turn it off, and vice versa
	if (!buttonOnOff)
	{
		simpleSound->PlayLooping();
	}
	else
	{
		simpleSound->Stop();
	}

	// indicator of audio statement (it is On or Off)
	buttonOnOff = !buttonOnOff;
}

// Button appears when user has 0 HP, under the "Game over" label
private: System::Void buttonGameOver_Click(System::Object^ sender, System::EventArgs^ e) {

	// Restart the application
	Application::Restart();
}

};
}