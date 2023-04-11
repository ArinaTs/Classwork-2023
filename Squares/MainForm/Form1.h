#pragma once
#include "CTriangle.h"
#include "Rational.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ Integer;
	private: System::Windows::Forms::Button^ Easy;
	private: System::Windows::Forms::Button^ FindDiv;


	private: System::Windows::Forms::TextBox^ int1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ num2;

	private: System::Windows::Forms::TextBox^ int2;
	private: System::Windows::Forms::TextBox^ denom2;
	private: System::Windows::Forms::TextBox^ num1;
	private: System::Windows::Forms::TextBox^ denom1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ FindSum;
	private: System::Windows::Forms::Button^ FindMult;
	private: System::Windows::Forms::Button^ FindSub;
	private: System::Windows::Forms::TextBox^ resInt;
	private: System::Windows::Forms::TextBox^ resNum;
	private: System::Windows::Forms::TextBox^ resDenom;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->resInt = (gcnew System::Windows::Forms::TextBox());
			this->resNum = (gcnew System::Windows::Forms::TextBox());
			this->resDenom = (gcnew System::Windows::Forms::TextBox());
			this->Integer = (gcnew System::Windows::Forms::Button());
			this->Easy = (gcnew System::Windows::Forms::Button());
			this->FindDiv = (gcnew System::Windows::Forms::Button());
			this->int1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->int2 = (gcnew System::Windows::Forms::TextBox());
			this->denom2 = (gcnew System::Windows::Forms::TextBox());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->denom1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->FindSum = (gcnew System::Windows::Forms::Button());
			this->FindMult = (gcnew System::Windows::Forms::Button());
			this->FindSub = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(9, 10);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(362, 245);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Главное меню";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 103);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Результат:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(65, 71);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(117, 71);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(48, 20);
			this->textBox6->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(65, 48);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(48, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(117, 48);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(48, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(117, 27);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(48, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(65, 27);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 75);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Точка C";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 53);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Точка B";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 31);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Точка A";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(102, 132);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Найти стороны треугольника";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(102, 202);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Найти площадь";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(102, 167);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Найти периметр";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->resInt);
			this->groupBox2->Controls->Add(this->resNum);
			this->groupBox2->Controls->Add(this->resDenom);
			this->groupBox2->Controls->Add(this->Integer);
			this->groupBox2->Controls->Add(this->Easy);
			this->groupBox2->Controls->Add(this->FindDiv);
			this->groupBox2->Controls->Add(this->int1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->num2);
			this->groupBox2->Controls->Add(this->int2);
			this->groupBox2->Controls->Add(this->denom2);
			this->groupBox2->Controls->Add(this->num1);
			this->groupBox2->Controls->Add(this->denom1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->FindSum);
			this->groupBox2->Controls->Add(this->FindMult);
			this->groupBox2->Controls->Add(this->FindSub);
			this->groupBox2->Location = System::Drawing::Point(385, 11);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(362, 245);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Главное меню";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(205, 47);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 23;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(18, 49);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// resInt
			// 
			this->resInt->Location = System::Drawing::Point(70, 85);
			this->resInt->Margin = System::Windows::Forms::Padding(2);
			this->resInt->Name = L"resInt";
			this->resInt->ReadOnly = true;
			this->resInt->Size = System::Drawing::Size(48, 20);
			this->resInt->TabIndex = 21;
			this->resInt->Text = L"0";
			// 
			// resNum
			// 
			this->resNum->Location = System::Drawing::Point(122, 74);
			this->resNum->Margin = System::Windows::Forms::Padding(2);
			this->resNum->Name = L"resNum";
			this->resNum->ReadOnly = true;
			this->resNum->Size = System::Drawing::Size(48, 20);
			this->resNum->TabIndex = 20;
			this->resNum->Text = L"0";
			// 
			// resDenom
			// 
			this->resDenom->Location = System::Drawing::Point(122, 98);
			this->resDenom->Margin = System::Windows::Forms::Padding(2);
			this->resDenom->Name = L"resDenom";
			this->resDenom->ReadOnly = true;
			this->resDenom->Size = System::Drawing::Size(48, 20);
			this->resDenom->TabIndex = 19;
			this->resDenom->Text = L"0";
			// 
			// Integer
			// 
			this->Integer->Location = System::Drawing::Point(183, 199);
			this->Integer->Margin = System::Windows::Forms::Padding(2);
			this->Integer->Name = L"Integer";
			this->Integer->Size = System::Drawing::Size(161, 30);
			this->Integer->TabIndex = 18;
			this->Integer->Text = L"Выделить целую часть";
			this->Integer->UseVisualStyleBackColor = true;
			this->Integer->Click += gcnew System::EventHandler(this, &Form1::Integer_Click);
			// 
			// Easy
			// 
			this->Easy->Location = System::Drawing::Point(183, 165);
			this->Easy->Margin = System::Windows::Forms::Padding(2);
			this->Easy->Name = L"Easy";
			this->Easy->Size = System::Drawing::Size(161, 30);
			this->Easy->TabIndex = 17;
			this->Easy->Text = L"Упростить";
			this->Easy->UseVisualStyleBackColor = true;
			this->Easy->Click += gcnew System::EventHandler(this, &Form1::Easy_Click);
			// 
			// FindDiv
			// 
			this->FindDiv->Location = System::Drawing::Point(183, 131);
			this->FindDiv->Margin = System::Windows::Forms::Padding(2);
			this->FindDiv->Name = L"FindDiv";
			this->FindDiv->Size = System::Drawing::Size(161, 30);
			this->FindDiv->TabIndex = 16;
			this->FindDiv->Text = L"Разделить";
			this->FindDiv->UseVisualStyleBackColor = true;
			this->FindDiv->Click += gcnew System::EventHandler(this, &Form1::FindDiv_Click);
			// 
			// int1
			// 
			this->int1->Location = System::Drawing::Point(57, 28);
			this->int1->Margin = System::Windows::Forms::Padding(2);
			this->int1->Name = L"int1";
			this->int1->Size = System::Drawing::Size(48, 20);
			this->int1->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 88);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Результат:";
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(296, 17);
			this->num2->Margin = System::Windows::Forms::Padding(2);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(48, 20);
			this->num2->TabIndex = 11;
			// 
			// int2
			// 
			this->int2->Location = System::Drawing::Point(244, 28);
			this->int2->Margin = System::Windows::Forms::Padding(2);
			this->int2->Name = L"int2";
			this->int2->Size = System::Drawing::Size(48, 20);
			this->int2->TabIndex = 9;
			// 
			// denom2
			// 
			this->denom2->Location = System::Drawing::Point(296, 41);
			this->denom2->Margin = System::Windows::Forms::Padding(2);
			this->denom2->Name = L"denom2";
			this->denom2->Size = System::Drawing::Size(48, 20);
			this->denom2->TabIndex = 8;
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(109, 17);
			this->num1->Margin = System::Windows::Forms::Padding(2);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(48, 20);
			this->num1->TabIndex = 7;
			// 
			// denom1
			// 
			this->denom1->Location = System::Drawing::Point(109, 41);
			this->denom1->Margin = System::Windows::Forms::Padding(2);
			this->denom1->Name = L"denom1";
			this->denom1->Size = System::Drawing::Size(48, 20);
			this->denom1->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(191, 31);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Дробь 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 31);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Дробь 1";
			// 
			// FindSum
			// 
			this->FindSum->Location = System::Drawing::Point(18, 131);
			this->FindSum->Margin = System::Windows::Forms::Padding(2);
			this->FindSum->Name = L"FindSum";
			this->FindSum->Size = System::Drawing::Size(152, 30);
			this->FindSum->TabIndex = 2;
			this->FindSum->Text = L"Сложить";
			this->FindSum->UseVisualStyleBackColor = true;
			this->FindSum->Click += gcnew System::EventHandler(this, &Form1::FindSum_Click);
			// 
			// FindMult
			// 
			this->FindMult->Location = System::Drawing::Point(18, 199);
			this->FindMult->Margin = System::Windows::Forms::Padding(2);
			this->FindMult->Name = L"FindMult";
			this->FindMult->Size = System::Drawing::Size(152, 30);
			this->FindMult->TabIndex = 1;
			this->FindMult->Text = L"Умножить";
			this->FindMult->UseVisualStyleBackColor = true;
			this->FindMult->Click += gcnew System::EventHandler(this, &Form1::FindMult_Click);
			// 
			// FindSub
			// 
			this->FindSub->Location = System::Drawing::Point(18, 165);
			this->FindSub->Margin = System::Windows::Forms::Padding(2);
			this->FindSub->Name = L"FindSub";
			this->FindSub->Size = System::Drawing::Size(152, 30);
			this->FindSub->TabIndex = 0;
			this->FindSub->Text = L"Вычесть";
			this->FindSub->UseVisualStyleBackColor = true;
			this->FindSub->Click += gcnew System::EventHandler(this, &Form1::FindSub_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 265);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" ||
			textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "")
			MessageBox::Show(this, "Заполнены не все координаты треугольника!", "Сообщение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			CPoint A(int::Parse(textBox1->Text), int::Parse(textBox2->Text));
			CPoint B(int::Parse(textBox3->Text), int::Parse(textBox4->Text));
			CPoint C(int::Parse(textBox5->Text), int::Parse(textBox6->Text));
			CTriangle ABC(A, B, C);
			label4->Text = "Результат: AB = " + ABC.calculateAB() + ", BC = " + ABC.calculateBC() + ", AC = " + ABC.calculateAC();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" ||
			textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "")
			MessageBox::Show(this, "Заполнены не все координаты треугольника!", "Сообщение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			CPoint A(int::Parse(textBox1->Text), int::Parse(textBox2->Text));
			CPoint B(int::Parse(textBox3->Text), int::Parse(textBox4->Text));
			CPoint C(int::Parse(textBox5->Text), int::Parse(textBox6->Text));
			CTriangle ABC(A, B, C);
			if (ABC.calculateS() == 0)
				MessageBox::Show(this, "Вырожденный треугольник!", "Сообщение",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);

			label4->Text = "Результат: периметр равен " + ABC.calculateP();
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" ||
			textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "")
			MessageBox::Show(this, "Заполнены не все координаты треугольника!", "Сообщение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			CPoint A(int::Parse(textBox1->Text), int::Parse(textBox2->Text));
			CPoint B(int::Parse(textBox3->Text), int::Parse(textBox4->Text));
			CPoint C(int::Parse(textBox5->Text), int::Parse(textBox6->Text));
			CTriangle ABC(A, B, C);
			float S = ABC.calculateS();

			if (S == 0)
				MessageBox::Show(this, "Вырожденный треугольник!", "Сообщение",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);

			label4->Text = "Результат: площадь равна " + S;
		}
	}
	private: System::Void FindSum_Click(System::Object^ sender, System::EventArgs^ e) {
		if (num1->Text == "" || denom1->Text == "" ||
			num2->Text == "" || denom2->Text == "")
		{
			MessageBox::Show(this, "Заполнены не все поля дроби!", "Сообщение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (int1->Text == "") {
			int1->Text = "0";
		}
		else if (int2->Text == "") {
			int2->Text = "0";
		}

		RationalWithIntPart Frac1(int::Parse(num1->Text), int::Parse(denom1->Text), int::Parse(int1->Text));
		RationalWithIntPart Frac2(int::Parse(num2->Text), int::Parse(denom2->Text), int::Parse(int2->Text));

		RationalWithIntPart Sum = Frac1 + Frac2;

		resInt->Text = (Sum.getInteger()).ToString();
		resNum->Text = (Sum.getNumerator()).ToString();
		resDenom->Text = (Sum.getDenominator()).ToString();
	}

	private: System::Void FindSub_Click(System::Object^ sender, System::EventArgs^ e) {
		if (num1->Text == "" || denom1->Text == "" ||
			num2->Text == "" || denom2->Text == "")
		{
			MessageBox::Show(this, "Заполнены не все поля дроби!", "Сообщение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (int1->Text == "") {
			int1->Text = "0";
		}
		else if (int2->Text == "") {
			int2->Text = "0";
		}

		RationalWithIntPart Frac1(int::Parse(num1->Text), int::Parse(denom1->Text), int::Parse(int1->Text));
		RationalWithIntPart Frac2(int::Parse(num2->Text), int::Parse(denom2->Text), int::Parse(int2->Text));

		RationalWithIntPart Sum = Frac1 - Frac2;

		resInt->Text = (Sum.getInteger()).ToString();
		resNum->Text = (Sum.getNumerator()).ToString();
		resDenom->Text = (Sum.getDenominator()).ToString();
	}
	private: System::Void FindMult_Click(System::Object^ sender, System::EventArgs^ e) {
		if (num1->Text == "" || denom1->Text == "" ||
			num2->Text == "" || denom2->Text == "")
		{
			MessageBox::Show(this, "Заполнены не все поля дроби!", "Сообщение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (int1->Text == "") {
			int1->Text = "0";
		}
		else if (int2->Text == "") {
			int2->Text = "0";
		}

		RationalWithIntPart Frac1(int::Parse(num1->Text), int::Parse(denom1->Text), int::Parse(int1->Text));
		RationalWithIntPart Frac2(int::Parse(num2->Text), int::Parse(denom2->Text), int::Parse(int2->Text));

		RationalWithIntPart Sum = Frac1 * Frac2;

		resInt->Text = (Sum.getInteger()).ToString();
		resNum->Text = (Sum.getNumerator()).ToString();
		resDenom->Text = (Sum.getDenominator()).ToString();
	}

	private: System::Void FindDiv_Click(System::Object^ sender, System::EventArgs^ e) {
		if (num1->Text == "" || denom1->Text == "" ||
			num2->Text == "" || denom2->Text == "")
		{
			MessageBox::Show(this, "Заполнены не все поля дроби!", "Сообщение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (int1->Text == "") {
			int1->Text = "0";
		}
		else if (int2->Text == "") {
			int2->Text = "0";
		}

		RationalWithIntPart Frac1(int::Parse(num1->Text), int::Parse(denom1->Text), int::Parse(int1->Text));
		RationalWithIntPart Frac2(int::Parse(num2->Text), int::Parse(denom2->Text), int::Parse(int2->Text));

		RationalWithIntPart Sum = Frac1 / Frac2;

		resInt->Text = (Sum.getInteger()).ToString();
		resNum->Text = (Sum.getNumerator()).ToString();
		resDenom->Text = (Sum.getDenominator()).ToString();
	}

	private: System::Void Easy_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (checkBox1->Checked && checkBox2->Checked) {
			MessageBox::Show(this, "Выберите только одну дробь!", "Сообщение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else if (checkBox1->Checked) {
			if (num1->Text == "" || denom1->Text == "")
			{
				MessageBox::Show(this, "Заполнены не все поля дроби!", "Сообщение",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (int1->Text == "") {
				int1->Text = "0";
			}
			RationalWithIntPart Frac1(int::Parse(num1->Text), int::Parse(denom1->Text), int::Parse(int1->Text));
			RationalWithIntPart Easy = Frac1.Easy();
			resInt->Text = (Easy.getInteger()).ToString();
			resNum->Text = (Easy.getNumerator()).ToString();
			resDenom->Text = (Easy.getDenominator()).ToString();
		}
		else if (checkBox2->Checked) {
			if (num2->Text == "" || denom2->Text == "")
			{
				MessageBox::Show(this, "Заполнены не все поля дроби!", "Сообщение",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (int2->Text == "") {
				int2->Text = "0";
			}
			RationalWithIntPart Frac2(int::Parse(num2->Text), int::Parse(denom2->Text), int::Parse(int2->Text));
			RationalWithIntPart Easy = Frac2.Easy();
			resInt->Text = (Easy.getInteger()).ToString();
			resNum->Text = (Easy.getNumerator()).ToString();
			resDenom->Text = (Easy.getDenominator()).ToString();
		}

	}
    private: System::Void Integer_Click(System::Object^ sender, System::EventArgs^ e) {

    }
};
}
