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
	private: System::Windows::Forms::Button^ button_open;

	protected:


	private: System::Windows::Forms::Button^ button_create;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelloForm::typeid));
			this->label_hello = (gcnew System::Windows::Forms::Label());
			this->button_open = (gcnew System::Windows::Forms::Button());
			this->button_create = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_hello
			// 
			this->label_hello->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.142858F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_hello->Location = System::Drawing::Point(0, 0);
			this->label_hello->Name = L"label_hello";
			this->label_hello->Size = System::Drawing::Size(431, 177);
			this->label_hello->TabIndex = 0;
			this->label_hello->Text = L"Добро пожаловать в программу учёта товаров для магазина игрушек!\r\n";
			this->label_hello->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_open
			// 
			this->button_open->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_open->DialogResult = System::Windows::Forms::DialogResult::No;
			this->button_open->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_open->Location = System::Drawing::Point(70, 180);
			this->button_open->Name = L"button_open";
			this->button_open->Size = System::Drawing::Size(300, 40);
			this->button_open->TabIndex = 1;
			this->button_open->Text = L"Открыть файл";
			this->button_open->UseVisualStyleBackColor = false;
			// 
			// button_create
			// 
			this->button_create->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_create->DialogResult = System::Windows::Forms::DialogResult::Yes;
			this->button_create->Location = System::Drawing::Point(70, 250);
			this->button_create->Name = L"button_create";
			this->button_create->Size = System::Drawing::Size(300, 80);
			this->button_create->TabIndex = 2;
			this->button_create->Text = L"Вход в режим администратора";
			this->button_create->UseVisualStyleBackColor = false;
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_exit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button_exit->Location = System::Drawing::Point(70, 360);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(301, 40);
			this->button_exit->TabIndex = 3;
			this->button_exit->Text = L"Выход из программы";
			this->button_exit->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(330, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 450);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// HelloForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(745, 515);
			this->ControlBox = false;
			this->Controls->Add(this->label_hello);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_create);
			this->Controls->Add(this->button_open);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(450, 480);
			this->Name = L"HelloForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
