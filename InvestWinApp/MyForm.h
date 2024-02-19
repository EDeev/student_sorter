#pragma once
#include <iostream>
#include <stdio.h>
#include <fstream>

namespace InvestWinApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form {
		Boolean WindowWrap = 0;
		Point mPoint;

	private: System::Windows::Forms::FlowLayoutPanel^ SysButtons;
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::Button^ expand;
	private: System::Windows::Forms::Button^ wrap;
	private: System::Windows::Forms::TableLayoutPanel^ top_table;
	private: System::Windows::Forms::PictureBox^ main_ico;
	private: System::Windows::Forms::FlowLayoutPanel^ left_panel;
	private: System::Windows::Forms::MenuStrip^ menu;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::DataGridView^ gridTable;










	private: System::Windows::Forms::ToolStripMenuItem^ toolTable;
	private: System::Windows::Forms::ToolStripMenuItem^ обновитьТаблицуToolStripMenuItem;


















	private: System::Windows::Forms::TableLayoutPanel^ right_table;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::FlowLayoutPanel^ buttons;
	private: System::Windows::Forms::Button^ top_btn;
	private: System::Windows::Forms::Button^ after_btn;
	private: System::Windows::Forms::ComboBox^ comboBox;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьАбитуриентаToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ patro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ benefits;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ scores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ trend;
	private: System::Windows::Forms::ToolStripMenuItem^ наОбщежитиеToolStripMenuItem;

































































































































































