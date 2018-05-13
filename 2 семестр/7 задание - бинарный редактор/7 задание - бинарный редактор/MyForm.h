#pragma once
#include <stdio.h>
#include <string.h>
struct stud {
		int nom;
		char fam[11];
		char grup[11];
		int oc[3];
		};

namespace _7_задание___бинарный_редактор {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  работаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  работа1toolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  работа2toolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  очиститьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		
	private:
		void TabClear(void){
			int i, j;
			for (i=0; i<dataGridView1->ColumnCount; i++){
				for (j=0; j<dataGridView1->RowCount; j++){
					dataGridView1[i, j]->Value="";
				}
			}
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работа1toolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работа2toolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->файлToolStripMenuItem, 
				this->работаToolStripMenuItem, this->очиститьToolStripMenuItem, this->выходToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(599, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->создатьToolStripMenuItem, 
				this->открытьToolStripMenuItem, this->сохранитьToolStripMenuItem});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->создатьToolStripMenuItem->Text = L"Создать";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// работаToolStripMenuItem
			// 
			this->работаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->работа1toolStripMenuItem, 
				this->работа2toolStripMenuItem});
			this->работаToolStripMenuItem->Name = L"работаToolStripMenuItem";
			this->работаToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->работаToolStripMenuItem->Text = L"Работа";
			// 
			// работа1toolStripMenuItem
			// 
			this->работа1toolStripMenuItem->Name = L"работа1toolStripMenuItem";
			this->работа1toolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->работа1toolStripMenuItem->Text = L"Работа1";
			this->работа1toolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::работа1toolStripMenuItem_Click);
			// 
			// работа2toolStripMenuItem
			// 
			this->работа2toolStripMenuItem->Name = L"работа2toolStripMenuItem";
			this->работа2toolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->работа2toolStripMenuItem->Text = L"Работа2";
			this->работа2toolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::работа2toolStripMenuItem_Click);
			// 
			// очиститьToolStripMenuItem
			// 
			this->очиститьToolStripMenuItem->Name = L"очиститьToolStripMenuItem";
			this->очиститьToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->очиститьToolStripMenuItem->Text = L"Очистить";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(575, 280);
			this->dataGridView1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(453, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(315, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите часть фамилии:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 319);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Бинарный редактор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void открытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE *f;
			 char *g;
			 stud s;
			 int i;
			 int size = sizeof(s);
			 String ^st1,^s1,^s2,^s3,^s4,^s5,^s6;
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length>0){
				 st1 = openFileDialog1->FileName->ToString();
				 g = (char*)(void*)Marshal::StringToHGlobalAnsi(st1);
				 if ((f=fopen(g, "rb"))==NULL) {
					 MessageBox::Show("Ошибка открытия файла.");
					 Application::Exit();
				 }
				 i=-1;
				 dataGridView1->RowCount=1;
				 TabClear();
				 rewind(f);
				 while(fread(&s, size, 1, f)>0) {
					 dataGridView1->RowCount++;
					 i=i+1;
					 s6=gcnew String(s.nom.ToString());
					 s1=gcnew String(s.grup);
					 s2=gcnew String(s.fam);
					 s3=gcnew String(s.oc[0].ToString());
					 s4=gcnew String(s.oc[1].ToString());
					 s5=gcnew String(s.oc[2].ToString());
					 dataGridView1[0, i]->Value=s6;
					 dataGridView1[1, i]->Value=s1;
					 dataGridView1[2, i]->Value=s2;
					 dataGridView1[3, i]->Value=s3;
					 dataGridView1[4, i]->Value=s4;
					 dataGridView1[5, i]->Value=s5;
				 }
				 fclose(f);
			 }
		 }
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE *f;
			 char *g;
			 stud s;
			 int i;
			 int size = sizeof(s);
			 String ^st1;
			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialog1->FileName->Length>0){
				 st1 = saveFileDialog1->FileName->ToString();
				 g = (char*)(void*)Marshal::StringToHGlobalAnsi(st1);
				 if ((f=fopen(g, "wb"))==NULL) {
					 MessageBox::Show("Ошибка открытия файла.");
					 Application::Exit();
				 }
				 i=0;
				 while(i < dataGridView1->RowCount-1) {
					 s.nom=Convert::ToInt32(dataGridView1[0, i]->Value);
					 g = (char*)(void*)Marshal::StringToHGlobalAnsi(dataGridView1[1, i]->Value->ToString());
					 strcpy(s.grup, g);
					 g = (char*)(void*)Marshal::StringToHGlobalAnsi(dataGridView1[2, i]->Value->ToString());
					 strcpy(s.fam, g);
					 s.oc[0]=Convert::ToInt32(dataGridView1[3, i]->Value);
					 s.oc[1]=Convert::ToInt32(dataGridView1[4, i]->Value);
					 s.oc[2]=Convert::ToInt32(dataGridView1[5, i]->Value);
					 fwrite(&s, size, 1, f);
					 i++;
				 }
				 fclose(f);
			 }
		 }
