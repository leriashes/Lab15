#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для HelloForm
	/// </summary>
	public ref class HelloForm : public System::Windows::Forms::Form
	{
	public:
		HelloForm(void)
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
		~HelloForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_hello;
	protected:

	private: System::Windows::Forms::Button^ button_open;
	private: System::Windows::Forms::Button^ button_create;
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
			this->label_hello = (gcnew System::Windows::Forms::Label());
			this->button_open = (gcnew System::Windows::Forms::Button());
			this->button_create = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_hello
			// 
			this->label_hello->AutoSize = true;
			this->label_hello->Location = System::Drawing::Point(8, 10);
			this->label_hello->Name = L"label_hello";
			this->label_hello->Size = System::Drawing::Size(583, 100);
			this->label_hello->TabIndex = 0;
			this->label_hello->Text = L"Добро пожаловать в программу учёта товаров \r\nдля магазина игрушек!\r\n\r\nДля начала "
				L"работы необходимо открыть или создать файл.\r\n";
			this->label_hello->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_open
			// 
			this->button_open->DialogResult = System::Windows::Forms::DialogResult::No;
			this->button_open->Location = System::Drawing::Point(45, 125);
			this->button_open->Name = L"button_open";
			this->button_open->Size = System::Drawing::Size(140, 40);
			this->button_open->TabIndex = 1;
			this->button_open->Text = L"Открыть";
			this->button_open->UseVisualStyleBackColor = true;
			// 
			// button_create
			// 
			this->button_create->DialogResult = System::Windows::Forms::DialogResult::Yes;
			this->button_create->Location = System::Drawing::Point(230, 125);
			this->button_create->Name = L"button_create";
			this->button_create->Size = System::Drawing::Size(140, 40);
			this->button_create->TabIndex = 2;
			this->button_create->Text = L"Создать";
			this->button_create->UseVisualStyleBackColor = true;
			// 
			// button_exit
			// 
			this->button_exit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button_exit->Location = System::Drawing::Point(415, 125);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(140, 40);
			this->button_exit->TabIndex = 3;
			this->button_exit->Text = L"Выйти";
			this->button_exit->UseVisualStyleBackColor = true;
			// 
			// HelloForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 186);
			this->ControlBox = false;
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_create);
			this->Controls->Add(this->button_open);
			this->Controls->Add(this->label_hello);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"HelloForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