	private: System::Windows::Forms::TableLayoutPanel^ main_table;

	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			this->main_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->top_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SysButtons = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->close = (gcnew System::Windows::Forms::Button());
			this->expand = (gcnew System::Windows::Forms::Button());
			this->wrap = (gcnew System::Windows::Forms::Button());
			this->left_panel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->main_ico = (gcnew System::Windows::Forms::PictureBox());
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->toolTable = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обновитьТаблицуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьАбитуриентаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->наОбщежитиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->gridTable = (gcnew System::Windows::Forms::DataGridView());
			this->surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->patro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->benefits = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->scores = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->trend = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->right_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->buttons = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->top_btn = (gcnew System::Windows::Forms::Button());
			this->after_btn = (gcnew System::Windows::Forms::Button());
			this->main_table->SuspendLayout();
			this->top_table->SuspendLayout();
			this->SysButtons->SuspendLayout();
			this->left_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_ico))->BeginInit();
			this->menu->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridTable))->BeginInit();
			this->right_table->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->buttons->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_table
			// 
			this->main_table->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->main_table->ColumnCount = 1;
			this->main_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->main_table->Controls->Add(this->top_table, 0, 0);
			this->main_table->Controls->Add(this->tableLayoutPanel1, 0, 1);
			this->main_table->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_table->Location = System::Drawing::Point(0, 0);
			this->main_table->Name = L"main_table";
			this->main_table->RowCount = 2;
			this->main_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->main_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->main_table->Size = System::Drawing::Size(1353, 690);
			this->main_table->TabIndex = 0;
			// 
			// top_table
			// 
			this->top_table->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->top_table->AutoSize = true;
			this->top_table->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->top_table->ColumnCount = 3;
			this->top_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->top_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->top_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->top_table->Controls->Add(this->SysButtons, 2, 0);
			this->top_table->Controls->Add(this->left_panel, 0, 0);
			this->top_table->Location = System::Drawing::Point(3, 3);
			this->top_table->Name = L"top_table";
			this->top_table->RowCount = 1;
			this->top_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->top_table->Size = System::Drawing::Size(1347, 60);
			this->top_table->TabIndex = 5;
			this->top_table->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::moveWindow_MouseDown);
			this->top_table->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::moveWindow_MouseMove);
			// 
			// SysButtons
			// 
			this->SysButtons->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->SysButtons->AutoSize = true;
			this->SysButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->SysButtons->Controls->Add(this->close);
			this->SysButtons->Controls->Add(this->expand);
			this->SysButtons->Controls->Add(this->wrap);
			this->SysButtons->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->SysButtons->Location = System::Drawing::Point(1212, 8);
			this->SysButtons->Name = L"SysButtons";
			this->SysButtons->Size = System::Drawing::Size(132, 44);
			this->SysButtons->TabIndex = 1;
			this->SysButtons->WrapContents = false;
			// 
			// close
			// 
			this->close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->close->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close.Image")));
			this->close->Location = System::Drawing::Point(91, 3);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(38, 38);
			this->close->TabIndex = 0;
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
			// 
			// expand
			// 
			this->expand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->expand->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->expand->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"expand.Image")));
			this->expand->Location = System::Drawing::Point(47, 3);
			this->expand->Name = L"expand";
			this->expand->Size = System::Drawing::Size(38, 38);
			this->expand->TabIndex = 1;
			this->expand->UseVisualStyleBackColor = true;
			this->expand->Click += gcnew System::EventHandler(this, &MyForm::expand_Click);
			// 
			// wrap
			// 
			this->wrap->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wrap->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->wrap->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wrap.Image")));
			this->wrap->Location = System::Drawing::Point(3, 3);
			this->wrap->Name = L"wrap";
			this->wrap->Size = System::Drawing::Size(38, 38);
			this->wrap->TabIndex = 2;
			this->wrap->UseVisualStyleBackColor = true;
			this->wrap->Click += gcnew System::EventHandler(this, &MyForm::wrap_Click);
			// 
			// left_panel
			// 
			this->left_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->left_panel->AutoSize = true;
			this->left_panel->Controls->Add(this->main_ico);
			this->left_panel->Controls->Add(this->menu);
			this->left_panel->Location = System::Drawing::Point(3, 3);
			this->left_panel->Name = L"left_panel";
			this->left_panel->Size = System::Drawing::Size(294, 54);
			this->left_panel->TabIndex = 3;
			this->left_panel->WrapContents = false;
			// 
			// main_ico
			// 
			this->main_ico->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"main_ico.Image")));
			this->main_ico->Location = System::Drawing::Point(3, 3);
			this->main_ico->Name = L"main_ico";
			this->main_ico->Size = System::Drawing::Size(48, 48);
			this->main_ico->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->main_ico->TabIndex = 2;
			this->main_ico->TabStop = false;
			this->main_ico->Click += gcnew System::EventHandler(this, &MyForm::main_ico_Click);
			// 
			// menu
			// 
			this->menu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->menu->Dock = System::Windows::Forms::DockStyle::None;
			this->menu->ImageScalingSize = System::Drawing::Size(40, 40);
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolTable });
			this->menu->Location = System::Drawing::Point(54, 13);
			this->menu->Name = L"menu";
			this->menu->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menu->Size = System::Drawing::Size(240, 28);
			this->menu->TabIndex = 3;
			this->menu->Text = L"menu";
			// 
			// toolTable
			// 
			this->toolTable->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->обновитьТаблицуToolStripMenuItem,
					this->добавитьАбитуриентаToolStripMenuItem, this->наОбщежитиеToolStripMenuItem
			});
			this->toolTable->ForeColor = System::Drawing::Color::White;
			this->toolTable->Name = L"toolTable";
			this->toolTable->Size = System::Drawing::Size(82, 24);
			this->toolTable->Text = L"Таблица";
			// 
			// обновитьТаблицуToolStripMenuItem
			// 
			this->обновитьТаблицуToolStripMenuItem->Name = L"обновитьТаблицуToolStripMenuItem";
			this->обновитьТаблицуToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->обновитьТаблицуToolStripMenuItem->Text = L"Обновить таблицу";
			this->обновитьТаблицуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обновитьТаблицуToolStripMenuItem_Click);
			// 
			// добавитьАбитуриентаToolStripMenuItem
			// 
			this->добавитьАбитуриентаToolStripMenuItem->Name = L"добавитьАбитуриентаToolStripMenuItem";
			this->добавитьАбитуриентаToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->добавитьАбитуриентаToolStripMenuItem->Text = L"Добавить абитуриента";
			this->добавитьАбитуриентаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::добавитьАбитуриентаToolStripMenuItem_Click);
			// 
			// наОбщежитиеToolStripMenuItem
			// 
			this->наОбщежитиеToolStripMenuItem->Name = L"наОбщежитиеToolStripMenuItem";
			this->наОбщежитиеToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->наОбщежитиеToolStripMenuItem->Text = L"На общежитие";
			this->наОбщежитиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::наОбщежитиеToolStripMenuItem_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->gridTable, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->right_table, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 69);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1347, 618);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// gridTable
			// 
			this->gridTable->AllowUserToAddRows = false;
			this->gridTable->AllowUserToDeleteRows = false;
			this->gridTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gridTable->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->gridTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gridTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->surname, this->name,
					this->patro, this->address, this->benefits, this->scores, this->trend
			});
			this->gridTable->EnableHeadersVisualStyles = false;
			this->gridTable->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->gridTable->Location = System::Drawing::Point(3, 3);
			this->gridTable->Name = L"gridTable";
			this->gridTable->ReadOnly = true;
			this->gridTable->RowHeadersVisible = false;
			this->gridTable->RowHeadersWidth = 51;
			this->gridTable->RowTemplate->Height = 24;
			this->gridTable->Size = System::Drawing::Size(885, 612);
			this->gridTable->TabIndex = 0;
			// 
			// surname
			// 
			this->surname->HeaderText = L"Фамилия";
			this->surname->MinimumWidth = 6;
			this->surname->Name = L"surname";
			this->surname->ReadOnly = true;
			this->surname->Width = 125;
			// 
			// name
			// 
			this->name->HeaderText = L"Имя";
			this->name->MinimumWidth = 6;
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 125;
			// 
			// patro
			// 
			this->patro->HeaderText = L"Отчество";
			this->patro->MinimumWidth = 6;
			this->patro->Name = L"patro";
			this->patro->ReadOnly = true;
			this->patro->Width = 125;
			// 
			// address
			// 
			this->address->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->address->HeaderText = L"Адрес";
			this->address->MinimumWidth = 6;
			this->address->Name = L"address";
			this->address->ReadOnly = true;
			// 
			// benefits
			// 
			this->benefits->HeaderText = L"Льгота";
			this->benefits->MinimumWidth = 6;
			this->benefits->Name = L"benefits";
			this->benefits->ReadOnly = true;
			this->benefits->Width = 125;
			// 
			// scores
			// 
			this->scores->HeaderText = L"Баллы ЕГЭ";
			this->scores->MinimumWidth = 6;
			this->scores->Name = L"scores";
			this->scores->ReadOnly = true;
			this->scores->Width = 125;
			// 
			// trend
			// 
			this->trend->HeaderText = L"Направление";
			this->trend->MinimumWidth = 6;
			this->trend->Name = L"trend";
			this->trend->ReadOnly = true;
			this->trend->Width = 125;
			// 
			// right_table
			// 
			this->right_table->ColumnCount = 1;
			this->right_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->right_table->Controls->Add(this->chart, 0, 1);
			this->right_table->Controls->Add(this->buttons, 0, 0);
			this->right_table->Dock = System::Windows::Forms::DockStyle::Fill;
			this->right_table->Location = System::Drawing::Point(894, 3);
			this->right_table->Name = L"right_table";
			this->right_table->RowCount = 2;
			this->right_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->right_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->right_table->Size = System::Drawing::Size(450, 612);
			this->right_table->TabIndex = 1;
			// 
			// chart
			// 
			this->chart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(3, 238);
			this->chart->Name = L"chart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Doughnut;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			dataPoint1->Color = System::Drawing::Color::LawnGreen;
			dataPoint1->Label = L"#PERCENT{P2}";
			dataPoint1->LegendText = L"Льгота";
			dataPoint2->Color = System::Drawing::Color::DeepSkyBlue;
			dataPoint2->Label = L"#PERCENT{P2}";
			dataPoint2->LegendText = L"На общих.";
			series1->Points->Add(dataPoint1);
			series1->Points->Add(dataPoint2);
			this->chart->Series->Add(series1);
			this->chart->Size = System::Drawing::Size(444, 371);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			// 
			// buttons
			// 
			this->buttons->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttons->AutoSize = true;
			this->buttons->Controls->Add(this->comboBox);
			this->buttons->Controls->Add(this->top_btn);
			this->buttons->Controls->Add(this->after_btn);
			this->buttons->Location = System::Drawing::Point(13, 3);
			this->buttons->Name = L"buttons";
			this->buttons->Size = System::Drawing::Size(424, 229);
			this->buttons->TabIndex = 1;
			// 
			// comboBox
			// 
			this->comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Location = System::Drawing::Point(3, 3);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(418, 24);
			this->comboBox->TabIndex = 2;
			this->comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_SelectedIndexChanged);
			// 
			// top_btn
			// 
			this->top_btn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->top_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->top_btn->ForeColor = System::Drawing::Color::White;
			this->top_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top_btn.Image")));
			this->top_btn->Location = System::Drawing::Point(3, 33);
			this->top_btn->Name = L"top_btn";
			this->top_btn->Size = System::Drawing::Size(206, 193);
			this->top_btn->TabIndex = 0;
			this->top_btn->UseVisualStyleBackColor = true;
			this->top_btn->Click += gcnew System::EventHandler(this, &MyForm::top_btn_Click);
			// 
			// after_btn
			// 
			this->after_btn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->after_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->after_btn->ForeColor = System::Drawing::Color::White;
			this->after_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"after_btn.Image")));
			this->after_btn->Location = System::Drawing::Point(215, 33);
			this->after_btn->Name = L"after_btn";
			this->after_btn->Size = System::Drawing::Size(206, 193);
			this->after_btn->TabIndex = 1;
			this->after_btn->UseVisualStyleBackColor = true;
			this->after_btn->Click += gcnew System::EventHandler(this, &MyForm::after_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1353, 690);
			this->Controls->Add(this->main_table);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menu;
			this->MinimumSize = System::Drawing::Size(825, 500);
			this->Name = L"MyForm";
			this->Text = L"Инвестиции";
			this->Closed += gcnew System::EventHandler(this, &MyForm::MyForm_Closed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->main_table->ResumeLayout(false);
			this->main_table->PerformLayout();
			this->top_table->ResumeLayout(false);
			this->top_table->PerformLayout();
			this->SysButtons->ResumeLayout(false);
			this->left_panel->ResumeLayout(false);
			this->left_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_ico))->EndInit();
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridTable))->EndInit();
			this->right_table->ResumeLayout(false);
			this->right_table->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->buttons->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
