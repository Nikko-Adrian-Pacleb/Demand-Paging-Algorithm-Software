#pragma once

namespace DemandPagingAlgorithm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DPAS
	/// </summary>
	public ref class DPAS : public System::Windows::Forms::Form
	{
	public:
		DPAS(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DPAS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ TitlePanel;
	protected:

	private: System::Windows::Forms::TableLayoutPanel^ ChoicesPanel;

	private: System::Windows::Forms::Button^ FIFO;
	private: System::Windows::Forms::Button^ BestFit;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ Credits;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TBNOProcess;
	private: System::Windows::Forms::TextBox^ TBNOBlocks;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->TitlePanel = (gcnew System::Windows::Forms::Label());
			this->ChoicesPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->FIFO = (gcnew System::Windows::Forms::Button());
			this->BestFit = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Credits = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TBNOProcess = (gcnew System::Windows::Forms::TextBox());
			this->TBNOBlocks = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1->SuspendLayout();
			this->ChoicesPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				21.11554F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				78.88446F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				230)));
			this->tableLayoutPanel1->Controls->Add(this->TitlePanel, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(984, 124);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// TitlePanel
			// 
			this->TitlePanel->AutoSize = true;
			this->TitlePanel->BackColor = System::Drawing::Color::Transparent;
			this->TitlePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TitlePanel->Font = (gcnew System::Drawing::Font(L"Cambria", 24.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TitlePanel->Location = System::Drawing::Point(162, 0);
			this->TitlePanel->Name = L"TitlePanel";
			this->TitlePanel->Size = System::Drawing::Size(588, 124);
			this->TitlePanel->TabIndex = 0;
			this->TitlePanel->Text = L"Demand Paging Algorithm";
			this->TitlePanel->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// ChoicesPanel
			// 
			this->ChoicesPanel->ColumnCount = 1;
			this->ChoicesPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->ChoicesPanel->Controls->Add(this->FIFO, 0, 0);
			this->ChoicesPanel->Controls->Add(this->BestFit, 0, 1);
			this->ChoicesPanel->Controls->Add(this->Credits, 0, 4);
			this->ChoicesPanel->Controls->Add(this->Exit, 0, 3);
			this->ChoicesPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->ChoicesPanel->Location = System::Drawing::Point(0, 124);
			this->ChoicesPanel->Name = L"ChoicesPanel";
			this->ChoicesPanel->RowCount = 5;
			this->ChoicesPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->ChoicesPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->ChoicesPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.832134F)));
			this->ChoicesPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 21.34293F)));
			this->ChoicesPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 29.13669F)));
			this->ChoicesPanel->Size = System::Drawing::Size(403, 837);
			this->ChoicesPanel->TabIndex = 1;
			// 
			// FIFO
			// 
			this->FIFO->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FIFO->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FIFO->Location = System::Drawing::Point(100, 47);
			this->FIFO->Name = L"FIFO";
			this->FIFO->Size = System::Drawing::Size(202, 71);
			this->FIFO->TabIndex = 0;
			this->FIFO->Text = L"Text";
			this->FIFO->UseVisualStyleBackColor = true;
			// 
			// BestFit
			// 
			this->BestFit->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BestFit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BestFit->Location = System::Drawing::Point(100, 169);
			this->BestFit->Name = L"BestFit";
			this->BestFit->Size = System::Drawing::Size(202, 71);
			this->BestFit->TabIndex = 0;
			this->BestFit->Text = L"Best Fit";
			this->BestFit->UseVisualStyleBackColor = true;
			// 
			// Exit
			// 
			this->Exit->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Location = System::Drawing::Point(100, 518);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(202, 71);
			this->Exit->TabIndex = 0;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			// 
			// Credits
			// 
			this->Credits->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Credits->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Credits->Location = System::Drawing::Point(100, 595);
			this->Credits->Name = L"Credits";
			this->Credits->Size = System::Drawing::Size(202, 71);
			this->Credits->TabIndex = 0;
			this->Credits->Text = L"Credits";
			this->Credits->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(592, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Number of Process";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(592, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"4 - 10";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(592, 293);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Number Of Blocks";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(592, 317);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 23);
			this->label4->TabIndex = 2;
			this->label4->Text = L"4 - 10";
			// 
			// TBNOProcess
			// 
			this->TBNOProcess->Location = System::Drawing::Point(596, 221);
			this->TBNOProcess->Name = L"TBNOProcess";
			this->TBNOProcess->Size = System::Drawing::Size(42, 31);
			this->TBNOProcess->TabIndex = 3;
			// 
			// TBNOBlocks
			// 
			this->TBNOBlocks->Location = System::Drawing::Point(596, 343);
			this->TBNOBlocks->Name = L"TBNOBlocks";
			this->TBNOBlocks->Size = System::Drawing::Size(42, 31);
			this->TBNOBlocks->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Location = System::Drawing::Point(595, 376);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(44, 10);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Location = System::Drawing::Point(596, 253);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(42, 10);
			this->panel2->TabIndex = 4;
			// 
			// DPAS
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(984, 961);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->TBNOBlocks);
			this->Controls->Add(this->TBNOProcess);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ChoicesPanel);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"DPAS";
			this->Text = L"Demand Paging Algorithm Software";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ChoicesPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
