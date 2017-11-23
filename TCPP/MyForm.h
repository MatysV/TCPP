#pragma once
namespace TCPP {
	
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void){
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm(){
			if (components){
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(163, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(213, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 0;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(263, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 0;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(163, 150);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 0;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::DimGray;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(213, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 0;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackColor = System::Drawing::Color::DimGray;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(263, 150);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 0;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::DimGray;
			this->button7->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(163, 100);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 0;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::DimGray;
			this->button8->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(213, 100);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 0;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button9->BackColor = System::Drawing::Color::DimGray;
			this->button9->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(263, 100);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 0;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button10->BackColor = System::Drawing::Color::DimGray;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(163, 250);
			this->button10->Name = L"button10";
			this->button10->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->button10->Size = System::Drawing::Size(100, 50);
			this->button10->TabIndex = 0;
			this->button10->Text = L"0";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button11->BackColor = System::Drawing::Color::DimGray;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(263, 250);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 0;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button12->BackColor = System::Drawing::Color::LightGray;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(163, 50);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 0;
			this->button12->Text = L"C";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackColor = System::Drawing::Color::LightGray;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Roboto", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(213, 50);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 50);
			this->button13->TabIndex = 0;
			this->button13->Text = L"+/-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button14->BackColor = System::Drawing::Color::LightGray;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(263, 50);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 50);
			this->button14->TabIndex = 0;
			this->button14->Text = L"%";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button15->BackColor = System::Drawing::Color::DarkOrange;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(313, 50);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 50);
			this->button15->TabIndex = 0;
			this->button15->Tag = L"1";
			this->button15->Text = L"÷";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button16->BackColor = System::Drawing::Color::DarkOrange;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(313, 100);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 50);
			this->button16->TabIndex = 0;
			this->button16->Tag = L"2";
			this->button16->Text = L"×";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button17->BackColor = System::Drawing::Color::DarkOrange;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(313, 150);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 50);
			this->button17->TabIndex = 0;
			this->button17->Tag = L"3";
			this->button17->Text = L"-";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button18->BackColor = System::Drawing::Color::DarkOrange;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(313, 200);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 50);
			this->button18->TabIndex = 0;
			this->button18->Tag = L"4";
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button19->BackColor = System::Drawing::Color::DarkOrange;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(313, 250);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(50, 50);
			this->button19->TabIndex = 0;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 50);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button20
			// 
			this->button20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(113, 100);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(50, 50);
			this->button20->TabIndex = 0;
			this->button20->Text = L"x!";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(113, 50);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(50, 50);
			this->button21->TabIndex = 0;
			this->button21->Text = L"10^x";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(113, 200);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(50, 50);
			this->button22->TabIndex = 0;
			this->button22->Text = L"n√x";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(113, 150);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(50, 50);
			this->button23->TabIndex = 0;
			this->button23->Text = L"x^n";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(13, 150);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(50, 50);
			this->button24->TabIndex = 0;
			this->button24->Text = L"π";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(63, 100);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(50, 50);
			this->button25->TabIndex = 0;
			this->button25->Text = L"ln";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(63, 200);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(50, 50);
			this->button26->TabIndex = 0;
			this->button26->Text = L"√x";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->ForeColor = System::Drawing::Color::White;
			this->button27->Location = System::Drawing::Point(13, 200);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(50, 50);
			this->button27->TabIndex = 0;
			this->button27->Text = L"e";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(63, 50);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(50, 50);
			this->button28->TabIndex = 0;
			this->button28->Text = L"e^x";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(63, 150);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(50, 50);
			this->button29->TabIndex = 0;
			this->button29->Text = L"x^2";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->ForeColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(13, 250);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(50, 50);
			this->button30->TabIndex = 0;
			this->button30->Text = L"sin";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->ForeColor = System::Drawing::Color::White;
			this->button31->Location = System::Drawing::Point(113, 250);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(50, 50);
			this->button31->TabIndex = 0;
			this->button31->Text = L"tan";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->ForeColor = System::Drawing::Color::White;
			this->button32->Location = System::Drawing::Point(13, 50);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(50, 50);
			this->button32->TabIndex = 0;
			this->button32->Text = L"2^x";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->ForeColor = System::Drawing::Color::White;
			this->button33->Location = System::Drawing::Point(13, 100);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(50, 50);
			this->button33->TabIndex = 0;
			this->button33->Text = L"1/x";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->ForeColor = System::Drawing::Color::White;
			this->button34->Location = System::Drawing::Point(63, 250);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(50, 50);
			this->button34->TabIndex = 0;
			this->button34->Text = L"cos";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Gainsboro;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(0, 0);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(12, 300);
			this->button35->TabIndex = 2;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(363, 300);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc.exe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}

#pragma endregion
	public: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	public: double a, b; char c; bool old = 0, size = 0;

	public:	void printIn(String^ n) {
			if (n == ",") {
				if (!label1->Text->Contains(",") && !old) label1->Text += ",";
				else if (old) { 
					label1->Text = "0,"; 
					old = 0; 
				}
			}
			else if (n == "-") {
				if (label1->Text[0] != '-' && label1->Text != "0") label1->Text = "-" + label1->Text;
				else if (label1->Text[0] == '-') label1->Text = label1->Text->Remove(0, 1);
			}
			else if (label1->Text == "0" || old) {
				label1->Text = n; 
				old = 0;
			}
			else label1->Text += n;
		}
	public:	void doFunction(double a, double b, char c) {
		if (c) {
			switch (c) {
				case (int)'/':
				{
					a = a / b;
					pressed("15", 0);
					c = 0;
					break;
				};
				case (int)'×': 
				{
					a = a * b;
					pressed("16", 0);
					c = 0;
					break;
				};
				case (int)'-':
				{
					a = a - b;
					pressed("17", 0);
					c = 0;
					break;
				};
				case (int)'+':
				{
					a = a + b;
					pressed("18", 0);
					c = 0;
					break;
				};
				default: break;
			};
			label1->Text = Convert::ToString(a);
			a = b = 0; old = 1;
		}
	}
	public: void pressed(String^ n, bool active) {
			Button^ b = dynamic_cast<Button^>(Controls[("button" + n)]);
			if (active) {
				b->BackColor = Color::White;
				b->ForeColor = Color::DarkOrange;
			}
			else
			{
				b->BackColor = Color::DarkOrange;
				b->ForeColor = Color::White;
			}
		}
	public: void clear() {
			label1->Text = "0";
			a = b = c = 0;
			for (int i(15); i <= 18; i++) {
				pressed(Convert::ToString(i), 0);
			}
		}
			void resize() {
			if (!size) {
				this->ClientSize = System::Drawing::Size(362, 300);
				size = 1;
			}
			else if (size) {
				this->ClientSize = System::Drawing::Size(212, 300);
					size = 0;
			}

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { printIn("1"); }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { printIn("2"); }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { printIn("3"); }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { printIn("4"); }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { printIn("5"); }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) { printIn("6"); }
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) { printIn("7"); }
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) { printIn("8"); }
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) { printIn("9"); }
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) { printIn("0"); }
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) { printIn(","); }
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) { clear(); }
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) { printIn("-"); }
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		if(a == 0)label1->Text = Convert::ToString(System::Convert::ToDouble(label1->Text) * 0.01);
		else label1->Text = Convert::ToString(a * (System::Convert::ToDouble(label1->Text) * 0.01));
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		pressed("15", 1);
		if (c != 0) {
			doFunction(a, b = Convert::ToDouble(label1->Text), c);
			pressed("15", 1);
		}
		a = Convert::ToDouble(label1->Text);
		old = 1;
		c = '/';
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		pressed("16", 1);
		if (c != 0) {
			doFunction(a, b = Convert::ToDouble(label1->Text), c);
			pressed("16", 1);
		}
		a = Convert::ToDouble(label1->Text);
		old = 1;
		c = '×';
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		pressed("17", 1);
		if (c != 0) {
			doFunction(a, b = Convert::ToDouble(label1->Text), c);
			pressed("17", 1);
		}
		a = Convert::ToDouble(label1->Text);
		old = 1;
		c = '-';
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		pressed("18", 1);
		if (c != 0) {
			doFunction(a, b = Convert::ToDouble(label1->Text), c);
			pressed("18", 1);
		}
		a = Convert::ToDouble(label1->Text);
		old = 1;
		c = '+';
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		b = Convert::ToDouble(label1->Text);
		doFunction(a, b, c);
	}
	private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) { resize(); }

	private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = Convert::ToString(Math::Sin(System::Convert::ToDouble(label1->Text)));
	}
	private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = Convert::ToString(Math::Cos(System::Convert::ToDouble(label1->Text)));
	}

private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	//e
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	//sqr
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	//sqr n
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	//pi
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	//x^2
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	//x^n
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	// 1/x
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	//ln
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	//x!
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	//2^x
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	//e^x
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	//10^x
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	//tan
}
};
}