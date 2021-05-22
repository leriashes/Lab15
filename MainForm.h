#pragma once
#include "ExitForm.h"

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
			this->menustrip_main = (gcnew System::Windows::Forms::MenuStrip());
			this->FileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CreateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EnterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menustrip_main->SuspendLayout();
			this->SuspendLayout();
			// 
			// menustrip_main
			// 
			this->menustrip_main->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menustrip_main->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menustrip_main->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menustrip_main->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->FileToolStripMenuItem,
					this->EnterToolStripMenuItem
			});
			this->menustrip_main->Location = System::Drawing::Point(0, 0);
			this->menustrip_main->Name = L"menustrip_main";
			this->menustrip_main->Size = System::Drawing::Size(1295, 38);
			this->menustrip_main->TabIndex = 0;
			this->menustrip_main->Text = L"menuStrip1";
			// 
			// FileToolStripMenuItem
			// 
			this->FileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->CreateToolStripMenuItem,
					this->ExitToolStripMenuItem
			});
			this->FileToolStripMenuItem->Name = L"FileToolStripMenuItem";
			this->FileToolStripMenuItem->Size = System::Drawing::Size(80, 34);
			this->FileToolStripMenuItem->Text = L"Файл";
			// 
			// CreateToolStripMenuItem
			// 
			this->CreateToolStripMenuItem->Name = L"CreateToolStripMenuItem";
			this->CreateToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->CreateToolStripMenuItem->Size = System::Drawing::Size(315, 40);
			this->CreateToolStripMenuItem->Text = L"Создать";
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(315, 40);
			this->ExitToolStripMenuItem->Text = L"Выход";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ExitToolStripMenuItem_Click);
			// 
			// EnterToolStripMenuItem
			// 
			this->EnterToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->EnterToolStripMenuItem->Name = L"EnterToolStripMenuItem";
			this->EnterToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->EnterToolStripMenuItem->Size = System::Drawing::Size(76, 34);
			this->EnterToolStripMenuItem->Text = L"Вход";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1295, 770);
			this->Controls->Add(this->menustrip_main);
			this->MainMenuStrip = this->menustrip_main;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Магазин игрушек";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->menustrip_main->ResumeLayout(false);
			this->menustrip_main->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = true;
		ExitForm^ p = gcnew ExitForm();
		p->ShowDialog();
		if (p->DialogResult == System::Windows::Forms::DialogResult::No)
			e->Cancel = false;
		else
			p->Close();
	}
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
