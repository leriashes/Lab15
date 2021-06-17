#pragma once
#define IDR_TXT1                        102
#include <windows.h>
#include <tchar.h>
#include <locale.h>
#include <string>
#include <iostream>

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Reflection;
	using namespace System::IO;
	using namespace System::Resources;

	/// <summary>
	/// Сводка для GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		GameForm(Boolean mode)
		{
			InitializeComponent();
			this->first_mode = mode;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_country;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ MainMenuToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ QuitToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox_capital;
	private: System::Windows::Forms::Label^ label_message;




	private: System::Windows::Forms::Label^ label_country;
	private: System::Windows::Forms::Label^ label_capital;
	private: System::Windows::Forms::Label^ label_score;
	private: System::Windows::Forms::Label^ label_mistakes;
	private: System::Windows::Forms::Button^ button_OK;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_country = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->QuitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox_capital = (gcnew System::Windows::Forms::TextBox());
			this->label_message = (gcnew System::Windows::Forms::Label());
			this->label_country = (gcnew System::Windows::Forms::Label());
			this->label_capital = (gcnew System::Windows::Forms::Label());
			this->label_score = (gcnew System::Windows::Forms::Label());
			this->label_mistakes = (gcnew System::Windows::Forms::Label());
			this->button_OK = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1517, 137);
			this->label1->TabIndex = 1;
			this->label1->Text = L"СТОЛИЦЫ ГОСУДАРСТВ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(214, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(396, 101);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Государство";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(918, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(299, 101);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Столица";
			// 
			// textBox_country
			// 
			this->textBox_country->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_country->Location = System::Drawing::Point(253, 406);
			this->textBox_country->Name = L"textBox_country";
			this->textBox_country->Size = System::Drawing::Size(300, 39);
			this->textBox_country->TabIndex = 4;
			this->textBox_country->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &GameForm::textBox_country_KeyPress);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::MidnightBlue;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->QuitToolStripMenuItem,
					this->MainMenuToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 137);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1517, 38);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// QuitToolStripMenuItem
			// 
			this->QuitToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->QuitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->QuitToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->QuitToolStripMenuItem->Name = L"QuitToolStripMenuItem";
			this->QuitToolStripMenuItem->Size = System::Drawing::Size(186, 34);
			this->QuitToolStripMenuItem->Text = L"Выход из игры";
			this->QuitToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::QuitToolStripMenuItem_Click);
			// 
			// MainMenuToolStripMenuItem
			// 
			this->MainMenuToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->MainMenuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainMenuToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->MainMenuToolStripMenuItem->Name = L"MainMenuToolStripMenuItem";
			this->MainMenuToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->MainMenuToolStripMenuItem->Size = System::Drawing::Size(179, 34);
			this->MainMenuToolStripMenuItem->Text = L"Главное меню";
			this->MainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::MainMenuToolStripMenuItem_Click);
			// 
			// textBox_capital
			// 
			this->textBox_capital->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_capital->Location = System::Drawing::Point(926, 406);
			this->textBox_capital->Name = L"textBox_capital";
			this->textBox_capital->Size = System::Drawing::Size(300, 39);
			this->textBox_capital->TabIndex = 6;
			this->textBox_capital->Visible = false;
			this->textBox_capital->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &GameForm::textBox_capital_KeyPress);
			// 
			// label_message
			// 
			this->label_message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_message->Location = System::Drawing::Point(12, 597);
			this->label_message->Name = L"label_message";
			this->label_message->Size = System::Drawing::Size(1440, 40);
			this->label_message->TabIndex = 7;
			this->label_message->Text = L"label4";
			this->label_message->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_message->Visible = false;
			// 
			// label_country
			// 
			this->label_country->BackColor = System::Drawing::Color::Honeydew;
			this->label_country->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_country->Location = System::Drawing::Point(81, 409);
			this->label_country->Name = L"label_country";
			this->label_country->Size = System::Drawing::Size(650, 40);
			this->label_country->TabIndex = 8;
			this->label_country->Text = L"label_country";
			this->label_country->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_country->Visible = false;
			// 
			// label_capital
			// 
			this->label_capital->BackColor = System::Drawing::Color::AliceBlue;
			this->label_capital->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_capital->Location = System::Drawing::Point(737, 409);
			this->label_capital->Name = L"label_capital";
			this->label_capital->Size = System::Drawing::Size(650, 40);
			this->label_capital->TabIndex = 9;
			this->label_capital->Text = L"label_capital";
			this->label_capital->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_score
			// 
			this->label_score->AutoSize = true;
			this->label_score->BackColor = System::Drawing::Color::MidnightBlue;
			this->label_score->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->label_score->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_score->Location = System::Drawing::Point(0, 145);
			this->label_score->Name = L"label_score";
			this->label_score->Size = System::Drawing::Size(84, 30);
			this->label_score->TabIndex = 10;
			this->label_score->Text = L"Счёт: 0";
			this->label_score->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label_mistakes
			// 
			this->label_mistakes->AutoSize = true;
			this->label_mistakes->BackColor = System::Drawing::Color::MidnightBlue;
			this->label_mistakes->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->label_mistakes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_mistakes->Location = System::Drawing::Point(107, 145);
			this->label_mistakes->Name = L"label_mistakes";
			this->label_mistakes->Size = System::Drawing::Size(122, 30);
			this->label_mistakes->TabIndex = 11;
			this->label_mistakes->Text = L"Ошибки: 0";
			this->label_mistakes->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// button_OK
			// 
			this->button_OK->BackColor = System::Drawing::Color::White;
			this->button_OK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_OK->Font = (gcnew System::Drawing::Font(L"Mistral", 28));
			this->button_OK->Location = System::Drawing::Point(650, 476);
			this->button_OK->Name = L"button_OK";
			this->button_OK->Size = System::Drawing::Size(162, 87);
			this->button_OK->TabIndex = 12;
			this->button_OK->Text = L"OK";
			this->button_OK->UseVisualStyleBackColor = false;
			this->button_OK->Click += gcnew System::EventHandler(this, &GameForm::button_OK_Click);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1517, 686);
			this->Controls->Add(this->button_OK);
			this->Controls->Add(this->label_mistakes);
			this->Controls->Add(this->label_score);
			this->Controls->Add(this->label_capital);
			this->Controls->Add(this->label_country);
			this->Controls->Add(this->label_message);
			this->Controls->Add(this->textBox_capital);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->textBox_country);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(1190, 508);
			this->Name = L"GameForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Столицы государств";
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: array<String^>^ capitals = gcnew array<String^>(192);
			array<String^>^ countries = gcnew array<String^>(192);
			array<Boolean>^ flag = gcnew array<Boolean>(192);
			Int32 mistakes = 0;
			Int32 score = 0;
			Int32 index;
			Boolean first_mode;

	//Генерация слова
	private: Void gen_word() {
		do
		{
			this->index = rand() % 192;
		} while (flag[this->index] == true);
		flag[this->index] = true;

		if (this->first_mode)
			this->label_country->Text = this->countries[this->index];
		else
			this->label_capital->Text = this->capitals[this->index];
	}

	//Загрузка формы
	private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (this->first_mode) {
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->menuStrip1->BackColor = System::Drawing::Color::DarkGreen;
			this->label_score->BackColor = System::Drawing::Color::DarkGreen;
			this->label_mistakes->BackColor = System::Drawing::Color::DarkGreen;
			this->label_message->BackColor = System::Drawing::Color::Honeydew;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->label_capital->Visible = false;
			this->label_country->Visible = true;
			this->textBox_capital->Visible = true;
			this->textBox_country->Visible = false;
		}

		for (int i = 0; i < 192; i++)
			this->flag[i] = false;
		this->mistakes = 0;
		this->score = 0;

		HRSRC hRes = FindResource(GetModuleHandle(NULL), MAKEINTRESOURCE(IDR_TXT1), _T("TXT"));
		DWORD dwSize = SizeofResource(NULL, hRes);
		HGLOBAL hResMem = LoadResource(GetModuleHandle(NULL), hRes);
		char* data = (char*)LockResource(hResMem);
		srand(time(NULL));

		std::string str(data, dwSize);
		std::wstring wstr(dwSize, 0);
		MultiByteToWideChar(CP_UTF8, 0, &str[0], dwSize, &wstr[0], dwSize);

		String^ capital, ^country;
		Int32 i = 0, j = 0;
		while (wstr[i] != '\0') {
			country = "";
			while (wstr[i] != ' ' || wstr[i + 1] != '-') {
				country += wstr[i];
				i++;
			}
			i += 3;
			capital = "";
			while (wstr[i] != '\r' && wstr[i] != '\0') {
				capital += wstr[i];
				i++;
			}
			i += 2;
			this->countries[j] = country;
			this->capitals[j] = capital;
			j++;
		}

		gen_word();
	}

	//Выход из игры
	private: System::Void QuitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		Application::OpenForms["MainForm"]->WindowState = FormWindowState::Maximized;
	}

	//Выход в главное меню игры
	private: System::Void MainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::OpenForms["GameStartForm"]->Show();
		this->Close();
	}
	
	//Нажата клавиша Enter
	private: System::Void textBox_country_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		textBox_capital_KeyPress(sender, e);
	}
	private: System::Void textBox_capital_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == '\r')
			button_OK_Click(sender, e);
	}
	
	//Нажата кнопка ОК
	private: System::Void button_OK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label_message->Visible = true;

		//Ответ верный
		if (this->first_mode && this->textBox_capital->Text == this->capitals[this->index] || !this->first_mode && this->textBox_country->Text == this->countries[this->index]) {
			this->score += 1;
			this->label_message->Text = L"Верно!";
			this->label_message->ForeColor = System::Drawing::Color::DarkGreen;
		}

		//Ответ неверный
		else {
			this->mistakes += 1;
			String^ word;
			if (this->first_mode)
				word = this->capitals[this->index];
			else
				word = this->countries[this->index];
			this->label_message->Text = "Ошибка! Правильный ответ: " + word;
			this->label_message->ForeColor = System::Drawing::Color::DarkRed;
		}

		if (this->first_mode)
			this->textBox_capital->Text = "";
		else
			this->textBox_country->Text = "";

		this->label_score->Text = "Счёт: " + Convert::ToString(this->score);
		this->label_mistakes->Text = "Ошибки: " + Convert::ToString(this->mistakes);

		if (this->mistakes != 3 && this->score + this->mistakes != 192)
			gen_word();

		//Конец игры
		else {
			if (this->mistakes == 3)
				MessageBox::Show(L"Конец игры! Вы допустили максимальное количество ошибок.", "", MessageBoxButtons::OK);
			else
				MessageBox::Show(L"Конец игры! Вы знаете столицы всех государств!", "", MessageBoxButtons::OK);
			MainMenuToolStripMenuItem_Click(sender, e);
		}
	}
};
}
