#include "MyForm.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
}

int** A;
int N, M;
int p = 0;


void Project1::MyForm::Show()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			Matrix->TopLeftHeaderCell->Value = "Матирца";
			Matrix->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			Matrix->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			Matrix->Rows[i]->Cells[j]->Value = A[i][j];
		}
	}
	Matrix->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	Matrix->AutoResizeColumns();
}

void Project1::MyForm::Cheking()
{
	if ((N == 0 )|| (M == 0))
	{
		MessageBox::Show("Введены некорректные значения!", "Внимание!");
	}
	if (p == 0)
		button1->Enabled = false;
}

System::Void Project1::MyForm::buttonResult_Click(System::Object^ sender, System::EventArgs^ e)
{
	Cheking();
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			try
			{
				A[i][j] = Convert::ToInt32(Matrix->Rows[i]->Cells[j]->Value);
			}
			catch (...)
			{
				MessageBox::Show("Введены неправильные значения!", "Внимание!");
				return;
			}
		}
	}
	int sum = 0, max[30], p=0;
	for (int j = 0; j < M; j++)
		max[j] = A[0][j];

	for (int j = 0; j < M; j++) {
		for (int i = 0; i < N; i++)
		{
			if (A[i][j] >= max[j])
				max[j] = A[i][j];
		}
		sum = sum + max[j];
	}
	if ((N != 0 && M != 0))
	{
		textBox1->Text = Convert::ToString(sum);

	}
	button1->Enabled = true;

	return System::Void();
}

System::Void Project1::MyForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{

	return System::Void();
}
System::Void Project1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Cheking();
	


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			try
			{
				A[i][j] = Convert::ToInt32(Matrix->Rows[i]->Cells[j]->Value);
			}
			catch (...)
			{
				MessageBox::Show("Введены неправильные значения!", "Внимание!");
				return;
			}
		}
	}
	int sum1 = 0, min[30] ;
	for (int j = 0; j < M; j++)
		min[j] = A[0][j];

	for (int j = 0; j < M; j++) {
		for (int i = 0; i < N; i++)
		{
			if (A[i][j] <= min[j])
				min[j] = A[i][j];
		}
		sum1 = sum1 + min[j];
	}
	if ((N != 0 && M != 0))
	{
		textBox2->Text = Convert::ToString(sum1);

	}
	return System::Void(1);
}
System::Void Project1::MyForm::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
System::Void Project1::MyForm::очиститьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	N = 0; M = 0;
	Matrix->Columns->Clear();
	Matrix->Rows->Clear();
	Matrix->Refresh();
	textBox1->Clear();
	textBox2->Clear();
	numericUpDownN->Value = 0;
	numericUpDownM->Value = 0;


	return System::Void();
}

System::Void Project1::MyForm::описаниеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show(" Лабораторная работа 2.\nЗадача:\n8. Дана матрица размера N x M. \nНайти сумму максимальных элементов столбцов\n");
	return System::Void();
}

System::Void Project1::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}


System::Void Project1::MyForm::buttonSetMatrix_Click(System::Object^ sender, System::EventArgs^ e)
{
	N = Convert::ToInt32(numericUpDownN->Value);
	M = Convert::ToInt32(numericUpDownM->Value);
	Cheking();
	A = new int* [N];
	for (int i = 0; i < N; i++)
		A[i] = new int[M];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			A[i][j] = 0;

	Matrix->RowCount = N;
	Matrix->ColumnCount = M;
	Show();
}



