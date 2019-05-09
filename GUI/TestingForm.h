#pragma once
#include <ctime>

namespace GUI {
	using namespace ProceduralProject;
	using namespace ObjectOrientedProject;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TestingForm
	/// </summary>
	public ref class TestingForm : public System::Windows::Forms::Form
	{
	public:
		TestingForm(void)
		{
			InitializeComponent();

			dataGridView1->Rows->Add(4);
			dataGridView1->Rows[0]->Cells[0]->Value = "1000";
			dataGridView1->Rows[1]->Cells[0]->Value = "10.000";
			dataGridView1->Rows[2]->Cells[0]->Value = "100.000";
			dataGridView1->Rows[3]->Cells[0]->Value = "1000.000";
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TestingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 37);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(546, 196);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Кол-во точек";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Среднее время (ОО приложение)";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 130;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Среднее время (Процедурное приложение)";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 140;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(170, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 84);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Начать тестирование";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TestingForm::button1_Click);
			// 
			// TestingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 360);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"TestingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TestingForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void ExecuteProceduralCode(double sample_size)
		{
			ProceduralProject::PointD b{ -12, 0 };
			ProceduralProject::PointD d{ -6, 2 };

			ProceduralProject::Figure figure;
			figure = CreateFigure(b, d);

			double exact_area = figure.ExactAreaValue;
			double monte_carclo = СalculateMonteCarlo(figure, sample_size);
		}
	private: void ExecuteObjectOrientedCode(double sample_size)
		{
			ObjectOrientedProject::PointD b(-12, 0), d(-6, 2);
			ObjectOrientedProject::Figure figure(b, d);

			double ExactAreaValue = figure.ExactAreaValue();
			double monteCarlo = figure.MonteCarloAlgorithm(sample_size);
		}
	private: double ProceduralApplication(double sample_size, int amount_tests)
		{
			unsigned int average_time = 0;

			for (int i = 0; i < amount_tests; i++)
			{
				unsigned int start_time = clock();
				ExecuteProceduralCode(sample_size);
				unsigned int end_time = clock();

				average_time += end_time - start_time;
			}

			return average_time / amount_tests / 1000.0;
		}
	private: double ObjectOrientedApplication(double sample_size, int amount_tests)
		{
			unsigned int average_time = 0;

			for (int i = 0; i < amount_tests; i++)
			{
				unsigned int start_time = clock();
				ExecuteObjectOrientedCode(sample_size);
				unsigned int end_time = clock();

				average_time += end_time - start_time;
			}

			return average_time / amount_tests / 1000.0;
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double size[4]{ 1e3, 1e4, 1e5, 1e6 };
		for (int i = 0; i < 4; i++)
		{
			dataGridView1->Rows[i]->Cells[1]->Value = ObjectOrientedApplication(size[i], 5);
			dataGridView1->Rows[i]->Cells[2]->Value = ProceduralApplication(size[i], 5);
		}
	}
	};
}
