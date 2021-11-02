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
	private: System::Windows::Forms::Panel^ InElemPanel;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ bl0;
	private: System::Windows::Forms::Label^ bl1;
	private: System::Windows::Forms::Label^ bl2;
	private: System::Windows::Forms::Label^ bl3;
	private: System::Windows::Forms::Label^ bl4;
	private: System::Windows::Forms::Label^ bl5;
	private: System::Windows::Forms::Label^ bl6;
	private: System::Windows::Forms::Label^ bl7;
	private: System::Windows::Forms::Label^ bl8;
	private: System::Windows::Forms::Label^ bl9;
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
	private: System::Windows::Forms::Button^ startAlgoButton;

	private: System::Windows::Forms::Label^ Choice;
	private: System::Windows::Forms::NumericUpDown^ numOfProcessNUD;
	private: System::Windows::Forms::NumericUpDown^ numOfBlocksNUD;


	private: System::Windows::Forms::NumericUpDown^ NUDProcessVal0;
	private: System::Windows::Forms::NumericUpDown^ NUDProcessVal1;
	private: System::Windows::Forms::NumericUpDown^ NUDProcessVal2;
	private: System::Windows::Forms::NumericUpDown^ NUDProcessVal3;
	private: System::Windows::Forms::NumericUpDown^ NUDProcessVal4;
	private: System::Windows::Forms::NumericUpDown^ NUDProcessVal5;
	private: System::Windows::Forms::NumericUpDown^ NUDProcessVal6;
	private: System::Windows::Forms::NumericUpDown^ NUDProcessVal7;
	private: System::Windows::Forms::NumericUpDown^ NUDProcessVal8;
	private: System::Windows::Forms::NumericUpDown^ NUDProcessVal9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::NumericUpDown^ NUDBlocksVal0;
	private: System::Windows::Forms::NumericUpDown^ NUDBlocksVal1;
	private: System::Windows::Forms::NumericUpDown^ NUDBlocksVal2;
	private: System::Windows::Forms::NumericUpDown^ NUDBlocksVal3;
	private: System::Windows::Forms::NumericUpDown^ NUDBlocksVal4;
	private: System::Windows::Forms::NumericUpDown^ NUDBlocksVal5;
	private: System::Windows::Forms::NumericUpDown^ NUDBlocksVal6;
	private: System::Windows::Forms::NumericUpDown^ NUDBlocksVal7;
	private: System::Windows::Forms::NumericUpDown^ NUDBlocksVal8;
	private: System::Windows::Forms::NumericUpDown^ NUDBlocksVal9;

		   //--!!--
		  //Array Label Process
	private: array<System::Windows::Forms::Label^>^ processLabel;
	private: array<System::Windows::Forms::Label^>^ blocksLabel;
	private: array<System::Windows::Forms::NumericUpDown^>^ processNUD;
	private: array<System::Windows::Forms::NumericUpDown^>^ blocksNUD;
	private: array<System::Windows::Forms::Label^>^ processListLabel;
	private: array<System::Windows::Forms::Label^>^ processListValuesLabel;
	private: array<System::Windows::Forms::Label^>^ memoryBlockSizeLabel;
	private: array<System::Windows::Forms::Label^>^ processNumberLabel;
	private: array<System::Windows::Forms::Label^>^ processSizeLabel;
	private: array<System::Windows::Forms::Label^>^ statusLabel;
	private: array<System::Windows::Forms::Label^>^ fragmentationLabel;


	private: System::Windows::Forms::Button^ backToMenuButton;
	private: System::Windows::Forms::Panel^ creditsPanel;

	private: System::Windows::Forms::TableLayoutPanel^ processListTablePanel;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TableLayoutPanel^ memoryListTablePanel;

private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::FlowLayoutPanel^ resultPanel;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ ResultToInput;


