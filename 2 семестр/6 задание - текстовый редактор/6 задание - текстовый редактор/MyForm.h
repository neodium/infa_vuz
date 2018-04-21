#pragma once
#include <stdio.h>
#include <string.h>

namespace _6_задание___текстовый_редактор {

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
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  действияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  работа1toolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  работа2toolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  очиститьToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;

	private:
		int flag;

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
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работа1toolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работа2toolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->файлToolStripMenuItem, 
				this->действияToolStripMenuItem, this->очиститьToolStripMenuItem, this->выходToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(730, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->создатьToolStripMenuItem, 
				this->открытьToolStripMenuItem, this->сохранитьКакToolStripMenuItem});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->создатьToolStripMenuItem->Text = L"Создать";
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::создатьToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->работа1toolStripMenuItem, 
				this->работа2toolStripMenuItem});
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->действияToolStripMenuItem->Text = L"Действия";
			// 
			// работа1toolStripMenuItem
			// 
			this->работа1toolStripMenuItem->Name = L"работа1toolStripMenuItem";
			this->работа1toolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->работа1toolStripMenuItem->Text = L"Средний балл группы";
			this->работа1toolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::работа1toolStripMenuItem_Click);
			// 
			// работа2toolStripMenuItem
			// 
			this->работа2toolStripMenuItem->Name = L"работа2toolStripMenuItem";
			this->работа2toolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->работа2toolStripMenuItem->Text = L"Должники";
			this->работа2toolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::работа2toolStripMenuItem_Click);
			// 
			// очиститьToolStripMenuItem
			// 
			this->очиститьToolStripMenuItem->Name = L"очиститьToolStripMenuItem";
			this->очиститьToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->очиститьToolStripMenuItem->Text = L"Очистить";
			this->очиститьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститьToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 27);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(706, 222);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(393, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(313, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Ввод группы:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(501, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ввод фамилии:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(591, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(99, 20);
			this->textBox2->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Текстовый редактор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e){
					 this->richTextBox1->Size = this->ClientSize;
				 }
		private: System::Void создатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
					 if(flag){
						 System::Windows::Forms::DialogResult result;
						 result = MessageBox::Show(this, "Файл изменён. Сохранить?", "Ошибка.", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Error);
						 if (result == System::Windows::Forms::DialogResult::Yes){
							 сохранитьКакToolStripMenuItem_Click(sender, e);
							 flag = 0;
						 }
					 }
					 richTextBox1->Clear();
				 }
private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			 saveFileDialog1->DefaultExt = "*.txt";
			 saveFileDialog1->Filter = "TXT Files|*.txt";
			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialog1->FileName->Length > 0){
				 richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
			 } else {
				 MessageBox::Show("Ошибка открытия файла.");
			 }
		 }
private: System::Void открытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			 openFileDialog1->DefaultExt = "*.txt";
			 openFileDialog1->Filter = "TXT Files|*.txt";
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0){
				 richTextBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
			 } else {
				 MessageBox::Show("Ошибка открытия файла.");
			 }
			 flag = 0;
		 }
private: System::Void очиститьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Clear();
			 flag=0;
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Clear();
			 richTextBox1->Location = Point(0, 24);
			 richTextBox1->Size = this->ClientSize;
			 flag=0;
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 flag=1;
		 }
private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(flag){
						 System::Windows::Forms::DialogResult result;
						 result = MessageBox::Show(this, "Файл изменён. Сохранить?", "Ошибка.", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Error);
						 if (result == System::Windows::Forms::DialogResult::Yes){
							 сохранитьКакToolStripMenuItem_Click(sender, e);
							 flag = 0;
						 }
						 
					 }
			 Close();
		 }
