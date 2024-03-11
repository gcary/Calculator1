#pragma once

namespace Calculator1 {

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
	private: System::Windows::Forms::TabControl^ Tab1;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ TextBox;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ ButtonDivide;

	private: System::Windows::Forms::Button^ ButtonDecimal;
	private: System::Windows::Forms::Button^ ButtonPercentEquals;
	private: System::Windows::Forms::Button^ ButtonEquals;



	private: System::Windows::Forms::Button^ ButtonMultiply;

	private: System::Windows::Forms::Button^ ButtonSubtract;

	private: System::Windows::Forms::Button^ ButtonClearEntry;

	private: System::Windows::Forms::Button^ ButtonClear;

	private: System::Windows::Forms::Button^ ButtonZero;
	private: System::Windows::Forms::Button^ ButtonThree;
	private: System::Windows::Forms::Button^ ButtonFive;



	private: System::Windows::Forms::Button^ ButtonTwo;

	private: System::Windows::Forms::Button^ ButtonOne;
	private: System::Windows::Forms::Button^ ButtonNine;


	private: System::Windows::Forms::Button^ ButtonFour;
	private: System::Windows::Forms::Button^ ButtonSix;
	private: System::Windows::Forms::Button^ ButtonAdd;




	private: System::Windows::Forms::Button^ ButtonEight;

	private: System::Windows::Forms::Button^ ButtonSeven;

	private: System::Windows::Forms::Button^ IntroTraceOff;

	private: System::Windows::Forms::Button^ IntroTraceOn;
	private: System::Windows::Forms::TextBox^ TraceLogicText;


