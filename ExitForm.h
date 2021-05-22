#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ExitForm
	/// </summary>
	public ref class ExitForm : public System::Windows::Forms::Form
	{
	public:
		ExitForm(void)
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
		~ExitForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_exit;
	private: System::Windows::Forms::Button^ button_cancel;
	private: System::Windows::Forms::Button^ button_save_exit;
	private: System::Windows::Forms::Button^ button_exit;
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
			this->label_exit = (gcnew System::Windows::Forms::Label());
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->button_save_exit = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_exit
			// 
			this->label_exit->AutoSize = true;
			this->label_exit->Location = System::Drawing::Point(75, 20);
			this->label_exit->Name = L"label_exit";
			this->label_exit->Size = System::Drawing::Size(450, 50);
			this->label_exit->TabIndex = 0;
			this->label_exit->Text = L"Вы уверены, что хотите выйти\?\r\nВсе несохранённые изменения будут утеряны.";
			this->label_exit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_cancel
			// 
			this->button_cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button_cancel->Location = System::Drawing::Point(30, 100);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(120, 40);
			this->button_cancel->TabIndex = 1;
			this->button_cancel->Text = L"Отмена";
			this->button_cancel->UseVisualStyleBackColor = true;
			// 
			// button_save_exit
			// 
			this->button_save_exit->DialogResult = System::Windows::Forms::DialogResult::Yes;
			this->button_save_exit->Location = System::Drawing::Point(175, 100);
			this->button_save_exit->Name = L"button_save_exit";
			this->button_save_exit->Size = System::Drawing::Size(250, 40);
			this->button_save_exit->TabIndex = 2;
			this->button_save_exit->Text = L"Сохранить и выйти";
			this->button_save_exit->UseVisualStyleBackColor = true;
			// 
			// button_exit
			// 
			this->button_exit->DialogResult = System::Windows::Forms::DialogResult::No;
			this->button_exit->Location = System::Drawing::Point(450, 100);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(120, 40);
			this->button_exit->TabIndex = 3;
			this->button_exit->Text = L"Выйти";
			this->button_exit->UseVisualStyleBackColor = true;
			// 
			// ExitForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 166);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_save_exit);
			this->Controls->Add(this->button_cancel);
			this->Controls->Add(this->label_exit);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(624, 230);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(624, 230);
			this->Name = L"ExitForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выход";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
