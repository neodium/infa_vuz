#pragma once
#include <stdlib.h>

namespace _5_задание___работа_с_массивами {
	
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
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::ToolStripMenuItem^  менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  вводМатрицыToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  произведениеОтрицательныхToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сравнениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сортировкаToolStripMenuItem;
	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вводМатрицыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->произведениеОтрицательныхToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сравнениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Location = System::Drawing::Point(185, 27);
			this->dataGridView1->MaximumSize = System::Drawing::Size(264, 235);
			this->dataGridView1->MinimumSize = System::Drawing::Size(264, 235);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->Size = System::Drawing::Size(264, 235);
			this->dataGridView1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите кол-во строк:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите кол-во столбцов:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Введите элементы массива:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Ввести";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 139);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(150, 94);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->менюToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(455, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->вводМатрицыToolStripMenuItem, 
				this->произведениеОтрицательныхToolStripMenuItem, this->сравнениеToolStripMenuItem, this->сортировкаToolStripMenuItem});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// вводМатрицыToolStripMenuItem
			// 
			this->вводМатрицыToolStripMenuItem->Name = L"вводМатрицыToolStripMenuItem";
			this->вводМатрицыToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->вводМатрицыToolStripMenuItem->Text = L"Ввод матрицы";
			this->вводМатрицыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вводМатрицыToolStripMenuItem_Click);
			// 
			// произведениеОтрицательныхToolStripMenuItem
			// 
			this->произведениеОтрицательныхToolStripMenuItem->Name = L"произведениеОтрицательныхToolStripMenuItem";
			this->произведениеОтрицательныхToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->произведениеОтрицательныхToolStripMenuItem->Text = L"Произведение отрицательных";
			this->произведениеОтрицательныхToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::произведениеОтрицательныхToolStripMenuItem_Click);
			// 
			// сравнениеToolStripMenuItem
			// 
			this->сравнениеToolStripMenuItem->Name = L"сравнениеToolStripMenuItem";
			this->сравнениеToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->сравнениеToolStripMenuItem->Text = L"Сравнение";
			this->сравнениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сравнениеToolStripMenuItem_Click);
			// 
			// сортировкаToolStripMenuItem
			// 
			this->сортировкаToolStripMenuItem->Name = L"сортировкаToolStripMenuItem";
			this->сортировкаToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->сортировкаToolStripMenuItem->Text = L"Сортировка";
			this->сортировкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сортировкаToolStripMenuItem_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->Location = System::Drawing::Point(455, 27);
			this->dataGridView2->MaximumSize = System::Drawing::Size(264, 235);
			this->dataGridView2->MinimumSize = System::Drawing::Size(264, 235);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView2->Size = System::Drawing::Size(264, 235);
			this->dataGridView2->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 276);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Матрицы";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->Columns->Clear();
				 dataGridView1->Rows->Clear();
				 String ^strBuf;
				 int n,m,i,j;
				 n = Convert::ToInt16(textBox1->Text);
				 m = Convert::ToInt16(textBox2->Text);
				 dataGridView1->ColumnCount=m;
				 for (i=0; i<n; i++){
					 dataGridView1->Rows->Add();
					 strBuf = richTextBox1->Lines[i]->ToString();
					 array <String ^>^ str = strBuf->Split(' ');
					 for (j=0; j<m; j++){
						 //MessageBox::Show(str[j]);
						 dataGridView1->Rows[i]->Cells[j]->Value=Convert::ToString(str[j]);
					 }
				 }
			 }
private: System::Void вводМатрицыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->ClientSize = System::Drawing::Size(455, 276);
			 dataGridView2->Visible=false;
		 }
private: System::Void произведениеОтрицательныхToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i, j, n, m;
			 double proizv = 1;
			 n = dataGridView1->RowCount;
			 m = dataGridView1->ColumnCount;
			 for (i=0; i<n; i++){
				 for (j=0; j<m; j++){
					 if (Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value) < 0){
						 proizv*=Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
					 }
				 }
			 }
			 MessageBox::Show("Произведение отрицательных = " + proizv);
		 }
private: System::Void сравнениеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i, j, n, m;
			 double proizvPol = 1, proizvOtr = 1;
			 n = dataGridView1->RowCount;
			 m = dataGridView1->ColumnCount;
			 for (i=0; i<n; i++){
				 for (j=0; j<m; j++){
					 if (Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value) > 0){
						 proizvPol*=Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
					 }
					 if (Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value) < 0){
						 proizvOtr*=Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
					 }
				 }
			 }
			 if (proizvPol > proizvOtr){
				MessageBox::Show("Произведение положительных больше произведения отрицательных");
			 } else {
				MessageBox::Show("Произведение отрицательных больше произведения положительных");
			 }
		 }
private: System::Void сортировкаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView2->Columns->Clear();
			 dataGridView2->Rows->Clear();
			 this->ClientSize = System::Drawing::Size(728, 276);
			 dataGridView2->Visible=true;
			 int i, j, k, n, m;
			 n = dataGridView1->RowCount;
			 m = dataGridView1->ColumnCount;
			 dataGridView2->RowCount = n;
			 dataGridView2->ColumnCount = m;
			 for (i=0; i<n; i++){
				 for (j=0; j<m; j++){
					 dataGridView2->Rows[i]->Cells[j]->Value = dataGridView1->Rows[i]->Cells[j]->Value;
				 }
			 }
			 for (k=0; k<n; k++){
				 for(i = 0 ; i < m - 1; i++) { 
					for(j = 0 ; j < m - i - 1 ; j++) {
						double VAL = Convert::ToDouble(dataGridView2->Rows[k]->Cells[j]->Value);
						double VAL2 = Convert::ToDouble(dataGridView2->Rows[k]->Cells[j+1]->Value);
						if(VAL > VAL2) {
							double tmp = VAL;
							dataGridView2->Rows[k]->Cells[j]->Value = VAL2 ;
							dataGridView2->Rows[k]->Cells[j+1]->Value = tmp; 
					}
				}
			}
			}
	}
};
}