	private: System::Windows::Forms::TextBox^ TraceLogicBoolText;


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
			this->Tab1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->ButtonDivide = (gcnew System::Windows::Forms::Button());
			this->ButtonDecimal = (gcnew System::Windows::Forms::Button());
			this->ButtonPercentEquals = (gcnew System::Windows::Forms::Button());
			this->ButtonEquals = (gcnew System::Windows::Forms::Button());
			this->ButtonMultiply = (gcnew System::Windows::Forms::Button());
			this->ButtonSubtract = (gcnew System::Windows::Forms::Button());
			this->ButtonClearEntry = (gcnew System::Windows::Forms::Button());
			this->ButtonClear = (gcnew System::Windows::Forms::Button());
			this->ButtonZero = (gcnew System::Windows::Forms::Button());
			this->ButtonThree = (gcnew System::Windows::Forms::Button());
			this->ButtonFive = (gcnew System::Windows::Forms::Button());
			this->ButtonTwo = (gcnew System::Windows::Forms::Button());
			this->ButtonOne = (gcnew System::Windows::Forms::Button());
			this->ButtonNine = (gcnew System::Windows::Forms::Button());
			this->ButtonFour = (gcnew System::Windows::Forms::Button());
			this->ButtonSix = (gcnew System::Windows::Forms::Button());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->ButtonEight = (gcnew System::Windows::Forms::Button());
			this->ButtonSeven = (gcnew System::Windows::Forms::Button());
			this->IntroTraceOff = (gcnew System::Windows::Forms::Button());
			this->IntroTraceOn = (gcnew System::Windows::Forms::Button());
			this->TextBox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->TraceLogicText = (gcnew System::Windows::Forms::TextBox());
			this->TraceLogicBoolText = (gcnew System::Windows::Forms::TextBox());
			this->Tab1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Tab1
			// 
			this->Tab1->Controls->Add(this->tabPage1);
			this->Tab1->Controls->Add(this->tabPage2);
			this->Tab1->Location = System::Drawing::Point(-5, 0);
			this->Tab1->Name = L"Tab1";
			this->Tab1->SelectedIndex = 0;
			this->Tab1->Size = System::Drawing::Size(451, 463);
			this->Tab1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->ButtonDivide);
			this->tabPage1->Controls->Add(this->ButtonDecimal);
			this->tabPage1->Controls->Add(this->ButtonPercentEquals);
			this->tabPage1->Controls->Add(this->ButtonEquals);
			this->tabPage1->Controls->Add(this->ButtonMultiply);
			this->tabPage1->Controls->Add(this->ButtonSubtract);
			this->tabPage1->Controls->Add(this->ButtonClearEntry);
			this->tabPage1->Controls->Add(this->ButtonClear);
			this->tabPage1->Controls->Add(this->ButtonZero);
			this->tabPage1->Controls->Add(this->ButtonThree);
			this->tabPage1->Controls->Add(this->ButtonFive);
			this->tabPage1->Controls->Add(this->ButtonTwo);
			this->tabPage1->Controls->Add(this->ButtonOne);
			this->tabPage1->Controls->Add(this->ButtonNine);
			this->tabPage1->Controls->Add(this->ButtonFour);
			this->tabPage1->Controls->Add(this->ButtonSix);
			this->tabPage1->Controls->Add(this->ButtonAdd);
			this->tabPage1->Controls->Add(this->ButtonEight);
			this->tabPage1->Controls->Add(this->ButtonSeven);
			this->tabPage1->Controls->Add(this->IntroTraceOff);
			this->tabPage1->Controls->Add(this->IntroTraceOn);
			this->tabPage1->Controls->Add(this->TextBox);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(443, 437);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Calculator";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// ButtonDivide
			// 
			this->ButtonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonDivide->Location = System::Drawing::Point(343, 266);
			this->ButtonDivide->Name = L"ButtonDivide";
			this->ButtonDivide->Size = System::Drawing::Size(75, 75);
			this->ButtonDivide->TabIndex = 21;
			this->ButtonDivide->Text = L"/";
			this->ButtonDivide->UseVisualStyleBackColor = true;
			this->ButtonDivide->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// ButtonDecimal
			// 
			this->ButtonDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonDecimal->Location = System::Drawing::Point(168, 341);
			this->ButtonDecimal->Name = L"ButtonDecimal";
			this->ButtonDecimal->Size = System::Drawing::Size(75, 75);
			this->ButtonDecimal->TabIndex = 20;
			this->ButtonDecimal->Text = L".";
			this->ButtonDecimal->UseVisualStyleBackColor = true;
			this->ButtonDecimal->Click += gcnew System::EventHandler(this, &MyForm::EnterDecimal);
			// 
			// ButtonPercentEquals
			// 
			this->ButtonPercentEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ButtonPercentEquals->Location = System::Drawing::Point(343, 341);
			this->ButtonPercentEquals->Name = L"ButtonPercentEquals";
			this->ButtonPercentEquals->Size = System::Drawing::Size(75, 75);
			this->ButtonPercentEquals->TabIndex = 19;
			this->ButtonPercentEquals->Text = L"%";
			this->ButtonPercentEquals->UseVisualStyleBackColor = true;
			this->ButtonPercentEquals->Click += gcnew System::EventHandler(this, &MyForm::PercentEquals);
			// 
			// ButtonEquals
			// 
			this->ButtonEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonEquals->Location = System::Drawing::Point(268, 341);
			this->ButtonEquals->Name = L"ButtonEquals";
			this->ButtonEquals->Size = System::Drawing::Size(75, 75);
			this->ButtonEquals->TabIndex = 18;
			this->ButtonEquals->Text = L"=";
			this->ButtonEquals->UseVisualStyleBackColor = true;
			this->ButtonEquals->Click += gcnew System::EventHandler(this, &MyForm::EqualsResult);
			// 
			// ButtonMultiply
			// 
			this->ButtonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonMultiply->Location = System::Drawing::Point(268, 266);
			this->ButtonMultiply->Name = L"ButtonMultiply";
			this->ButtonMultiply->Size = System::Drawing::Size(75, 75);
			this->ButtonMultiply->TabIndex = 17;
			this->ButtonMultiply->Text = L"*";
			this->ButtonMultiply->UseVisualStyleBackColor = true;
			this->ButtonMultiply->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// ButtonSubtract
			// 
			this->ButtonSubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonSubtract->Location = System::Drawing::Point(343, 191);
			this->ButtonSubtract->Name = L"ButtonSubtract";
			this->ButtonSubtract->Size = System::Drawing::Size(75, 75);
			this->ButtonSubtract->TabIndex = 16;
			this->ButtonSubtract->Text = L"-";
			this->ButtonSubtract->UseVisualStyleBackColor = true;
			this->ButtonSubtract->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// ButtonClearEntry
			// 
			this->ButtonClearEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonClearEntry->Location = System::Drawing::Point(343, 116);
			this->ButtonClearEntry->Name = L"ButtonClearEntry";
			this->ButtonClearEntry->Size = System::Drawing::Size(75, 75);
			this->ButtonClearEntry->TabIndex = 15;
			this->ButtonClearEntry->Text = L"CE";
			this->ButtonClearEntry->UseVisualStyleBackColor = true;
			this->ButtonClearEntry->Click += gcnew System::EventHandler(this, &MyForm::ClearEntry);
			// 
			// ButtonClear
			// 
			this->ButtonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonClear->Location = System::Drawing::Point(268, 116);
			this->ButtonClear->Name = L"ButtonClear";
			this->ButtonClear->Size = System::Drawing::Size(75, 75);
			this->ButtonClear->TabIndex = 14;
			this->ButtonClear->Text = L"C";
			this->ButtonClear->UseVisualStyleBackColor = true;
			this->ButtonClear->Click += gcnew System::EventHandler(this, &MyForm::ClearAll);
			// 
			// ButtonZero
			// 
			this->ButtonZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonZero->Location = System::Drawing::Point(18, 341);
			this->ButtonZero->Name = L"ButtonZero";
			this->ButtonZero->Size = System::Drawing::Size(150, 75);
			this->ButtonZero->TabIndex = 13;
			this->ButtonZero->Text = L"0";
			this->ButtonZero->UseVisualStyleBackColor = true;
			this->ButtonZero->Click += gcnew System::EventHandler(this, &MyForm::EnterDigit);
			// 
			// ButtonThree
			// 
			this->ButtonThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonThree->Location = System::Drawing::Point(168, 266);
			this->ButtonThree->Name = L"ButtonThree";
			this->ButtonThree->Size = System::Drawing::Size(75, 75);
			this->ButtonThree->TabIndex = 12;
			this->ButtonThree->Text = L"3";
			this->ButtonThree->UseVisualStyleBackColor = true;
			this->ButtonThree->Click += gcnew System::EventHandler(this, &MyForm::EnterDigit);
			// 
			// ButtonFive
			// 
			this->ButtonFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonFive->Location = System::Drawing::Point(93, 191);
			this->ButtonFive->Name = L"ButtonFive";
			this->ButtonFive->Size = System::Drawing::Size(75, 75);
			this->ButtonFive->TabIndex = 11;
			this->ButtonFive->Text = L"5";
			this->ButtonFive->UseVisualStyleBackColor = true;
			this->ButtonFive->Click += gcnew System::EventHandler(this, &MyForm::EnterDigit);
			// 
			// ButtonTwo
			// 
			this->ButtonTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonTwo->Location = System::Drawing::Point(93, 266);
			this->ButtonTwo->Name = L"ButtonTwo";
			this->ButtonTwo->Size = System::Drawing::Size(75, 75);
			this->ButtonTwo->TabIndex = 10;
			this->ButtonTwo->Text = L"2";
			this->ButtonTwo->UseVisualStyleBackColor = true;
			this->ButtonTwo->Click += gcnew System::EventHandler(this, &MyForm::EnterDigit);
			// 
			// ButtonOne
			// 
			this->ButtonOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonOne->Location = System::Drawing::Point(18, 266);
			this->ButtonOne->Name = L"ButtonOne";
			this->ButtonOne->Size = System::Drawing::Size(75, 75);
			this->ButtonOne->TabIndex = 9;
			this->ButtonOne->Text = L"1";
			this->ButtonOne->UseVisualStyleBackColor = true;
			this->ButtonOne->Click += gcnew System::EventHandler(this, &MyForm::EnterDigit);
			// 
			// ButtonNine
			// 
			this->ButtonNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonNine->Location = System::Drawing::Point(168, 116);
			this->ButtonNine->Name = L"ButtonNine";
			this->ButtonNine->Size = System::Drawing::Size(75, 75);
			this->ButtonNine->TabIndex = 8;
			this->ButtonNine->Text = L"9";
			this->ButtonNine->UseVisualStyleBackColor = true;
			this->ButtonNine->Click += gcnew System::EventHandler(this, &MyForm::EnterDigit);
			// 
			// ButtonFour
			// 
			this->ButtonFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonFour->Location = System::Drawing::Point(18, 191);
			this->ButtonFour->Name = L"ButtonFour";
			this->ButtonFour->Size = System::Drawing::Size(75, 75);
			this->ButtonFour->TabIndex = 7;
			this->ButtonFour->Text = L"4";
			this->ButtonFour->UseVisualStyleBackColor = true;
			this->ButtonFour->Click += gcnew System::EventHandler(this, &MyForm::EnterDigit);
			// 
			// ButtonSix
			// 
			this->ButtonSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonSix->Location = System::Drawing::Point(168, 191);
			this->ButtonSix->Name = L"ButtonSix";
			this->ButtonSix->Size = System::Drawing::Size(75, 75);
			this->ButtonSix->TabIndex = 6;
			this->ButtonSix->Text = L"6";
			this->ButtonSix->UseVisualStyleBackColor = true;
			this->ButtonSix->Click += gcnew System::EventHandler(this, &MyForm::EnterDigit);
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonAdd->Location = System::Drawing::Point(268, 191);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(75, 75);
			this->ButtonAdd->TabIndex = 5;
			this->ButtonAdd->Text = L"+";
			this->ButtonAdd->UseVisualStyleBackColor = true;
			this->ButtonAdd->Click += gcnew System::EventHandler(this, &MyForm::Operation);
			// 
			// ButtonEight
			// 
			this->ButtonEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonEight->Location = System::Drawing::Point(93, 116);
			this->ButtonEight->Name = L"ButtonEight";
			this->ButtonEight->Size = System::Drawing::Size(75, 75);
			this->ButtonEight->TabIndex = 4;
			this->ButtonEight->Text = L"8";
			this->ButtonEight->UseVisualStyleBackColor = true;
			this->ButtonEight->Click += gcnew System::EventHandler(this, &MyForm::EnterDigit);
			// 
			// ButtonSeven
			// 
			this->ButtonSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonSeven->Location = System::Drawing::Point(18, 116);
			this->ButtonSeven->Name = L"ButtonSeven";
			this->ButtonSeven->Size = System::Drawing::Size(75, 75);
			this->ButtonSeven->TabIndex = 3;
			this->ButtonSeven->Text = L"7";
			this->ButtonSeven->UseVisualStyleBackColor = true;
			this->ButtonSeven->Click += gcnew System::EventHandler(this, &MyForm::EnterDigit);
			// 
			// IntroTraceOff
			// 
			this->IntroTraceOff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IntroTraceOff->Location = System::Drawing::Point(263, 6);
			this->IntroTraceOff->Name = L"IntroTraceOff";
			this->IntroTraceOff->Size = System::Drawing::Size(100, 50);
			this->IntroTraceOff->TabIndex = 2;
			this->IntroTraceOff->Text = L"Intro Trace Off";
			this->IntroTraceOff->UseVisualStyleBackColor = true;
			this->IntroTraceOff->Click += gcnew System::EventHandler(this, &MyForm::TraceLogicOff);
			// 
			// IntroTraceOn
			// 
			this->IntroTraceOn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IntroTraceOn->Location = System::Drawing::Point(143, 6);
			this->IntroTraceOn->Name = L"IntroTraceOn";
			this->IntroTraceOn->Size = System::Drawing::Size(100, 50);
			this->IntroTraceOn->TabIndex = 1;
			this->IntroTraceOn->Text = L"Intro Trace On";
			this->IntroTraceOn->UseVisualStyleBackColor = true;
			this->IntroTraceOn->Click += gcnew System::EventHandler(this, &MyForm::TraceLogicOn);
			// 
			// TextBox
			// 
			this->TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox->Location = System::Drawing::Point(18, 61);
			this->TextBox->Name = L"TextBox";
			this->TextBox->ReadOnly = true;
			this->TextBox->Size = System::Drawing::Size(400, 49);
			this->TextBox->TabIndex = 0;
			this->TextBox->Text = L"0";
			this->TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->TraceLogicText);
			this->tabPage2->Controls->Add(this->TraceLogicBoolText);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(443, 437);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Trace Logic";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// TraceLogicText
			// 
			this->TraceLogicText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TraceLogicText->Location = System::Drawing::Point(0, 23);
			this->TraceLogicText->Multiline = true;
			this->TraceLogicText->Name = L"TraceLogicText";
			this->TraceLogicText->ReadOnly = true;
			this->TraceLogicText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TraceLogicText->Size = System::Drawing::Size(437, 408);
			this->TraceLogicText->TabIndex = 1;
			// 
			// TraceLogicBoolText
			// 
			this->TraceLogicBoolText->Location = System::Drawing::Point(0, 0);
			this->TraceLogicBoolText->Name = L"TraceLogicBoolText";
			this->TraceLogicBoolText->ReadOnly = true;
			this->TraceLogicBoolText->Size = System::Drawing::Size(440, 20);
			this->TraceLogicBoolText->TabIndex = 0;
			this->TraceLogicBoolText->Text = L"Trace Logic is ON";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 456);
			this->Controls->Add(this->Tab1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Tab1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	double Input = 0; // Double to store Input and Result
	String^ Operator = ""; // string to store operator 
	bool TraceLogicBool = true; // Boolean to toggle trace logic
	int TraceLogicCounter = 0; // counter for logical decisions
	int EntryBool = true; // Boolean to prevent an equivalent input being deleted

private: System::Void EnterDigit(System::Object^ sender, System::EventArgs^ e)
{
	
	// Calculator
	// 

	// Assigning a variable for the button pressed
	Button^ ButtonEntry = safe_cast<Button^>(sender);

	// Decision statement for deciding to clear and add to the text box, or to append to the text box

	// Cases for replacing TextBox->Text
	if ((TextBox->Text == "0") || (TextBox->Text == "Error") || (TextBox->Text == Convert::ToString(Input) && EntryBool == false) || (TextBox->Text == "Undefined"))
	{
		TraceLogicCounter += 1;
		TextBox->Text = ButtonEntry->Text;
		EntryBool = true;
	}
	// Otherwise append to TextBox->Text
	else
	{
		TraceLogicCounter += 1;
		TextBox->Text += ButtonEntry->Text;
		EntryBool = true;
		
	}
	// Trace Logic
	//  
	if (TraceLogicBool)
	{
		TraceLogicText->Text += "\r\n Latest Input: " + ButtonEntry->Text + "\r\n Current State: Number Entry \r\n Decision Point: Replace TextBox->Text or Append TextBox->Text \r\n Trace Logic Counter: " + Convert::ToString(TraceLogicCounter) + "\r\n";
	}

}
private: System::Void Operation(System::Object^ sender, System::EventArgs^ e)
{
	// Calculator
	// 

	// Assigning a variable for the button pressed
	Button^ OperatorEntry = safe_cast<Button^>(sender);
	
	// Deicision statement for determining if Input is viable, and what operation to perform, if any.
	// Determining if input is viable
	if ((OperatorEntry->Text == "-" && EntryBool == true && TextBox->Text == "0") || (EntryBool == false && (TextBox->Text == "0" || TextBox->Text == Convert::ToString(Input)))) // Decision for entering a negative number instead of performing the - operation
	{
		TraceLogicCounter += 1;
		TextBox->Text = "-";

	}
	else if ((TextBox->Text == "Error") || (TextBox->Text == "Undefined") || (TextBox->Text == "-")) // Both possible unviable Inputs
	{
		TextBox->Text = "Error"; // Returns an Error for an unviable input
		TraceLogicCounter += 2;

	}
	// Determining how to operate on the input
	else if (Operator == "") // If Operator is blank, then no operation needs to be performed. Input is saved and TextBox->Text is reset.
	{
		TraceLogicCounter += 3;
		Input = Convert::ToDouble(TextBox->Text);
		TextBox->Text = "0";
		EntryBool = false; // Reset to notify EnterDigit function that the Entry should be replaced, not appended to
	}
	else if (Operator == "+") //If operator is not blank and a new operator is input, perform the previous operation and replace TextBox->Text with Input
	{
		TraceLogicCounter += 4;
		Input += Convert::ToDouble(TextBox->Text); // Chain operation to add new input to previous input
		TextBox->Text = Convert::ToString(Input);
		EntryBool = false;
	}
	else if (Operator == "-")
	{
		TraceLogicCounter += 5;
		Input -= Convert::ToDouble(TextBox->Text); // Chain operation to subtract new input from previous input
		TextBox->Text = Convert::ToString(Input);
		EntryBool = false;
		
	}
	else if (Operator == "*")
	{
		TraceLogicCounter += 6;
		Input *= Convert::ToDouble(TextBox->Text); // Chain operation to multiply new input by previous input
		TextBox->Text = Convert::ToString(Input);
		EntryBool = false;

	}
	else if (Operator == "/")  
	{
		TraceLogicCounter += 8;
		
		if (TextBox->Text == "0")// Decision to check division by 0, and return Undefined 
		{
			TextBox->Text = "Undefined";
		}
		else
		{
			Input /= Convert::ToDouble(TextBox->Text); // Chain operation to divide previous input by new input
			TextBox->Text = Convert::ToString(Input);
			EntryBool = false;
		}
		if (TraceLogicBool)
		{
			TraceLogicText->Text += "\r\n Latest Input: " + OperatorEntry->Text + "\r\n Current State: Operator Entry \r\n Decision Point: Is the most recent input zero? \r\n Trace Logic Counter: " + Convert::ToString(TraceLogicCounter) + "\r\n";
		}
		

	}
	if (TextBox->Text != "-")
	{
		TraceLogicCounter += 1;
		Operator = OperatorEntry->Text; // Save the new Operator if it wasnt denoting a negative value instead of a negative operation
	}
	
	// Trace Logic 
	//

	if (TraceLogicBool)
	{
		TraceLogicText->Text += "\r\n Latest Input: " + OperatorEntry->Text + "\r\n Current State: Operator Entry \r\n Decision Point: Is the Input viable? Should the Input be stored or is it part of a chain operation? \r\n Trace Logic Counter: " + Convert::ToString(TraceLogicCounter) + "\r\n";
	}
}
private: System::Void ClearEntry(System::Object^ sender, System::EventArgs^ e) 
{
	// Calculator 
	//
	TextBox->Text = "0"; // Clears TextBox->Text

	// Trace Logic
	//
	if (TraceLogicBool)
	{
		TraceLogicText->Text +=  "\r\n Latest Input: CE \r\n Current State: Number Entry \r\n Trace Logic Counter: " + Convert::ToString(TraceLogicCounter) + "\r\n";
	}
}
private: System::Void EnterDecimal(System::Object^ sender, System::EventArgs^ e) 
{
	// Calculator 
	//

	if (!TextBox->Text->Contains(".") && TextBox->Text == "-") // Checks if entry already contains ".", and appends . if it is not already there
	{
		TraceLogicCounter += 1;
		TextBox->Text += "0.";
		EntryBool = true;
	}
	else if (!TextBox->Text->Contains(".") && TextBox->Text != "-")
	{
		TraceLogicCounter += 2;
		TextBox->Text += ".";
		EntryBool = true;
	}
	// Trace Logic
	//
	if (TraceLogicBool)
	{
		TraceLogicText->Text += "\r\n Latest Input: ." + "\r\n Current State: Number Entry \r\n Decision Point: Does TextBox->Text contain .? \r\n Trace Logic Counter : " + Convert::ToString(TraceLogicCounter) + "\r\n";
	}
}
private: System::Void EqualsResult(System::Object^ sender, System::EventArgs^ e)
{
	
	// Calculator
	// 
	
	// Start by Collecting the Input and clearing the text box
	if ((TextBox->Text == "Error") || (TextBox->Text == "Undefined") || (Operator == "") || (TextBox->Text == "-"))
	{
		TraceLogicCounter += 1;
		TextBox->Text = "Error"; //  Ensures input is viable and that an operator has been selected
	}
	else if (Operator == "+") 
	{
		TraceLogicCounter += 2;
		Input += Convert::ToDouble(TextBox->Text); // Result operation to add new input to previous input 
		TextBox->Text = Convert::ToString(Input);
		EntryBool = false;
	}
	else if (Operator == "-")
	{
		TraceLogicCounter += 3;
		Input -= Convert::ToDouble(TextBox->Text); // Result operation to subtract new input from previous input 
		TextBox->Text = Convert::ToString(Input);
		EntryBool = false;
	}		
	else if (Operator == "*")
	{	
		TraceLogicCounter += 4;
		Input *= Convert::ToDouble(TextBox->Text); // Result operation to multiply previous input by new input 
		TextBox->Text = Convert::ToString(Input);
		EntryBool = false;
	}
	else if (Operator == "/")
	{
		TraceLogicCounter += 6;
		
		if (TextBox->Text == "0") // Dividing by zero yields undefined, so a special case is required
		{
			TextBox->Text = "Undefined";
		}
		else
		{
			Input /= Convert::ToDouble(TextBox->Text); // Result operation to divide previous input by new input 
			TextBox->Text = Convert::ToString(Input);
			EntryBool = false;
		}
		if (TraceLogicBool)
		{
			TraceLogicText->Text += "\r\n Latest Input: =" + "\r\n Current State: Result Calculation \r\n Decision Point: Is the last Input 0? \r\n Trace Logic Counter : " + Convert::ToString(TraceLogicCounter) + "\r\n";
		}
	}
	Operator = ""; // Setting operator to "" prevents multiple = inputs getting strange results, instead, = can only be pressed once before a new operator must be chosen

	// Trace Logic
	// 
	if (TraceLogicBool)
	{
		TraceLogicText->Text += "\r\n Latest Input: =" + "\r\n Current State: Result Calculation \r\n Decision Point: Is Input viable? What Operator should be used? \r\n Trace Logic Counter : " + Convert::ToString(TraceLogicCounter) + "\r\n";
	}
}
private: System::Void ClearAll(System::Object^ sender, System::EventArgs^ e) 
{
	// Calculator 
	//

	TextBox->Text = "0"; // Resetting all variables to default values
	Input = 0; 
	Operator = ""; 
	TraceLogicBool = true; 
	TraceLogicCounter = 0; 
	EntryBool = true; 

	// Trace Logic
	// 
	if (TraceLogicBool)
	{
		TraceLogicText->Text += "\r\n Latest Input: C" + "\r\n Current State: Number Entry \r\n Trace Logic Counter : " + Convert::ToString(TraceLogicCounter) + "\r\n";
	}
}
private: System::Void PercentEquals(System::Object^ sender, System::EventArgs^ e) 
{
	
	// Calculator
	// 

	// Start by Collecting the Input and clearing the text box
	if ((TextBox->Text == "Error") || (TextBox->Text == "Undefined") || (Operator == "") || (TextBox->Text == "-"))
	{
		TraceLogicCounter += 1;
		TextBox->Text = "Error"; //  Ensures input is viable and that an operator has been selected
	}
	else if (Operator == "+")
	{
		TraceLogicCounter += 2;
		Input = Input + (Input * Convert::ToDouble(TextBox->Text) / 100); // Result operation to add new input to previous input 
		TextBox->Text = Convert::ToString(Input);
		EntryBool = false;
	}
	else if (Operator == "-")
	{
		TraceLogicCounter += 3;
		Input = Input - (Input * Convert::ToDouble(TextBox->Text) / 100); // Result operation to subtract new input from previous input 
		TextBox->Text = Convert::ToString(Input);
		EntryBool = false;
	}
	else if (Operator == "*")
	{
		TraceLogicCounter += 4;
		Input = Input * (Convert::ToDouble(TextBox->Text) / 100); // Result operation to multiply previous input by new input 
		TextBox->Text = Convert::ToString(Input);
		EntryBool = false;
	}
	else if (Operator == "/")
	{
		TraceLogicCounter += 6;
		if (TextBox->Text == "0") // Dividing by zero yields undefined, so a special case is required
		{
			TextBox->Text = "Undefined";
		}
		else
		{
			Input = Input / (Convert::ToDouble(TextBox->Text) / 100); // Result operation to divide previous input by new input 
			TextBox->Text = Convert::ToString(Input);
			EntryBool = false;
		}
		if (TraceLogicBool)
		{
			TraceLogicText->Text += "\r\n Latest Input: =" + "\r\n Current State: Result Calculation \r\n Decision Point: Is the last Input 0? \r\n Trace Logic Counter : " + Convert::ToString(TraceLogicCounter) + "\r\n";
		}
	}
	Operator = ""; // Setting operator to "" prevents multiple % inputs getting strange results, instead, % can only be pressed once before a new operator must be chosen
	// Trace Logic
	// 
	if (TraceLogicBool)
	{
		TraceLogicText->Text += "\r\n Latest Input: =" + "\r\n Current State: Result Calculation \r\n Decision Point: Is Input viable? What Operator should be used? \r\n Trace Logic Counter : " + Convert::ToString(TraceLogicCounter) + "\r\n";

	}
}
private: System::Void TraceLogicOn(System::Object^ sender, System::EventArgs^ e) 
{
	TraceLogicBool = true; // Turning Trace Logic on
	TraceLogicBoolText->Text = "Trace Logic is ON";
}
private: System::Void TraceLogicOff(System::Object^ sender, System::EventArgs^ e) 
{
	TraceLogicBool = false; // Turning Trace Logic off
	TraceLogicBoolText->Text = "Trace Logic is OFF";
}
};
}