// отслеживание действий формы
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	main_ico_Click(sender, e);
}
private: System::Void MyForm_Closed(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->ClientSize = System::Drawing::Size(this->PointToClient(MousePosition).X, this->PointToClient(MousePosition).Y);
	}
}

// кнопки взаимодейстия с окном
private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void expand_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TopMost = true;
	if (!WindowWrap) {
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized; WindowWrap = 1;
	} else {
		this->WindowState = System::Windows::Forms::FormWindowState::Normal; WindowWrap = 0;
	}
}
private: System::Void wrap_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TopMost = true;
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}

// передвижения окна по экрану
private: System::Void moveWindow_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	mPoint = Point(e->X, e->Y);
}
private: System::Void moveWindow_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->Location = Point(this->Location.X + e->X - mPoint.X, this->Location.Y + e->Y - mPoint.Y);
	}
}

// обновление таблицы
private: System::Void main_ico_Click(System::Object^ sender, System::EventArgs^ e) {
	Table(sender, e);
}

private: System::Void after_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Applicant^>^ data = ReadWrite::Load<List<Applicant^>^>("applis.dat");

	if (data) {
		int local = 0; int unlocal = 0;
		for (int i = 0; i < data->Count; i++) {
			std::string adr = "";
			MarshalString(data[i]->address, adr);
			adr = adr.substr(0, adr.find(","));

			if (adr == "г. Рязань") local++;
			else unlocal++;
		}

		double perc = (100 / ((double)data->Count)) * unlocal;
		MessageBox::Show("Процент иногородних абитуриентов составил " + perc.ToString()->Substring(0, 4) + "%", "Вывод");
	}
}