private: System::Void работа1toolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE *f, *g;
			 char *fn, *gn;
			 int nomer, o1, o2, o3, i=0;
			 char gr[9], fam[13];
			 float sr;
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0){
				 fn = (char*)(void*)Marshal::StringToHGlobalAnsi(openFileDialog1->FileName->ToString());
				 if ((f=fopen(fn,"r"))==NULL){
					 MessageBox::Show("Ошибка открытия файла.");
				 } else {
					 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialog1->FileName->Length > 0){
						 gn = (char*)(void*)Marshal::StringToHGlobalAnsi(saveFileDialog1->FileName->ToString());
						 if ((g=fopen(gn,"w"))==NULL){
							MessageBox::Show("Ошибка открытия файла.");
						 } else {
							 richTextBox1->Clear();
							 while (fscanf(f, "%d %s %s %d %d %d", &nomer, gr, fam, &o1, &o2, &o3)>0){
								 String^ grF = gcnew String(gr);
								 if (grF == textBox1->Text->ToString()){
									 sr = (o1+o2+o3)/3.0f;
									 for (int j=strlen(fam); j<10; j++){
										 strcat(fam, " ");
									 }
									 String^ s=gcnew String("");
									 String^ q=gcnew String(gr);
									 String^ p=gcnew String(fam);
									 s=s+nomer;
									 if(s->Length==1){
										 s=" "+s;
									 }
									 s=s+" "+q+" "+p+" "+o1+" "+o2+" "+o3+" "+sr+"\n";
									 richTextBox1->AppendText(s);
									 i++;
									 fprintf(g, "%2d %8s %10s%2d%2d%2d %8.2f\n", i, gr, fam, o1, o2, o3, sr);
								 }
							 }
						 }
					 }
				fclose(f);
				fclose(g);
				 }
				 
			 }
		 }
private: System::Void работа2toolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FILE *f, *g;
			 char *fn, *gn;
			 int nomer, o1, o2, o3, i=0;
			 char gr[9], fam[13];
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0){
				 fn = (char*)(void*)Marshal::StringToHGlobalAnsi(openFileDialog1->FileName->ToString());
				 if ((f=fopen(fn,"r"))==NULL){
					 MessageBox::Show("Ошибка открытия файла.");
				 } else {
					 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialog1->FileName->Length > 0){
						 gn = (char*)(void*)Marshal::StringToHGlobalAnsi(saveFileDialog1->FileName->ToString());
						 if ((g=fopen(gn,"w"))==NULL){
							MessageBox::Show("Ошибка открытия файла.");
						 } else {
							 richTextBox1->Clear();
							 while (fscanf(f, "%d %s %s %d %d %d", &nomer, gr, fam, &o1, &o2, &o3)>0){
								 String^ famF = gcnew String(fam);
								 if (textBox2->TextLength==0){
									 if (o1 == 2 || o2 == 2 || o3 == 2){
										for (int j=strlen(fam); j<10; j++){
											strcat(fam, " ");
										}
										String^ s=gcnew String("");
										String^ q=gcnew String(gr);
										String^ p=gcnew String(fam);
										s=s+nomer;
										if(s->Length==1){
											 s=" "+s;
										}
										s=s+" "+q+" "+p+" "+o1+" "+o2+" "+o3+"\n";
										richTextBox1->AppendText(s);
										i++;
										fprintf(g, "%2d %8s %10s%2d%2d%2d\n", i, gr, fam, o1, o2, o3);
									 }
								 } else {
									 if (famF->Contains(textBox2->Text->ToString())){
										 if (o1 == 2 || o2 == 2 || o3 == 2){
											for (int j=strlen(fam); j<10; j++){
												strcat(fam, " ");
											}
											String^ s=gcnew String("");
											String^ q=gcnew String(gr);
											String^ p=gcnew String(fam);
											s=s+nomer;
											if(s->Length==1){
												s=" "+s;
											}
											s=s+" "+q+" "+p+" "+o1+" "+o2+" "+o3+"\n";
											richTextBox1->AppendText(s);
											i++;
											fprintf(g, "%2d %8s %10s%2d%2d%2d\n", i, gr, fam, o1, o2, o3);
										}
									 }
								 }
							 }
						 }
					 }
				fclose(f);
				fclose(g);
				 }
				 
			 }
		 }
};
}