private: System::Void работа1toolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE *f;
			 char *g;
			 stud s;
			 int i, j, l=0, k=0;
			 double sr;
			 int size = sizeof(s);
			 String ^st1,^s1,^s2,^s3,^s4,^s5,^s6;
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length>0){
				 st1 = openFileDialog1->FileName->ToString();
				 g = (char*)(void*)Marshal::StringToHGlobalAnsi(st1);
				 if ((f=fopen(g, "rb"))==NULL) {
					 MessageBox::Show("Ошибка открытия файла.");
					 Application::Exit();
				 }
				 array<String^>^ uniqGrup = gcnew array<String^>(100);
				 while(fread(&s, size, 1, f)>0) {
					 k++;
				 }
				 rewind(f);
				 while(fread(&s, size, 1, f)>0){
					String ^grup = gcnew String(s.grup);
					bool check;
					for (i=0; i<k; i++){
						for (int j=0; j<k; j++){
							if (uniqGrup[j] == grup) check = 1; 
						}
						if (!check){
							uniqGrup[l] = grup;
							l++;
						}
						check = 0;
					}
				 }
				 i=0;
				 k=0;
				 dataGridView1->RowCount=l+1;
				 TabClear();
				 dataGridView1[0, i]->Value="Средние";
				 dataGridView1[1, i]->Value="баллы";
				 dataGridView1[2, i]->Value="групп";
				 for (j=0; j<l; j++){
					rewind(f);
					while(fread(&s, size, 1, f)>0) {
						String ^grup = gcnew String(s.grup);
						if (grup == uniqGrup[j]){
							k++;
							double buf = s.oc[0]+s.oc[1]+s.oc[2];
							sr+=buf/3;
						}
					}
					i++;
					sr = sr/k;
					dataGridView1[0, i]->Value=i;
					dataGridView1[1, i]->Value=uniqGrup[j];
					dataGridView1[3, i]->Value=sr;
					k=0;
					sr=0;
				 }
				 fclose(f);
			 }
		 }
private: System::Void работа2toolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE *f;
			 char *g;
			 stud s;
			 int i, j, l=0, k=0;
			 double sr;
			 int size = sizeof(s);
			 String ^st1,^s1,^s2,^s3,^s4,^s5,^s6;
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length>0){
				 st1 = openFileDialog1->FileName->ToString();
				 g = (char*)(void*)Marshal::StringToHGlobalAnsi(st1);
				 if ((f=fopen(g, "rb"))==NULL) {
					 MessageBox::Show("Ошибка открытия файла.");
					 Application::Exit();
				 }
				 while(fread(&s, size, 1, f)>0) {
					String ^fam = gcnew String(s.fam);
					if (fam->Contains(textBox1->Text->ToString())){
						k++;
					}
				 }
				 i=-1;
				 rewind(f);
				 dataGridView1->RowCount=k;
				 TabClear();
				 while(fread(&s, size, 1, f)>0){
					String ^fam = gcnew String(s.fam);
					if (fam->Contains(textBox1->Text->ToString())){
						i=i++;
						s6=gcnew String(s.nom.ToString());
						s1=gcnew String(s.grup);
						s2=gcnew String(s.fam);
						s3=gcnew String(s.oc[0].ToString());
						s4=gcnew String(s.oc[1].ToString());
						s5=gcnew String(s.oc[2].ToString());
						dataGridView1[0, i]->Value=s6;
						dataGridView1[1, i]->Value=s1;
						dataGridView1[2, i]->Value=s2;
						dataGridView1[3, i]->Value=s3;
						dataGridView1[4, i]->Value=s4;
						dataGridView1[5, i]->Value=s5;
					}
				}
				fclose(f);
			 }
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->ColumnCount=6;
			 dataGridView1->RowCount=2;
			 dataGridView1->Columns[0]->Width=100;
			 dataGridView1->Columns[1]->Width=100;
			 dataGridView1->Columns[2]->Width=100;
			 dataGridView1->Columns[3]->Width=60;
			 dataGridView1->Columns[4]->Width=60;
			 dataGridView1->Columns[5]->Width=60;
			 dataGridView1->Columns[0]->HeaderText="Номер";
			 dataGridView1->Columns[1]->HeaderText="Группа";
			 dataGridView1->Columns[2]->HeaderText="Фамилия";
			 dataGridView1->Columns[3]->HeaderText="Оценка 1";
			 dataGridView1->Columns[4]->HeaderText="Оценка 2";
			 dataGridView1->Columns[5]->HeaderText="Оценка 3";
			 TabClear();
		 }
};
}
