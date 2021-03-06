#pragma once
#include <cctype>
#include "HelloForm.h"
#include "ExitForm.h"
#include "AdminForm.h"
#include "QueryForm.h"
#include "GameStartForm.h"
#include "InfoForm.h"

namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ?????? ??? MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ???????? ??? ????????????
			//
		}

	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
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
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;


	private: System::Windows::Forms::ToolStripMenuItem^ CorrectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ QueryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ GameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ InfoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ QuitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AddRowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ DelRowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ CloseToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ DelAllRowsToolStripMenuItem;





















	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? ? ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menustrip_main = (gcnew System::Windows::Forms::MenuStrip());
			this->FileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CreateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->CloseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->SaveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EnterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CorrectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddRowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DelRowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DelAllRowsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->QueryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->InfoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->QuitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel_filename = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_center = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
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
			this->menustrip_main->Size = System::Drawing::Size(1500, 42);
			this->menustrip_main->TabIndex = 0;
			this->menustrip_main->Text = L"menuStrip1";
			// 
			// FileToolStripMenuItem
			// 
			this->FileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->CreateToolStripMenuItem,
					this->OpenToolStripMenuItem, this->toolStripSeparator1, this->CloseToolStripMenuItem, this->toolStripSeparator2, this->SaveToolStripMenuItem,
					this->SaveAsToolStripMenuItem, this->toolStripSeparator3, this->ExitToolStripMenuItem
			});
			this->FileToolStripMenuItem->Name = L"FileToolStripMenuItem";
			this->FileToolStripMenuItem->Size = System::Drawing::Size(80, 38);
			this->FileToolStripMenuItem->Text = L"&????";
			// 
			// CreateToolStripMenuItem
			// 
			this->CreateToolStripMenuItem->Enabled = false;
			this->CreateToolStripMenuItem->Name = L"CreateToolStripMenuItem";
			this->CreateToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->CreateToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->CreateToolStripMenuItem->Text = L"&???????";
			this->CreateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::CreateToolStripMenuItem_Click);
			// 
			// OpenToolStripMenuItem
			// 
			this->OpenToolStripMenuItem->Name = L"OpenToolStripMenuItem";
			this->OpenToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->OpenToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->OpenToolStripMenuItem->Text = L"&???????";
			this->OpenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::OpenToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(300, 6);
			// 
			// CloseToolStripMenuItem
			// 
			this->CloseToolStripMenuItem->Enabled = false;
			this->CloseToolStripMenuItem->Name = L"CloseToolStripMenuItem";
			this->CloseToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->CloseToolStripMenuItem->Text = L"&???????";
			this->CloseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::CloseToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(300, 6);
			// 
			// SaveToolStripMenuItem
			// 
			this->SaveToolStripMenuItem->Enabled = false;
			this->SaveToolStripMenuItem->Name = L"SaveToolStripMenuItem";
			this->SaveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->SaveToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->SaveToolStripMenuItem->Text = L"??&???????";
			this->SaveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SaveToolStripMenuItem_Click);
			// 
			// SaveAsToolStripMenuItem
			// 
			this->SaveAsToolStripMenuItem->Enabled = false;
			this->SaveAsToolStripMenuItem->Name = L"SaveAsToolStripMenuItem";
			this->SaveAsToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->SaveAsToolStripMenuItem->Text = L"???&?????? ???...";
			this->SaveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SaveAsToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(300, 6);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(303, 40);
			this->ExitToolStripMenuItem->Text = L"&?????";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ExitToolStripMenuItem_Click);
			// 
			// EnterToolStripMenuItem
			// 
			this->EnterToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->EnterToolStripMenuItem->Name = L"EnterToolStripMenuItem";
			this->EnterToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->EnterToolStripMenuItem->Size = System::Drawing::Size(330, 38);
			this->EnterToolStripMenuItem->Text = L"???? ? ????? ??????????????";
			this->EnterToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->EnterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::EnterToolStripMenuItem_Click);
			// 
			// CorrectToolStripMenuItem
			// 
			this->CorrectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->AddRowToolStripMenuItem,
					this->DelRowToolStripMenuItem, this->DelAllRowsToolStripMenuItem
			});
			this->CorrectToolStripMenuItem->Enabled = false;
			this->CorrectToolStripMenuItem->Name = L"CorrectToolStripMenuItem";
			this->CorrectToolStripMenuItem->Size = System::Drawing::Size(188, 38);
			this->CorrectToolStripMenuItem->Text = L"&??????????????";
			// 
			// AddRowToolStripMenuItem
			// 
			this->AddRowToolStripMenuItem->Name = L"AddRowToolStripMenuItem";
			this->AddRowToolStripMenuItem->Size = System::Drawing::Size(317, 40);
			this->AddRowToolStripMenuItem->Text = L"???????? ??????";
			this->AddRowToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::AddRowToolStripMenuItem_Click);
			// 
			// DelRowToolStripMenuItem
			// 
			this->DelRowToolStripMenuItem->Enabled = false;
			this->DelRowToolStripMenuItem->Name = L"DelRowToolStripMenuItem";
			this->DelRowToolStripMenuItem->Size = System::Drawing::Size(317, 40);
			this->DelRowToolStripMenuItem->Text = L"??????? ??????";
			this->DelRowToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::DelRowToolStripMenuItem_Click);
			// 
			// DelAllRowsToolStripMenuItem
			// 
			this->DelAllRowsToolStripMenuItem->Name = L"DelAllRowsToolStripMenuItem";
			this->DelAllRowsToolStripMenuItem->Size = System::Drawing::Size(317, 40);
			this->DelAllRowsToolStripMenuItem->Text = L"??????? ??? ??????";
			this->DelAllRowsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::DelAllRowsToolStripMenuItem_Click);
			// 
			// QueryToolStripMenuItem
			// 
			this->QueryToolStripMenuItem->Enabled = false;
			this->QueryToolStripMenuItem->Name = L"QueryToolStripMenuItem";
			this->QueryToolStripMenuItem->Size = System::Drawing::Size(99, 38);
			this->QueryToolStripMenuItem->Text = L"&??????";
			this->QueryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::QueryToolStripMenuItem_Click);
			// 
			// GameToolStripMenuItem
			// 
			this->GameToolStripMenuItem->Name = L"GameToolStripMenuItem";
			this->GameToolStripMenuItem->Size = System::Drawing::Size(78, 38);
			this->GameToolStripMenuItem->Text = L"&????";
			this->GameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::GameToolStripMenuItem_Click);
			// 
			// InfoToolStripMenuItem
			// 
			this->InfoToolStripMenuItem->Name = L"InfoToolStripMenuItem";
			this->InfoToolStripMenuItem->Size = System::Drawing::Size(111, 38);
			this->InfoToolStripMenuItem->Text = L"&???????";
			this->InfoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::InfoToolStripMenuItem_Click);
			// 
			// QuitToolStripMenuItem
			// 
			this->QuitToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->QuitToolStripMenuItem->Name = L"QuitToolStripMenuItem";
			this->QuitToolStripMenuItem->Size = System::Drawing::Size(366, 34);
			this->QuitToolStripMenuItem->Text = L"????? ?? ?????? ??????????????";
			this->QuitToolStripMenuItem->Visible = false;
			this->QuitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::QuitToolStripMenuItem_Click);
			this->QuitToolStripMenuItem->VisibleChanged += gcnew System::EventHandler(this, &MainForm::QuitToolStripMenuItem_VisibleChanged);
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
			this->toolStripStatusLabel_filename->VisibleChanged += gcnew System::EventHandler(this, &MainForm::toolStripStatusLabel_filename_VisibleChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"????????? ?????(*.txt)|*.txt";
			this->openFileDialog1->Title = L"???????";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Bisque;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column_name,
					this->Column_ID, this->Column_number, this->Column_cost, this->Column_age
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::AppWorkspace;
			this->dataGridView1->Location = System::Drawing::Point(0, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(1500, 872);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellValueChanged);
			this->dataGridView1->RowStateChanged += gcnew System::Windows::Forms::DataGridViewRowStateChangedEventHandler(this, &MainForm::dataGridView1_RowStateChanged);
			this->dataGridView1->SortCompare += gcnew System::Windows::Forms::DataGridViewSortCompareEventHandler(this, &MainForm::dataGridView1_SortCompare);
			this->dataGridView1->UserAddedRow += gcnew System::Windows::Forms::DataGridViewRowEventHandler(this, &MainForm::dataGridView1_UserAddedRow);
			this->dataGridView1->UserDeletedRow += gcnew System::Windows::Forms::DataGridViewRowEventHandler(this, &MainForm::dataGridView1_UserDeletedRow);
			// 
			// Column_name
			// 
			this->Column_name->HeaderText = L"???????? ???????";
			this->Column_name->MinimumWidth = 9;
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			// 
			// Column_ID
			// 
			this->Column_ID->HeaderText = L"??????????? ?????";
			this->Column_ID->MinimumWidth = 9;
			this->Column_ID->Name = L"Column_ID";
			this->Column_ID->ReadOnly = true;
			// 
			// Column_number
			// 
			this->Column_number->HeaderText = L"??????????";
			this->Column_number->MinimumWidth = 9;
			this->Column_number->Name = L"Column_number";
			this->Column_number->ReadOnly = true;
			// 
			// Column_cost
			// 
			this->Column_cost->HeaderText = L"????";
			this->Column_cost->MinimumWidth = 9;
			this->Column_cost->Name = L"Column_cost";
			this->Column_cost->ReadOnly = true;
			// 
			// Column_age
			// 
			this->Column_age->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column_age->HeaderText = L"???????";
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
			this->label_center->Size = System::Drawing::Size(1500, 914);
			this->label_center->TabIndex = 3;
			this->label_center->Text = L"???? ?? ??????";
			this->label_center->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"????????? ?????(*.txt)|*.txt";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1500, 936);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menustrip_main);
			this->Controls->Add(this->label_center);
			this->Controls->Add(this->statusStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menustrip_main;
			this->MinimumSize = System::Drawing::Size(1000, 125);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TSB - ??????? ???????";
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
	private: Boolean changes = false;

	//???????? ?? ??????? ?????? ????? ? ?????
	private: Boolean full_table() {
		Boolean full = true;
		for (Int32 i = 0; i < this->dataGridView1->Rows->Count - 1 && full; i++)
			for (Int16 j = 0; j < 5 && full; j++)
				if (this->dataGridView1->Rows[i]->Cells[j]->Style->BackColor == System::Drawing::Color::LightCyan)
					full = false;
		return full;
	}

	//?????? ?????????
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

		//???????? ?????????????? ?????
		HelloForm^ p = gcnew HelloForm();
		p->ShowDialog();

		//?????
		if (p->DialogResult == System::Windows::Forms::DialogResult::Cancel) {
			this->Close();
			if (this->Visible)
				MainForm_Load(sender, e);
		}
		//??????? ????
		else if (p->DialogResult == System::Windows::Forms::DialogResult::No) {
			OpenToolStripMenuItem_Click(sender, e);
			if (!this->toolStripStatusLabel_filename->Visible)
				MainForm_Load(sender, e);
		}
		//???? ? ????? ??????????????
		else if (p->DialogResult == System::Windows::Forms::DialogResult::Yes) {
			EnterToolStripMenuItem_Click(sender, e);
			if (this->EnterToolStripMenuItem->Visible)
				MainForm_Load(sender, e);
		}
		//?????? ????
		else if (p->DialogResult == System::Windows::Forms::DialogResult::OK)
			GameToolStripMenuItem_Click(sender, e);
	}

	//???????? ?????
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//???? ????????? ???? ? ????? ?????????????? ? ?????? ????
		if (this->toolStripStatusLabel_filename->Visible && this->QuitToolStripMenuItem->Visible && this->changes) {
			e->Cancel = true;
			ExitForm^ p = gcnew ExitForm();
			p->ShowDialog();
			if (p->DialogResult == System::Windows::Forms::DialogResult::No)
				e->Cancel = false;
			//?????????? ?????????
			else if (p->DialogResult == System::Windows::Forms::DialogResult::Yes) {
				if (this->toolStripStatusLabel_filename->Visible) {
					if (this->toolStripStatusLabel_filename->Text == L"????? ????")
						SaveAsToolStripMenuItem_Click(sender, e);
					else
						SaveToolStripMenuItem_Click(sender, e);
				}
				if (!this->changes)
					e->Cancel = false;
			}
		}
		else {
			e->Cancel = true;
			String^ message = L"?? ???????, ??? ?????? ??????";
			String^ caption = L"";
			if (MessageBox::Show(message, caption, MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
				e->Cancel = false;
		}
	}

	//???????? ????? ????? ?????? ?????
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	//???????? ?????
	private: System::Void CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//???? ?????? ???? ? ?????? ?????????????? ? ?????????????? ???????????
		if (this->QuitToolStripMenuItem->Visible && this->toolStripStatusLabel_filename->Visible && this->changes && MessageBox::Show(L"????????? ??????????", "", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			//?????????? ?????????
			if (this->toolStripStatusLabel_filename->Text == L"????? ????")
				SaveAsToolStripMenuItem_Click(sender, e);
			else
				SaveToolStripMenuItem_Click(sender, e);
			if (full_table()) {
				this->toolStripStatusLabel_filename->Text = L"????? ????";
				this->toolStripStatusLabel_filename->Visible = true;
				open_file();
			}
		}
		else {
			this->toolStripStatusLabel_filename->Text = L"????? ????";
			this->toolStripStatusLabel_filename->Visible = true;
			open_file();
		}
	}

	//???????? ?????
	private: System::Void OpenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//???? ?????? ???? ? ?????? ?????????????? ? ?????????????? ???????????
		if (this->QuitToolStripMenuItem->Visible && this->toolStripStatusLabel_filename->Visible && this->changes && MessageBox::Show(L"????????? ??????????", "", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			if (this->toolStripStatusLabel_filename->Text == L"????? ????")
				SaveAsToolStripMenuItem_Click(sender, e);
			else
				SaveToolStripMenuItem_Click(sender, e);
			if (full_table() && this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->toolStripStatusLabel_filename->Text = this->openFileDialog1->FileName;
				this->toolStripStatusLabel_filename->Visible = true;
				open_file();
			}
		}
		else if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->toolStripStatusLabel_filename->Text = this->openFileDialog1->FileName;
			this->toolStripStatusLabel_filename->Visible = true;
			open_file();
		}
	}

	//???????? ?????
	private: Void open_file() {
		this->changes = false;
		Boolean good = true;
		this->dataGridView1->Rows->Clear();

		if (this->toolStripStatusLabel_filename->Text != L"????? ????") {
			array<String^>^ lines = File::ReadAllLines(this->toolStripStatusLabel_filename->Text, System::Text::Encoding::GetEncoding(1251));
			//???? ???? ????
			if (lines->Length == 0 && !this->QuitToolStripMenuItem->Visible) {
				good = false;
				this->CloseToolStripMenuItem->Enabled = true;
				this->QueryToolStripMenuItem->Enabled = false;
				this->dataGridView1->Visible = false;
				this->label_center->Visible = true;
				this->label_center->Text = L"???? ????";
			}
			//???? ???? ?? ??????
			else {
				for each (String ^ str in lines) {
					DataGridViewRow^ row = gcnew DataGridViewRow();
					row->CreateCells(this->dataGridView1);
					array<String^>^ splittedstr = str->Split(L';');

					//???? ?????????? ??????? ? ?????? ?? ????????????? ??????? ??????????
					if (splittedstr->Length != 5) {
						good = false;
						break;
					}
					else
					{
						for (Int16 i = 0; i < 2; i++)
							row->Cells[i]->Value = splittedstr[i];

						//???????? ??????? ???????
						if (good = check_value(splittedstr[0], 0))
							//???????? ??????? ???????
							if (good = check_value(splittedstr[1], splittedstr[0], this->dataGridView1->Rows->Count, this->dataGridView1))
								//???????? ???????? ???????
								if (good = check_value(splittedstr[2], 2)) {
									row->Cells[2]->Value = Convert::ToString(Convert::ToInt64(splittedstr[2]));
									//???????? ?????????? ???????
									if (good = check_value(splittedstr[3], 3)) {
										row->Cells[3]->Value = value_format(splittedstr[3], 3);
										//???????? ?????? ???????
										if (good = check_value(splittedstr[4], 4)) {
											row->Cells[4]->Value = value_format(splittedstr[4], 4);
											this->dataGridView1->Rows->Add(row);
										}
									}
								}

						if (!good)
							break;
					}
				}

				//???? ?????????? ????? ?? ????????????? ??????? ???????
				if (!good) {
					this->toolStripStatusLabel_filename->Visible = false;
					if (this->EnterToolStripMenuItem->Visible)
						MessageBox::Show(L"?????????? ????? ?? ????????????? ???????.");
					else {
						if (MessageBox::Show(L"?????????? ????? ?? ????????????? ???????. ???????? ?????", "", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
							this->toolStripStatusLabel_filename->Visible = true;
							good = true;
							StreamWriter^ sw = gcnew StreamWriter(this->toolStripStatusLabel_filename->Text, false, System::Text::Encoding::GetEncoding(1251));
							sw->Close();
						}
					}
				}
			}
		}
		else {
			if (this->toolStripStatusLabel_filename->Text == L"????? ????" && this->EnterToolStripMenuItem->Visible) {
				this->toolStripStatusLabel_filename->Visible = false;
				good = false;
			}
		}
		

		//???? ?????????? ????? ????????????? ??????? ???????
		if (good) {
			this->dataGridView1->Visible = true;
			this->label_center->Visible = false;
			this->CloseToolStripMenuItem->Enabled = true;
			this->QueryToolStripMenuItem->Enabled = true;
			if (this->QuitToolStripMenuItem->Visible) {
				this->SaveAsToolStripMenuItem->Enabled = true;
				if (this->toolStripStatusLabel_filename->Text != L"????? ????")
					this->SaveToolStripMenuItem->Enabled = true;
				else
					this->SaveToolStripMenuItem->Enabled = false;
				this->CorrectToolStripMenuItem->Enabled = true;
				if (this->dataGridView1->Rows->Count > 1 || this->dataGridView1->Rows->Count == 1 && this->dataGridView1->Rows[this->dataGridView1->Rows->Count - 1]->Cells[0]->Value != nullptr)
					this->DelAllRowsToolStripMenuItem->Enabled = true;
				else {
					this->DelAllRowsToolStripMenuItem->Enabled = false;
					this->QueryToolStripMenuItem->Enabled = false;
				}
			}
		}
	}

	//????????/???????? ?????
	private: System::Void toolStripStatusLabel_filename_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		//???? ?? ??????
		if (!this->toolStripStatusLabel_filename->Visible) {
			this->dataGridView1->Visible = false;
			this->label_center->Visible = true;
			this->CloseToolStripMenuItem->Enabled = false;
			this->QueryToolStripMenuItem->Enabled = false;
			this->CorrectToolStripMenuItem->Enabled = false;
			this->label_center->Text = L"???? ?? ??????";
		}
	}

	//???? ? ????? ??????????????
	private: System::Void EnterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//???????? ????? ??? ????? ??????
		AdminForm^ p = gcnew AdminForm();
		p->ShowDialog();

		//???? ?????? ??????
		if (p->DialogResult == System::Windows::Forms::DialogResult::OK) {
			MessageBox::Show(L"?? ????? ? ????? ??????????????!");
			this->QuitToolStripMenuItem->Visible = true;
			this->EnterToolStripMenuItem->Visible = false;
			this->CreateToolStripMenuItem->Enabled = true;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LavenderBlush;
			this->dataGridView1->AllowUserToAddRows = true;
			this->dataGridView1->AllowUserToDeleteRows = true;
			this->dataGridView1->ReadOnly = false;
			this->Column_ID->ReadOnly = true;
		}
	}
	
	//????? ?? ?????? ??????????????
	private: System::Void QuitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ExitForm^ p = gcnew ExitForm();
		if (this->toolStripStatusLabel_filename->Visible && this->changes)
			p->ShowDialog();

		if (!this->toolStripStatusLabel_filename->Visible || !this->changes || p->DialogResult == System::Windows::Forms::DialogResult::No || p->DialogResult == System::Windows::Forms::DialogResult::Yes) {
			//?????????? ?????????
			if (p->DialogResult == System::Windows::Forms::DialogResult::Yes) {
				if (this->toolStripStatusLabel_filename->Visible) {
					if (this->toolStripStatusLabel_filename->Text == L"????? ????")
						SaveAsToolStripMenuItem_Click(sender, e);
					else
						SaveToolStripMenuItem_Click(sender, e);
				}
			}
			else if (this->toolStripStatusLabel_filename->Text == L"????? ????")
				this->dataGridView1->Visible = false;

			if (full_table() || p->DialogResult == System::Windows::Forms::DialogResult::No) {
				this->EnterToolStripMenuItem->Visible = true;
				this->QuitToolStripMenuItem->Visible = false;
				this->dataGridView1->BackgroundColor = System::Drawing::Color::Bisque;
				this->CreateToolStripMenuItem->Enabled = false;
				this->SaveToolStripMenuItem->Enabled = false;
				this->SaveAsToolStripMenuItem->Enabled = false;
				this->CorrectToolStripMenuItem->Enabled = false;
				this->dataGridView1->AllowUserToAddRows = false;
				this->dataGridView1->AllowUserToDeleteRows = false;
				this->dataGridView1->ReadOnly = true;
			}
		}
	}

	//?????????? ? ????????
	private: System::Void dataGridView1_SortCompare(System::Object^ sender, System::Windows::Forms::DataGridViewSortCompareEventArgs^ e) {
		if (e->CellValue1 != nullptr && e->CellValue2 != nullptr) {

			//?????????? ?? ??????? ??????????
			if (e->Column->Name == "Column_number") {
				Int64 v1, v2;
				v1 = Convert::ToInt64(e->CellValue1);
				v2 = Convert::ToInt64(e->CellValue2);
				if (v1 > v2)
					e->SortResult = 1;
				else if (v1 < v2)
					e->SortResult = -1;
				else
					e->SortResult = 0;
			}

			//?????????? ?? ??????? ????
			else if (e->Column->Name == "Column_cost") {
				Double v1, v2;
				v1 = Convert::ToDouble(e->CellValue1);
				v2 = Convert::ToDouble(e->CellValue2);
				if (v1 > v2)
					e->SortResult = 1;
				else if (v1 < v2)
					e->SortResult = -1;
				else
					e->SortResult = 0;
			}

			//?????????? ?? ??????? ???????
			else if (e->Column->Name == "Column_age") {
				Int32 v1, v2;
				String^ va1, ^ va2;
				for (Int16 i = 0; i < e->CellValue1->ToString()->Length - 1; i++)
					va1 += e->CellValue1->ToString()[i];
				for (Int16 i = 0; i < e->CellValue2->ToString()->Length - 1; i++)
					va2 += e->CellValue2->ToString()[i];
				v1 = Convert::ToInt32(va1);
				v2 = Convert::ToInt32(va2);
				if (v1 > v2)
					e->SortResult = 1;
				else if (v1 < v2)
					e->SortResult = -1;
				else
					e->SortResult = 0;
			}

			//?????????? ?? ????????? ????????
			else
				e->SortResult = System::String::Compare(
					e->CellValue1->ToString(), e->CellValue2->ToString());
		}

		//???? ??????????? ?????? ?????
		else {
			if (e->CellValue1 == nullptr) {
				if (e->CellValue2 == nullptr)
					e->SortResult = 0;
				else
					e->SortResult = -1;
			}
			else
				e->SortResult = 1;
		}
		e->Handled = true;
	}

	//??????????? ????? ?????? - ???? ??????????? ??????
	private: System::Void QuitToolStripMenuItem_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->toolStripStatusLabel_filename->Visible)
			open_file();
	}

	//???????? ?????
	private: System::Void CloseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->changes && this->QuitToolStripMenuItem->Visible && MessageBox::Show(L"????????? ??????????", "", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			if (this->toolStripStatusLabel_filename->Text == L"????? ????")
				SaveAsToolStripMenuItem_Click(sender, e);
			else
				SaveToolStripMenuItem_Click(sender, e);
			if (full_table())
				this->toolStripStatusLabel_filename->Visible = false;
		}
		else
			this->toolStripStatusLabel_filename->Visible = false;
	}

	//?????????? ????? ??? ?????? ?????? "?????????"
	private: System::Void SaveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (full_table()) {
			StreamWriter^ sw = gcnew StreamWriter(this->toolStripStatusLabel_filename->Text, false, System::Text::Encoding::GetEncoding(1251));
			for (Int32 i = 0; i < this->dataGridView1->Rows->Count - 1; i++) {
				String^ str = this->dataGridView1->Rows[i]->Cells[0]->Value->ToString();
				for (Int16 j = 1; j < 5; j++)
					str += ";" + this->dataGridView1->Rows[i]->Cells[j]->Value;
				sw->WriteLine(str);
			}
			sw->Close();
			this->changes = false;
			if (this->dataGridView1->Rows->Count > 1)
				this->QueryToolStripMenuItem->Enabled = true;
			else
				this->QueryToolStripMenuItem->Enabled = false;
		}
		else
			MessageBox::Show(L"?????????? ????????? ????: ? ??????? ???? ?????? ??????.");
	}

	//?????????? ????? ??? ?????? ?????? "????????? ???..."
	private: System::Void SaveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (full_table()) {
			if (this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->toolStripStatusLabel_filename->Text = saveFileDialog1->FileName;
				this->toolStripStatusLabel_filename->Visible = true;
				SaveToolStripMenuItem_Click(sender, e);
			}
		}
		else
			MessageBox::Show(L"?????????? ????????? ????: ? ??????? ???? ?????? ??????.");
	}

	//????????? ???????? ? ??????
	private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		Boolean good = true;
		String^ value;

		if (e->RowIndex != -1) {
			this->changes = true;

			//???? ?????? ?? ??????
			if (this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value != nullptr) {
				value = this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
				if (value->Length > 0) {

					if (e->ColumnIndex != 1)
						good = check_value(value, e->ColumnIndex);
					else
						good = check_value(value, this->dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString(), e->RowIndex, this->dataGridView1);

					switch (e->ColumnIndex) {

					//?????? ??????? ???????? ???????
					case 0:
						if (good) {
							Char symb = value[0];

							if (symb >= 'a' && symb <= 'z' || symb >= L'?' && symb <= L'?' || symb >= L'?' && symb <= L'?')
								symb -= 32;
							else if (symb == L'?')
								symb -= 80;

							this->dataGridView1->Rows[e->RowIndex]->Cells[1]->Value = symb + "-0001";
						}
						break;

					//?????? ??????? ??????????? ?????
					case 1:
						if (!good) {
							String^ num = "";
							for (int i = 0; i < 4; i++)
								num += value[i + 2];
							num = Convert::ToString(Convert::ToInt64(num) + 1);
							while (num->Length < 4)
								num = "0" + num;
							num = value[0] + "-" + num;
							this->dataGridView1->Rows[e->RowIndex]->Cells[1]->Value = Convert::ToString(num);
						}
						break;

					//?????? ??????? ??????????
					case 2:
						if (good)
							this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = Convert::ToString(Convert::ToInt64(value));
						break;

					//?????? ??????? ????
					case 3:
						if (good)
							this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = value_format(value, 3);
						break;

					//?????? ??????? ???????
					case 4:
						if (good)
							this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = value_format(value, 4);
						break;
					default:
						break;
					}
				}
				else
					good = false;
				
				if (e->ColumnIndex != 1 && this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value != nullptr && value->Length > 0) {
					if (good) {
						this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = System::Drawing::Color::White;
						if (e->ColumnIndex == 0)
							this->dataGridView1->Rows[e->RowIndex]->Cells[1]->Style->BackColor = System::Drawing::Color::White;
					}
					else {
						this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = System::Drawing::Color::LightCyan;
						this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "";
						if (e->ColumnIndex == 0) {
							this->dataGridView1->Rows[e->RowIndex]->Cells[1]->Style->BackColor = System::Drawing::Color::LightCyan;
							this->dataGridView1->Rows[e->RowIndex]->Cells[1]->Value = "";
						}
						MessageBox::Show(L"????????? ???????? ?? ????????????? ??????? ???????.");
					}
				}
			}
			else
				this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = System::Drawing::Color::LightCyan;

		}
	}

	//?????????? ????
	private: System::Void dataGridView1_UserAddedRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowEventArgs^ e) {
		for (Int16 i = 0; i < 5; i++)
			this->dataGridView1->Rows[this->dataGridView1->Rows->Count - 2]->Cells[i]->Style->BackColor = System::Drawing::Color::LightCyan;
		this->DelAllRowsToolStripMenuItem->Enabled = true;
		this->changes = true;
	}

	//?????????? ???? ???????
	private: System::Void AddRowToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Rows->Add();
		System::Windows::Forms::DataGridViewRowEventArgs^ d;
		dataGridView1_UserAddedRow(sender, d);
	}

	//???????? ???? ?????
	private: System::Void DelAllRowsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show(L"?? ???????, ??? ?????? ??????? ??? ???????", "", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			this->DelAllRowsToolStripMenuItem->Enabled = false;
			this->dataGridView1->Rows->Clear();
			this->changes = true;
		}
	}

	//????? ????/?????
	private: System::Void dataGridView1_RowStateChanged(System::Object^ sender, System::Windows::Forms::DataGridViewRowStateChangedEventArgs^ e) {
		Int16 choosed = 0;
		for (Int32 i = 0; i < this->dataGridView1->Rows->Count - 1 && choosed < 2; i++)
			if (this->dataGridView1->Rows[i]->Selected)
				choosed += 1;

		this->DelRowToolStripMenuItem->Text = L"??????? ??????";
		if (choosed > 0) {
			this->DelRowToolStripMenuItem->Enabled = true;
			if (choosed > 1)
				this->DelRowToolStripMenuItem->Text = L"??????? ??????";
		}
		else
			this->DelRowToolStripMenuItem->Enabled = false;
	}

	//???????? ????/?????
	private: System::Void DelRowToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		for (Int32 i = 0; i < this->dataGridView1->Rows->Count - 1; i++)
			if (this->dataGridView1->Rows[i]->Selected)
				this->dataGridView1->Rows->Remove(this->dataGridView1->Rows[i]);
		System::Windows::Forms::DataGridViewRowEventArgs^ d;
		dataGridView1_UserDeletedRow(sender, d);
	}
	private: System::Void dataGridView1_UserDeletedRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowEventArgs^ e) {
		if (this->dataGridView1->Rows->Count == 1)
			this->DelAllRowsToolStripMenuItem->Enabled = false;
		this->changes = true;
	}
	
	//??????
	private: System::Void QueryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		QueryForm^ p = gcnew QueryForm(this->toolStripStatusLabel_filename->Text);
		p->Show();
	}

	//?????? ????
	private: System::Void GameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Application::OpenForms["GameStartForm"] == nullptr && Application::OpenForms["GameForm"] == nullptr) {
			GameStartForm^ p = gcnew GameStartForm();
			p->Show();
		}

		//???? ???? ??? ????????
		else if (Application::OpenForms["GameForm"] != nullptr)
			Application::OpenForms["GameForm"]->Select();
		else
			Application::OpenForms["GameStartForm"]->Show();

		this->WindowState = FormWindowState::Minimized;
	}

	//???????? ???????
	private: System::Void InfoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Application::OpenForms["InfoForm"] == nullptr) {
			InfoForm^ p = gcnew InfoForm();
			p->Show();
		}

		//???? ???? ?? ???????? ??? ???????
		else
			Application::OpenForms["InfoForm"]->Select();
	}
};
}