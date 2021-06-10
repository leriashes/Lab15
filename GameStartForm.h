#pragma once
#include "GameForm.h"

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GameStartForm
	/// </summary>
	public ref class GameStartForm : public System::Windows::Forms::Form
	{
	public:
		GameStartForm(void)
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
		~GameStartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_quit;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ radioButton_capital;

	private: System::Windows::Forms::RadioButton^ radioButton_country;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_play;

	private: System::Windows::Forms::Panel^ panel2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameStartForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_quit = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton_capital = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_country = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_play = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(819, 99);
			this->label1->TabIndex = 0;
			this->label1->Text = L"СТОЛИЦЫ ГОСУДАРСТВ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_quit
			// 
			this->button_quit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button_quit->BackColor = System::Drawing::Color::White;
			this->button_quit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_quit->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.85714F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_quit->Location = System::Drawing::Point(42, 148);
			this->button_quit->Name = L"button_quit";
			this->button_quit->Size = System::Drawing::Size(342, 72);
			this->button_quit->TabIndex = 2;
			this->button_quit->Text = L"Выход из игры";
			this->button_quit->UseVisualStyleBackColor = false;
			this->button_quit->Click += gcnew System::EventHandler(this, &GameStartForm::button_quit_Click);
			// 
			// panel1
			// 
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->radioButton_capital);
			this->panel1->Controls->Add(this->radioButton_country);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(434, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(332, 173);
			this->panel1->TabIndex = 3;
			// 
			// radioButton_capital
			// 
			this->radioButton_capital->AutoSize = true;
			this->radioButton_capital->Font = (gcnew System::Drawing::Font(L"Verdana", 15.85714F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_capital->Location = System::Drawing::Point(17, 111);
			this->radioButton_capital->Name = L"radioButton_capital";
			this->radioButton_capital->Size = System::Drawing::Size(482, 49);
			this->radioButton_capital->TabIndex = 2;
			this->radioButton_capital->Text = L"Столица - Государство";
			this->radioButton_capital->UseVisualStyleBackColor = true;
			// 
			// radioButton_country
			// 
			this->radioButton_country->AutoSize = true;
			this->radioButton_country->Checked = true;
			this->radioButton_country->Font = (gcnew System::Drawing::Font(L"Verdana", 15.85714F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_country->Location = System::Drawing::Point(17, 56);
			this->radioButton_country->Name = L"radioButton_country";
			this->radioButton_country->Size = System::Drawing::Size(482, 49);
			this->radioButton_country->TabIndex = 1;
			this->radioButton_country->TabStop = true;
			this->radioButton_country->Text = L"Государство - Столица";
			this->radioButton_country->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 15.85714F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(332, 37);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Режим";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_play
			// 
			this->button_play->BackColor = System::Drawing::Color::White;
			this->button_play->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_play->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.85714F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_play->Location = System::Drawing::Point(42, 47);
			this->button_play->Name = L"button_play";
			this->button_play->Size = System::Drawing::Size(342, 72);
			this->button_play->TabIndex = 1;
			this->button_play->Text = L"Играть";
			this->button_play->UseVisualStyleBackColor = false;
			this->button_play->Click += gcnew System::EventHandler(this, &GameStartForm::button_play_Click);
			// 
			// panel2
			// 
			this->panel2->AutoSize = true;
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->button_play);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->button_quit);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 99);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(769, 258);
			this->panel2->TabIndex = 4;
			// 
			// GameStartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(819, 357);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.142858F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::DarkRed;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(843, 421);
			this->MinimumSize = System::Drawing::Size(843, 421);
			this->Name = L"GameStartForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Столицы государств";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &GameStartForm::GameStartForm_FormClosing);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Играть
	private: System::Void button_play_Click(System::Object^ sender, System::EventArgs^ e) {
		GameForm^ p = gcnew GameForm(this->radioButton_country->Checked);
		p->Show();
		this->Hide();
	}
	//Выход из игры
	private: System::Void button_quit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void GameStartForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::OpenForms["MainForm"]->WindowState = FormWindowState::Maximized;
	}
};
}
