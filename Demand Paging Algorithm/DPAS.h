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
	private: System::Windows::Forms::Panel^ FIFOInElemPanel;









	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ bl0;
	private: System::Windows::Forms::Label^ bl1;
	private: System::Windows::Forms::Label^ bl2;
	private: System::Windows::Forms::Label^ lb3;
	private: System::Windows::Forms::Label^ lb4;
	private: System::Windows::Forms::Label^ lb5;
	private: System::Windows::Forms::Label^ lb6;
	private: System::Windows::Forms::Label^ lb7;
	private: System::Windows::Forms::Label^ lb8;
	private: System::Windows::Forms::Label^ lb9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ pl0;
	private: System::Windows::Forms::Label^ pl1;
	private: System::Windows::Forms::Label^ pl2;
	private: System::Windows::Forms::Label^ pl3;
	private: System::Windows::Forms::Label^ pl4;
	private: System::Windows::Forms::Label^ pl5;
	private: System::Windows::Forms::Label^ pl6;
	private: System::Windows::Forms::Label^ pl7;
	private: System::Windows::Forms::Label^ pl8;
	private: System::Windows::Forms::Label^ pl9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::TextBox^ ptb0;
	private: System::Windows::Forms::TextBox^ ptb1;
	private: System::Windows::Forms::TextBox^ ptb2;
	private: System::Windows::Forms::TextBox^ ptb3;
	private: System::Windows::Forms::TextBox^ ptb4;
	private: System::Windows::Forms::TextBox^ ptb5;
	private: System::Windows::Forms::TextBox^ ptb6;
	private: System::Windows::Forms::TextBox^ ptb7;
	private: System::Windows::Forms::TextBox^ ptb8;
	private: System::Windows::Forms::TextBox^ ptb9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::TextBox^ btb0;
	private: System::Windows::Forms::TextBox^ btb1;
	private: System::Windows::Forms::TextBox^ btb2;
	private: System::Windows::Forms::TextBox^ btb3;
	private: System::Windows::Forms::TextBox^ btb4;
	private: System::Windows::Forms::TextBox^ btb5;
	private: System::Windows::Forms::TextBox^ btb6;
	private: System::Windows::Forms::TextBox^ btb7;
	private: System::Windows::Forms::TextBox^ btb8;
	private: System::Windows::Forms::TextBox^ btb9;

	//--!!--
	//Array Label Process
	private: array<System::Windows::Forms::Label^> ^processLabel;























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
			this->Credits = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TBNOProcess = (gcnew System::Windows::Forms::TextBox());
			this->TBNOBlocks = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->FIFOInElemPanel = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->ptb0 = (gcnew System::Windows::Forms::TextBox());
			this->ptb1 = (gcnew System::Windows::Forms::TextBox());
			this->ptb2 = (gcnew System::Windows::Forms::TextBox());
			this->ptb3 = (gcnew System::Windows::Forms::TextBox());
			this->ptb4 = (gcnew System::Windows::Forms::TextBox());
			this->ptb5 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->bl0 = (gcnew System::Windows::Forms::Label());
			this->bl1 = (gcnew System::Windows::Forms::Label());
			this->bl2 = (gcnew System::Windows::Forms::Label());
			this->lb3 = (gcnew System::Windows::Forms::Label());
			this->lb4 = (gcnew System::Windows::Forms::Label());
			this->lb5 = (gcnew System::Windows::Forms::Label());
			this->lb6 = (gcnew System::Windows::Forms::Label());
			this->lb7 = (gcnew System::Windows::Forms::Label());
			this->lb8 = (gcnew System::Windows::Forms::Label());
			this->lb9 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pl0 = (gcnew System::Windows::Forms::Label());
			this->pl1 = (gcnew System::Windows::Forms::Label());
			this->pl2 = (gcnew System::Windows::Forms::Label());
			this->pl3 = (gcnew System::Windows::Forms::Label());
			this->pl4 = (gcnew System::Windows::Forms::Label());
			this->pl5 = (gcnew System::Windows::Forms::Label());
			this->pl6 = (gcnew System::Windows::Forms::Label());
			this->pl7 = (gcnew System::Windows::Forms::Label());
			this->pl8 = (gcnew System::Windows::Forms::Label());
			this->pl9 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ptb6 = (gcnew System::Windows::Forms::TextBox());
			this->ptb7 = (gcnew System::Windows::Forms::TextBox());
			this->ptb8 = (gcnew System::Windows::Forms::TextBox());
			this->ptb9 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btb0 = (gcnew System::Windows::Forms::TextBox());
			this->btb1 = (gcnew System::Windows::Forms::TextBox());
			this->btb2 = (gcnew System::Windows::Forms::TextBox());
			this->btb3 = (gcnew System::Windows::Forms::TextBox());
			this->btb4 = (gcnew System::Windows::Forms::TextBox());
			this->btb5 = (gcnew System::Windows::Forms::TextBox());
			this->btb6 = (gcnew System::Windows::Forms::TextBox());
			this->btb7 = (gcnew System::Windows::Forms::TextBox());
			this->btb8 = (gcnew System::Windows::Forms::TextBox());
			this->btb9 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->ChoicesPanel->SuspendLayout();
			this->FIFOInElemPanel->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->SuspendLayout();

			//--!!--
			//ProcessList Label
			this->processLabel = gcnew array<System::Windows::Forms::Label^>(10);


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
			// FIFOInElemPanel
			// 
			this->FIFOInElemPanel->Controls->Add(this->flowLayoutPanel4);
			this->FIFOInElemPanel->Controls->Add(this->flowLayoutPanel3);
			this->FIFOInElemPanel->Controls->Add(this->flowLayoutPanel2);
			this->FIFOInElemPanel->Controls->Add(this->flowLayoutPanel1);
			this->FIFOInElemPanel->Controls->Add(this->tableLayoutPanel2);
			this->FIFOInElemPanel->Location = System::Drawing::Point(0, 0);
			this->FIFOInElemPanel->Name = L"FIFOInElemPanel";
			this->FIFOInElemPanel->Size = System::Drawing::Size(984, 961);
			this->FIFOInElemPanel->TabIndex = 5;
			this->FIFOInElemPanel->Visible = false;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->ptb0);
			this->flowLayoutPanel3->Controls->Add(this->ptb1);
			this->flowLayoutPanel3->Controls->Add(this->ptb2);
			this->flowLayoutPanel3->Controls->Add(this->ptb3);
			this->flowLayoutPanel3->Controls->Add(this->ptb4);
			this->flowLayoutPanel3->Controls->Add(this->ptb5);
			this->flowLayoutPanel3->Controls->Add(this->ptb6);
			this->flowLayoutPanel3->Controls->Add(this->ptb7);
			this->flowLayoutPanel3->Controls->Add(this->ptb8);
			this->flowLayoutPanel3->Controls->Add(this->ptb9);
			this->flowLayoutPanel3->Location = System::Drawing::Point(263, 140);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(200, 699);
			this->flowLayoutPanel3->TabIndex = 3;
			// 
			// ptb0
			// 
			this->ptb0->Location = System::Drawing::Point(3, 20);
			this->ptb0->Margin = System::Windows::Forms::Padding(3, 20, 3, 3);
			this->ptb0->Name = L"ptb0";
			this->ptb0->Size = System::Drawing::Size(197, 31);
			this->ptb0->TabIndex = 0;
			// 
			// ptb1
			// 
			this->ptb1->Location = System::Drawing::Point(3, 80);
			this->ptb1->Margin = System::Windows::Forms::Padding(3, 26, 3, 3);
			this->ptb1->Name = L"ptb1";
			this->ptb1->Size = System::Drawing::Size(197, 31);
			this->ptb1->TabIndex = 0;
			// 
			// ptb2
			// 
			this->ptb2->Location = System::Drawing::Point(3, 144);
			this->ptb2->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->ptb2->Name = L"ptb2";
			this->ptb2->Size = System::Drawing::Size(197, 31);
			this->ptb2->TabIndex = 0;
			// 
			// ptb3
			// 
			this->ptb3->Location = System::Drawing::Point(3, 208);
			this->ptb3->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->ptb3->Name = L"ptb3";
			this->ptb3->Size = System::Drawing::Size(197, 31);
			this->ptb3->TabIndex = 0;
			// 
			// ptb4
			// 
			this->ptb4->Location = System::Drawing::Point(3, 272);
			this->ptb4->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->ptb4->Name = L"ptb4";
			this->ptb4->Size = System::Drawing::Size(197, 31);
			this->ptb4->TabIndex = 0;
			// 
			// ptb5
			// 
			this->ptb5->Location = System::Drawing::Point(3, 334);
			this->ptb5->Margin = System::Windows::Forms::Padding(3, 28, 3, 3);
			this->ptb5->Name = L"ptb5";
			this->ptb5->Size = System::Drawing::Size(197, 31);
			this->ptb5->TabIndex = 0;
			this->ptb5->TextChanged += gcnew System::EventHandler(this, &DPAS::textBox6_TextChanged);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->bl0);
			this->flowLayoutPanel2->Controls->Add(this->bl1);
			this->flowLayoutPanel2->Controls->Add(this->bl2);
			this->flowLayoutPanel2->Controls->Add(this->lb3);
			this->flowLayoutPanel2->Controls->Add(this->lb4);
			this->flowLayoutPanel2->Controls->Add(this->lb5);
			this->flowLayoutPanel2->Controls->Add(this->lb6);
			this->flowLayoutPanel2->Controls->Add(this->lb7);
			this->flowLayoutPanel2->Controls->Add(this->lb8);
			this->flowLayoutPanel2->Controls->Add(this->lb9);
			this->flowLayoutPanel2->Location = System::Drawing::Point(511, 140);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(220, 699);
			this->flowLayoutPanel2->TabIndex = 2;
			// 
			// bl0
			// 
			this->bl0->AutoSize = true;
			this->bl0->BackColor = System::Drawing::Color::Transparent;
			this->bl0->Location = System::Drawing::Point(3, 0);
			this->bl0->Name = L"bl0";
			this->bl0->Padding = System::Windows::Forms::Padding(20);
			this->bl0->Size = System::Drawing::Size(181, 63);
			this->bl0->TabIndex = 3;
			this->bl0->Text = L"Blocks List #1:";
			// 
			// bl1
			// 
			this->bl1->AutoSize = true;
			this->bl1->BackColor = System::Drawing::Color::Transparent;
			this->bl1->Location = System::Drawing::Point(3, 63);
			this->bl1->Name = L"bl1";
			this->bl1->Padding = System::Windows::Forms::Padding(20);
			this->bl1->Size = System::Drawing::Size(181, 63);
			this->bl1->TabIndex = 3;
			this->bl1->Text = L"Blocks List #2:";
			// 
			// bl2
			// 
			this->bl2->AutoSize = true;
			this->bl2->BackColor = System::Drawing::Color::Transparent;
			this->bl2->Location = System::Drawing::Point(3, 126);
			this->bl2->Name = L"bl2";
			this->bl2->Padding = System::Windows::Forms::Padding(20);
			this->bl2->Size = System::Drawing::Size(181, 63);
			this->bl2->TabIndex = 3;
			this->bl2->Text = L"Blocks List #3:";
			// 
			// lb3
			// 
			this->lb3->AutoSize = true;
			this->lb3->BackColor = System::Drawing::Color::Transparent;
			this->lb3->Location = System::Drawing::Point(3, 189);
			this->lb3->Name = L"lb3";
			this->lb3->Padding = System::Windows::Forms::Padding(20);
			this->lb3->Size = System::Drawing::Size(181, 63);
			this->lb3->TabIndex = 3;
			this->lb3->Text = L"Blocks List #4:";
			// 
			// lb4
			// 
			this->lb4->AutoSize = true;
			this->lb4->BackColor = System::Drawing::Color::Transparent;
			this->lb4->Location = System::Drawing::Point(3, 252);
			this->lb4->Name = L"lb4";
			this->lb4->Padding = System::Windows::Forms::Padding(20);
			this->lb4->Size = System::Drawing::Size(181, 63);
			this->lb4->TabIndex = 3;
			this->lb4->Text = L"Blocks List #5:";
			// 
			// lb5
			// 
			this->lb5->AutoSize = true;
			this->lb5->BackColor = System::Drawing::Color::Transparent;
			this->lb5->Location = System::Drawing::Point(3, 315);
			this->lb5->Name = L"lb5";
			this->lb5->Padding = System::Windows::Forms::Padding(20);
			this->lb5->Size = System::Drawing::Size(181, 63);
			this->lb5->TabIndex = 3;
			this->lb5->Text = L"Blocks List #6:";
			// 
			// lb6
			// 
			this->lb6->AutoSize = true;
			this->lb6->BackColor = System::Drawing::Color::Transparent;
			this->lb6->Location = System::Drawing::Point(3, 378);
			this->lb6->Name = L"lb6";
			this->lb6->Padding = System::Windows::Forms::Padding(20);
			this->lb6->Size = System::Drawing::Size(181, 63);
			this->lb6->TabIndex = 3;
			this->lb6->Text = L"Blocks List #7:";
			// 
			// lb7
			// 
			this->lb7->AutoSize = true;
			this->lb7->BackColor = System::Drawing::Color::Transparent;
			this->lb7->Location = System::Drawing::Point(3, 441);
			this->lb7->Name = L"lb7";
			this->lb7->Padding = System::Windows::Forms::Padding(20);
			this->lb7->Size = System::Drawing::Size(181, 63);
			this->lb7->TabIndex = 3;
			this->lb7->Text = L"Blocks List #8:";
			// 
			// lb8
			// 
			this->lb8->AutoSize = true;
			this->lb8->BackColor = System::Drawing::Color::Transparent;
			this->lb8->Location = System::Drawing::Point(3, 504);
			this->lb8->Name = L"lb8";
			this->lb8->Padding = System::Windows::Forms::Padding(20);
			this->lb8->Size = System::Drawing::Size(181, 63);
			this->lb8->TabIndex = 3;
			this->lb8->Text = L"Blocks List #9:";
			// 
			// lb9
			// 
			this->lb9->AutoSize = true;
			this->lb9->BackColor = System::Drawing::Color::Transparent;
			this->lb9->Location = System::Drawing::Point(3, 567);
			this->lb9->Name = L"lb9";
			this->lb9->Padding = System::Windows::Forms::Padding(20);
			this->lb9->Size = System::Drawing::Size(193, 63);
			this->lb9->TabIndex = 3;
			this->lb9->Text = L"Blocks List #10:";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->pl0);
			this->flowLayoutPanel1->Controls->Add(this->pl1);
			this->flowLayoutPanel1->Controls->Add(this->pl2);
			this->flowLayoutPanel1->Controls->Add(this->pl3);
			this->flowLayoutPanel1->Controls->Add(this->pl4);
			this->flowLayoutPanel1->Controls->Add(this->pl5);
			this->flowLayoutPanel1->Controls->Add(this->pl6);
			this->flowLayoutPanel1->Controls->Add(this->pl7);
			this->flowLayoutPanel1->Controls->Add(this->pl8);
			this->flowLayoutPanel1->Controls->Add(this->pl9);
			this->flowLayoutPanel1->Location = System::Drawing::Point(22, 140);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(220, 699);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// pl0
			// 
			this->pl0->AutoSize = true;
			this->pl0->BackColor = System::Drawing::Color::Transparent;
			this->pl0->Location = System::Drawing::Point(3, 0);
			this->pl0->Name = L"pl0";
			this->pl0->Padding = System::Windows::Forms::Padding(20);
			this->pl0->Size = System::Drawing::Size(191, 63);
			this->pl0->TabIndex = 3;
			this->pl0->Text = L"Process List #1:";
			// 
			// pl1
			// 
			this->pl1->AutoSize = true;
			this->pl1->BackColor = System::Drawing::Color::Transparent;
			this->pl1->Location = System::Drawing::Point(3, 63);
			this->pl1->Name = L"pl1";
			this->pl1->Padding = System::Windows::Forms::Padding(20);
			this->pl1->Size = System::Drawing::Size(191, 63);
			this->pl1->TabIndex = 3;
			this->pl1->Text = L"Process List #2:";
			// 
			// pl2
			// 
			this->pl2->AutoSize = true;
			this->pl2->BackColor = System::Drawing::Color::Transparent;
			this->pl2->Location = System::Drawing::Point(3, 126);
			this->pl2->Name = L"pl2";
			this->pl2->Padding = System::Windows::Forms::Padding(20);
			this->pl2->Size = System::Drawing::Size(191, 63);
			this->pl2->TabIndex = 3;
			this->pl2->Text = L"Process List #3:";
			// 
			// pl3
			// 
			this->pl3->AutoSize = true;
			this->pl3->BackColor = System::Drawing::Color::Transparent;
			this->pl3->Location = System::Drawing::Point(3, 189);
			this->pl3->Name = L"pl3";
			this->pl3->Padding = System::Windows::Forms::Padding(20);
			this->pl3->Size = System::Drawing::Size(191, 63);
			this->pl3->TabIndex = 3;
			this->pl3->Text = L"Process List #4:";
			// 
			// pl4
			// 
			this->pl4->AutoSize = true;
			this->pl4->BackColor = System::Drawing::Color::Transparent;
			this->pl4->Location = System::Drawing::Point(3, 252);
			this->pl4->Name = L"pl4";
			this->pl4->Padding = System::Windows::Forms::Padding(20);
			this->pl4->Size = System::Drawing::Size(191, 63);
			this->pl4->TabIndex = 3;
			this->pl4->Text = L"Process List #5:";
			// 
			// pl5
			// 
			this->pl5->AutoSize = true;
			this->pl5->BackColor = System::Drawing::Color::Transparent;
			this->pl5->Location = System::Drawing::Point(3, 315);
			this->pl5->Name = L"pl5";
			this->pl5->Padding = System::Windows::Forms::Padding(20);
			this->pl5->Size = System::Drawing::Size(191, 63);
			this->pl5->TabIndex = 3;
			this->pl5->Text = L"Process List #6:";
			// 
			// pl6
			// 
			this->pl6->AutoSize = true;
			this->pl6->BackColor = System::Drawing::Color::Transparent;
			this->pl6->Location = System::Drawing::Point(3, 378);
			this->pl6->Name = L"pl6";
			this->pl6->Padding = System::Windows::Forms::Padding(20);
			this->pl6->Size = System::Drawing::Size(191, 63);
			this->pl6->TabIndex = 3;
			this->pl6->Text = L"Process List #7:";
			// 
			// pl7
			// 
			this->pl7->AutoSize = true;
			this->pl7->BackColor = System::Drawing::Color::Transparent;
			this->pl7->Location = System::Drawing::Point(3, 441);
			this->pl7->Name = L"pl7";
			this->pl7->Padding = System::Windows::Forms::Padding(20);
			this->pl7->Size = System::Drawing::Size(191, 63);
			this->pl7->TabIndex = 3;
			this->pl7->Text = L"Process List #8:";
			// 
			// pl8
			// 
			this->pl8->AutoSize = true;
			this->pl8->BackColor = System::Drawing::Color::Transparent;
			this->pl8->Location = System::Drawing::Point(3, 504);
			this->pl8->Name = L"pl8";
			this->pl8->Padding = System::Windows::Forms::Padding(20);
			this->pl8->Size = System::Drawing::Size(191, 63);
			this->pl8->TabIndex = 3;
			this->pl8->Text = L"Process List #9:";
			// 
			// pl9
			// 
			this->pl9->AutoSize = true;
			this->pl9->BackColor = System::Drawing::Color::Transparent;
			this->pl9->Location = System::Drawing::Point(3, 567);
			this->pl9->Name = L"pl9";
			this->pl9->Padding = System::Windows::Forms::Padding(20);
			this->pl9->Size = System::Drawing::Size(203, 63);
			this->pl9->TabIndex = 3;
			this->pl9->Text = L"Process List #10:";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label6, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(984, 134);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(184, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 23);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Process List:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(681, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 23);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Blocks List:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ptb6
			// 
			this->ptb6->Location = System::Drawing::Point(3, 396);
			this->ptb6->Margin = System::Windows::Forms::Padding(3, 28, 3, 3);
			this->ptb6->Name = L"ptb6";
			this->ptb6->Size = System::Drawing::Size(197, 31);
			this->ptb6->TabIndex = 0;
			this->ptb6->TextChanged += gcnew System::EventHandler(this, &DPAS::textBox6_TextChanged);
			// 
			// ptb7
			// 
			this->ptb7->Location = System::Drawing::Point(3, 458);
			this->ptb7->Margin = System::Windows::Forms::Padding(3, 28, 3, 3);
			this->ptb7->Name = L"ptb7";
			this->ptb7->Size = System::Drawing::Size(197, 31);
			this->ptb7->TabIndex = 0;
			this->ptb7->TextChanged += gcnew System::EventHandler(this, &DPAS::textBox6_TextChanged);
			// 
			// ptb8
			// 
			this->ptb8->Location = System::Drawing::Point(3, 520);
			this->ptb8->Margin = System::Windows::Forms::Padding(3, 28, 3, 3);
			this->ptb8->Name = L"ptb8";
			this->ptb8->Size = System::Drawing::Size(197, 31);
			this->ptb8->TabIndex = 0;
			this->ptb8->TextChanged += gcnew System::EventHandler(this, &DPAS::textBox6_TextChanged);
			// 
			// ptb9
			// 
			this->ptb9->Location = System::Drawing::Point(3, 582);
			this->ptb9->Margin = System::Windows::Forms::Padding(3, 28, 3, 3);
			this->ptb9->Name = L"ptb9";
			this->ptb9->Size = System::Drawing::Size(197, 31);
			this->ptb9->TabIndex = 0;
			this->ptb9->TextChanged += gcnew System::EventHandler(this, &DPAS::textBox6_TextChanged);
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->btb0);
			this->flowLayoutPanel4->Controls->Add(this->btb1);
			this->flowLayoutPanel4->Controls->Add(this->btb2);
			this->flowLayoutPanel4->Controls->Add(this->btb3);
			this->flowLayoutPanel4->Controls->Add(this->btb4);
			this->flowLayoutPanel4->Controls->Add(this->btb5);
			this->flowLayoutPanel4->Controls->Add(this->btb6);
			this->flowLayoutPanel4->Controls->Add(this->btb7);
			this->flowLayoutPanel4->Controls->Add(this->btb8);
			this->flowLayoutPanel4->Controls->Add(this->btb9);
			this->flowLayoutPanel4->Location = System::Drawing::Point(759, 140);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(200, 699);
			this->flowLayoutPanel4->TabIndex = 3;
			// 
			// btb0
			// 
			this->btb0->Location = System::Drawing::Point(3, 20);
			this->btb0->Margin = System::Windows::Forms::Padding(3, 20, 3, 3);
			this->btb0->Name = L"btb0";
			this->btb0->Size = System::Drawing::Size(197, 31);
			this->btb0->TabIndex = 0;
			// 
			// btb1
			// 
			this->btb1->Location = System::Drawing::Point(3, 80);
			this->btb1->Margin = System::Windows::Forms::Padding(3, 26, 3, 3);
			this->btb1->Name = L"btb1";
			this->btb1->Size = System::Drawing::Size(197, 31);
			this->btb1->TabIndex = 0;
			// 
			// btb2
			// 
			this->btb2->Location = System::Drawing::Point(3, 144);
			this->btb2->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->btb2->Name = L"btb2";
			this->btb2->Size = System::Drawing::Size(197, 31);
			this->btb2->TabIndex = 0;
			// 
			// btb3
			// 
			this->btb3->Location = System::Drawing::Point(3, 208);
			this->btb3->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->btb3->Name = L"btb3";
			this->btb3->Size = System::Drawing::Size(197, 31);
			this->btb3->TabIndex = 0;
			// 
			// btb4
			// 
			this->btb4->Location = System::Drawing::Point(3, 272);
			this->btb4->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->btb4->Name = L"btb4";
			this->btb4->Size = System::Drawing::Size(197, 31);
			this->btb4->TabIndex = 0;
			// 
			// btb5
			// 
			this->btb5->Location = System::Drawing::Point(3, 334);
			this->btb5->Margin = System::Windows::Forms::Padding(3, 28, 3, 3);
			this->btb5->Name = L"btb5";
			this->btb5->Size = System::Drawing::Size(197, 31);
			this->btb5->TabIndex = 0;
			this->btb5->TextChanged += gcnew System::EventHandler(this, &DPAS::textBox6_TextChanged);
			// 
			// btb6
			// 
			this->btb6->Location = System::Drawing::Point(3, 396);
			this->btb6->Margin = System::Windows::Forms::Padding(3, 28, 3, 3);
			this->btb6->Name = L"btb6";
			this->btb6->Size = System::Drawing::Size(197, 31);
			this->btb6->TabIndex = 0;
			this->btb6->TextChanged += gcnew System::EventHandler(this, &DPAS::textBox6_TextChanged);
			// 
			// btb7
			// 
			this->btb7->Location = System::Drawing::Point(3, 458);
			this->btb7->Margin = System::Windows::Forms::Padding(3, 28, 3, 3);
			this->btb7->Name = L"btb7";
			this->btb7->Size = System::Drawing::Size(197, 31);
			this->btb7->TabIndex = 0;
			this->btb7->TextChanged += gcnew System::EventHandler(this, &DPAS::textBox6_TextChanged);
			// 
			// btb8
			// 
			this->btb8->Location = System::Drawing::Point(3, 520);
			this->btb8->Margin = System::Windows::Forms::Padding(3, 28, 3, 3);
			this->btb8->Name = L"btb8";
			this->btb8->Size = System::Drawing::Size(197, 31);
			this->btb8->TabIndex = 0;
			this->btb8->TextChanged += gcnew System::EventHandler(this, &DPAS::textBox6_TextChanged);
			// 
			// btb9
			// 
			this->btb9->Location = System::Drawing::Point(3, 582);
			this->btb9->Margin = System::Windows::Forms::Padding(3, 28, 3, 3);
			this->btb9->Name = L"btb9";
			this->btb9->Size = System::Drawing::Size(197, 31);
			this->btb9->TabIndex = 0;
			this->btb9->TextChanged += gcnew System::EventHandler(this, &DPAS::textBox6_TextChanged);
			// 
			// DPAS
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(984, 961);
			this->Controls->Add(this->FIFOInElemPanel);
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
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"DPAS";
			this->Text = L"Demand Paging Algorithm Software";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ChoicesPanel->ResumeLayout(false);
			this->FIFOInElemPanel->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
