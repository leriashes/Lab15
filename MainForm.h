#pragma once
#include <cctype>
#include "HelloForm.h"
#include "ExitForm.h"
#include "AdminForm.h"

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menustrip_main;
	private: System::Windows::Forms::ToolStripMenuItem^ FileToolStripMenuItem;

	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ EnterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ CreateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel_filename;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ OpenToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveAsToolStripMenuItem;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label_center;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_age;
	private: System::Windows::Forms::ToolStripSeparator^ SepToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ SepToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ CorrectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ QueryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ GameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ InfoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ QuitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AddRowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ DelRowToolStripMenuItem;




















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menustrip_main = (gcnew System::Windows::Forms::MenuStrip());
			this->FileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CreateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SepToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->SaveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SepToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EnterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CorrectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddRowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DelRowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->QueryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->InfoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->QuitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel_filename = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_center = (gcnew System::Windows::Forms::Label());
			this->menustrip_main->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menustrip_main
			// 
			this->menustrip_main->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menustrip_main->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menustrip_main->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menustrip_main->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->FileToolStripMenuItem,
					this->EnterToolStripMenuItem, this->CorrectToolStripMenuItem, this->QueryToolStripMenuItem, this->GameToolStripMenuItem, this->InfoToolStripMenuItem,
					this->QuitToolStripMenuItem
			});
			this->menustrip_main->Location = System::Drawing::Point(0, 0);
			this->menustrip_main->Name = L"menustrip_main";
			this->menustrip_main->Size = System::Drawing::Size(1500, 38);
			this->menustrip_main->TabIndex = 0;
			this->menustrip_main->Text = L"menuStrip1";
			// 
			// FileToolStripMenuItem
			// 
			this->FileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->CreateToolStripMenuItem,
					this->OpenToolStripMenuItem, this->SepToolStripMenuItem1, this->SaveToolStripMenuItem, this->SaveAsToolStripMenuItem, this->SepToolStripMenuItem2,
					this->ExitToolStripMenuItem
			});
			this->FileToolStripMenuItem->Name = L"FileToolStripMenuItem";
			this->FileToolStripMenuItem->Size = System::Drawing::Size(80, 34);
			this->FileToolStripMenuItem->Text = L"&Файл";
			// 
			// CreateToolStripMenuItem
			// 
			this->CreateToolStripMenuItem->Enabled = false;
			this->CreateToolStripMenuItem->Name = L"CreateToolStripMenuItem";
			this->CreateToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->CreateToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->CreateToolStripMenuItem->Text = L"&Создать";
			this->CreateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::CreateToolStripMenuItem_Click);
			// 
			// OpenToolStripMenuItem
			// 
			this->OpenToolStripMenuItem->Name = L"OpenToolStripMenuItem";
			this->OpenToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->OpenToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->OpenToolStripMenuItem->Text = L"&Открыть";
			this->OpenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::OpenToolStripMenuItem_Click);
			// 
			// SepToolStripMenuItem1
			// 
			this->SepToolStripMenuItem1->Name = L"SepToolStripMenuItem1";
			this->SepToolStripMenuItem1->Size = System::Drawing::Size(300, 6);
			// 
			// SaveToolStripMenuItem
			// 
			this->SaveToolStripMenuItem->Enabled = false;
			this->SaveToolStripMenuItem->Name = L"SaveToolStripMenuItem";
			this->SaveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->SaveToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->SaveToolStripMenuItem->Text = L"Со&хранить";
			// 
			// SaveAsToolStripMenuItem
			// 
			this->SaveAsToolStripMenuItem->Enabled = false;
			this->SaveAsToolStripMenuItem->Name = L"SaveAsToolStripMenuItem";
			this->SaveAsToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->SaveAsToolStripMenuItem->Text = L"Сох&ранить как...";
			// 
			// SepToolStripMenuItem2
			// 
			this->SepToolStripMenuItem2->Name = L"SepToolStripMenuItem2";
			this->SepToolStripMenuItem2->Size = System::Drawing::Size(300, 6);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->ExitToolStripMenuItem->Text = L"&Выход";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ExitToolStripMenuItem_Click);
			// 
			// EnterToolStripMenuItem
			// 
			this->EnterToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->EnterToolStripMenuItem->Name = L"EnterToolStripMenuItem";
			this->EnterToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->EnterToolStripMenuItem->Size = System::Drawing::Size(330, 34);
			this->EnterToolStripMenuItem->Text = L"Вход в режим администратора";
			this->EnterToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->EnterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::EnterToolStripMenuItem_Click);
			// 
			// CorrectToolStripMenuItem
			// 
			this->CorrectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->AddRowToolStripMenuItem,
					this->DelRowToolStripMenuItem
			});
			this->CorrectToolStripMenuItem->Enabled = false;
			this->CorrectToolStripMenuItem->Name = L"CorrectToolStripMenuItem";
			this->CorrectToolStripMenuItem->Size = System::Drawing::Size(188, 34);
			this->CorrectToolStripMenuItem->Text = L"&Редактирование";
			// 
			// AddRowToolStripMenuItem
			// 
			this->AddRowToolStripMenuItem->Name = L"AddRowToolStripMenuItem";
			this->AddRowToolStripMenuItem->Size = System::Drawing::Size(315, 40);
			this->AddRowToolStripMenuItem->Text = L"Добавить строку";
			// 
			// DelRowToolStripMenuItem
			// 
			this->DelRowToolStripMenuItem->Name = L"DelRowToolStripMenuItem";
			this->DelRowToolStripMenuItem->Size = System::Drawing::Size(315, 40);
			this->DelRowToolStripMenuItem->Text = L"Удалить строку";
			// 
			// QueryToolStripMenuItem
			// 
			this->QueryToolStripMenuItem->Name = L"QueryToolStripMenuItem";
			this->QueryToolStripMenuItem->Size = System::Drawing::Size(99, 34);
			this->QueryToolStripMenuItem->Text = L"&Запрос";
			// 
			// GameToolStripMenuItem
			// 
			this->GameToolStripMenuItem->Name = L"GameToolStripMenuItem";
			this->GameToolStripMenuItem->Size = System::Drawing::Size(78, 34);
			this->GameToolStripMenuItem->Text = L"&Игра";
			// 
			// InfoToolStripMenuItem
			// 
			this->InfoToolStripMenuItem->Name = L"InfoToolStripMenuItem";
			this->InfoToolStripMenuItem->Size = System::Drawing::Size(111, 34);
			this->InfoToolStripMenuItem->Text = L"&Справка";
			// 
			// QuitToolStripMenuItem
			// 
			this->QuitToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->QuitToolStripMenuItem->Name = L"QuitToolStripMenuItem";
			this->QuitToolStripMenuItem->Size = System::Drawing::Size(366, 34);
			this->QuitToolStripMenuItem->Text = L"Выход из режима администратора";
			this->QuitToolStripMenuItem->Visible = false;
			this->QuitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::QuitToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel_filename });
			this->statusStrip1->Location = System::Drawing::Point(0, 914);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1500, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel_filename
			// 
			this->toolStripStatusLabel_filename->Name = L"toolStripStatusLabel_filename";
			this->toolStripStatusLabel_filename->Size = System::Drawing::Size(93, 30);
			this->toolStripStatusLabel_filename->Text = L"filename";
			this->toolStripStatusLabel_filename->Visible = false;
			this->toolStripStatusLabel_filename->TextChanged += gcnew System::EventHandler(this, &MainForm::toolStripStatusLabel_filename_TextChanged);
			this->toolStripStatusLabel_filename->VisibleChanged += gcnew System::EventHandler(this, &MainForm::toolStripStatusLabel_filename_VisibleChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Текстовые файлы(*.txt)|*.txt";
			this->openFileDialog1->Title = L"Открыть";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Bisque;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column_name,
					this->Column_ID, this->Column_number, this->Column_cost, this->Column_age
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::AppWorkspace;
			this->dataGridView1->Location = System::Drawing::Point(0, 38);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(1500, 898);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->Visible = false;
			// 
			// Column_name
			// 
			this->Column_name->HeaderText = L"Название игрушки";
			this->Column_name->MinimumWidth = 9;
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			// 
			// Column_ID
			// 
			this->Column_ID->HeaderText = L"Инвентарный номер";
			this->Column_ID->MinimumWidth = 9;
			this->Column_ID->Name = L"Column_ID";
			this->Column_ID->ReadOnly = true;
			// 
			// Column_number
			// 
			this->Column_number->HeaderText = L"Количество";
			this->Column_number->MinimumWidth = 9;
			this->Column_number->Name = L"Column_number";
			this->Column_number->ReadOnly = true;
			// 
			// Column_cost
			// 
			this->Column_cost->HeaderText = L"Цена";
			this->Column_cost->MinimumWidth = 9;
			this->Column_cost->Name = L"Column_cost";
			this->Column_cost->ReadOnly = true;
			// 
			// Column_age
			// 
			this->Column_age->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column_age->HeaderText = L"Возраст";
			this->Column_age->MinimumWidth = 9;
			this->Column_age->Name = L"Column_age";
			this->Column_age->ReadOnly = true;
			this->Column_age->Width = 130;
			// 
			// label_center
			// 
			this->label_center->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_center->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label_center->Location = System::Drawing::Point(0, 0);
			this->label_center->Name = L"label_center";
			this->label_center->Size = System::Drawing::Size(1500, 936);
			this->label_center->TabIndex = 3;
			this->label_center->Text = L"Файл не выбран";
			this->label_center->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1500, 936);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menustrip_main);
			this->Controls->Add(this->label_center);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menustrip_main;
			this->MinimumSize = System::Drawing::Size(1000, 125);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Магазин игрушек";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menustrip_main->ResumeLayout(false);
			this->menustrip_main->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Проверка является ли символ буквой
	private: Boolean isalpha_bukva(wchar_t symb) {
		Boolean result = true;

		if (symb < 'A' || symb > 'Z' && symb < 'a' || symb > 'z' && symb < L'А' && symb != L'Ё' || symb > L'я' && symb != L'ё')
			result = false;
		return result;
	}

	//Запуск программы
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Show();

		//Открытие приветственной формы
		HelloForm^ p = gcnew HelloForm();
		p->ShowDialog();

		//Выход
		if (p->DialogResult == System::Windows::Forms::DialogResult::Cancel)
			this->Close();
		//Открыть файл
		else if (p->DialogResult == System::Windows::Forms::DialogResult::No) {
			OpenToolStripMenuItem_Click(sender, e);
			if (this->toolStripStatusLabel_filename->Visible != true)
				MainForm_Load(sender, e);
		}
		//Вход в режим администратора
		else if (p->DialogResult == System::Windows::Forms::DialogResult::Yes)
			EnterToolStripMenuItem_Click(sender, e);
	}

	//Закрытие формы
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (this->toolStripStatusLabel_filename->Visible == true && this->EnterToolStripMenuItem->Visible == false) {
			e->Cancel = true;
			ExitForm^ p = gcnew ExitForm();
			p->ShowDialog();
			if (p->DialogResult == System::Windows::Forms::DialogResult::No)
				e->Cancel = false;
		}
	}

	//Закрытие формы через кнопку Выход
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	//Создание файла
	private: System::Void CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->toolStripStatusLabel_filename->Text = L"Новый файл";
			this->toolStripStatusLabel_filename->Visible = true;
		}
	}

	//Открытие файла
	private: System::Void OpenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->toolStripStatusLabel_filename->Text = openFileDialog1->FileName;
			this->toolStripStatusLabel_filename->Visible = true;
		}
	}

	//Осуществлён выбор файла
	private: System::Void toolStripStatusLabel_filename_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		//Вывод таблицы, если файл не пустой
		if (this->toolStripStatusLabel_filename->Text != L"Новый файл" || this->QuitToolStripMenuItem->Visible) {
			this->dataGridView1->Visible = true;
			this->label_center->Visible = false;

			if (this->toolStripStatusLabel_filename->Text != L"Новый файл") {
				Boolean good = true;
				dataGridView1->Rows->Clear();
				array<String^>^ lines = System::IO::File::ReadAllLines(this->toolStripStatusLabel_filename->Text, System::Text::Encoding::GetEncoding(1251));
				for each (String^ str in lines) {
					DataGridViewRow^ row = gcnew DataGridViewRow();
					row->CreateCells(dataGridView1);
					array<String^>^ splittedstr = str->Split(L';');

					if (splittedstr->Length != 5) {
						good = false;
						break;
					}
					else
					{
						for (int i = 0; i < 2; i++)
							row->Cells[i]->Value = splittedstr[i];

						//Проверка первого столбца
						for (int i = 0; i < splittedstr[0]->Length; i++)
							if (!isalpha_bukva(splittedstr[0][i]) && splittedstr[0][i] != ' ' || splittedstr[0][i] == ' ' && i == 0) {
								good = false;
								break;
							}

						if (good) {
							//Проверка второго столбца
							if (splittedstr[1]->Length != 6 || splittedstr[1][0] != splittedstr[0][0] && splittedstr[1][0] != splittedstr[0][0] - 32 && (splittedstr[1][0] != L'Ё' || splittedstr[1][0] != splittedstr[0][0] - 80) || splittedstr[1][1] != '-') {
								//good = false;
								//break;
							}

							for (int i = 0; i < 4; i++)
								if (!isdigit(splittedstr[1][2 + i])) {
									good = false;
									break;
								}

							for(int i = 0; i < dataGridView1->Rows->Count; i++)
								if (dataGridView1->Rows[i]->Cells[1] == row->Cells[1]) {
									good = false;
									break;
								}

							if (good) {
								//Проверка третьего столбца
								for (int i = 0; i < splittedstr[2]->Length; i++)
									if (!isdigit(splittedstr[2][i])) {
										good = false;
										break;
									}
								
								if (good) {
									row->Cells[2]->Value = Convert::ToInt64(splittedstr[2]);

									//Проверка четвёртого столбца
									for (int i = 0, p = 0; i < splittedstr[3]->Length; i++) {
										if (splittedstr[3][i] == ',')
											p += 1;

										if (p != 1 && !isdigit(splittedstr[3][i]) || p > 1 || p == 1 && splittedstr[3][i] == ',' && splittedstr[3]->Length - i != 2 && splittedstr[3]->Length - i != 3 && i > 0) {
											good = false;
											break;
										}
									}

									if (Convert::ToDouble(splittedstr[3]) == 0) {
										good = false;
										break;
									}

									if (good) {
										/*String^ str = Convert::ToString(Convert::ToDouble(splittedstr[3]));

										if (str->Length > 2 && str[str->Length - 2] == ',')
											str += "0";
										else if (str->Length < 3 || str[str->Length - 3] != ',')
											str += ",00";
										row->Cells[3]->Value = str;*/
										row->Cells[3]->Value = Convert::ToDouble(splittedstr[3]);

										//Проверка пятого столбца
										for (int i = 0, p = 0; i < splittedstr[4]->Length - 1; i++) {

											if (!isdigit(splittedstr[3][i])) {
												good = false;
												break;
											}
										}

										if (splittedstr[4][splittedstr[4]->Length - 1] != '+' && !isdigit(splittedstr[4][splittedstr[4]->Length - 1])) {
											good = false;
											break;
										}
										else {
											String^ age;
											if (splittedstr[4][splittedstr[4]->Length - 1] == '+')
												for (int i = 0; i < splittedstr[4]->Length - 1; i++)
													age += splittedstr[4][i];
											else
												age = splittedstr[4];
											row->Cells[4]->Value = Convert::ToInt64(age);
										}
									}
								}
							}
						}
						else
							break;
						
						dataGridView1->Rows->Add(row);
					}
				}

				if (!good)
 					this->dataGridView1->BackgroundColor = System::Drawing::Color::YellowGreen;
			}
		}
		//Файл пуст
		else {
			this->dataGridView1->Visible = false;
			this->label_center->Visible = true;
			this->label_center->Text = L"Файл пуст";
		}
	}

	private: System::Void toolStripStatusLabel_filename_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		//Файл не выбран
		if (!this->toolStripStatusLabel_filename->Visible) {
			this->label_center->Visible = true;
			this->label_center->Text = L"Файл не выбран";
		}
	}

	//Вход в режим администратора
	private: System::Void EnterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Открытие формы для ввода пароля
		AdminForm^ p = gcnew AdminForm();
		p->ShowDialog();

		//Если пароль верный
		if (p->parol) {
			this->QuitToolStripMenuItem->Visible = true;
			this->EnterToolStripMenuItem->Visible = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LavenderBlush;
			this->CreateToolStripMenuItem->Enabled = true;
			this->SaveToolStripMenuItem->Enabled = true;
			this->SaveAsToolStripMenuItem->Enabled = true;
			this->CorrectToolStripMenuItem->Enabled = true;
			this->dataGridView1->AllowUserToAddRows = true;
			this->dataGridView1->AllowUserToDeleteRows = true;
			this->dataGridView1->ReadOnly = false;
		}
	}
	
	//Выход из режима администратора
	private: System::Void QuitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ExitForm^ p = gcnew ExitForm();
		if (this->toolStripStatusLabel_filename->Visible)
			p->ShowDialog();

		if (!this->toolStripStatusLabel_filename->Visible || p->DialogResult == System::Windows::Forms::DialogResult::No) {
			this->QuitToolStripMenuItem->Visible = false;
			this->EnterToolStripMenuItem->Visible = true;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Bisque;
			this->CreateToolStripMenuItem->Enabled = false;
			this->SaveToolStripMenuItem->Enabled = false;
			this->SaveAsToolStripMenuItem->Enabled = false;
			this->CorrectToolStripMenuItem->Enabled = false;
		}
	}
};
}