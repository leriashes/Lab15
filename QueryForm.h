#pragma once

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для QueryForm
	/// </summary>
	public ref class QueryForm : public System::Windows::Forms::Form
	{
	public:
		QueryForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		QueryForm(String^ file_name)
		{
			this->filename = file_name;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~QueryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel_filename;
	private: System::Windows::Forms::Panel^ panel_big;
	private: System::Windows::Forms::RadioButton^ radioButton_age_equal;


	private: System::Windows::Forms::RadioButton^ radioButton_age_less;

	private: System::Windows::Forms::RadioButton^ radioButton_age_leeq;

	private: System::Windows::Forms::RadioButton^ radioButton_age_more;

	private: System::Windows::Forms::RadioButton^ radioButton_age_moeq;

	private: System::Windows::Forms::RadioButton^ radioButton_cost_equal;

	private: System::Windows::Forms::RadioButton^ radioButton_cost_less;

	private: System::Windows::Forms::RadioButton^ radioButton_cost_leeq;

	private: System::Windows::Forms::RadioButton^ radioButton_cost_more;

	private: System::Windows::Forms::RadioButton^ radioButton_cost_moeq;

	private: System::Windows::Forms::RadioButton^ radioButton_number_equal;


	private: System::Windows::Forms::RadioButton^ radioButton_number_less;

	private: System::Windows::Forms::RadioButton^ radioButton_number_leeq;
	private: System::Windows::Forms::RadioButton^ radioButton_number_more;




	private: System::Windows::Forms::RadioButton^ radioButton_number_moeq;


	private: System::Windows::Forms::RadioButton^ radioButton_id_contains;


	private: System::Windows::Forms::RadioButton^ radioButton_id_matches;


	private: System::Windows::Forms::RadioButton^ radioButton_name_contains;

	private: System::Windows::Forms::RadioButton^ radioButton_name_matches;
	private: System::Windows::Forms::CheckBox^ checkBox_age;


	private: System::Windows::Forms::CheckBox^ checkBox_cost;

	private: System::Windows::Forms::CheckBox^ checkBox_number;

	private: System::Windows::Forms::CheckBox^ checkBox_id;

	private: System::Windows::Forms::CheckBox^ checkBox_name;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button_search;

	private: System::Windows::Forms::Label^ label_criteria;
	private: System::Windows::Forms::Label^ label_result;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel_name;
	private: System::Windows::Forms::Label^ label_nothing;




	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::TextBox^ textBox_id;
	private: System::Windows::Forms::TextBox^ textBox_cost;


	private: System::Windows::Forms::TextBox^ textBox_number;
private: System::Windows::Forms::TextBox^ textBox_age;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_ID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_number;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_cost;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_age;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(QueryForm::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel_filename = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->panel_big = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox_cost = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_cost = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton_cost_moeq = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_cost_more = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_cost_leeq = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_cost_less = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_cost_equal = (gcnew System::Windows::Forms::RadioButton());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox_number = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_number = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton_number_moeq = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_number_more = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_number_leeq = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_number_less = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_number_equal = (gcnew System::Windows::Forms::RadioButton());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_id = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton_id_matches = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_id_contains = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox_age = (gcnew System::Windows::Forms::TextBox());
			this->radioButton_age_equal = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox_age = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton_age_more = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_age_leeq = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_age_less = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_age_moeq = (gcnew System::Windows::Forms::RadioButton());
			this->panel_name = (gcnew System::Windows::Forms::Panel());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_name = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton_name_matches = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_name_contains = (gcnew System::Windows::Forms::RadioButton());
			this->label_criteria = (gcnew System::Windows::Forms::Label());
			this->button_search = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->label_nothing = (gcnew System::Windows::Forms::Label());
			this->statusStrip1->SuspendLayout();
			this->panel_big->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel_name->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel_filename });
			this->statusStrip1->Location = System::Drawing::Point(450, 1397);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(956, 39);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel_filename
			// 
			this->toolStripStatusLabel_filename->Name = L"toolStripStatusLabel_filename";
			this->toolStripStatusLabel_filename->Size = System::Drawing::Size(93, 30);
			this->toolStripStatusLabel_filename->Text = L"filename";
			// 
			// panel_big
			// 
			this->panel_big->BackColor = System::Drawing::Color::LightYellow;
			this->panel_big->Controls->Add(this->panel6);
			this->panel_big->Controls->Add(this->panel5);
			this->panel_big->Controls->Add(this->panel4);
			this->panel_big->Controls->Add(this->panel2);
			this->panel_big->Controls->Add(this->panel_name);
			this->panel_big->Controls->Add(this->label_criteria);
			this->panel_big->Controls->Add(this->button_search);
			this->panel_big->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_big->Location = System::Drawing::Point(0, 0);
			this->panel_big->Name = L"panel_big";
			this->panel_big->Size = System::Drawing::Size(450, 1436);
			this->panel_big->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->panel6->Controls->Add(this->textBox_cost);
			this->panel6->Controls->Add(this->checkBox_cost);
			this->panel6->Controls->Add(this->radioButton_cost_moeq);
			this->panel6->Controls->Add(this->radioButton_cost_more);
			this->panel6->Controls->Add(this->radioButton_cost_leeq);
			this->panel6->Controls->Add(this->radioButton_cost_less);
			this->panel6->Controls->Add(this->radioButton_cost_equal);
			this->panel6->Location = System::Drawing::Point(232, 427);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(205, 274);
			this->panel6->TabIndex = 8;
			// 
			// textBox_cost
			// 
			this->textBox_cost->Enabled = false;
			this->textBox_cost->Location = System::Drawing::Point(42, 233);
			this->textBox_cost->Name = L"textBox_cost";
			this->textBox_cost->Size = System::Drawing::Size(147, 29);
			this->textBox_cost->TabIndex = 14;
			// 
			// checkBox_cost
			// 
			this->checkBox_cost->AutoSize = true;
			this->checkBox_cost->Location = System::Drawing::Point(12, 15);
			this->checkBox_cost->Name = L"checkBox_cost";
			this->checkBox_cost->Size = System::Drawing::Size(84, 29);
			this->checkBox_cost->TabIndex = 3;
			this->checkBox_cost->Text = L"Цена";
			this->checkBox_cost->UseVisualStyleBackColor = true;
			this->checkBox_cost->CheckedChanged += gcnew System::EventHandler(this, &QueryForm::checkBox_cost_CheckedChanged);
			// 
			// radioButton_cost_moeq
			// 
			this->radioButton_cost_moeq->AutoSize = true;
			this->radioButton_cost_moeq->Checked = true;
			this->radioButton_cost_moeq->Enabled = false;
			this->radioButton_cost_moeq->Location = System::Drawing::Point(42, 55);
			this->radioButton_cost_moeq->Name = L"radioButton_cost_moeq";
			this->radioButton_cost_moeq->Size = System::Drawing::Size(61, 29);
			this->radioButton_cost_moeq->TabIndex = 14;
			this->radioButton_cost_moeq->TabStop = true;
			this->radioButton_cost_moeq->Text = L">=";
			this->radioButton_cost_moeq->UseVisualStyleBackColor = true;
			// 
			// radioButton_cost_more
			// 
			this->radioButton_cost_more->AutoSize = true;
			this->radioButton_cost_more->Enabled = false;
			this->radioButton_cost_more->Location = System::Drawing::Point(42, 91);
			this->radioButton_cost_more->Name = L"radioButton_cost_more";
			this->radioButton_cost_more->Size = System::Drawing::Size(49, 29);
			this->radioButton_cost_more->TabIndex = 15;
			this->radioButton_cost_more->Text = L">";
			this->radioButton_cost_more->UseVisualStyleBackColor = true;
			// 
			// radioButton_cost_leeq
			// 
			this->radioButton_cost_leeq->AutoSize = true;
			this->radioButton_cost_leeq->Enabled = false;
			this->radioButton_cost_leeq->Location = System::Drawing::Point(42, 127);
			this->radioButton_cost_leeq->Name = L"radioButton_cost_leeq";
			this->radioButton_cost_leeq->Size = System::Drawing::Size(61, 29);
			this->radioButton_cost_leeq->TabIndex = 16;
			this->radioButton_cost_leeq->Text = L"<=";
			this->radioButton_cost_leeq->UseVisualStyleBackColor = true;
			// 
			// radioButton_cost_less
			// 
			this->radioButton_cost_less->AutoSize = true;
			this->radioButton_cost_less->Enabled = false;
			this->radioButton_cost_less->Location = System::Drawing::Point(42, 163);
			this->radioButton_cost_less->Name = L"radioButton_cost_less";
			this->radioButton_cost_less->Size = System::Drawing::Size(49, 29);
			this->radioButton_cost_less->TabIndex = 17;
			this->radioButton_cost_less->Text = L"<";
			this->radioButton_cost_less->UseVisualStyleBackColor = true;
			// 
			// radioButton_cost_equal
			// 
			this->radioButton_cost_equal->AutoSize = true;
			this->radioButton_cost_equal->Enabled = false;
			this->radioButton_cost_equal->Location = System::Drawing::Point(42, 199);
			this->radioButton_cost_equal->Name = L"radioButton_cost_equal";
			this->radioButton_cost_equal->Size = System::Drawing::Size(49, 29);
			this->radioButton_cost_equal->TabIndex = 18;
			this->radioButton_cost_equal->Text = L"=";
			this->radioButton_cost_equal->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->panel5->Controls->Add(this->textBox_number);
			this->panel5->Controls->Add(this->checkBox_number);
			this->panel5->Controls->Add(this->radioButton_number_moeq);
			this->panel5->Controls->Add(this->radioButton_number_more);
			this->panel5->Controls->Add(this->radioButton_number_leeq);
			this->panel5->Controls->Add(this->radioButton_number_less);
			this->panel5->Controls->Add(this->radioButton_number_equal);
			this->panel5->Location = System::Drawing::Point(12, 427);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(205, 274);
			this->panel5->TabIndex = 9;
			// 
			// textBox_number
			// 
			this->textBox_number->Enabled = false;
			this->textBox_number->Location = System::Drawing::Point(37, 233);
			this->textBox_number->Name = L"textBox_number";
			this->textBox_number->Size = System::Drawing::Size(150, 29);
			this->textBox_number->TabIndex = 9;
			// 
			// checkBox_number
			// 
			this->checkBox_number->AutoSize = true;
			this->checkBox_number->Location = System::Drawing::Point(12, 15);
			this->checkBox_number->Name = L"checkBox_number";
			this->checkBox_number->Size = System::Drawing::Size(149, 29);
			this->checkBox_number->TabIndex = 2;
			this->checkBox_number->Text = L"Количество";
			this->checkBox_number->UseVisualStyleBackColor = true;
			this->checkBox_number->CheckedChanged += gcnew System::EventHandler(this, &QueryForm::checkBox_number_CheckedChanged);
			// 
			// radioButton_number_moeq
			// 
			this->radioButton_number_moeq->AutoSize = true;
			this->radioButton_number_moeq->Checked = true;
			this->radioButton_number_moeq->Enabled = false;
			this->radioButton_number_moeq->Location = System::Drawing::Point(43, 55);
			this->radioButton_number_moeq->Name = L"radioButton_number_moeq";
			this->radioButton_number_moeq->Size = System::Drawing::Size(61, 29);
			this->radioButton_number_moeq->TabIndex = 9;
			this->radioButton_number_moeq->TabStop = true;
			this->radioButton_number_moeq->Text = L">=";
			this->radioButton_number_moeq->UseVisualStyleBackColor = true;
			// 
			// radioButton_number_more
			// 
			this->radioButton_number_more->AutoSize = true;
			this->radioButton_number_more->Enabled = false;
			this->radioButton_number_more->Location = System::Drawing::Point(43, 91);
			this->radioButton_number_more->Name = L"radioButton_number_more";
			this->radioButton_number_more->Size = System::Drawing::Size(49, 29);
			this->radioButton_number_more->TabIndex = 10;
			this->radioButton_number_more->Text = L">";
			this->radioButton_number_more->UseVisualStyleBackColor = true;
			// 
			// radioButton_number_leeq
			// 
			this->radioButton_number_leeq->AutoSize = true;
			this->radioButton_number_leeq->Enabled = false;
			this->radioButton_number_leeq->Location = System::Drawing::Point(43, 127);
			this->radioButton_number_leeq->Name = L"radioButton_number_leeq";
			this->radioButton_number_leeq->Size = System::Drawing::Size(61, 29);
			this->radioButton_number_leeq->TabIndex = 11;
			this->radioButton_number_leeq->Text = L"<=";
			this->radioButton_number_leeq->UseVisualStyleBackColor = true;
			// 
			// radioButton_number_less
			// 
			this->radioButton_number_less->AutoSize = true;
			this->radioButton_number_less->Enabled = false;
			this->radioButton_number_less->Location = System::Drawing::Point(43, 163);
			this->radioButton_number_less->Name = L"radioButton_number_less";
			this->radioButton_number_less->Size = System::Drawing::Size(49, 29);
			this->radioButton_number_less->TabIndex = 12;
			this->radioButton_number_less->Text = L"<";
			this->radioButton_number_less->UseVisualStyleBackColor = true;
			// 
			// radioButton_number_equal
			// 
			this->radioButton_number_equal->AutoSize = true;
			this->radioButton_number_equal->Enabled = false;
			this->radioButton_number_equal->Location = System::Drawing::Point(43, 199);
			this->radioButton_number_equal->Name = L"radioButton_number_equal";
			this->radioButton_number_equal->Size = System::Drawing::Size(49, 29);
			this->radioButton_number_equal->TabIndex = 13;
			this->radioButton_number_equal->Text = L"=";
			this->radioButton_number_equal->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->panel4->Controls->Add(this->textBox_id);
			this->panel4->Controls->Add(this->checkBox_id);
			this->panel4->Controls->Add(this->radioButton_id_matches);
			this->panel4->Controls->Add(this->radioButton_id_contains);
			this->panel4->Location = System::Drawing::Point(12, 245);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(425, 162);
			this->panel4->TabIndex = 7;
			// 
			// textBox_id
			// 
			this->textBox_id->Enabled = false;
			this->textBox_id->Location = System::Drawing::Point(37, 120);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(372, 29);
			this->textBox_id->TabIndex = 8;
			// 
			// checkBox_id
			// 
			this->checkBox_id->AutoSize = true;
			this->checkBox_id->Location = System::Drawing::Point(12, 15);
			this->checkBox_id->Name = L"checkBox_id";
			this->checkBox_id->Size = System::Drawing::Size(230, 29);
			this->checkBox_id->TabIndex = 1;
			this->checkBox_id->Text = L"Инвентарный номер";
			this->checkBox_id->UseVisualStyleBackColor = true;
			this->checkBox_id->CheckedChanged += gcnew System::EventHandler(this, &QueryForm::checkBox_id_CheckedChanged);
			// 
			// radioButton_id_matches
			// 
			this->radioButton_id_matches->AutoSize = true;
			this->radioButton_id_matches->Checked = true;
			this->radioButton_id_matches->Enabled = false;
			this->radioButton_id_matches->Location = System::Drawing::Point(37, 49);
			this->radioButton_id_matches->Name = L"radioButton_id_matches";
			this->radioButton_id_matches->Size = System::Drawing::Size(149, 29);
			this->radioButton_id_matches->TabIndex = 7;
			this->radioButton_id_matches->TabStop = true;
			this->radioButton_id_matches->Text = L"совпадает с";
			this->radioButton_id_matches->UseVisualStyleBackColor = true;
			// 
			// radioButton_id_contains
			// 
			this->radioButton_id_contains->AutoSize = true;
			this->radioButton_id_contains->Enabled = false;
			this->radioButton_id_contains->Location = System::Drawing::Point(37, 85);
			this->radioButton_id_contains->Name = L"radioButton_id_contains";
			this->radioButton_id_contains->Size = System::Drawing::Size(132, 29);
			this->radioButton_id_contains->TabIndex = 8;
			this->radioButton_id_contains->Text = L"содержит";
			this->radioButton_id_contains->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->panel2->Controls->Add(this->textBox_age);
			this->panel2->Controls->Add(this->radioButton_age_equal);
			this->panel2->Controls->Add(this->checkBox_age);
			this->panel2->Controls->Add(this->radioButton_age_more);
			this->panel2->Controls->Add(this->radioButton_age_leeq);
			this->panel2->Controls->Add(this->radioButton_age_less);
			this->panel2->Controls->Add(this->radioButton_age_moeq);
			this->panel2->Location = System::Drawing::Point(12, 721);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(425, 276);
			this->panel2->TabIndex = 3;
			// 
			// textBox_age
			// 
			this->textBox_age->Enabled = false;
			this->textBox_age->Location = System::Drawing::Point(38, 231);
			this->textBox_age->Name = L"textBox_age";
			this->textBox_age->Size = System::Drawing::Size(371, 29);
			this->textBox_age->TabIndex = 8;
			// 
			// radioButton_age_equal
			// 
			this->radioButton_age_equal->AutoSize = true;
			this->radioButton_age_equal->Enabled = false;
			this->radioButton_age_equal->Location = System::Drawing::Point(43, 193);
			this->radioButton_age_equal->Name = L"radioButton_age_equal";
			this->radioButton_age_equal->Size = System::Drawing::Size(49, 29);
			this->radioButton_age_equal->TabIndex = 23;
			this->radioButton_age_equal->Text = L"=";
			this->radioButton_age_equal->UseVisualStyleBackColor = true;
			// 
			// checkBox_age
			// 
			this->checkBox_age->AutoSize = true;
			this->checkBox_age->Location = System::Drawing::Point(12, 15);
			this->checkBox_age->Name = L"checkBox_age";
			this->checkBox_age->Size = System::Drawing::Size(115, 29);
			this->checkBox_age->TabIndex = 4;
			this->checkBox_age->Text = L"Возраст";
			this->checkBox_age->UseVisualStyleBackColor = true;
			this->checkBox_age->CheckedChanged += gcnew System::EventHandler(this, &QueryForm::checkBox_age_CheckedChanged);
			// 
			// radioButton_age_more
			// 
			this->radioButton_age_more->AutoSize = true;
			this->radioButton_age_more->Enabled = false;
			this->radioButton_age_more->Location = System::Drawing::Point(43, 88);
			this->radioButton_age_more->Name = L"radioButton_age_more";
			this->radioButton_age_more->Size = System::Drawing::Size(49, 29);
			this->radioButton_age_more->TabIndex = 20;
			this->radioButton_age_more->Text = L">";
			this->radioButton_age_more->UseVisualStyleBackColor = true;
			// 
			// radioButton_age_leeq
			// 
			this->radioButton_age_leeq->AutoSize = true;
			this->radioButton_age_leeq->Enabled = false;
			this->radioButton_age_leeq->Location = System::Drawing::Point(43, 123);
			this->radioButton_age_leeq->Name = L"radioButton_age_leeq";
			this->radioButton_age_leeq->Size = System::Drawing::Size(61, 29);
			this->radioButton_age_leeq->TabIndex = 21;
			this->radioButton_age_leeq->Text = L"<=";
			this->radioButton_age_leeq->UseVisualStyleBackColor = true;
			// 
			// radioButton_age_less
			// 
			this->radioButton_age_less->AutoSize = true;
			this->radioButton_age_less->Enabled = false;
			this->radioButton_age_less->Location = System::Drawing::Point(43, 158);
			this->radioButton_age_less->Name = L"radioButton_age_less";
			this->radioButton_age_less->Size = System::Drawing::Size(49, 29);
			this->radioButton_age_less->TabIndex = 22;
			this->radioButton_age_less->Text = L"<";
			this->radioButton_age_less->UseVisualStyleBackColor = true;
			// 
			// radioButton_age_moeq
			// 
			this->radioButton_age_moeq->AutoSize = true;
			this->radioButton_age_moeq->Checked = true;
			this->radioButton_age_moeq->Enabled = false;
			this->radioButton_age_moeq->Location = System::Drawing::Point(43, 53);
			this->radioButton_age_moeq->Name = L"radioButton_age_moeq";
			this->radioButton_age_moeq->Size = System::Drawing::Size(61, 29);
			this->radioButton_age_moeq->TabIndex = 19;
			this->radioButton_age_moeq->TabStop = true;
			this->radioButton_age_moeq->Text = L">=";
			this->radioButton_age_moeq->UseVisualStyleBackColor = true;
			// 
			// panel_name
			// 
			this->panel_name->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->panel_name->Controls->Add(this->textBox_name);
			this->panel_name->Controls->Add(this->checkBox_name);
			this->panel_name->Controls->Add(this->radioButton_name_matches);
			this->panel_name->Controls->Add(this->radioButton_name_contains);
			this->panel_name->Location = System::Drawing::Point(12, 64);
			this->panel_name->Name = L"panel_name";
			this->panel_name->Size = System::Drawing::Size(425, 163);
			this->panel_name->TabIndex = 4;
			// 
			// textBox_name
			// 
			this->textBox_name->Enabled = false;
			this->textBox_name->Location = System::Drawing::Point(38, 120);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(371, 29);
			this->textBox_name->TabIndex = 7;
			// 
			// checkBox_name
			// 
			this->checkBox_name->AutoSize = true;
			this->checkBox_name->Location = System::Drawing::Point(12, 15);
			this->checkBox_name->Name = L"checkBox_name";
			this->checkBox_name->Size = System::Drawing::Size(206, 29);
			this->checkBox_name->TabIndex = 0;
			this->checkBox_name->Text = L"Название игрушки";
			this->checkBox_name->UseVisualStyleBackColor = true;
			this->checkBox_name->CheckedChanged += gcnew System::EventHandler(this, &QueryForm::checkBox_name_CheckedChanged);
			// 
			// radioButton_name_matches
			// 
			this->radioButton_name_matches->AutoSize = true;
			this->radioButton_name_matches->Checked = true;
			this->radioButton_name_matches->Enabled = false;
			this->radioButton_name_matches->Location = System::Drawing::Point(38, 50);
			this->radioButton_name_matches->Name = L"radioButton_name_matches";
			this->radioButton_name_matches->Size = System::Drawing::Size(149, 29);
			this->radioButton_name_matches->TabIndex = 5;
			this->radioButton_name_matches->TabStop = true;
			this->radioButton_name_matches->Text = L"совпадает с";
			this->radioButton_name_matches->UseVisualStyleBackColor = true;
			// 
			// radioButton_name_contains
			// 
			this->radioButton_name_contains->AutoSize = true;
			this->radioButton_name_contains->Enabled = false;
			this->radioButton_name_contains->Location = System::Drawing::Point(38, 85);
			this->radioButton_name_contains->Name = L"radioButton_name_contains";
			this->radioButton_name_contains->Size = System::Drawing::Size(132, 29);
			this->radioButton_name_contains->TabIndex = 6;
			this->radioButton_name_contains->Text = L"содержит";
			this->radioButton_name_contains->UseVisualStyleBackColor = true;
			// 
			// label_criteria
			// 
			this->label_criteria->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_criteria->Location = System::Drawing::Point(0, 0);
			this->label_criteria->Name = L"label_criteria";
			this->label_criteria->Size = System::Drawing::Size(450, 64);
			this->label_criteria->TabIndex = 20;
			this->label_criteria->Text = L"Критерии поиска";
			this->label_criteria->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_search
			// 
			this->button_search->BackColor = System::Drawing::Color::GhostWhite;
			this->button_search->Location = System::Drawing::Point(12, 1029);
			this->button_search->Name = L"button_search";
			this->button_search->Size = System::Drawing::Size(425, 57);
			this->button_search->TabIndex = 19;
			this->button_search->Text = L"Поиск";
			this->button_search->UseVisualStyleBackColor = false;
			this->button_search->Click += gcnew System::EventHandler(this, &QueryForm::button_search_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::MistyRose;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column_name,
					this->Column_ID, this->Column_number, this->Column_cost, this->Column_age
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(450, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(956, 1333);
			this->dataGridView1->TabIndex = 2;
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
			this->Column_age->HeaderText = L"Возраст";
			this->Column_age->MinimumWidth = 9;
			this->Column_age->Name = L"Column_age";
			this->Column_age->ReadOnly = true;
			// 
			// label_result
			// 
			this->label_result->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label_result->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_result->Location = System::Drawing::Point(450, 0);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(956, 64);
			this->label_result->TabIndex = 3;
			this->label_result->Text = L"Результат запроса";
			this->label_result->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_nothing
			// 
			this->label_nothing->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_nothing->Location = System::Drawing::Point(450, 64);
			this->label_nothing->Name = L"label_nothing";
			this->label_nothing->Size = System::Drawing::Size(956, 1333);
			this->label_nothing->TabIndex = 4;
			this->label_nothing->Text = L"Ничего не найдено";
			this->label_nothing->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_nothing->Visible = false;
			// 
			// QueryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1406, 1436);
			this->Controls->Add(this->label_nothing);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label_result);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->panel_big);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(300, 1500);
			this->Name = L"QueryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Запрос - ";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &QueryForm::QueryForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->panel_big->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel_name->ResumeLayout(false);
			this->panel_name->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: String^ filename;
	private: System::Void QueryForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->toolStripStatusLabel_filename->Text = filename;
		String^ file;
		for (Int32 i = filename->Length - 1; i >= 0 && filename[i] != '\\'; i--)
			//if (filename[i] != '*')
			file = filename[i] + file;
		this->Text += file;
		button_search_Click(sender, e);
	}
	private: System::Void checkBox_name_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_name_matches->Enabled = this->checkBox_name->Checked;
		this->radioButton_name_contains->Enabled = this->checkBox_name->Checked;
		this->textBox_name->Enabled = this->checkBox_name->Checked;
	}
	private: System::Void checkBox_id_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_id_matches->Enabled = this->checkBox_id->Checked;
		this->radioButton_id_contains->Enabled = this->checkBox_id->Checked;
		this->textBox_id->Enabled = this->checkBox_id->Checked;
	}
	private: System::Void checkBox_number_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_number_moeq->Enabled = this->checkBox_number->Checked;
		this->radioButton_number_more->Enabled = this->checkBox_number->Checked;
		this->radioButton_number_leeq->Enabled = this->checkBox_number->Checked;
		this->radioButton_number_less->Enabled = this->checkBox_number->Checked;
		this->radioButton_number_equal->Enabled = this->checkBox_number->Checked;
		this->textBox_number->Enabled = this->checkBox_number->Checked;
	}
	private: System::Void checkBox_cost_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_cost_moeq->Enabled = this->checkBox_cost->Checked;
		this->radioButton_cost_more->Enabled = this->checkBox_cost->Checked;
		this->radioButton_cost_leeq->Enabled = this->checkBox_cost->Checked;
		this->radioButton_cost_less->Enabled = this->checkBox_cost->Checked;
		this->radioButton_cost_equal->Enabled = this->checkBox_cost->Checked;
		this->textBox_cost->Enabled = this->checkBox_cost->Checked;
	}
	private: System::Void checkBox_age_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_age_moeq->Enabled = this->checkBox_age->Checked;
		this->radioButton_age_more->Enabled = this->checkBox_age->Checked;
		this->radioButton_age_leeq->Enabled = this->checkBox_age->Checked;
		this->radioButton_age_less->Enabled = this->checkBox_age->Checked;
		this->radioButton_age_equal->Enabled = this->checkBox_age->Checked;
		this->textBox_age->Enabled = this->checkBox_age->Checked;
	}

	//Проверка является ли символ буквой
	private: Boolean isalpha_bukva(wchar_t symb) {
		Boolean result = true;

		if (symb < 'A' || symb > 'Z' && symb < 'a' || symb > 'z' && symb < L'А' && symb != L'Ё' || symb > L'я' && symb != L'ё')
			result = false;
		return result;
	}

	//Проверка является ли символ цифрой
	private: Boolean isdigit_ziphra(wchar_t symb) {
		Boolean result = true;

		if (symb < '0' || symb > '9')
			result = false;
		return result;
	}

	//Проверка ячейки (1, 3-5)
	private: Boolean check_value(String^ value, Int16 mode) {
		Boolean good = true;

		switch (mode) {
		//Проверка ячейки 1
		case 0:
			for (Int16 i = 0; i < value->Length && good; i++)
				if (!isalpha_bukva(value[i]) && value[i] != ' ' || value[i] == ' ' && i == 0)
					good = false;
			break;
		//Проверка ячейки 3
		case 2:
			for (Int16 i = 0; i < value->Length && good; i++)
				if (!isdigit_ziphra(value[i]))
					good = false;
			break;
		//Проверка ячейки 4
		case 3:
			for (Int16 i = 0, p = 0; i < value->Length && good; i++) {
				if (value[i] == ',')
					p += 1;

				if (p != 1 && !isdigit_ziphra(value[i]) || p > 1 || p == 1 && value[i] == ',' && value->Length - i != 2 && value->Length - i != 3 && i > 0)
					good = false;
			}

			if (good && Convert::ToDouble(value) == 0)
				good = false;
			break;
		//Проверка ячейки 5
		case 4:
			for (Int16 i = 0; i < value->Length - 1 && good; i++)
				if (!isdigit_ziphra(value[i]))
					good = false;

			if (good && value[value->Length - 1] != '+' && !isdigit_ziphra(value[value->Length - 1]))
				good = false;

			if (good && value_format(value, 4) == "")
				good = false;
			break;
		default:
			good = false;
			break;
		}

		return good;
	}

	//Проверка ячейки (2)
	private: Boolean check_value(String^ id, String^ name, Int64 row) {
		Boolean good = true;

		if (id->Length != 6 || id[0] != name[0] && id[0] != name[0] - 32 && (id[0] != L'Ё' || id[0] != name[0] - 80) || id[1] != '-')
			good = false;

		for (Int16 i = 0; i < 4 && good; i++)
			if (!isdigit_ziphra(id[2 + i]))
				good = false;

		for (Int64 i = 0; i < this->dataGridView1->Rows->Count && good; i++)
			if (this->dataGridView1->Rows[i]->Cells[1]->Value != nullptr && this->dataGridView1->Rows[i]->Cells[1]->Value->ToString() == id && i != row)
				good = false;

		return good;
	}

	//Форматирование значения ячейки
	private: String^ value_format(String^ str, Int16 mode) {
		String^ value = "";

		//Для ячейки 4
		if (mode == 3) {
			value = Convert::ToString(Convert::ToDouble(str));
			if (value->Length > 2 && value[value->Length - 2] == ',')
				value += "0";
			else if (value->Length < 3 || value[value->Length - 3] != ',')
				value += ",00";
		}
		//Для ячейки 5
		else if (mode == 4) {
			if (str[str->Length - 1] == '+')
				for (Int16 i = 0; i < str->Length - 1; i++)
					value += str[i];
			else
				value = str;

			if (Convert::ToInt64(value) >= 0 && Convert::ToInt64(value) <= 100)
				value = Convert::ToString(Convert::ToInt64(value)) + "+";
			else
				value = "";
		}

		return value;
	}

	private: System::Void button_search_Click(System::Object^ sender, System::EventArgs^ e) {
		Boolean good = true;
		this->dataGridView1->Rows->Clear();
		array<String^>^ lines = File::ReadAllLines(this->toolStripStatusLabel_filename->Text, System::Text::Encoding::GetEncoding(1251));
		
		//Если файл пуст
		if (lines->Length == 0)
			good = false;
		//Если файл не пустой
		else {
			for each (String ^ str in lines) {
				DataGridViewRow^ row = gcnew DataGridViewRow();
				row->CreateCells(this->dataGridView1);
				array<String^>^ splittedstr = str->Split(L';');

				//Если количество пунктов в строке не удовлетворяет нужному количеству
				if (splittedstr->Length != 5) {
					good = false;
					break;
				}
				else
				{
					for (Int16 i = 0; i < 2; i++)
						row->Cells[i]->Value = splittedstr[i];

					//Проверка первого столбца
					if (good = check_value(splittedstr[0], 0))
						//Проверка второго столбца
						if (good = check_value(splittedstr[1], splittedstr[0], this->dataGridView1->Rows->Count))
							//Проверка третьего столбца
							if (good = check_value(splittedstr[2], 2)) {
								row->Cells[2]->Value = Convert::ToString(Convert::ToInt64(splittedstr[2]));
								//Проверка четвёртого столбца
								if (good = check_value(splittedstr[3], 3)) {
									row->Cells[3]->Value = value_format(splittedstr[3], 3);
									//Проверка пятого столбца
									if (good = check_value(splittedstr[4], 4)) {
										row->Cells[4]->Value = value_format(splittedstr[4], 4);
										this->dataGridView1->Rows->Add(row);
									}
								}
							}

					if (!good)
						break;
				}

				//Если содержимое файла не удовлетворяет нужному формату
				if (!good)
					MessageBox::Show(L"Содержимое файла не удовлетворяет формату.");
			}
		}

		if (good) {
			Int64 n = this->dataGridView1->Rows->Count;

			for (int i = 0; i < this->dataGridView1->Rows->Count && good; i++) {
				if (this->checkBox_name->Checked) {
					if (this->textBox_name->Text == "")
						good = false;
					else if (this->radioButton_name_matches->Checked && this->textBox_name->Text != this->dataGridView1->Rows[i]->Cells[0]->Value->ToString() || this->radioButton_name_contains->Checked && !(this->dataGridView1->Rows[i]->Cells[0]->Value->ToString()->Contains(this->textBox_name->Text))) {
						this->dataGridView1->Rows[i]->Visible = false;
						n--;
					}
				}

				if (this->checkBox_id->Checked) {
					if (this->textBox_id->Text == "")
						good = false;
					else if (this->dataGridView1->Rows[i]->Visible && (this->radioButton_id_matches->Checked && this->textBox_id->Text != this->dataGridView1->Rows[i]->Cells[1]->Value->ToString() || this->radioButton_id_contains->Checked && !(this->dataGridView1->Rows[i]->Cells[1]->Value->ToString()->Contains(this->textBox_id->Text)))) {
						this->dataGridView1->Rows[i]->Visible = false;
						n--;
					}
				}

				if (this->checkBox_number->Checked) {
					if (this->textBox_number->Text == "" || !check_value(this->textBox_number->Text, 2))
						good = false;
					else if (this->dataGridView1->Rows[i]->Visible) {
						Int32 num1 = Convert::ToInt32(this->textBox_number->Text);
						Int32 num2 = Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[2]->Value->ToString());
						if (this->radioButton_number_moeq->Checked && num1 > num2 || this->radioButton_number_more->Checked && num1 >= num2 || this->radioButton_number_leeq->Checked && num1 < num2 || this->radioButton_number_less->Checked && num1 <= num2 || this->radioButton_number_equal->Checked && num1 != num2) {
							this->dataGridView1->Rows[i]->Visible = false;
							n--;
						}
					}
				}

				if (this->checkBox_cost->Checked) {
					if (this->textBox_cost->Text == "" || !check_value(this->textBox_cost->Text, 2) && !check_value(this->textBox_cost->Text, 3))
						good = false;
					else if (this->dataGridView1->Rows[i]->Visible) {
						Double cost1 = Convert::ToDouble(this->textBox_cost->Text);
						Double cost2 = Convert::ToDouble(this->dataGridView1->Rows[i]->Cells[3]->Value->ToString());
						if (this->radioButton_cost_moeq->Checked && cost1 > cost2 || this->radioButton_cost_more->Checked && cost1 >= cost2 || this->radioButton_cost_leeq->Checked && cost1 < cost2 || this->radioButton_cost_less->Checked && cost1 <= cost2 || this->radioButton_cost_equal->Checked && cost1 != cost2) {
							this->dataGridView1->Rows[i]->Visible = false;
							n--;
						}
					}
				}

				if (this->checkBox_age->Checked) {
					if (this->textBox_age->Text == "" || !check_value(this->textBox_age->Text, 4))
						good = false;
					else if (this->dataGridView1->Rows[i]->Visible) {
						String^ sage1 = "", ^ sage2 = "";
						if (this->textBox_age->Text[this->textBox_age->Text->Length - 1] == '+')
							for (Int16 j = 0; j < this->textBox_age->Text->Length - 1; j++)
								sage1 += this->textBox_age->Text[j];
						else
							sage1 = this->textBox_age->Text;

						for (Int16 j = 0; j < this->dataGridView1->Rows[i]->Cells[4]->Value->ToString()->Length - 1; j++)
							sage2 += this->dataGridView1->Rows[i]->Cells[4]->Value->ToString()[j];
						Int32 age1 = Convert::ToInt32(sage1);
						Int32 age2 = Convert::ToInt32(sage2);
						if (this->radioButton_age_moeq->Checked && age1 > age2 || this->radioButton_age_more->Checked && age1 >= age2 || this->radioButton_age_leeq->Checked && age1 < age2 || this->radioButton_age_less->Checked && age1 <= age2 || this->radioButton_age_equal->Checked && age1 != age2) {
							this->dataGridView1->Rows[i]->Visible = false;
							n--;
						}
					}
				}
			}

			if (n == 0)
				good = false;
		}

		this->dataGridView1->Visible = good;
		this->label_nothing->Visible = !good;
	}
};
}
