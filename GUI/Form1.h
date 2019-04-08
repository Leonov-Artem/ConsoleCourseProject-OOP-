#pragma once
#include "Figure2.h"
#include "Figure.h"

namespace CppCLR_Winforms
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			button_Сalculate->Enabled = false;

			pictureBox1->Image = Image::FromFile("...\\Figure.png");

			label_PointB->BringToFront();
			label_PointD->BringToFront();
			label_PointM->BringToFront();
			label_PointE->BringToFront();
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



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox_amount_points;
	private: System::Windows::Forms::Label^  label_exact_value;
	private: System::Windows::Forms::Label^  label_monte_carlo;
	private: System::Windows::Forms::Label^  label_relative_error;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button_Сalculate;
	private: System::Windows::Forms::Label^  label_PointB;
	private: System::Windows::Forms::Label^  label_PointD;
	private: System::Windows::Forms::Label^  label_PointM;
	private: System::Windows::Forms::Label^  label_PointE;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_amount_points = (gcnew System::Windows::Forms::TextBox());
			this->label_exact_value = (gcnew System::Windows::Forms::Label());
			this->label_monte_carlo = (gcnew System::Windows::Forms::Label());
			this->label_relative_error = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button_Сalculate = (gcnew System::Windows::Forms::Button());
			this->label_PointB = (gcnew System::Windows::Forms::Label());
			this->label_PointD = (gcnew System::Windows::Forms::Label());
			this->label_PointM = (gcnew System::Windows::Forms::Label());
			this->label_PointE = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Точка b:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"X";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(198, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Y";
			// 
			// textBox_PointB_x
			// 
			this->textBox_PointB_x->Location = System::Drawing::Point(125, 46);
			this->textBox_PointB_x->Name = L"textBox_PointB_x";
			this->textBox_PointB_x->Size = System::Drawing::Size(43, 22);
			this->textBox_PointB_x->TabIndex = 3;
			// 
			// textBox_PointB_y
			// 
			this->textBox_PointB_y->Location = System::Drawing::Point(191, 46);
			this->textBox_PointB_y->Name = L"textBox_PointB_y";
			this->textBox_PointB_y->Size = System::Drawing::Size(43, 22);
			this->textBox_PointB_y->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Точка d:";
			// 
			// textBox_PointD_x
			// 
			this->textBox_PointD_x->Location = System::Drawing::Point(125, 78);
			this->textBox_PointD_x->Name = L"textBox_PointD_x";
			this->textBox_PointD_x->Size = System::Drawing::Size(43, 22);
			this->textBox_PointD_x->TabIndex = 6;
			// 
			// textBox_PointD_y
			// 
			this->textBox_PointD_y->Location = System::Drawing::Point(191, 77);
			this->textBox_PointD_y->Name = L"textBox_PointD_y";
			this->textBox_PointD_y->Size = System::Drawing::Size(43, 22);
			this->textBox_PointD_y->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Кол-во точек:";
			// 
			// textBox_amount_points
			// 
			this->textBox_amount_points->Location = System::Drawing::Point(124, 113);
			this->textBox_amount_points->Name = L"textBox_amount_points";
			this->textBox_amount_points->Size = System::Drawing::Size(110, 22);
			this->textBox_amount_points->TabIndex = 10;
			// 
			// label_exact_value
			// 
			this->label_exact_value->AutoSize = true;
			this->label_exact_value->Location = System::Drawing::Point(25, 299);
			this->label_exact_value->Name = L"label_exact_value";
			this->label_exact_value->Size = System::Drawing::Size(0, 17);
			this->label_exact_value->TabIndex = 11;
			// 
			// label_monte_carlo
			// 
			this->label_monte_carlo->AutoSize = true;
			this->label_monte_carlo->Location = System::Drawing::Point(25, 316);
			this->label_monte_carlo->Name = L"label_monte_carlo";
			this->label_monte_carlo->Size = System::Drawing::Size(0, 17);
			this->label_monte_carlo->TabIndex = 12;
			// 
			// label_relative_error
			// 
			this->label_relative_error->AutoSize = true;
			this->label_relative_error->Location = System::Drawing::Point(25, 333);
			this->label_relative_error->Name = L"label_relative_error";
			this->label_relative_error->Size = System::Drawing::Size(0, 17);
			this->label_relative_error->TabIndex = 13;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(19, 145);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(262, 84);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Тип приложения";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(43, 49);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(218, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Объектно-ориентированное";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(43, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(118, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Процедурное";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// button_Сalculate
			// 
			this->button_Сalculate->Location = System::Drawing::Point(21, 240);
			this->button_Сalculate->Name = L"button_Сalculate";
			this->button_Сalculate->Size = System::Drawing::Size(102, 44);
			this->button_Сalculate->TabIndex = 16;
			this->button_Сalculate->Text = L"Выполнить";
			this->button_Сalculate->UseVisualStyleBackColor = true;
			this->button_Сalculate->Click += gcnew System::EventHandler(this, &Form1::button_Сalculate_Click);
			// 
			// label_PointB
			// 
			this->label_PointB->AutoSize = true;
			this->label_PointB->BackColor = System::Drawing::Color::White;
			this->label_PointB->Location = System::Drawing::Point(395, 113);
			this->label_PointB->Name = L"label_PointB";
			this->label_PointB->Size = System::Drawing::Size(0, 17);
			this->label_PointB->TabIndex = 23;
			// 
			// label_PointD
			// 
			this->label_PointD->AutoSize = true;
			this->label_PointD->BackColor = System::Drawing::Color::White;
			this->label_PointD->Location = System::Drawing::Point(686, 63);
			this->label_PointD->Name = L"label_PointD";
			this->label_PointD->Size = System::Drawing::Size(0, 17);
			this->label_PointD->TabIndex = 24;
			// 
			// label_PointM
			// 
			this->label_PointM->AutoSize = true;
			this->label_PointM->BackColor = System::Drawing::Color::White;
			this->label_PointM->Location = System::Drawing::Point(775, 131);
			this->label_PointM->Name = L"label_PointM";
			this->label_PointM->Size = System::Drawing::Size(0, 17);
			this->label_PointM->TabIndex = 25;
			// 
			// label_PointE
			// 
			this->label_PointE->AutoSize = true;
			this->label_PointE->BackColor = System::Drawing::Color::White;
			this->label_PointE->Location = System::Drawing::Point(689, 211);
			this->label_PointE->Name = L"label_PointE";
			this->label_PointE->Size = System::Drawing::Size(0, 17);
			this->label_PointE->TabIndex = 26;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(325, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(443, 183);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(820, 446);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label_PointE);
			this->Controls->Add(this->label_PointM);
			this->Controls->Add(this->label_PointD);
			this->Controls->Add(this->label_PointB);
			this->Controls->Add(this->button_Сalculate);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label_relative_error);
			this->Controls->Add(this->label_monte_carlo);
			this->Controls->Add(this->label_exact_value);
			this->Controls->Add(this->textBox_amount_points);
			this->Controls->Add(this->label5);
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: double RelativeError(double exact_value, double approximation)
	{
		return abs(exact_value - approximation) / exact_value * 100;
	}
	private: System::Void button_Сalculate_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double amount_points;
		if (textBox_amount_points->Text != "")
			amount_points = Double::Parse(textBox_amount_points->Text);
		else
			amount_points = 1e4;
		
		double PointB_x = Double::Parse(textBox_PointB_x->Text);
		double PointB_y = Double::Parse(textBox_PointB_y->Text);
		double PointD_x = Double::Parse(textBox_PointD_x->Text);
		double PointD_y = Double::Parse(textBox_PointD_y->Text);

		if (radioButton1->Checked)
		{
			ProceduralProject::PointD b{ PointB_x, PointB_y };
			ProceduralProject::PointD d{ PointD_x, PointD_y };

			ProceduralProject::Figure figure;
			figure = CreateFigure(b, d);
			
			SetCoordinates(figure.b, figure.d, figure.m, figure.e);

			double exact_area = Math::Round(figure.ExactAreaValue, 4);
			double monte_carclo = Math::Round(СalculateMonteCarlo(figure, amount_points), 4);

			label_exact_value->Text = "Точное значение площади: " + exact_area.ToString();
			label_monte_carlo->Text = "Монте-Карло: " + monte_carclo.ToString();
			label_relative_error->Text = "Относительная погрешность: " + Math::Round(RelativeError(exact_area, monte_carclo), 4).ToString() + "%";
		}
		else if (radioButton2->Checked)
		{
			ObjectOrientedProject::PointD b(PointB_x, PointB_y);
			ObjectOrientedProject::PointD d(PointD_x, PointD_y);
			ObjectOrientedProject::Figure figure(b, d);

			SetCoordinates(figure.B, figure.D, figure.M, figure.E);

			double exact_area = Math::Round(figure.ExactAreaValue(), 4);
			double monte_carclo = Math::Round(figure.MonteCarloAlgorithm(amount_points), 4);

			label_exact_value->Text = "Точное значение площади: " + exact_area.ToString();
			label_monte_carlo->Text = "Монте-Карло: " + monte_carclo.ToString();
			label_relative_error->Text = "Относительная погрешность: " + Math::Round(RelativeError(exact_area, monte_carclo), 4).ToString() + "%";
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (textBox_PointB_x->Text != "" && textBox_PointB_y->Text != "" && textBox_PointD_x->Text != "" && textBox_PointD_y->Text != "")
			button_Сalculate->Enabled = true;
	}
	private: void SetCoordinates(ObjectOrientedProject::PointD b, ObjectOrientedProject::PointD d, ObjectOrientedProject::PointD m, ObjectOrientedProject::PointD e)
	{
		label_PointB->Text = "(" + b.X.ToString() + "; " + b.Y.ToString() + ")";
		label_PointD->Text = "(" + d.X.ToString() + "; " + d.Y.ToString() + ")";
		label_PointM->Text = "(" + m.X.ToString() + "; " + m.Y.ToString() + ")";
		label_PointE->Text = "(" + e.X.ToString() + "; " + e.Y.ToString() + ")";
	}
	private: void SetCoordinates(ProceduralProject::PointD b, ProceduralProject::PointD d, ProceduralProject::PointD m, ProceduralProject::PointD e)
	{
		label_PointB->Text ="(" + b.x.ToString() + "; " + b.y.ToString() + ")";
		label_PointD->Text ="(" + d.x.ToString() + "; " + d.y.ToString() + ")";
		label_PointM->Text ="(" + m.x.ToString() + "; " + m.y.ToString() + ")";
		label_PointE->Text ="(" + e.x.ToString() + "; " + e.y.ToString() + ")";
	}
};
}