private: System::Void top_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Applicant^>^ data = ReadWrite::Load<List<Applicant^>^>("applis.dat");
	List<String^>^ nums = gcnew List<String^>;

	if (data) {
		for (int i = 0; i < data->Count; i++) 
			if (!nums->Contains(data[i]->trend)) nums->Add(data[i]->trend);

		int* nums_i = new int[nums->Count];
		for (int i = 0; i < nums->Count; i++) nums_i[i] = 0;

		for (int i = 0; i < data->Count; i++) 
			for (int j = 0; j < nums->Count; j++)
				if (nums[j] == data[i]->trend) nums_i[j]++;

		for (int i = 0; i < nums->Count; i++) {
			for (int j = 0; j < nums->Count - 1; j++) {
				if (nums_i[j] < nums_i[j + 1]) {
					std::swap(nums_i[j], nums_i[j + 1]);

					String^ buf = nums[j];
					nums[j] = nums[j + 1];
					nums[j + 1] = buf;

				}
			}
		}

		String^ txt = "Перечень направлений по популярности:\n";
		for (int i = 0; i < nums->Count; i++) txt += (i + 1).ToString() + ". " + nums[i] + " в кол-ве " + nums_i[i].ToString() + "\n";

		MessageBox::Show(txt, "Вывод");
	}
}

