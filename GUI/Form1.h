#pragma once
#include "Figure.h"
#include "Figure.h"

namespace CppCLR_WinformsProjekt
{

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox_PointB_x;
	private: System::Windows::Forms::TextBox^  textBox_PointB_y;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox_PointD_x;
	private: System::Windows::Forms::TextBox^  textBox_PointD_y;


	private: System::Windows::Forms::Button^  button_Calculate;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox_amount_points;
	private: System::Windows::Forms::Label^  label_exact_value;
	private: System::Windows::Forms::Label^  label_monte_carlo;
	private: System::Windows::Forms::Label^  labe_relative_error;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_PointB_x = (gcnew System::Windows::Forms::TextBox());
			this->textBox_PointB_y = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_PointD_x = (gcnew System::Windows::Forms::TextBox());
			this->textBox_PointD_y = (gcnew System::Windows::Forms::TextBox());
			this->button_Calculate = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_amount_points = (gcnew System::Windows::Forms::TextBox());
			this->label_exact_value = (gcnew System::Windows::Forms::Label());
			this->label_monte_carlo = (gcnew System::Windows::Forms::Label());
			this->labe_relative_error = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Точка b:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"X";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(198, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Y";
			// 
			// textBox_PointB_x
			// 
			this->textBox_PointB_x->Location = System::Drawing::Point(124, 46);
			this->textBox_PointB_x->Name = L"textBox_PointB_x";
			this->textBox_PointB_x->Size = System::Drawing::Size(43, 22);
			this->textBox_PointB_x->TabIndex = 3;
			// 
			// textBox_PointB_y
			// 
			this->textBox_PointB_y->Location = System::Drawing::Point(190, 46);
			this->textBox_PointB_y->Name = L"textBox_PointB_y";
			this->textBox_PointB_y->Size = System::Drawing::Size(43, 22);
			this->textBox_PointB_y->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Точка d:";
			// 
			// textBox_PointD_x
			// 
			this->textBox_PointD_x->Location = System::Drawing::Point(124, 78);
			this->textBox_PointD_x->Name = L"textBox_PointD_x";
			this->textBox_PointD_x->Size = System::Drawing::Size(43, 22);
			this->textBox_PointD_x->TabIndex = 6;
			// 
			// textBox_PointD_y
			// 
			this->textBox_PointD_y->Location = System::Drawing::Point(190, 77);
			this->textBox_PointD_y->Name = L"textBox_PointD_y";
			this->textBox_PointD_y->Size = System::Drawing::Size(43, 22);
			this->textBox_PointD_y->TabIndex = 7;
			// 
			// button_Calculate
			// 
			this->button_Calculate->Location = System::Drawing::Point(21, 157);
			this->button_Calculate->Name = L"button_Calculate";
			this->button_Calculate->Size = System::Drawing::Size(106, 40);
			this->button_Calculate->TabIndex = 8;
			this->button_Calculate->Text = L"Вычислить";
			this->button_Calculate->UseVisualStyleBackColor = true;
			this->button_Calculate->Click += gcnew System::EventHandler(this, &Form1::button_Calculate_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Кол-во точек:";
			// 
			// textBox_amount_points
			// 
			this->textBox_amount_points->Location = System::Drawing::Point(123, 113);
			this->textBox_amount_points->Name = L"textBox_amount_points";
			this->textBox_amount_points->Size = System::Drawing::Size(110, 22);
			this->textBox_amount_points->TabIndex = 10;
			// 
			// label_exact_value
			// 
			this->label_exact_value->AutoSize = true;
			this->label_exact_value->Location = System::Drawing::Point(21, 214);
			this->label_exact_value->Name = L"label_exact_value";
			this->label_exact_value->Size = System::Drawing::Size(0, 17);
			this->label_exact_value->TabIndex = 11;
			// 
			// label_monte_carlo
			// 
			this->label_monte_carlo->AutoSize = true;
			this->label_monte_carlo->Location = System::Drawing::Point(21, 246);
			this->label_monte_carlo->Name = L"label_monte_carlo";
			this->label_monte_carlo->Size = System::Drawing::Size(0, 17);
			this->label_monte_carlo->TabIndex = 12;
			// 
			// labe_relative_error
			// 
			this->labe_relative_error->AutoSize = true;
			this->labe_relative_error->Location = System::Drawing::Point(18, 263);
			this->labe_relative_error->Name = L"labe_relative_error";
			this->labe_relative_error->Size = System::Drawing::Size(0, 17);
			this->labe_relative_error->TabIndex = 13;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 446);
			this->Controls->Add(this->labe_relative_error);
			this->Controls->Add(this->label_monte_carlo);
			this->Controls->Add(this->label_exact_value);
			this->Controls->Add(this->textBox_amount_points);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button_Calculate);
			this->Controls->Add(this->textBox_PointD_y);
			this->Controls->Add(this->textBox_PointD_x);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_PointB_y);
			this->Controls->Add(this->textBox_PointB_x);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: double RelativeError(double exact_value, double approximation)
		{
			return abs(exact_value - approximation) / exact_value * 100;
		}
	private: System::Void button_Calculate_Click(System::Object^  sender, System::EventArgs^  e)
	{
		PointD b{ Double::Parse(textBox_PointB_x->Text), Double::Parse(textBox_PointB_y->Text) };
		PointD d{ Double::Parse(textBox_PointD_x->Text), Double::Parse(textBox_PointD_y->Text) };

		Figure figure;
		figure = CreateFigure(b, d);

		double exact_area = figure.ExactAreaValue;
		double monte_carclo = СalculateMonteCarlo(figure, 1e4);

		label_exact_value->Text = "Точное значение площади: " + exact_area.ToString();
		label_monte_carlo->Text = "Монте-Карло: " + monte_carclo.ToString();
		labe_relative_error->Text = "Относительная погрешность: " + RelativeError(exact_area, monte_carclo).ToString() + "%";
	}
	};
}