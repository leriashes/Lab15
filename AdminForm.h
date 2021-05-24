#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		Boolean parol;

		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_text;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button_ready;
	private: System::Windows::Forms::Label^ label1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->label_text = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_ready = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_text
			// 
			this->label_text->AutoSize = true;
			this->label_text->Location = System::Drawing::Point(12, 38);
			this->label_text->Name = L"label_text";
			this->label_text->Size = System::Drawing::Size(161, 25);
			this->label_text->TabIndex = 0;
			this->label_text->Text = L"Введите пароль";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(200, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(300, 29);
			this->textBox1->TabIndex = 1;
			this->textBox1->UseSystemPasswordChar = true;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::textBox1_MouseClick);
			// 
			// button_ready
			// 
			this->button_ready->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button_ready->Location = System::Drawing::Point(520, 30);
			this->button_ready->Name = L"button_ready";
			this->button_ready->Size = System::Drawing::Size(130, 40);
			this->button_ready->TabIndex = 2;
			this->button_ready->Text = L"Готово";
			this->button_ready->UseVisualStyleBackColor = true;
			this->button_ready->Click += gcnew System::EventHandler(this, &AdminForm::button_ready_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(257, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Неверный пароль";
			this->label1->Visible = false;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(666, 116);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_ready);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label_text);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(690, 180);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(690, 180);
			this->Name = L"AdminForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вход в режим администратора";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AdminForm::AdminForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_ready_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text == "Lera")
			parol = true;
		else
		{
			parol = false;
			this->label1->Visible = true;
			this->textBox1->Text = "";
		}
	}
	private: System::Void AdminForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = true;
		
		if (parol == true || e->CloseReason == CloseReason::UserClosing)
			e->Cancel = false;
	}
	private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label1->Visible = false;
	}
};
}
