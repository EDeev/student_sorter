#pragma once

namespace InvestWinApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddApplicant
	/// </summary>
	public ref class AddApplicant : public System::Windows::Forms::Form
	{
	public:
		AddApplicant(void)
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
		~AddApplicant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ main_table;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ data_table;
	private: System::Windows::Forms::Label^ label2;






	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ addressBox;
	private: System::Windows::Forms::TextBox^ scoreBox;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::TextBox^ sernameBox;
	private: System::Windows::Forms::TextBox^ nameBox;
	private: System::Windows::Forms::TextBox^ parBox;






	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::TextBox^ trendBox;


	private: System::Windows::Forms::FlowLayoutPanel^ flow_benefit;
	private: System::Windows::Forms::RadioButton^ benefitNo;
	private: System::Windows::Forms::TextBox^ benefitYes;




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
			this->main_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->data_table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->scoreBox = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->sernameBox = (gcnew System::Windows::Forms::TextBox());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->parBox = (gcnew System::Windows::Forms::TextBox());
			this->addressBox = (gcnew System::Windows::Forms::TextBox());
			this->trendBox = (gcnew System::Windows::Forms::TextBox());
			this->flow_benefit = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->benefitNo = (gcnew System::Windows::Forms::RadioButton());
			this->benefitYes = (gcnew System::Windows::Forms::TextBox());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->main_table->SuspendLayout();
			this->data_table->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flow_benefit->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_table
			// 
			this->main_table->ColumnCount = 1;
			this->main_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->main_table->Controls->Add(this->data_table, 0, 0);
			this->main_table->Controls->Add(this->btn_add, 0, 1);
			this->main_table->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_table->Location = System::Drawing::Point(0, 0);
			this->main_table->Name = L"main_table";
			this->main_table->RowCount = 2;
			this->main_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->main_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->main_table->Size = System::Drawing::Size(498, 315);
			this->main_table->TabIndex = 2;
			// 
			// data_table
			// 
			this->data_table->AutoSize = true;
			this->data_table->ColumnCount = 2;
			this->data_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->data_table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->data_table->Controls->Add(this->label2, 0, 0);
			this->data_table->Controls->Add(this->label3, 0, 1);
			this->data_table->Controls->Add(this->label4, 0, 2);
			this->data_table->Controls->Add(this->label5, 0, 3);
			this->data_table->Controls->Add(this->label9, 0, 4);
			this->data_table->Controls->Add(this->scoreBox, 1, 3);
			this->data_table->Controls->Add(this->flowLayoutPanel1, 1, 0);
			this->data_table->Controls->Add(this->addressBox, 1, 1);
			this->data_table->Controls->Add(this->trendBox, 1, 4);
			this->data_table->Controls->Add(this->flow_benefit, 1, 2);
			this->data_table->Dock = System::Windows::Forms::DockStyle::Fill;
			this->data_table->Location = System::Drawing::Point(3, 3);
			this->data_table->Name = L"data_table";
			this->data_table->RowCount = 5;
			this->data_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->data_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->data_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->data_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->data_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->data_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->data_table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->data_table->Size = System::Drawing::Size(492, 238);
			this->data_table->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(3, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Фамилия Имя Отчество";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(117, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Адрес";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(112, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Льгота";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(65, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Баллы по ЕГЭ";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(24, 205);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(140, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Номер направления";
			// 
			// scoreBox
			// 
			this->scoreBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->scoreBox->Location = System::Drawing::Point(170, 153);
			this->scoreBox->Name = L"scoreBox";
			this->scoreBox->Size = System::Drawing::Size(315, 22);
			this->scoreBox->TabIndex = 11;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->Controls->Add(this->sernameBox);
			this->flowLayoutPanel1->Controls->Add(this->nameBox);
			this->flowLayoutPanel1->Controls->Add(this->parBox);
			this->flowLayoutPanel1->Location = System::Drawing::Point(170, 9);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(318, 28);
			this->flowLayoutPanel1->TabIndex = 13;
			this->flowLayoutPanel1->WrapContents = false;
			// 
			// sernameBox
			// 
			this->sernameBox->Location = System::Drawing::Point(3, 3);
			this->sernameBox->Name = L"sernameBox";
			this->sernameBox->Size = System::Drawing::Size(100, 22);
			this->sernameBox->TabIndex = 0;
			// 
			// nameBox
			// 
			this->nameBox->Location = System::Drawing::Point(109, 3);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(100, 22);
			this->nameBox->TabIndex = 1;
			// 
			// parBox
			// 
			this->parBox->Location = System::Drawing::Point(215, 3);
			this->parBox->Name = L"parBox";
			this->parBox->Size = System::Drawing::Size(100, 22);
			this->parBox->TabIndex = 2;
			// 
			// addressBox
			// 
			this->addressBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->addressBox->Location = System::Drawing::Point(170, 59);
			this->addressBox->Name = L"addressBox";
			this->addressBox->Size = System::Drawing::Size(315, 22);
			this->addressBox->TabIndex = 10;
			// 
			// trendBox
			// 
			this->trendBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->trendBox->Location = System::Drawing::Point(170, 202);
			this->trendBox->Name = L"trendBox";
			this->trendBox->Size = System::Drawing::Size(315, 22);
			this->trendBox->TabIndex = 19;
			// 
			// flow_benefit
			// 
			this->flow_benefit->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->flow_benefit->AutoSize = true;
			this->flow_benefit->Controls->Add(this->benefitNo);
			this->flow_benefit->Controls->Add(this->benefitYes);
			this->flow_benefit->Location = System::Drawing::Point(170, 103);
			this->flow_benefit->Name = L"flow_benefit";
			this->flow_benefit->Size = System::Drawing::Size(318, 28);
			this->flow_benefit->TabIndex = 20;
			this->flow_benefit->WrapContents = false;
			// 
			// benefitNo
			// 
			this->benefitNo->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->benefitNo->AutoSize = true;
			this->benefitNo->ForeColor = System::Drawing::Color::White;
			this->benefitNo->Location = System::Drawing::Point(3, 4);
			this->benefitNo->Name = L"benefitNo";
			this->benefitNo->Size = System::Drawing::Size(53, 20);
			this->benefitNo->TabIndex = 0;
			this->benefitNo->TabStop = true;
			this->benefitNo->Text = L"Нет";
			this->benefitNo->UseVisualStyleBackColor = true;
			this->benefitNo->Click += gcnew System::EventHandler(this, &AddApplicant::benefitNo_Click);
			// 
			// benefitYes
			// 
			this->benefitYes->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->benefitYes->Location = System::Drawing::Point(62, 3);
			this->benefitYes->Name = L"benefitYes";
			this->benefitYes->Size = System::Drawing::Size(253, 22);
			this->benefitYes->TabIndex = 1;
			this->benefitYes->TextChanged += gcnew System::EventHandler(this, &AddApplicant::benefitYes_TextChanged);
			// 
			// btn_add
			// 
			this->btn_add->AutoSize = true;
			this->btn_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->btn_add->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_add->ForeColor = System::Drawing::Color::Transparent;
			this->btn_add->Location = System::Drawing::Point(3, 247);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(492, 65);
			this->btn_add->TabIndex = 6;
			this->btn_add->Text = L"Добавить";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &AddApplicant::btn_add_Click);
			// 
			// AddApplicant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(498, 315);
			this->Controls->Add(this->main_table);
			this->Name = L"AddApplicant";
			this->Text = L"AddApplicant";
			this->main_table->ResumeLayout(false);
			this->main_table->PerformLayout();
			this->data_table->ResumeLayout(false);
			this->data_table->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->flow_benefit->ResumeLayout(false);
			this->flow_benefit->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	// вычисление id абонента
	List<Applicant^>^ data = ReadWrite::Load<List<Applicant^>^>("applis.dat");

	// получение данных
	List<Applicant^>^ abit = gcnew List<Applicant^>;
	abit->Add(gcnew Applicant);

	bool flag = true;
	try {
		abit[0]->surname = sernameBox->Text;
		abit[0]->name = nameBox->Text;
		abit[0]->patro = parBox->Text;

		abit[0]->address = addressBox->Text;

		if (benefitNo->Checked) abit[0]->benefit = "Нет";
		else abit[0]->benefit = benefitYes->Text;

		abit[0]->score_UGE = Convert::ToInt32(scoreBox->Text);
		abit[0]->trend = trendBox->Text;

		// запись в файл
		writeInFile(abit);
	}
	catch (...) { MessageBox::Show("Некорректный ввод!"); flag = false; }

	// очистка формы
	if (flag) {
		sernameBox->Clear();
		nameBox->Clear();
		parBox->Clear();
		addressBox->Clear();
		benefitNo->Checked = false;
		benefitYes->Clear();
		scoreBox->Clear();
		trendBox->Clear();
	}
}

private: System::Void benefitNo_Click(System::Object^ sender, System::EventArgs^ e) {
	benefitYes->Clear();
	benefitNo->Checked = true;
}
private: System::Void benefitYes_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	benefitNo->Checked = false;
}
};
}