private: System::Void comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Table(sender, e);
	Chart(sender, e);
}

// самописные функции
private: System::Void Table(System::Object^ sender, System::EventArgs^ e) {
	gridTable->Rows->Clear();
	List<Applicant^>^ data = ReadWrite::Load<List<Applicant^>^>("applis.dat");
	List<String^>^ nums = gcnew List<String^>;

	if (data) {
		for (int i = 0; i < data->Count; i++) {
			if (comboBox->Text == "" || comboBox->Text == data[i]->trend) 
				gridTable->Rows->Add(data[i]->surname, data[i]->name, data[i]->patro,
					data[i]->address, data[i]->benefit, data[i]->score_UGE,
					data[i]->trend);

			if (!nums->Contains(data[i]->trend)) nums->Add(data[i]->trend);
		}

		comboBox->Items->Clear();
		for (int i = 0; i < nums->Count; i++) {
			comboBox->Items->Add(nums[i]);
		}
	}

	Chart(sender, e);
}

private: System::Void Chart(System::Object^ sender, System::EventArgs^ e) {
	List<Applicant^>^ data = ReadWrite::Load<List<Applicant^>^>("applis.dat");

	if (data) {
		int bYes = 0, bNo = 0;

		for (int i = 0; i < data->Count; i++) {
			if (data[i]->benefit == "Нет") bNo++;
			else bYes++;
		}
		double proc = 100 / (double)data->Count;

		auto s1 = chart->Series[0];
		s1->Points->Clear();

		s1->Points->AddY(bYes * proc);
		s1->Points[0]->Color = System::Drawing::Color::LawnGreen;
		s1->Points[0]->Label = L"#PERCENT{P2}";
		s1->Points[0]->LegendText = L"Льгота";

		s1->Points->AddY(bNo * proc);
		s1->Points[1]->Color = System::Drawing::Color::DeepSkyBlue;
		s1->Points[1]->Label = L"#PERCENT{P2}";
		s1->Points[1]->LegendText = L"На общих.";
	}
}

// функции меню
private: System::Void обновитьТаблицуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Table(sender, e);
	MessageBox::Show("Таблица успешно обновлена!", "Таблица");
}

private: System::Void добавитьАбитуриентаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AddApplicant^ prt_data = gcnew AddApplicant();
	prt_data->ShowDialog();

	Table(sender, e);
}
private: System::Void наОбщежитиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	List<Applicant^>^ data = ReadWrite::Load<List<Applicant^>^>("applis.dat");

	if (data) {
		String^ txt = "";
		for (int i = 0; i < data->Count; i++) {
			std::string adr = "";
			MarshalString(data[i]->address, adr);
			adr = adr.substr(0, adr.find(","));

			if (adr != "г. Рязань") {
				txt += data[i]->surname + " " + data[i]->name + " " + data[i]->patro + " " + data[i]->benefit + " " + data[i]->trend + "\n";
			}
		}
		System::IO::File::WriteAllText("stud.txt", txt);
		MessageBox::Show("Файл успешно записан!", "Уведомление");
		system("notepad stud.txt");
	}
}
};
}