private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ totalMemoryBlockSizeLabel;
private: System::Windows::Forms::Label^ totalProcessUsedLabel;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
private: System::Windows::Forms::Button^ ResultToMenu;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->InElemPanel = (gcnew System::Windows::Forms::Panel());
			this->resultPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->processListTablePanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->memoryListTablePanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->totalMemoryBlockSizeLabel = (gcnew System::Windows::Forms::Label());
			this->totalProcessUsedLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ResultToInput = (gcnew System::Windows::Forms::Button());
			this->ResultToMenu = (gcnew System::Windows::Forms::Button());
			this->backToMenuButton = (gcnew System::Windows::Forms::Button());
			this->startAlgoButton = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->NUDBlocksVal0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDBlocksVal1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDBlocksVal2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDBlocksVal3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDBlocksVal4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDBlocksVal5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDBlocksVal6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDBlocksVal7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDBlocksVal8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDBlocksVal9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->NUDProcessVal0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDProcessVal1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDProcessVal2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDProcessVal3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDProcessVal4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDProcessVal5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDProcessVal6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDProcessVal7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDProcessVal8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NUDProcessVal9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->bl0 = (gcnew System::Windows::Forms::Label());
			this->bl1 = (gcnew System::Windows::Forms::Label());
			this->bl2 = (gcnew System::Windows::Forms::Label());
			this->bl3 = (gcnew System::Windows::Forms::Label());
			this->bl4 = (gcnew System::Windows::Forms::Label());
			this->bl5 = (gcnew System::Windows::Forms::Label());
			this->bl6 = (gcnew System::Windows::Forms::Label());
			this->bl7 = (gcnew System::Windows::Forms::Label());
			this->bl8 = (gcnew System::Windows::Forms::Label());
			this->bl9 = (gcnew System::Windows::Forms::Label());
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
			this->Choice = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->numOfProcessNUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->numOfBlocksNUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->creditsPanel = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1->SuspendLayout();
			this->ChoicesPanel->SuspendLayout();
			this->InElemPanel->SuspendLayout();
			this->resultPanel->SuspendLayout();
			this->processListTablePanel->SuspendLayout();
			this->memoryListTablePanel->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal9))->BeginInit();
			this->flowLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal9))->BeginInit();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOfProcessNUD))->BeginInit();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOfBlocksNUD))->BeginInit();
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
			this->FIFO->Text = L"FIFO";
			this->FIFO->UseVisualStyleBackColor = true;
			this->FIFO->Click += gcnew System::EventHandler(this, &DPAS::FIFO_Click);
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
			this->BestFit->Click += gcnew System::EventHandler(this, &DPAS::BestFit_Click);
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
			this->Exit->Click += gcnew System::EventHandler(this, &DPAS::Exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 40);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Number of Process";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"4 - 10";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 40);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Number Of Blocks";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 23);
			this->label4->TabIndex = 2;
			this->label4->Text = L"4 - 10";
			// 
			// InElemPanel
			// 
			this->InElemPanel->AutoScroll = true;
			this->InElemPanel->Controls->Add(this->resultPanel);
			this->InElemPanel->Controls->Add(this->backToMenuButton);
			this->InElemPanel->Controls->Add(this->startAlgoButton);
			this->InElemPanel->Controls->Add(this->flowLayoutPanel4);
			this->InElemPanel->Controls->Add(this->flowLayoutPanel3);
			this->InElemPanel->Controls->Add(this->flowLayoutPanel2);
			this->InElemPanel->Controls->Add(this->flowLayoutPanel1);
			this->InElemPanel->Controls->Add(this->tableLayoutPanel2);
			this->InElemPanel->Location = System::Drawing::Point(0, 0);
			this->InElemPanel->Name = L"InElemPanel";
			this->InElemPanel->Size = System::Drawing::Size(984, 961);
			this->InElemPanel->TabIndex = 5;
			this->InElemPanel->Visible = false;
			// 
			// resultPanel
			// 
			this->resultPanel->AutoScroll = true;
			this->resultPanel->Controls->Add(this->processListTablePanel);
			this->resultPanel->Controls->Add(this->memoryListTablePanel);
			this->resultPanel->Controls->Add(this->tableLayoutPanel3);
			this->resultPanel->Controls->Add(this->tableLayoutPanel4);
			this->resultPanel->Location = System::Drawing::Point(0, 0);
			this->resultPanel->Name = L"resultPanel";
			this->resultPanel->Size = System::Drawing::Size(984, 961);
			this->resultPanel->TabIndex = 8;
			this->resultPanel->Visible = false;
			// 
			// processListTablePanel
			// 
			this->processListTablePanel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->processListTablePanel->ColumnCount = 2;
			this->processListTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->processListTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->processListTablePanel->Controls->Add(this->label7, 0, 0);
			this->processListTablePanel->Controls->Add(this->label9, 0, 1);
			this->processListTablePanel->Controls->Add(this->label8, 1, 1);
			this->processListTablePanel->Location = System::Drawing::Point(3, 3);
			this->processListTablePanel->Margin = System::Windows::Forms::Padding(3, 3, 3, 100);
			this->processListTablePanel->Name = L"processListTablePanel";
			this->processListTablePanel->RowCount = 2;
			this->processListTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->processListTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->processListTablePanel->Size = System::Drawing::Size(750, 100);
			this->processListTablePanel->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 20, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(175, 50);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Process List: ";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(3, 53);
			this->label9->Margin = System::Windows::Forms::Padding(3);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(369, 44);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Process Number";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(378, 53);
			this->label8->Margin = System::Windows::Forms::Padding(3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(369, 44);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Memory Requested";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// memoryListTablePanel
			// 
			this->memoryListTablePanel->BackColor = System::Drawing::SystemColors::Info;
			this->memoryListTablePanel->ColumnCount = 5;
			this->memoryListTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->memoryListTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->memoryListTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->memoryListTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->memoryListTablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->memoryListTablePanel->Controls->Add(this->label10, 0, 0);
			this->memoryListTablePanel->Controls->Add(this->label11, 0, 1);
			this->memoryListTablePanel->Controls->Add(this->label12, 1, 1);
			this->memoryListTablePanel->Controls->Add(this->label13, 2, 1);
			this->memoryListTablePanel->Controls->Add(this->label14, 3, 1);
			this->memoryListTablePanel->Controls->Add(this->label15, 4, 1);
			this->memoryListTablePanel->Location = System::Drawing::Point(3, 206);
			this->memoryListTablePanel->Name = L"memoryListTablePanel";
			this->memoryListTablePanel->RowCount = 2;
			this->memoryListTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->memoryListTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->memoryListTablePanel->Size = System::Drawing::Size(981, 100);
			this->memoryListTablePanel->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cambria", 20, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(3, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(176, 50);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Memory List:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(3, 53);
			this->label11->Margin = System::Windows::Forms::Padding(3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(190, 44);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Block #:  Size";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Control;
			this->label12->Location = System::Drawing::Point(199, 53);
			this->label12->Margin = System::Windows::Forms::Padding(3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(190, 44);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Process Number";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Control;
			this->label13->Location = System::Drawing::Point(395, 53);
			this->label13->Margin = System::Windows::Forms::Padding(3);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(190, 44);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Process Size";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Control;
			this->label14->Location = System::Drawing::Point(591, 53);
			this->label14->Margin = System::Windows::Forms::Padding(3);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(190, 44);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Status";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Control;
			this->label15->Location = System::Drawing::Point(787, 53);
			this->label15->Margin = System::Windows::Forms::Padding(3);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(191, 44);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Fragmentation";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40.1631F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				59.8369F)));
			this->tableLayoutPanel3->Controls->Add(this->label16, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label17, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->totalMemoryBlockSizeLabel, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->totalProcessUsedLabel, 1, 1);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 312);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(981, 100);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(388, 50);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Total Memory Block Size: ";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 50);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(388, 50);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Total Process Used: ";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// totalMemoryBlockSizeLabel
			// 
			this->totalMemoryBlockSizeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->totalMemoryBlockSizeLabel->AutoSize = true;
			this->totalMemoryBlockSizeLabel->Location = System::Drawing::Point(397, 0);
			this->totalMemoryBlockSizeLabel->Name = L"totalMemoryBlockSizeLabel";
			this->totalMemoryBlockSizeLabel->Size = System::Drawing::Size(581, 50);
			this->totalMemoryBlockSizeLabel->TabIndex = 1;
			this->totalMemoryBlockSizeLabel->Text = L"Value";
			this->totalMemoryBlockSizeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// totalProcessUsedLabel
			// 
			this->totalProcessUsedLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->totalProcessUsedLabel->AutoSize = true;
			this->totalProcessUsedLabel->Location = System::Drawing::Point(397, 50);
			this->totalProcessUsedLabel->Name = L"totalProcessUsedLabel";
			this->totalProcessUsedLabel->Size = System::Drawing::Size(581, 50);
			this->totalProcessUsedLabel->TabIndex = 1;
			this->totalProcessUsedLabel->Text = L"Value";
			this->totalProcessUsedLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->ResultToInput, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->ResultToMenu, 1, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 418);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(981, 87);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// ResultToInput
			// 
			this->ResultToInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->ResultToInput->Location = System::Drawing::Point(148, 3);
			this->ResultToInput->Name = L"ResultToInput";
			this->ResultToInput->Size = System::Drawing::Size(193, 81);
			this->ResultToInput->TabIndex = 2;
			this->ResultToInput->Text = L"Back";
			this->ResultToInput->UseVisualStyleBackColor = true;
			this->ResultToInput->Click += gcnew System::EventHandler(this, &DPAS::ResultToInput_Click);
			// 
			// ResultToMenu
			// 
			this->ResultToMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->ResultToMenu->Location = System::Drawing::Point(639, 3);
			this->ResultToMenu->Name = L"ResultToMenu";
			this->ResultToMenu->Size = System::Drawing::Size(193, 81);
			this->ResultToMenu->TabIndex = 2;
			this->ResultToMenu->Text = L"Menu";
			this->ResultToMenu->UseVisualStyleBackColor = true;
			this->ResultToMenu->Click += gcnew System::EventHandler(this, &DPAS::ResultToMenu_Click);
			// 
			// backToMenuButton
			// 
			this->backToMenuButton->Location = System::Drawing::Point(263, 845);
			this->backToMenuButton->Name = L"backToMenuButton";
			this->backToMenuButton->Size = System::Drawing::Size(189, 61);
			this->backToMenuButton->TabIndex = 6;
			this->backToMenuButton->Text = L"Back";
			this->backToMenuButton->UseVisualStyleBackColor = true;
			this->backToMenuButton->Click += gcnew System::EventHandler(this, &DPAS::backToMenuButton_Click);
			// 
			// startAlgoButton
			// 
			this->startAlgoButton->Location = System::Drawing::Point(542, 845);
			this->startAlgoButton->Name = L"startAlgoButton";
			this->startAlgoButton->Size = System::Drawing::Size(189, 61);
			this->startAlgoButton->TabIndex = 6;
			this->startAlgoButton->Text = L"Start";
			this->startAlgoButton->UseVisualStyleBackColor = true;
			this->startAlgoButton->Click += gcnew System::EventHandler(this, &DPAS::startAlgoButton_Click);
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->NUDBlocksVal0);
			this->flowLayoutPanel4->Controls->Add(this->NUDBlocksVal1);
			this->flowLayoutPanel4->Controls->Add(this->NUDBlocksVal2);
			this->flowLayoutPanel4->Controls->Add(this->NUDBlocksVal3);
			this->flowLayoutPanel4->Controls->Add(this->NUDBlocksVal4);
			this->flowLayoutPanel4->Controls->Add(this->NUDBlocksVal5);
			this->flowLayoutPanel4->Controls->Add(this->NUDBlocksVal6);
			this->flowLayoutPanel4->Controls->Add(this->NUDBlocksVal7);
			this->flowLayoutPanel4->Controls->Add(this->NUDBlocksVal8);
			this->flowLayoutPanel4->Controls->Add(this->NUDBlocksVal9);
			this->flowLayoutPanel4->Location = System::Drawing::Point(754, 140);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(200, 699);
			this->flowLayoutPanel4->TabIndex = 3;
			// 
			// NUDBlocksVal0
			// 
			this->NUDBlocksVal0->Location = System::Drawing::Point(3, 14);
			this->NUDBlocksVal0->Margin = System::Windows::Forms::Padding(3, 14, 3, 3);
			this->NUDBlocksVal0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDBlocksVal0->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal0->Name = L"NUDBlocksVal0";
			this->NUDBlocksVal0->Size = System::Drawing::Size(197, 31);
			this->NUDBlocksVal0->TabIndex = 0;
			this->NUDBlocksVal0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal0->Visible = false;
			// 
			// NUDBlocksVal1
			// 
			this->NUDBlocksVal1->Location = System::Drawing::Point(3, 78);
			this->NUDBlocksVal1->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->NUDBlocksVal1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDBlocksVal1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal1->Name = L"NUDBlocksVal1";
			this->NUDBlocksVal1->Size = System::Drawing::Size(197, 31);
			this->NUDBlocksVal1->TabIndex = 0;
			this->NUDBlocksVal1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal1->Visible = false;
			// 
			// NUDBlocksVal2
			// 
			this->NUDBlocksVal2->Location = System::Drawing::Point(3, 142);
			this->NUDBlocksVal2->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->NUDBlocksVal2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDBlocksVal2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal2->Name = L"NUDBlocksVal2";
			this->NUDBlocksVal2->Size = System::Drawing::Size(197, 31);
			this->NUDBlocksVal2->TabIndex = 0;
			this->NUDBlocksVal2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal2->Visible = false;
			// 
			// NUDBlocksVal3
			// 
			this->NUDBlocksVal3->Location = System::Drawing::Point(3, 206);
			this->NUDBlocksVal3->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->NUDBlocksVal3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDBlocksVal3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal3->Name = L"NUDBlocksVal3";
			this->NUDBlocksVal3->Size = System::Drawing::Size(197, 31);
			this->NUDBlocksVal3->TabIndex = 0;
			this->NUDBlocksVal3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal3->Visible = false;
			// 
			// NUDBlocksVal4
			// 
			this->NUDBlocksVal4->Location = System::Drawing::Point(3, 270);
			this->NUDBlocksVal4->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->NUDBlocksVal4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDBlocksVal4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal4->Name = L"NUDBlocksVal4";
			this->NUDBlocksVal4->Size = System::Drawing::Size(197, 31);
			this->NUDBlocksVal4->TabIndex = 0;
			this->NUDBlocksVal4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal4->Visible = false;
			// 
			// NUDBlocksVal5
			// 
			this->NUDBlocksVal5->Location = System::Drawing::Point(3, 334);
			this->NUDBlocksVal5->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->NUDBlocksVal5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDBlocksVal5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal5->Name = L"NUDBlocksVal5";
			this->NUDBlocksVal5->Size = System::Drawing::Size(197, 31);
			this->NUDBlocksVal5->TabIndex = 0;
			this->NUDBlocksVal5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal5->Visible = false;
			// 
			// NUDBlocksVal6
			// 
			this->NUDBlocksVal6->Location = System::Drawing::Point(3, 397);
			this->NUDBlocksVal6->Margin = System::Windows::Forms::Padding(3, 29, 3, 3);
			this->NUDBlocksVal6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDBlocksVal6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal6->Name = L"NUDBlocksVal6";
			this->NUDBlocksVal6->Size = System::Drawing::Size(197, 31);
			this->NUDBlocksVal6->TabIndex = 0;
			this->NUDBlocksVal6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal6->Visible = false;
			// 
			// NUDBlocksVal7
			// 
			this->NUDBlocksVal7->Location = System::Drawing::Point(3, 460);
			this->NUDBlocksVal7->Margin = System::Windows::Forms::Padding(3, 29, 3, 3);
			this->NUDBlocksVal7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDBlocksVal7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal7->Name = L"NUDBlocksVal7";
			this->NUDBlocksVal7->Size = System::Drawing::Size(197, 31);
			this->NUDBlocksVal7->TabIndex = 0;
			this->NUDBlocksVal7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal7->Visible = false;
			// 
			// NUDBlocksVal8
			// 
			this->NUDBlocksVal8->Location = System::Drawing::Point(3, 523);
			this->NUDBlocksVal8->Margin = System::Windows::Forms::Padding(3, 29, 3, 3);
			this->NUDBlocksVal8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDBlocksVal8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal8->Name = L"NUDBlocksVal8";
			this->NUDBlocksVal8->Size = System::Drawing::Size(197, 31);
			this->NUDBlocksVal8->TabIndex = 0;
			this->NUDBlocksVal8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal8->Visible = false;
			// 
			// NUDBlocksVal9
			// 
			this->NUDBlocksVal9->Location = System::Drawing::Point(3, 586);
			this->NUDBlocksVal9->Margin = System::Windows::Forms::Padding(3, 29, 3, 3);
			this->NUDBlocksVal9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDBlocksVal9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal9->Name = L"NUDBlocksVal9";
			this->NUDBlocksVal9->Size = System::Drawing::Size(197, 31);
			this->NUDBlocksVal9->TabIndex = 0;
			this->NUDBlocksVal9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDBlocksVal9->Visible = false;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->NUDProcessVal0);
			this->flowLayoutPanel3->Controls->Add(this->NUDProcessVal1);
			this->flowLayoutPanel3->Controls->Add(this->NUDProcessVal2);
			this->flowLayoutPanel3->Controls->Add(this->NUDProcessVal3);
			this->flowLayoutPanel3->Controls->Add(this->NUDProcessVal4);
			this->flowLayoutPanel3->Controls->Add(this->NUDProcessVal5);
			this->flowLayoutPanel3->Controls->Add(this->NUDProcessVal6);
			this->flowLayoutPanel3->Controls->Add(this->NUDProcessVal7);
			this->flowLayoutPanel3->Controls->Add(this->NUDProcessVal8);
			this->flowLayoutPanel3->Controls->Add(this->NUDProcessVal9);
			this->flowLayoutPanel3->Location = System::Drawing::Point(263, 140);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(200, 699);
			this->flowLayoutPanel3->TabIndex = 3;
			// 
			// NUDProcessVal0
			// 
			this->NUDProcessVal0->Location = System::Drawing::Point(3, 14);
			this->NUDProcessVal0->Margin = System::Windows::Forms::Padding(3, 14, 3, 3);
			this->NUDProcessVal0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDProcessVal0->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal0->Name = L"NUDProcessVal0";
			this->NUDProcessVal0->Size = System::Drawing::Size(197, 31);
			this->NUDProcessVal0->TabIndex = 0;
			this->NUDProcessVal0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal0->Visible = false;
			// 
			// NUDProcessVal1
			// 
			this->NUDProcessVal1->Location = System::Drawing::Point(3, 78);
			this->NUDProcessVal1->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->NUDProcessVal1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDProcessVal1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal1->Name = L"NUDProcessVal1";
			this->NUDProcessVal1->Size = System::Drawing::Size(197, 31);
			this->NUDProcessVal1->TabIndex = 0;
			this->NUDProcessVal1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal1->Visible = false;
			// 
			// NUDProcessVal2
			// 
			this->NUDProcessVal2->Location = System::Drawing::Point(3, 142);
			this->NUDProcessVal2->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->NUDProcessVal2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDProcessVal2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal2->Name = L"NUDProcessVal2";
			this->NUDProcessVal2->Size = System::Drawing::Size(197, 31);
			this->NUDProcessVal2->TabIndex = 0;
			this->NUDProcessVal2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal2->Visible = false;
			// 
			// NUDProcessVal3
			// 
			this->NUDProcessVal3->Location = System::Drawing::Point(3, 206);
			this->NUDProcessVal3->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->NUDProcessVal3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDProcessVal3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal3->Name = L"NUDProcessVal3";
			this->NUDProcessVal3->Size = System::Drawing::Size(197, 31);
			this->NUDProcessVal3->TabIndex = 0;
			this->NUDProcessVal3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal3->Visible = false;
			// 
			// NUDProcessVal4
			// 
			this->NUDProcessVal4->Location = System::Drawing::Point(3, 270);
			this->NUDProcessVal4->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->NUDProcessVal4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDProcessVal4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal4->Name = L"NUDProcessVal4";
			this->NUDProcessVal4->Size = System::Drawing::Size(197, 31);
			this->NUDProcessVal4->TabIndex = 0;
			this->NUDProcessVal4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal4->Visible = false;
			// 
			// NUDProcessVal5
			// 
			this->NUDProcessVal5->Location = System::Drawing::Point(3, 334);
			this->NUDProcessVal5->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->NUDProcessVal5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDProcessVal5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal5->Name = L"NUDProcessVal5";
			this->NUDProcessVal5->Size = System::Drawing::Size(197, 31);
			this->NUDProcessVal5->TabIndex = 0;
			this->NUDProcessVal5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal5->Visible = false;
			// 
			// NUDProcessVal6
			// 
			this->NUDProcessVal6->Location = System::Drawing::Point(3, 397);
			this->NUDProcessVal6->Margin = System::Windows::Forms::Padding(3, 29, 3, 3);
			this->NUDProcessVal6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDProcessVal6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal6->Name = L"NUDProcessVal6";
			this->NUDProcessVal6->Size = System::Drawing::Size(197, 31);
			this->NUDProcessVal6->TabIndex = 0;
			this->NUDProcessVal6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal6->Visible = false;
			// 
			// NUDProcessVal7
			// 
			this->NUDProcessVal7->Location = System::Drawing::Point(3, 460);
			this->NUDProcessVal7->Margin = System::Windows::Forms::Padding(3, 29, 3, 3);
			this->NUDProcessVal7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDProcessVal7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal7->Name = L"NUDProcessVal7";
			this->NUDProcessVal7->Size = System::Drawing::Size(197, 31);
			this->NUDProcessVal7->TabIndex = 0;
			this->NUDProcessVal7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal7->Visible = false;
			// 
			// NUDProcessVal8
			// 
			this->NUDProcessVal8->Location = System::Drawing::Point(3, 523);
			this->NUDProcessVal8->Margin = System::Windows::Forms::Padding(3, 29, 3, 3);
			this->NUDProcessVal8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDProcessVal8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal8->Name = L"NUDProcessVal8";
			this->NUDProcessVal8->Size = System::Drawing::Size(197, 31);
			this->NUDProcessVal8->TabIndex = 0;
			this->NUDProcessVal8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal8->Visible = false;
			// 
			// NUDProcessVal9
			// 
			this->NUDProcessVal9->Location = System::Drawing::Point(3, 586);
			this->NUDProcessVal9->Margin = System::Windows::Forms::Padding(3, 29, 3, 3);
			this->NUDProcessVal9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->NUDProcessVal9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal9->Name = L"NUDProcessVal9";
			this->NUDProcessVal9->Size = System::Drawing::Size(197, 31);
			this->NUDProcessVal9->TabIndex = 0;
			this->NUDProcessVal9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NUDProcessVal9->Visible = false;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->bl0);
			this->flowLayoutPanel2->Controls->Add(this->bl1);
			this->flowLayoutPanel2->Controls->Add(this->bl2);
			this->flowLayoutPanel2->Controls->Add(this->bl3);
			this->flowLayoutPanel2->Controls->Add(this->bl4);
			this->flowLayoutPanel2->Controls->Add(this->bl5);
			this->flowLayoutPanel2->Controls->Add(this->bl6);
			this->flowLayoutPanel2->Controls->Add(this->bl7);
			this->flowLayoutPanel2->Controls->Add(this->bl8);
			this->flowLayoutPanel2->Controls->Add(this->bl9);
			this->flowLayoutPanel2->Location = System::Drawing::Point(532, 140);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(199, 699);
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
			this->bl0->Visible = false;
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
			this->bl1->Visible = false;
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
			this->bl2->Visible = false;
			// 
			// bl3
			// 
			this->bl3->AutoSize = true;
			this->bl3->BackColor = System::Drawing::Color::Transparent;
			this->bl3->Location = System::Drawing::Point(3, 189);
			this->bl3->Name = L"bl3";
			this->bl3->Padding = System::Windows::Forms::Padding(20);
			this->bl3->Size = System::Drawing::Size(181, 63);
			this->bl3->TabIndex = 3;
			this->bl3->Text = L"Blocks List #4:";
			this->bl3->Visible = false;
			// 
			// bl4
			// 
			this->bl4->AutoSize = true;
			this->bl4->BackColor = System::Drawing::Color::Transparent;
			this->bl4->Location = System::Drawing::Point(3, 252);
			this->bl4->Name = L"bl4";
			this->bl4->Padding = System::Windows::Forms::Padding(20);
			this->bl4->Size = System::Drawing::Size(181, 63);
			this->bl4->TabIndex = 3;
			this->bl4->Text = L"Blocks List #5:";
			this->bl4->Visible = false;
			// 
			// bl5
			// 
			this->bl5->AutoSize = true;
			this->bl5->BackColor = System::Drawing::Color::Transparent;
			this->bl5->Location = System::Drawing::Point(3, 315);
			this->bl5->Name = L"bl5";
			this->bl5->Padding = System::Windows::Forms::Padding(20);
			this->bl5->Size = System::Drawing::Size(181, 63);
			this->bl5->TabIndex = 3;
			this->bl5->Text = L"Blocks List #6:";
			this->bl5->Visible = false;
			// 
			// bl6
			// 
			this->bl6->AutoSize = true;
			this->bl6->BackColor = System::Drawing::Color::Transparent;
			this->bl6->Location = System::Drawing::Point(3, 378);
			this->bl6->Name = L"bl6";
			this->bl6->Padding = System::Windows::Forms::Padding(20);
			this->bl6->Size = System::Drawing::Size(181, 63);
			this->bl6->TabIndex = 3;
			this->bl6->Text = L"Blocks List #7:";
			this->bl6->Visible = false;
			// 
			// bl7
			// 
			this->bl7->AutoSize = true;
			this->bl7->BackColor = System::Drawing::Color::Transparent;
			this->bl7->Location = System::Drawing::Point(3, 441);
			this->bl7->Name = L"bl7";
			this->bl7->Padding = System::Windows::Forms::Padding(20);
			this->bl7->Size = System::Drawing::Size(181, 63);
			this->bl7->TabIndex = 3;
			this->bl7->Text = L"Blocks List #8:";
			this->bl7->Visible = false;
			// 
			// bl8
			// 
			this->bl8->AutoSize = true;
			this->bl8->BackColor = System::Drawing::Color::Transparent;
			this->bl8->Location = System::Drawing::Point(3, 504);
			this->bl8->Name = L"bl8";
			this->bl8->Padding = System::Windows::Forms::Padding(20);
			this->bl8->Size = System::Drawing::Size(181, 63);
			this->bl8->TabIndex = 3;
			this->bl8->Text = L"Blocks List #9:";
			this->bl8->Visible = false;
			// 
			// bl9
			// 
			this->bl9->AutoSize = true;
			this->bl9->BackColor = System::Drawing::Color::Transparent;
			this->bl9->Location = System::Drawing::Point(3, 567);
			this->bl9->Name = L"bl9";
			this->bl9->Padding = System::Windows::Forms::Padding(20);
			this->bl9->Size = System::Drawing::Size(193, 63);
			this->bl9->TabIndex = 3;
			this->bl9->Text = L"Blocks List #10:";
			this->bl9->Visible = false;
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
			this->pl0->Visible = false;
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
			this->pl1->Visible = false;
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
			this->pl2->Visible = false;
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
			this->pl3->Visible = false;
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
			this->pl4->Visible = false;
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
			this->pl5->Visible = false;
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
			this->pl6->Visible = false;
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
			this->pl7->Visible = false;
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
			this->pl8->Visible = false;
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
			this->pl9->Visible = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				46.17647F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				53.82353F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				303)));
			this->tableLayoutPanel2->Controls->Add(this->Choice, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel5, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel7, 2, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(984, 134);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// Choice
			// 
			this->Choice->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Choice->AutoSize = true;
			this->Choice->Font = (gcnew System::Drawing::Font(L"Cambria", 20, System::Drawing::FontStyle::Bold));
			this->Choice->Location = System::Drawing::Point(449, 51);
			this->Choice->Name = L"Choice";
			this->Choice->Size = System::Drawing::Size(96, 32);
			this->Choice->TabIndex = 1;
			this->Choice->Text = L"Choice";
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel6, 1, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(308, 128);
			this->tableLayoutPanel5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 23);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Process List:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->numOfProcessNUD, 0, 2);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(157, 3);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 3;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(148, 122);
			this->tableLayoutPanel6->TabIndex = 1;
			// 
			// numOfProcessNUD
			// 
			this->numOfProcessNUD->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numOfProcessNUD->Location = System::Drawing::Point(3, 83);
			this->numOfProcessNUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numOfProcessNUD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numOfProcessNUD->Name = L"numOfProcessNUD";
			this->numOfProcessNUD->Size = System::Drawing::Size(84, 27);
			this->numOfProcessNUD->TabIndex = 7;
			this->numOfProcessNUD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numOfProcessNUD->ValueChanged += gcnew System::EventHandler(this, &DPAS::numOfProcess_Changed);
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->Controls->Add(this->label6, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel8, 1, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(683, 3);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(298, 128);
			this->tableLayoutPanel7->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 52);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 23);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Blocks List:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 1;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel8->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->label4, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->numOfBlocksNUD, 0, 2);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(152, 3);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 3;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(143, 122);
			this->tableLayoutPanel8->TabIndex = 1;
			// 
			// numOfBlocksNUD
			// 
			this->numOfBlocksNUD->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numOfBlocksNUD->Location = System::Drawing::Point(3, 83);
			this->numOfBlocksNUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numOfBlocksNUD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numOfBlocksNUD->Name = L"numOfBlocksNUD";
			this->numOfBlocksNUD->Size = System::Drawing::Size(84, 27);
			this->numOfBlocksNUD->TabIndex = 7;
			this->numOfBlocksNUD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numOfBlocksNUD->ValueChanged += gcnew System::EventHandler(this, &DPAS::numOfBlocks_Changed);
			// 
			// creditsPanel
			// 
			this->creditsPanel->Location = System::Drawing::Point(456, 803);
			this->creditsPanel->Name = L"creditsPanel";
			this->creditsPanel->Size = System::Drawing::Size(224, 158);
			this->creditsPanel->TabIndex = 8;
			this->creditsPanel->Visible = false;
			// 
			// DPAS
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(984, 961);
			this->Controls->Add(this->InElemPanel);
			this->Controls->Add(this->creditsPanel);
			this->Controls->Add(this->ChoicesPanel);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"DPAS";
			this->Text = L"Demand Paging Algorithm Software";
			this->Load += gcnew System::EventHandler(this, &DPAS::DPAS_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ChoicesPanel->ResumeLayout(false);
			this->InElemPanel->ResumeLayout(false);
			this->resultPanel->ResumeLayout(false);
			this->processListTablePanel->ResumeLayout(false);
			this->processListTablePanel->PerformLayout();
			this->memoryListTablePanel->ResumeLayout(false);
			this->memoryListTablePanel->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDBlocksVal9))->EndInit();
			this->flowLayoutPanel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NUDProcessVal9))->EndInit();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOfProcessNUD))->EndInit();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOfBlocksNUD))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		ref class intAr {
		public:
			int ind;
		};

		ref class boolAr {
		public:
			bool ind;
		};

		//FIFO Chosen
	private: System::Void FIFO_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Choice->Text = "FIFO";
		this->InElemPanel->Visible = true;
		for (int i = 0; i < this->numOfProcessNUD->Value; ++i) {
			this->processLabel[i]->Visible = true;
			this->processNUD[i]->Visible = true;
		}
		for (int i = 0; i < this->numOfBlocksNUD->Value; ++i) {
			this->blocksLabel[i]->Visible = true;
			this->blocksNUD[i]->Visible = true;
		}
	}
		   //Best Fit Chosen
	private: System::Void BestFit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Choice->Text = "Best Fit";
		this->InElemPanel->Visible = true;
		for (int i = 0; i < this->numOfProcessNUD->Value; ++i) {
			this->processLabel[i]->Visible = true;
			this->processNUD[i]->Visible = true;
		}
		for (int i = 0; i < this->numOfBlocksNUD->Value; ++i) {
			this->blocksLabel[i]->Visible = true;
			this->blocksNUD[i]->Visible = true;
		}
	}
	private: System::Void numOfProcess_Changed(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < 10; ++i) {
			this->processLabel[i]->Visible = false;
			this->processNUD[i]->Visible = false;
		}
		for (int i = 0; i < this->numOfProcessNUD->Value; ++i) {
			this->processLabel[i]->Visible = true;
			this->processNUD[i]->Visible = true;
		}
	}
	private: System::Void numOfBlocks_Changed(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < 10; ++i) {
			this->blocksLabel[i]->Visible = false;
			this->blocksNUD[i]->Visible = false;
		}
		for (int i = 0; i < this->numOfBlocksNUD->Value; ++i) {
			this->blocksLabel[i]->Visible = true;
			this->blocksNUD[i]->Visible = true;
		}
	}
	private: System::Void backToMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->InElemPanel->Visible = false;
		//Close all Label
		for (int i = 0; i < 10; ++i) {
			this->processLabel[i]->Visible = false;
			this->processNUD[i]->Visible = false;
			this->blocksLabel[i]->Visible = false;
			this->blocksNUD[i]->Visible = false;
		}
	}
	private: System::Void startAlgoButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int numOfProcess = (int)this->numOfProcessNUD->Value;

		this->processListTablePanel->RowCount = 2 + numOfProcess;
		this->processListTablePanel->Size = System::Drawing::Size(750, 50 * this->processListTablePanel->RowCount);

		this->processListValuesLabel = gcnew array<System::Windows::Forms::Label^>(numOfProcess);
		this->processListLabel = gcnew array<System::Windows::Forms::Label^>(numOfProcess);
		for (int i = 0; i < numOfProcess; ++i) {
			this->processListLabel[i] = gcnew System::Windows::Forms::Label();
			this->processListValuesLabel[i]= gcnew System::Windows::Forms::Label();
			this->processListTablePanel->Controls->Add(this->processListLabel[i], 0, 2 + i);
			this->processListTablePanel->Controls->Add(this->processListValuesLabel[i], 1, 2 + i);
			this->processListTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->processListLabel[i]->Text = "Process #" + (i + 1).ToString();
			this->processListLabel[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)));
			this->processListLabel[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->processListLabel[i]->Size = System::Drawing::Size(200, 50);
			this->processListLabel[i]->Margin = System::Windows::Forms::Padding(3);
			this->processListLabel[i]->Dock = System::Windows::Forms::DockStyle::Fill;
			this->processListLabel[i]->BackColor = System::Drawing::SystemColors::Control;

			this->processListValuesLabel[i]->Text = this->processNUD[i]->Value.ToString();
			this->processListValuesLabel[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)));
			this->processListValuesLabel[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->processListValuesLabel[i]->Size = System::Drawing::Size(200, 50);
			this->processListValuesLabel[i]->Margin = System::Windows::Forms::Padding(3);
			this->processListValuesLabel[i]->Dock = System::Windows::Forms::DockStyle::Fill;
			this->processListValuesLabel[i]->BackColor = System::Drawing::SystemColors::Control;
		}

		int numOfBlocks = (int)this->numOfBlocksNUD->Value;
		
		this->memoryListTablePanel->RowCount = 2 + numOfBlocks;
		this->memoryListTablePanel->Size = System::Drawing::Size(981, 50 * this->processListTablePanel->RowCount);
		
		String^ decision = this->Choice->Text;
		if (decision == "FIFO") {
			doFIFO();
		}
		else {
			doBF();
		}

		this->resultPanel->Visible = true;
	}


	private: void doFIFO() {
		int totalMemoryBlockSize = 0;
		int totalProcessUsed = 0;
		int processSize = (int)this->numOfProcessNUD->Value;
		int blockSize = (int)this->numOfBlocksNUD->Value;
		array<intAr^>^ process = gcnew array<intAr^>(processSize);
		for (int i = 0; i < processSize; ++i) {
			process[i] = gcnew intAr;
			process[i]->ind = (int)this->processNUD[i]->Value;
		}
		array<intAr^>^ blocks = gcnew array<intAr^>(blockSize);
		for (int i = 0; i < blockSize; ++i) {
			blocks[i] = gcnew intAr;
			blocks[i]->ind = (int)this->blocksNUD[i]->Value;
		}
		array<intAr^>^ blocksIndex = gcnew array<intAr^>(blockSize);
		for (int i = 0; i < blockSize; ++i) {
			blocksIndex[i] = gcnew intAr;
		}
		array<boolAr^>^ blocksAvailable = gcnew array<boolAr^>(blockSize);
		for (int i = 0; i < blockSize; ++i) {
			blocksAvailable[i] = gcnew boolAr;
			blocksAvailable[i]->ind = true;
		}
		for (int i = 0; i < processSize; ++i) {
			for (int j = 0; j < blockSize; ++j) {
				if (blocksAvailable[j]->ind) {
					if (process[i]->ind <= blocks[j]->ind) {
						blocksAvailable[j]->ind = false;
						blocksIndex[j]->ind = i;
						break;
					}
				}
			}
		}

		this->memoryBlockSizeLabel = gcnew array<System::Windows::Forms::Label^>(blockSize);
		this->processNumberLabel = gcnew array<System::Windows::Forms::Label^>(blockSize);
		this->processSizeLabel = gcnew array<System::Windows::Forms::Label^>(blockSize);
		this->statusLabel = gcnew array<System::Windows::Forms::Label^>(blockSize);
		this->fragmentationLabel = gcnew array<System::Windows::Forms::Label^>(blockSize);
		for (int i = 0; i < blockSize; ++i) {
			//totalMemoryBlockSize += blocks[i]->ind;
			this->memoryListTablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));

			//Memory Block
			this->memoryBlockSizeLabel[i] = gcnew System::Windows::Forms::Label();
			this->memoryListTablePanel->Controls->Add(this->memoryBlockSizeLabel[i], 0, 2 + i);
			this->memoryBlockSizeLabel[i]->Text = "B" + (i + 1) + ": " + blocks[i]->ind;
			this->memoryBlockSizeLabel[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)));
			this->memoryBlockSizeLabel[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->memoryBlockSizeLabel[i]->Size = System::Drawing::Size(200, 50);
			this->memoryBlockSizeLabel[i]->Margin = System::Windows::Forms::Padding(3);
			this->memoryBlockSizeLabel[i]->Dock = System::Windows::Forms::DockStyle::Fill;
			this->memoryBlockSizeLabel[i]->BackColor = System::Drawing::SystemColors::Control;

			//Process Number
			this->processNumberLabel[i] = gcnew System::Windows::Forms::Label();
			this->memoryListTablePanel->Controls->Add(this->processNumberLabel[i], 1, 2 + i);
			/*if (blocksAvailable[i]->ind) {
				this->processNumberLabel[i]->Text = "None";
			}
			else {
				this->processNumberLabel[i]->Text = "Process #" + (blocksIndex[i]->ind + 1);
			}*/
			this->processNumberLabel[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)));
			this->processNumberLabel[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->processNumberLabel[i]->Size = System::Drawing::Size(200, 50);
			this->processNumberLabel[i]->Margin = System::Windows::Forms::Padding(3);
			this->processNumberLabel[i]->Dock = System::Windows::Forms::DockStyle::Fill;
			this->processNumberLabel[i]->BackColor = System::Drawing::SystemColors::Control;

			//Process Size
			this->processSizeLabel[i] = gcnew System::Windows::Forms::Label();
			this->memoryListTablePanel->Controls->Add(this->processSizeLabel[i], 2, 2 + i);
			/*if (blocksAvailable[i]->ind) {
				this->processSizeLabel[i]->Text = "None";
			}
			else {
				this->processSizeLabel[i]->Text = process[blocksIndex[i]->ind]->ind + " ";
			}*/
			this->processSizeLabel[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)));
			this->processSizeLabel[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->processSizeLabel[i]->Size = System::Drawing::Size(200, 50);
			this->processSizeLabel[i]->Margin = System::Windows::Forms::Padding(3);
			this->processSizeLabel[i]->Dock = System::Windows::Forms::DockStyle::Fill;
			this->processSizeLabel[i]->BackColor = System::Drawing::SystemColors::Control;

			//Status
			this->statusLabel[i] = gcnew System::Windows::Forms::Label();
			this->memoryListTablePanel->Controls->Add(this->statusLabel[i], 3, 2 + i);
			/*if (blocksAvailable[i]->ind) {
				this->statusLabel[i]->Text = "Free";
				this->statusLabel[i]->ForeColor = System::Drawing::Color::Green;
			}
			else {
				this->statusLabel[i]->Text = "Busy";
				this->statusLabel[i]->ForeColor = System::Drawing::Color::Red;
			}*/
			this->statusLabel[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)));
			this->statusLabel[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->statusLabel[i]->Size = System::Drawing::Size(200, 50);
			this->statusLabel[i]->Margin = System::Windows::Forms::Padding(3);
			this->statusLabel[i]->Dock = System::Windows::Forms::DockStyle::Fill;
			this->statusLabel[i]->BackColor = System::Drawing::SystemColors::Control;
			

			//Fragmentation
			this->fragmentationLabel[i] = gcnew System::Windows::Forms::Label();
			this->memoryListTablePanel->Controls->Add(this->fragmentationLabel[i], 4, 2 + i);
			/*if (blocksAvailable[i]->ind) {
				this->fragmentationLabel[i]->Text = "None";
			}
			else {
				this->fragmentationLabel[i]->Text = blocks[i]->ind - process[blocksIndex[i]->ind]->ind + " ";
			}*/
			this->fragmentationLabel[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)));
			this->fragmentationLabel[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->fragmentationLabel[i]->Size = System::Drawing::Size(200, 50);
			this->fragmentationLabel[i]->Margin = System::Windows::Forms::Padding(3);
			this->fragmentationLabel[i]->Dock = System::Windows::Forms::DockStyle::Fill;
			this->fragmentationLabel[i]->BackColor = System::Drawing::SystemColors::Control;

			//--Combined if else
			if (blocksAvailable[i]->ind) {
				this->processNumberLabel[i]->Text = "None";
				this->processSizeLabel[i]->Text = "None";
				this->statusLabel[i]->Text = "Free";
				this->statusLabel[i]->ForeColor = System::Drawing::Color::Green;
				this->fragmentationLabel[i]->Text = "None";

			}
			else {
				//totalProcessUsed += process[blocksIndex[i]->ind]->ind;
				this->processNumberLabel[i]->Text = "Process #" + (blocksIndex[i]->ind + 1);
				this->processSizeLabel[i]->Text = process[blocksIndex[i]->ind]->ind + " ";
				this->statusLabel[i]->Text = "Busy";
				this->statusLabel[i]->ForeColor = System::Drawing::Color::Red;
				this->fragmentationLabel[i]->Text = blocks[i]->ind - process[blocksIndex[i]->ind]->ind + " ";
			}
		}
		//this->totalMemoryBlockSizeLabel->Text = totalMemoryBlockSize + " ";
		//this->totalProcessUsedLabel->Text = totalProcessUsed + " ";
	}

	private: void doBF() {

	}

	private: System::Void ResultToInput_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resultPanel->Visible = false;
	}
	private: System::Void ResultToMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resultPanel->Visible = false;
		this->InElemPanel->Visible = false;
	}
	//Exit the Software
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Are you sure you want to exit the program?", "Notice", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
		
	}

	private: System::Void DPAS_Load(System::Object^ sender, System::EventArgs^ e) {
		this->processLabel = gcnew array<System::Windows::Forms::Label^>(10);
		this->processLabel[0] = this->pl0;
		this->processLabel[1] = this->pl1;
		this->processLabel[2] = this->pl2;
		this->processLabel[3] = this->pl3;
		this->processLabel[4] = this->pl4;
		this->processLabel[5] = this->pl5;
		this->processLabel[6] = this->pl6;
		this->processLabel[7] = this->pl7;
		this->processLabel[8] = this->pl8;
		this->processLabel[9] = this->pl9;

		this->blocksLabel = gcnew array<System::Windows::Forms::Label^>(10);
		this->blocksLabel[0] = this->bl0;
		this->blocksLabel[1] = this->bl1;
		this->blocksLabel[2] = this->bl2;
		this->blocksLabel[3] = this->bl3;
		this->blocksLabel[4] = this->bl4;
		this->blocksLabel[5] = this->bl5;
		this->blocksLabel[6] = this->bl6;
		this->blocksLabel[7] = this->bl7;
		this->blocksLabel[8] = this->bl8;
		this->blocksLabel[9] = this->bl9;

		this->processNUD = gcnew array<System::Windows::Forms::NumericUpDown^>(10);
		this->processNUD[0] = this->NUDProcessVal0;
		this->processNUD[1] = this->NUDProcessVal1;
		this->processNUD[2] = this->NUDProcessVal2;
		this->processNUD[3] = this->NUDProcessVal3;
		this->processNUD[4] = this->NUDProcessVal4;
		this->processNUD[5] = this->NUDProcessVal5;
		this->processNUD[6] = this->NUDProcessVal6;
		this->processNUD[7] = this->NUDProcessVal7;
		this->processNUD[8] = this->NUDProcessVal8;
		this->processNUD[9] = this->NUDProcessVal9;

		this->blocksNUD = gcnew array<System::Windows::Forms::NumericUpDown^>(10);
		this->blocksNUD[0] = this->NUDBlocksVal0;
		this->blocksNUD[1] = this->NUDBlocksVal1;
		this->blocksNUD[2] = this->NUDBlocksVal2;
		this->blocksNUD[3] = this->NUDBlocksVal3;
		this->blocksNUD[4] = this->NUDBlocksVal4;
		this->blocksNUD[5] = this->NUDBlocksVal5;
		this->blocksNUD[6] = this->NUDBlocksVal6;
		this->blocksNUD[7] = this->NUDBlocksVal7;
		this->blocksNUD[8] = this->NUDBlocksVal8;
		this->blocksNUD[9] = this->NUDBlocksVal9;
	}
};
}
