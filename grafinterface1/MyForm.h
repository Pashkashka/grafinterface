#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ buttonResult;
	protected:



	private: System::Windows::Forms::Button^ buttonSetMatrix;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownM;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownN;
	private: System::Windows::Forms::DataGridView^ Matrix;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ описаниеToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonResult = (gcnew System::Windows::Forms::Button());
			this->buttonSetMatrix = (gcnew System::Windows::Forms::Button());
			this->numericUpDownM = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownN = (gcnew System::Windows::Forms::NumericUpDown());
			this->Matrix = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->описаниеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->buttonResult);
			this->groupBox1->Controls->Add(this->buttonSetMatrix);
			this->groupBox1->Controls->Add(this->numericUpDownM);
			this->groupBox1->Controls->Add(this->numericUpDownN);
			this->groupBox1->Controls->Add(this->Matrix);
			this->groupBox1->Location = System::Drawing::Point(11, 29);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(693, 570);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(454, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 39);
			this->button1->TabIndex = 12;
			this->button1->Text = L"рассчитать мин";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(291, 513);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(288, 450);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Сумма максимумов ";
			//this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(291, 469);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(126, 439);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Кол-во столбцов";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 439);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Кол-во строк";
			// 
			// buttonResult
			// 
			this->buttonResult->BackColor = System::Drawing::Color::YellowGreen;
			this->buttonResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonResult->Location = System::Drawing::Point(454, 441);
			this->buttonResult->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonResult->Name = L"buttonResult";
			this->buttonResult->Size = System::Drawing::Size(128, 58);
			this->buttonResult->TabIndex = 6;
			this->buttonResult->Text = L"Рассчитать";
			this->buttonResult->UseVisualStyleBackColor = false;
			this->buttonResult->Click += gcnew System::EventHandler(this, &MyForm::buttonResult_Click);
			// 
			// buttonSetMatrix
			// 
			this->buttonSetMatrix->BackColor = System::Drawing::Color::Yellow;
			this->buttonSetMatrix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSetMatrix->Location = System::Drawing::Point(13, 482);
			this->buttonSetMatrix->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonSetMatrix->Name = L"buttonSetMatrix";
			this->buttonSetMatrix->Size = System::Drawing::Size(219, 83);
			this->buttonSetMatrix->TabIndex = 4;
			this->buttonSetMatrix->Text = L"Создать матрицу";
			this->buttonSetMatrix->UseVisualStyleBackColor = false;
			this->buttonSetMatrix->Click += gcnew System::EventHandler(this, &MyForm::buttonSetMatrix_Click);
			// 
			// numericUpDownM
			// 
			this->numericUpDownM->Location = System::Drawing::Point(125, 457);
			this->numericUpDownM->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDownM->Name = L"numericUpDownM";
			this->numericUpDownM->Size = System::Drawing::Size(107, 22);
			this->numericUpDownM->TabIndex = 3;
			// 
			// numericUpDownN
			// 
			this->numericUpDownN->Location = System::Drawing::Point(13, 457);
			this->numericUpDownN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDownN->Name = L"numericUpDownN";
			this->numericUpDownN->Size = System::Drawing::Size(107, 22);
			this->numericUpDownN->TabIndex = 2;
			// 
			// Matrix
			// 
			this->Matrix->AllowUserToAddRows = false;
			this->Matrix->AllowUserToDeleteRows = false;
			this->Matrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Matrix->Location = System::Drawing::Point(6, 31);
			this->Matrix->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Matrix->Name = L"Matrix";
			this->Matrix->RowHeadersWidth = 62;
			this->Matrix->RowTemplate->Height = 28;
			this->Matrix->Size = System::Drawing::Size(667, 406);
			this->Matrix->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->описаниеToolStripMenuItem,
					this->очиститьToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(717, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// описаниеToolStripMenuItem
			// 
			this->описаниеToolStripMenuItem->BackColor = System::Drawing::Color::Green;
			this->описаниеToolStripMenuItem->Name = L"описаниеToolStripMenuItem";
			this->описаниеToolStripMenuItem->Size = System::Drawing::Size(93, 24);
			this->описаниеToolStripMenuItem->Text = L"Описание";
			this->описаниеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::описаниеToolStripMenuItem_Click);
			// 
			// очиститьToolStripMenuItem
			// 
			this->очиститьToolStripMenuItem->BackColor = System::Drawing::Color::Aqua;
			this->очиститьToolStripMenuItem->Name = L"очиститьToolStripMenuItem";
			this->очиститьToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->очиститьToolStripMenuItem->Text = L"Очистить";
			this->очиститьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститьToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->BackColor = System::Drawing::Color::Red;
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(717, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(717, 609);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::Black;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа №2";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void описаниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSetMatrix_Click(System::Object^ sender, System::EventArgs^ e);
	private: void Show();
	private: void Cheking();
	private: System::Void buttonResult_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void очиститьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e);

};
}
