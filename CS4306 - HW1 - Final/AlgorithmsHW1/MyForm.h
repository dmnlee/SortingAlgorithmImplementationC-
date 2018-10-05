#pragma once
#include <cstdlib>
#include <ctime>      
#include <time.h>         
#include <iostream>
#include <stdlib.h>

namespace AlgorithmsHW1 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	int arr[100] = { 0 };

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::Label^  label82;
	private: System::Windows::Forms::Label^  label83;
	private: System::Windows::Forms::Label^  label84;
	private: System::Windows::Forms::Label^  label85;
	private: System::Windows::Forms::Label^  label86;
	private: System::Windows::Forms::Label^  label87;
	private: System::Windows::Forms::Label^  label88;
	private: System::Windows::Forms::Label^  label89;
	private: System::Windows::Forms::Label^  label90;
	private: System::Windows::Forms::Label^  label91;
	private: System::Windows::Forms::Label^  label92;
	private: System::Windows::Forms::Label^  label93;
	private: System::Windows::Forms::Label^  label94;
	private: System::Windows::Forms::Label^  label95;
	private: System::Windows::Forms::Label^  label96;
	private: System::Windows::Forms::Label^  label97;
	private: System::Windows::Forms::Label^  label98;
	private: System::Windows::Forms::Label^  label99;
	private: System::Windows::Forms::Label^  label100;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(82, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(123, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(164, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(205, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(246, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(284, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(325, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(366, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(0, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(41, 24);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(82, 24);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L"label13";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(123, 24);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 13;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(164, 24);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 14;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(205, 24);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 15;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(246, 24);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 16;
			this->label17->Text = L"label17";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(284, 24);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 17;
			this->label18->Text = L"label18";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(325, 24);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 18;
			this->label19->Text = L"label19";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(366, 24);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 19;
			this->label20->Text = L"label20";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Location = System::Drawing::Point(78, 344);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Merge Sort";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(254, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Insertion Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(165, 368);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Quick Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(165, 310);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Generate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(0, 54);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 13);
			this->label21->TabIndex = 24;
			this->label21->Text = L"label21";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(41, 54);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 13);
			this->label22->TabIndex = 25;
			this->label22->Text = L"label22";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(82, 54);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 26;
			this->label23->Text = L"label23";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(123, 54);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 13);
			this->label24->TabIndex = 27;
			this->label24->Text = L"label24";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(164, 54);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 13);
			this->label25->TabIndex = 28;
			this->label25->Text = L"label25";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(205, 54);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(41, 13);
			this->label26->TabIndex = 29;
			this->label26->Text = L"label26";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(246, 54);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 13);
			this->label27->TabIndex = 30;
			this->label27->Text = L"label27";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(284, 54);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 13);
			this->label28->TabIndex = 31;
			this->label28->Text = L"label28";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(325, 54);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(41, 13);
			this->label29->TabIndex = 32;
			this->label29->Text = L"label29";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(366, 54);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(41, 13);
			this->label30->TabIndex = 33;
			this->label30->Text = L"label30";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(0, 83);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(41, 13);
			this->label31->TabIndex = 34;
			this->label31->Text = L"label31";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(41, 83);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(41, 13);
			this->label32->TabIndex = 35;
			this->label32->Text = L"label32";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(82, 83);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(41, 13);
			this->label33->TabIndex = 36;
			this->label33->Text = L"label33";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(123, 83);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(41, 13);
			this->label34->TabIndex = 37;
			this->label34->Text = L"label34";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(164, 83);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(41, 13);
			this->label35->TabIndex = 38;
			this->label35->Text = L"label35";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(205, 83);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(41, 13);
			this->label36->TabIndex = 39;
			this->label36->Text = L"label36";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(246, 83);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(41, 13);
			this->label37->TabIndex = 40;
			this->label37->Text = L"label37";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(284, 83);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(41, 13);
			this->label38->TabIndex = 41;
			this->label38->Text = L"label38";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(325, 83);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(41, 13);
			this->label39->TabIndex = 42;
			this->label39->Text = L"label39";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(366, 83);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(41, 13);
			this->label40->TabIndex = 43;
			this->label40->Text = L"label40";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(0, 110);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(41, 13);
			this->label41->TabIndex = 44;
			this->label41->Text = L"label41";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(41, 110);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(41, 13);
			this->label42->TabIndex = 45;
			this->label42->Text = L"label42";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(82, 110);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(41, 13);
			this->label43->TabIndex = 46;
			this->label43->Text = L"label43";
			this->label43->Click += gcnew System::EventHandler(this, &MyForm::label43_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(123, 110);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(41, 13);
			this->label44->TabIndex = 47;
			this->label44->Text = L"label44";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(164, 110);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(41, 13);
			this->label45->TabIndex = 48;
			this->label45->Text = L"label45";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(205, 110);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(41, 13);
			this->label46->TabIndex = 49;
			this->label46->Text = L"label46";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(246, 110);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(41, 13);
			this->label47->TabIndex = 50;
			this->label47->Text = L"label47";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(284, 110);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(41, 13);
			this->label48->TabIndex = 51;
			this->label48->Text = L"label48";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(325, 110);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(41, 13);
			this->label49->TabIndex = 52;
			this->label49->Text = L"label49";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(366, 110);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(41, 13);
			this->label50->TabIndex = 53;
			this->label50->Text = L"label50";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(0, 134);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(41, 13);
			this->label51->TabIndex = 54;
			this->label51->Text = L"label51";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(41, 134);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(41, 13);
			this->label52->TabIndex = 55;
			this->label52->Text = L"label52";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(82, 134);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(41, 13);
			this->label53->TabIndex = 56;
			this->label53->Text = L"label53";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(123, 134);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(41, 13);
			this->label54->TabIndex = 57;
			this->label54->Text = L"label54";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(164, 134);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(41, 13);
			this->label55->TabIndex = 58;
			this->label55->Text = L"label55";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(205, 134);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(41, 13);
			this->label56->TabIndex = 59;
			this->label56->Text = L"label56";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(246, 134);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(41, 13);
			this->label57->TabIndex = 60;
			this->label57->Text = L"label57";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(284, 134);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(41, 13);
			this->label58->TabIndex = 61;
			this->label58->Text = L"label58";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(325, 134);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(41, 13);
			this->label59->TabIndex = 62;
			this->label59->Text = L"label59";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(366, 134);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(41, 13);
			this->label60->TabIndex = 63;
			this->label60->Text = L"label60";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(0, 161);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(41, 13);
			this->label61->TabIndex = 64;
			this->label61->Text = L"label61";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(41, 161);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(41, 13);
			this->label62->TabIndex = 65;
			this->label62->Text = L"label62";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(82, 161);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(41, 13);
			this->label63->TabIndex = 66;
			this->label63->Text = L"label63";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(123, 161);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(41, 13);
			this->label64->TabIndex = 67;
			this->label64->Text = L"label64";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(164, 161);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(41, 13);
			this->label65->TabIndex = 68;
			this->label65->Text = L"label65";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(205, 161);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(41, 13);
			this->label66->TabIndex = 69;
			this->label66->Text = L"label66";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(246, 161);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(41, 13);
			this->label67->TabIndex = 70;
			this->label67->Text = L"label67";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(284, 161);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(41, 13);
			this->label68->TabIndex = 71;
			this->label68->Text = L"label68";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(325, 161);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(41, 13);
			this->label69->TabIndex = 72;
			this->label69->Text = L"label69";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(366, 161);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(41, 13);
			this->label70->TabIndex = 73;
			this->label70->Text = L"label70";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(0, 191);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(41, 13);
			this->label71->TabIndex = 74;
			this->label71->Text = L"label71";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(41, 191);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(41, 13);
			this->label72->TabIndex = 75;
			this->label72->Text = L"label72";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(82, 191);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(41, 13);
			this->label73->TabIndex = 76;
			this->label73->Text = L"label73";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(123, 191);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(41, 13);
			this->label74->TabIndex = 77;
			this->label74->Text = L"label74";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(164, 191);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(41, 13);
			this->label75->TabIndex = 78;
			this->label75->Text = L"label75";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(205, 191);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(41, 13);
			this->label76->TabIndex = 79;
			this->label76->Text = L"label76";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(246, 191);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(41, 13);
			this->label77->TabIndex = 80;
			this->label77->Text = L"label77";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(284, 191);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(41, 13);
			this->label78->TabIndex = 81;
			this->label78->Text = L"label78";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(325, 191);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(41, 13);
			this->label79->TabIndex = 82;
			this->label79->Text = L"label79";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(366, 191);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(41, 13);
			this->label80->TabIndex = 83;
			this->label80->Text = L"label80";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(0, 218);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(41, 13);
			this->label81->TabIndex = 84;
			this->label81->Text = L"label81";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(41, 218);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(41, 13);
			this->label82->TabIndex = 85;
			this->label82->Text = L"label82";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(82, 218);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(41, 13);
			this->label83->TabIndex = 86;
			this->label83->Text = L"label83";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(123, 218);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(41, 13);
			this->label84->TabIndex = 87;
			this->label84->Text = L"label84";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(164, 218);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(41, 13);
			this->label85->TabIndex = 88;
			this->label85->Text = L"label85";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(205, 218);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(41, 13);
			this->label86->TabIndex = 89;
			this->label86->Text = L"label86";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(246, 218);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(41, 13);
			this->label87->TabIndex = 90;
			this->label87->Text = L"label87";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(284, 218);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(41, 13);
			this->label88->TabIndex = 91;
			this->label88->Text = L"label88";
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Location = System::Drawing::Point(325, 218);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(41, 13);
			this->label89->TabIndex = 92;
			this->label89->Text = L"label89";
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Location = System::Drawing::Point(366, 218);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(41, 13);
			this->label90->TabIndex = 93;
			this->label90->Text = L"label90";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(0, 245);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(41, 13);
			this->label91->TabIndex = 94;
			this->label91->Text = L"label91";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(40, 245);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(41, 13);
			this->label92->TabIndex = 95;
			this->label92->Text = L"label92";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(82, 245);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(41, 13);
			this->label93->TabIndex = 96;
			this->label93->Text = L"label93";
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Location = System::Drawing::Point(123, 245);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(41, 13);
			this->label94->TabIndex = 97;
			this->label94->Text = L"label94";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(164, 245);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(41, 13);
			this->label95->TabIndex = 98;
			this->label95->Text = L"label95";
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(205, 245);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(41, 13);
			this->label96->TabIndex = 99;
			this->label96->Text = L"label96";
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(246, 245);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(41, 13);
			this->label97->TabIndex = 100;
			this->label97->Text = L"label97";
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Location = System::Drawing::Point(284, 245);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(41, 13);
			this->label98->TabIndex = 101;
			this->label98->Text = L"label98";
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(325, 245);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(41, 13);
			this->label99->TabIndex = 102;
			this->label99->Text = L"label99";
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(366, 245);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(47, 13);
			this->label100->TabIndex = 103;
			this->label100->Text = L"label100";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 411);
			this->Controls->Add(this->label100);
			this->Controls->Add(this->label99);
			this->Controls->Add(this->label98);
			this->Controls->Add(this->label97);
			this->Controls->Add(this->label96);
			this->Controls->Add(this->label95);
			this->Controls->Add(this->label94);
			this->Controls->Add(this->label93);
			this->Controls->Add(this->label92);
			this->Controls->Add(this->label91);
			this->Controls->Add(this->label90);
			this->Controls->Add(this->label89);
			this->Controls->Add(this->label88);
			this->Controls->Add(this->label87);
			this->Controls->Add(this->label86);
			this->Controls->Add(this->label85);
			this->Controls->Add(this->label84);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->label82);
			this->Controls->Add(this->label81);
			this->Controls->Add(this->label80);
			this->Controls->Add(this->label79);
			this->Controls->Add(this->label78);
			this->Controls->Add(this->label77);
			this->Controls->Add(this->label76);
			this->Controls->Add(this->label75);
			this->Controls->Add(this->label74);
			this->Controls->Add(this->label73);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}

			//Merge Sort Logic
			 void merge(int* a, int l, int h, int m)
			 {

				 //Placeholder Variables
				 int i = l;
				 int j = m + 1;
				 int k = 0;
				 int tlength = (h - l + 1);
				 int* t = new int[tlength];

				 while (i <= m && j <= h) {
					 if (a[i] < a[j]) {
						 t[k] = a[i];
						 k++;
						 i++;
					 }
					 else {
						 t[k] = a[j];
						 k++;
						 j++;
					 }
				 }

				 while (i <= m) {
					 t[k] = a[i];
					 k++;
					 i++;
				 }
				 while (j <= h) {
					 t[k] = a[j];
					 k++;
					 j++;
				 }

				 for (i = l; i <= h; i++) {
					 a[i] = t[i - l];
					 cout << i << ": ";
					 cout << a[i] << endl;
				 }
			 }

			 void Msort(int* a, int l, int h)
			 {
				 int m;
				 if (l < h) {
					 m = (l + h) / 2;
					 Msort(a, l, m);
					 Msort(a, m + 1, h);
					 merge(a, l, h, m);
				 }
			 }

			 //Quick Sort Logic
			 void partition(int sortArray[], int low, int high, int &i, int &j)
			 {
				 i = low - 1, j = high;
				 int p = low - 1, q = high;
				 int arrayPartition = sortArray[high];

				 while (true)
				 {
					 // From left, find the first element greater than 
					 // or equal to v. 
					 while (sortArray[++i] < arrayPartition);

					 // From right, find the first element smaller than or 
					 // equal to v 
					 while (arrayPartition < sortArray[--j])
						 if (j == low)
							 break;

					 // If i and j cross, then we are done 
					 if (i >= j) break;

					 // Swap, so that smaller goes on left greater goes on right 
					 swap(sortArray[i], sortArray[j]);

					 // Move all same left occurrence of pivot to beginning of 
					 // array and keep count using p 
					 if (sortArray[i] == arrayPartition)
					 {
						 p++;
						 swap(sortArray[p], sortArray[i]);
					 }

					 // Move all same right occurrence of pivot to end of array 
					 // and keep count using q 
					 if (sortArray[j] == arrayPartition)
					 {
						 q--;
						 swap(sortArray[j], sortArray[q]);
					 }
				 }

				 // Moves pivot element to its correct index 
				 swap(sortArray[i], sortArray[high]);

				 // Move all left same occurrences from beginning 
				 // to adjacent to arr[i] 
				 j = i - 1;
				 for (int k = low; k < p; k++, j--)
					 swap(sortArray[k], sortArray[j]);

				 // Move all right same occurrences from end 
				 // to adjacent to arr[i] 
				 i = i + 1;
				 for (int k = high - 1; k > q; k--, i++)
					 swap(sortArray[i], sortArray[k]);
			 }

			 // 3-way partition based quick sort 
			 void Qsort(int sortArray[], int low, int high)
			 {
				 if (high <= low) return;

				 int i, j;

				 partition(sortArray, low, high, i, j);

				 // 
				 Qsort(sortArray, low, j);
				 Qsort(sortArray, i, high);
			 }

			 //Insertion Binary Sort
			 int binarySearchLocation(int array[], int number, int lower, int higher)
			 {
				 if (higher <= lower)
				 {
					 if (number >= array[lower])
						 return (lower + 1);
					 else
						 return lower;
				 }

				 int midpoint = (lower + higher) / 2;

				 if (number == array[midpoint])
					 return midpoint + 1;

				 if (number > array[midpoint])
					 return binarySearchLocation(array, number, midpoint + 1, higher);
				 return binarySearchLocation(array, number, lower, midpoint - 1);
			 }

			 void Isort(int array[], int number)
			 {
				 int i, j, selected, location;

				 for (i = 1; i < number; ++i)
				 {
					 j = i - 1;
					 selected = array[i];

					 location = binarySearchLocation(array, selected, 0, j);

					 while (j >= location)
					 {
						 array[j + 1] = array[j];
						 j--;
					 }
					 array[j + 1] = selected;
				 }
			 }



private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // MERGE button
																					  //insertion alg here


	Msort(arr, 0, 99);


	this->label1->Text = Convert::ToString(arr[0]);
	this->label2->Text = Convert::ToString(arr[1]);
	this->label3->Text = Convert::ToString(arr[2]);
	this->label4->Text = Convert::ToString(arr[3]);
	this->label5->Text = Convert::ToString(arr[4]);
	this->label6->Text = Convert::ToString(arr[5]);
	this->label7->Text = Convert::ToString(arr[6]);
	this->label8->Text = Convert::ToString(arr[7]);
	this->label9->Text = Convert::ToString(arr[8]);
	this->label10->Text = Convert::ToString(arr[9]);
	this->label11->Text = Convert::ToString(arr[10]);
	this->label12->Text = Convert::ToString(arr[11]);
	this->label13->Text = Convert::ToString(arr[12]);
	this->label14->Text = Convert::ToString(arr[13]);
	this->label15->Text = Convert::ToString(arr[14]);
	this->label16->Text = Convert::ToString(arr[15]);
	this->label17->Text = Convert::ToString(arr[16]);
	this->label18->Text = Convert::ToString(arr[17]);
	this->label19->Text = Convert::ToString(arr[18]);
	this->label20->Text = Convert::ToString(arr[19]);
	this->label21->Text = Convert::ToString(arr[20]);
	this->label22->Text = Convert::ToString(arr[21]);
	this->label23->Text = Convert::ToString(arr[22]);
	this->label24->Text = Convert::ToString(arr[23]);
	this->label25->Text = Convert::ToString(arr[24]);
	this->label26->Text = Convert::ToString(arr[25]);
	this->label27->Text = Convert::ToString(arr[26]);
	this->label28->Text = Convert::ToString(arr[27]);
	this->label29->Text = Convert::ToString(arr[28]);
	this->label30->Text = Convert::ToString(arr[29]);
	this->label31->Text = Convert::ToString(arr[30]);
	this->label32->Text = Convert::ToString(arr[31]);
	this->label33->Text = Convert::ToString(arr[32]);
	this->label34->Text = Convert::ToString(arr[33]);
	this->label35->Text = Convert::ToString(arr[34]);
	this->label36->Text = Convert::ToString(arr[35]);
	this->label37->Text = Convert::ToString(arr[36]);
	this->label38->Text = Convert::ToString(arr[37]);
	this->label39->Text = Convert::ToString(arr[38]);
	this->label40->Text = Convert::ToString(arr[39]);
	this->label41->Text = Convert::ToString(arr[40]);
	this->label42->Text = Convert::ToString(arr[41]);
	this->label43->Text = Convert::ToString(arr[42]);
	this->label44->Text = Convert::ToString(arr[43]);
	this->label45->Text = Convert::ToString(arr[44]);
	this->label46->Text = Convert::ToString(arr[45]);
	this->label47->Text = Convert::ToString(arr[46]);
	this->label48->Text = Convert::ToString(arr[47]);
	this->label49->Text = Convert::ToString(arr[48]);
	this->label50->Text = Convert::ToString(arr[49]);
	this->label51->Text = Convert::ToString(arr[50]);
	this->label52->Text = Convert::ToString(arr[51]);
	this->label53->Text = Convert::ToString(arr[52]);
	this->label54->Text = Convert::ToString(arr[53]);
	this->label55->Text = Convert::ToString(arr[54]);
	this->label56->Text = Convert::ToString(arr[55]);
	this->label57->Text = Convert::ToString(arr[56]);
	this->label58->Text = Convert::ToString(arr[57]);
	this->label59->Text = Convert::ToString(arr[58]);
	this->label60->Text = Convert::ToString(arr[59]);
	this->label61->Text = Convert::ToString(arr[60]);
	this->label62->Text = Convert::ToString(arr[61]);
	this->label63->Text = Convert::ToString(arr[62]);
	this->label64->Text = Convert::ToString(arr[63]);
	this->label65->Text = Convert::ToString(arr[64]);
	this->label66->Text = Convert::ToString(arr[65]);
	this->label67->Text = Convert::ToString(arr[66]);
	this->label68->Text = Convert::ToString(arr[67]);
	this->label69->Text = Convert::ToString(arr[68]);
	this->label70->Text = Convert::ToString(arr[69]);
	this->label71->Text = Convert::ToString(arr[70]);
	this->label72->Text = Convert::ToString(arr[71]);
	this->label73->Text = Convert::ToString(arr[72]);
	this->label74->Text = Convert::ToString(arr[73]);
	this->label75->Text = Convert::ToString(arr[74]);
	this->label76->Text = Convert::ToString(arr[75]);
	this->label77->Text = Convert::ToString(arr[76]);
	this->label78->Text = Convert::ToString(arr[77]);
	this->label79->Text = Convert::ToString(arr[78]);
	this->label80->Text = Convert::ToString(arr[79]);
	this->label81->Text = Convert::ToString(arr[80]);
	this->label82->Text = Convert::ToString(arr[81]);
	this->label83->Text = Convert::ToString(arr[82]);
	this->label84->Text = Convert::ToString(arr[83]);
	this->label85->Text = Convert::ToString(arr[84]);
	this->label86->Text = Convert::ToString(arr[85]);
	this->label87->Text = Convert::ToString(arr[86]);
	this->label88->Text = Convert::ToString(arr[87]);
	this->label89->Text = Convert::ToString(arr[88]);
	this->label90->Text = Convert::ToString(arr[89]);
	this->label91->Text = Convert::ToString(arr[90]);
	this->label92->Text = Convert::ToString(arr[91]);
	this->label93->Text = Convert::ToString(arr[92]);
	this->label94->Text = Convert::ToString(arr[93]);
	this->label95->Text = Convert::ToString(arr[94]);
	this->label96->Text = Convert::ToString(arr[95]);
	this->label97->Text = Convert::ToString(arr[96]);
	this->label98->Text = Convert::ToString(arr[97]);
	this->label99->Text = Convert::ToString(arr[98]);
	this->label100->Text = (" ");

	this->button1->Enabled = true;

}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { // GENERATE button
	

	//fill array with random numbers
	for (int i = 0; i < 100; i++) {
		arr[i] = (rand() % 100) + 1;
	}

	//display numbers 

	this->label1->Text = Convert::ToString(arr[0]);
	this->label2->Text = Convert::ToString(arr[1]);
	this->label3->Text = Convert::ToString(arr[2]);
	this->label4->Text = Convert::ToString(arr[3]);
	this->label5->Text = Convert::ToString(arr[4]);
	this->label6->Text = Convert::ToString(arr[5]);
	this->label7->Text = Convert::ToString(arr[6]);
	this->label8->Text = Convert::ToString(arr[7]);
	this->label9->Text = Convert::ToString(arr[8]);
	this->label10->Text = Convert::ToString(arr[9]);
	this->label11->Text = Convert::ToString(arr[10]);
	this->label12->Text = Convert::ToString(arr[11]);
	this->label13->Text = Convert::ToString(arr[12]);
	this->label14->Text = Convert::ToString(arr[13]);
	this->label15->Text = Convert::ToString(arr[14]);
	this->label16->Text = Convert::ToString(arr[15]);
	this->label17->Text = Convert::ToString(arr[16]);
	this->label18->Text = Convert::ToString(arr[17]);
	this->label19->Text = Convert::ToString(arr[18]);
	this->label20->Text = Convert::ToString(arr[19]);
	this->label21->Text = Convert::ToString(arr[20]);
	this->label22->Text = Convert::ToString(arr[21]);
	this->label23->Text = Convert::ToString(arr[22]);
	this->label24->Text = Convert::ToString(arr[23]);
	this->label25->Text = Convert::ToString(arr[24]);
	this->label26->Text = Convert::ToString(arr[25]);
	this->label27->Text = Convert::ToString(arr[26]);
	this->label28->Text = Convert::ToString(arr[27]);
	this->label29->Text = Convert::ToString(arr[28]);
	this->label30->Text = Convert::ToString(arr[29]);
	this->label31->Text = Convert::ToString(arr[30]);
	this->label32->Text = Convert::ToString(arr[31]);
	this->label33->Text = Convert::ToString(arr[32]);
	this->label34->Text = Convert::ToString(arr[33]);
	this->label35->Text = Convert::ToString(arr[34]);
	this->label36->Text = Convert::ToString(arr[35]);
	this->label37->Text = Convert::ToString(arr[36]);
	this->label38->Text = Convert::ToString(arr[37]);
	this->label39->Text = Convert::ToString(arr[38]);
	this->label40->Text = Convert::ToString(arr[39]);
	this->label41->Text = Convert::ToString(arr[40]);
	this->label42->Text = Convert::ToString(arr[41]);
	this->label43->Text = Convert::ToString(arr[42]);
	this->label44->Text = Convert::ToString(arr[43]);
	this->label45->Text = Convert::ToString(arr[44]);
	this->label46->Text = Convert::ToString(arr[45]);
	this->label47->Text = Convert::ToString(arr[46]);
	this->label48->Text = Convert::ToString(arr[47]);
	this->label49->Text = Convert::ToString(arr[48]);
	this->label50->Text = Convert::ToString(arr[49]);
	this->label51->Text = Convert::ToString(arr[50]);
	this->label52->Text = Convert::ToString(arr[51]);
	this->label53->Text = Convert::ToString(arr[52]);
	this->label54->Text = Convert::ToString(arr[53]);
	this->label55->Text = Convert::ToString(arr[54]);
	this->label56->Text = Convert::ToString(arr[55]);
	this->label57->Text = Convert::ToString(arr[56]);
	this->label58->Text = Convert::ToString(arr[57]);
	this->label59->Text = Convert::ToString(arr[58]);
	this->label60->Text = Convert::ToString(arr[59]);
	this->label61->Text = Convert::ToString(arr[60]);
	this->label62->Text = Convert::ToString(arr[61]);
	this->label63->Text = Convert::ToString(arr[62]);
	this->label64->Text = Convert::ToString(arr[63]);
	this->label65->Text = Convert::ToString(arr[64]);
	this->label66->Text = Convert::ToString(arr[65]);
	this->label67->Text = Convert::ToString(arr[66]);
	this->label68->Text = Convert::ToString(arr[67]);
	this->label69->Text = Convert::ToString(arr[68]);
	this->label70->Text = Convert::ToString(arr[69]);
	this->label71->Text = Convert::ToString(arr[70]);
	this->label72->Text = Convert::ToString(arr[71]);
	this->label73->Text = Convert::ToString(arr[72]);
	this->label74->Text = Convert::ToString(arr[73]);
	this->label75->Text = Convert::ToString(arr[74]);
	this->label76->Text = Convert::ToString(arr[75]);
	this->label77->Text = Convert::ToString(arr[76]);
	this->label78->Text = Convert::ToString(arr[77]);
	this->label79->Text = Convert::ToString(arr[78]);
	this->label80->Text = Convert::ToString(arr[79]);
	this->label81->Text = Convert::ToString(arr[80]);
	this->label82->Text = Convert::ToString(arr[81]);
	this->label83->Text = Convert::ToString(arr[82]);
	this->label84->Text = Convert::ToString(arr[83]);
	this->label85->Text = Convert::ToString(arr[84]);
	this->label86->Text = Convert::ToString(arr[85]);
	this->label87->Text = Convert::ToString(arr[86]);
	this->label88->Text = Convert::ToString(arr[87]);
	this->label89->Text = Convert::ToString(arr[88]);
	this->label90->Text = Convert::ToString(arr[89]);
	this->label91->Text = Convert::ToString(arr[90]);
	this->label92->Text = Convert::ToString(arr[91]);
	this->label93->Text = Convert::ToString(arr[92]);
	this->label94->Text = Convert::ToString(arr[93]);
	this->label95->Text = Convert::ToString(arr[94]);
	this->label96->Text = Convert::ToString(arr[95]);
	this->label97->Text = Convert::ToString(arr[96]);
	this->label98->Text = Convert::ToString(arr[97]);
	this->label99->Text = Convert::ToString(arr[98]);
	this->label100->Text = Convert::ToString(arr[99]);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { // INSERTION button


	//fill array with random numbers
	for (int i = 0; i < 20; i++) {
		arr[i] = (rand() % 100) + 1;
	}

	//display numbers 

	this->label1->Text = Convert::ToString(arr[0]);
	this->label2->Text = Convert::ToString(arr[1]);
	this->label3->Text = Convert::ToString(arr[2]);
	this->label4->Text = Convert::ToString(arr[3]);
	this->label5->Text = Convert::ToString(arr[4]);
	this->label6->Text = Convert::ToString(arr[5]);
	this->label7->Text = Convert::ToString(arr[6]);
	this->label8->Text = Convert::ToString(arr[7]);
	this->label9->Text = Convert::ToString(arr[8]);
	this->label10->Text = Convert::ToString(arr[9]);
	this->label11->Text = Convert::ToString(arr[10]);
	this->label12->Text = Convert::ToString(arr[11]);
	this->label13->Text = Convert::ToString(arr[12]);
	this->label14->Text = Convert::ToString(arr[13]);
	this->label15->Text = Convert::ToString(arr[14]);
	this->label16->Text = Convert::ToString(arr[15]);
	this->label17->Text = Convert::ToString(arr[16]);
	this->label18->Text = Convert::ToString(arr[17]);
	this->label19->Text = Convert::ToString(arr[18]);
	this->label20->Text = Convert::ToString(arr[19]);
	this->label21->Text = ("");
	this->label22->Text = ("");
	this->label23->Text = ("");
	this->label24->Text = ("");
	this->label25->Text = ("");
	this->label26->Text = ("");
	this->label27->Text = ("");
	this->label28->Text = ("");
	this->label29->Text = ("");
	this->label30->Text = ("");
	this->label31->Text = ("");
	this->label32->Text = ("");
	this->label33->Text = ("");
	this->label34->Text = ("");
	this->label35->Text = ("");
	this->label36->Text = ("");
	this->label37->Text = ("");
	this->label38->Text = ("");
	this->label39->Text = ("");
	this->label40->Text = ("");
	this->label41->Text = ("");
	this->label42->Text = ("");
	this->label43->Text = ("");
	this->label44->Text = ("");
	this->label45->Text = ("");
	this->label46->Text = ("");
	this->label47->Text = ("");
	this->label48->Text = ("");
	this->label49->Text = ("");
	this->label50->Text = ("");
	this->label51->Text = ("");
	this->label52->Text = ("");
	this->label53->Text = ("");
	this->label54->Text = ("");
	this->label55->Text = ("");
	this->label56->Text = ("");
	this->label57->Text = ("");
	this->label58->Text = ("");
	this->label59->Text = ("");
	this->label60->Text = ("");
	this->label61->Text = ("");
	this->label62->Text = ("");
	this->label63->Text = ("");
	this->label64->Text = ("");
	this->label65->Text = ("");
	this->label66->Text = ("");
	this->label67->Text = ("");
	this->label68->Text = ("");
	this->label69->Text = ("");
	this->label70->Text = ("");
	this->label71->Text = ("");
	this->label72->Text = ("");
	this->label73->Text = ("");
	this->label74->Text = ("");
	this->label75->Text = ("");
	this->label76->Text = ("");
	this->label77->Text = ("");
	this->label78->Text = ("");
	this->label79->Text = ("");
	this->label80->Text = ("");
	this->label81->Text = ("");
	this->label82->Text = ("");
	this->label83->Text = ("");
	this->label84->Text = ("");
	this->label85->Text = ("");
	this->label86->Text = ("");
	this->label87->Text = ("");
	this->label88->Text = ("");
	this->label89->Text = ("");
	this->label90->Text = ("");
	this->label91->Text = ("");
	this->label92->Text = ("");
	this->label93->Text = ("");
	this->label94->Text = ("");
	this->label95->Text = ("");
	this->label96->Text = ("");
	this->label97->Text = ("");
	this->label98->Text = ("");
	this->label99->Text = ("");
	this->label100->Text = ("");



	Isort(arr, 20);


	this->label1->Text = Convert::ToString(arr[0]);
	this->label2->Text = Convert::ToString(arr[1]);
	this->label3->Text = Convert::ToString(arr[2]);
	this->label4->Text = Convert::ToString(arr[3]);
	this->label5->Text = Convert::ToString(arr[4]);
	this->label6->Text = Convert::ToString(arr[5]);
	this->label7->Text = Convert::ToString(arr[6]);
	this->label8->Text = Convert::ToString(arr[7]);
	this->label9->Text = Convert::ToString(arr[8]);
	this->label10->Text = Convert::ToString(arr[9]);
	this->label11->Text = Convert::ToString(arr[10]);
	this->label12->Text = Convert::ToString(arr[11]);
	this->label13->Text = Convert::ToString(arr[12]);
	this->label14->Text = Convert::ToString(arr[13]);
	this->label15->Text = Convert::ToString(arr[14]);
	this->label16->Text = Convert::ToString(arr[15]);
	this->label17->Text = Convert::ToString(arr[16]);
	this->label18->Text = Convert::ToString(arr[17]);
	this->label19->Text = Convert::ToString(arr[18]);
	this->label20->Text = Convert::ToString(arr[19]);
	this->label21->Text = ("");
	this->label22->Text = ("");
	this->label23->Text = ("");
	this->label24->Text = ("");
	this->label25->Text = ("");
	this->label26->Text = ("");
	this->label27->Text = ("");
	this->label28->Text = ("");
	this->label29->Text = ("");
	this->label30->Text = ("");
	this->label31->Text = ("");
	this->label32->Text = ("");
	this->label33->Text = ("");
	this->label34->Text = ("");
	this->label35->Text = ("");
	this->label36->Text = ("");
	this->label37->Text = ("");
	this->label38->Text = ("");
	this->label39->Text = ("");
	this->label40->Text = ("");
	this->label41->Text = ("");
	this->label42->Text = ("");
	this->label43->Text = ("");
	this->label44->Text = ("");
	this->label45->Text = ("");
	this->label46->Text = ("");
	this->label47->Text = ("");
	this->label48->Text = ("");
	this->label49->Text = ("");
	this->label50->Text = ("");
	this->label51->Text = ("");
	this->label52->Text = ("");
	this->label53->Text = ("");
	this->label54->Text = ("");
	this->label55->Text = ("");
	this->label56->Text = ("");
	this->label57->Text = ("");
	this->label58->Text = ("");
	this->label59->Text = ("");
	this->label60->Text = ("");
	this->label61->Text = ("");
	this->label62->Text = ("");
	this->label63->Text = ("");
	this->label64->Text = ("");
	this->label65->Text = ("");
	this->label66->Text = ("");
	this->label67->Text = ("");
	this->label68->Text = ("");
	this->label69->Text = ("");
	this->label70->Text = ("");
	this->label71->Text = ("");
	this->label72->Text = ("");
	this->label73->Text = ("");
	this->label74->Text = ("");
	this->label75->Text = ("");
	this->label76->Text = ("");
	this->label77->Text = ("");
	this->label78->Text = ("");
	this->label79->Text = ("");
	this->label80->Text = ("");
	this->label81->Text = ("");
	this->label82->Text = ("");
	this->label83->Text = ("");
	this->label84->Text = ("");
	this->label85->Text = ("");
	this->label86->Text = ("");
	this->label87->Text = ("");
	this->label88->Text = ("");
	this->label89->Text = ("");
	this->label90->Text = ("");
	this->label91->Text = ("");
	this->label92->Text = ("");
	this->label93->Text = ("");
	this->label94->Text = ("");
	this->label95->Text = ("");
	this->label96->Text = ("");
	this->label97->Text = ("");
	this->label98->Text = ("");
	this->label99->Text = ("");
	this->label100->Text = ("");

	this->button1->Enabled = true;
}
	
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { //QUICK SORT button
	//sort algorithm here
	//insertion alg here

	//display numbers 

	Qsort(arr, 0, 99);


	this->label1->Text = Convert::ToString(arr[0]);
	this->label2->Text = Convert::ToString(arr[1]);
	this->label3->Text = Convert::ToString(arr[2]);
	this->label4->Text = Convert::ToString(arr[3]);
	this->label5->Text = Convert::ToString(arr[4]);
	this->label6->Text = Convert::ToString(arr[5]);
	this->label7->Text = Convert::ToString(arr[6]);
	this->label8->Text = Convert::ToString(arr[7]);
	this->label9->Text = Convert::ToString(arr[8]);
	this->label10->Text = Convert::ToString(arr[9]);
	this->label11->Text = Convert::ToString(arr[10]);
	this->label12->Text = Convert::ToString(arr[11]);
	this->label13->Text = Convert::ToString(arr[12]);
	this->label14->Text = Convert::ToString(arr[13]);
	this->label15->Text = Convert::ToString(arr[14]);
	this->label16->Text = Convert::ToString(arr[15]);
	this->label17->Text = Convert::ToString(arr[16]);
	this->label18->Text = Convert::ToString(arr[17]);
	this->label19->Text = Convert::ToString(arr[18]);
	this->label20->Text = Convert::ToString(arr[19]);
	this->label21->Text = Convert::ToString(arr[20]);
	this->label22->Text = Convert::ToString(arr[21]);
	this->label23->Text = Convert::ToString(arr[22]);
	this->label24->Text = Convert::ToString(arr[23]);
	this->label25->Text = Convert::ToString(arr[24]);
	this->label26->Text = Convert::ToString(arr[25]);
	this->label27->Text = Convert::ToString(arr[26]);
	this->label28->Text = Convert::ToString(arr[27]);
	this->label29->Text = Convert::ToString(arr[28]);
	this->label30->Text = Convert::ToString(arr[29]);
	this->label31->Text = Convert::ToString(arr[30]);
	this->label32->Text = Convert::ToString(arr[31]);
	this->label33->Text = Convert::ToString(arr[32]);
	this->label34->Text = Convert::ToString(arr[33]);
	this->label35->Text = Convert::ToString(arr[34]);
	this->label36->Text = Convert::ToString(arr[35]);
	this->label37->Text = Convert::ToString(arr[36]);
	this->label38->Text = Convert::ToString(arr[37]);
	this->label39->Text = Convert::ToString(arr[38]);
	this->label40->Text = Convert::ToString(arr[39]);
	this->label41->Text = Convert::ToString(arr[40]);
	this->label42->Text = Convert::ToString(arr[41]);
	this->label43->Text = Convert::ToString(arr[42]);
	this->label44->Text = Convert::ToString(arr[43]);
	this->label45->Text = Convert::ToString(arr[44]);
	this->label46->Text = Convert::ToString(arr[45]);
	this->label47->Text = Convert::ToString(arr[46]);
	this->label48->Text = Convert::ToString(arr[47]);
	this->label49->Text = Convert::ToString(arr[48]);
	this->label50->Text = Convert::ToString(arr[49]);
	this->label51->Text = Convert::ToString(arr[50]);
	this->label52->Text = Convert::ToString(arr[51]);
	this->label53->Text = Convert::ToString(arr[52]);
	this->label54->Text = Convert::ToString(arr[53]);
	this->label55->Text = Convert::ToString(arr[54]);
	this->label56->Text = Convert::ToString(arr[55]);
	this->label57->Text = Convert::ToString(arr[56]);
	this->label58->Text = Convert::ToString(arr[57]);
	this->label59->Text = Convert::ToString(arr[58]);
	this->label60->Text = Convert::ToString(arr[59]);
	this->label61->Text = Convert::ToString(arr[60]);
	this->label62->Text = Convert::ToString(arr[61]);
	this->label63->Text = Convert::ToString(arr[62]);
	this->label64->Text = Convert::ToString(arr[63]);
	this->label65->Text = Convert::ToString(arr[64]);
	this->label66->Text = Convert::ToString(arr[65]);
	this->label67->Text = Convert::ToString(arr[66]);
	this->label68->Text = Convert::ToString(arr[67]);
	this->label69->Text = Convert::ToString(arr[68]);
	this->label70->Text = Convert::ToString(arr[69]);
	this->label71->Text = Convert::ToString(arr[70]);
	this->label72->Text = Convert::ToString(arr[71]);
	this->label73->Text = Convert::ToString(arr[72]);
	this->label74->Text = Convert::ToString(arr[73]);
	this->label75->Text = Convert::ToString(arr[74]);
	this->label76->Text = Convert::ToString(arr[75]);
	this->label77->Text = Convert::ToString(arr[76]);
	this->label78->Text = Convert::ToString(arr[77]);
	this->label79->Text = Convert::ToString(arr[78]);
	this->label80->Text = Convert::ToString(arr[79]);
	this->label81->Text = Convert::ToString(arr[80]);
	this->label82->Text = Convert::ToString(arr[81]);
	this->label83->Text = Convert::ToString(arr[82]);
	this->label84->Text = Convert::ToString(arr[83]);
	this->label85->Text = Convert::ToString(arr[84]);
	this->label86->Text = Convert::ToString(arr[85]);
	this->label87->Text = Convert::ToString(arr[86]);
	this->label88->Text = Convert::ToString(arr[87]);
	this->label89->Text = Convert::ToString(arr[88]);
	this->label90->Text = Convert::ToString(arr[89]);
	this->label91->Text = Convert::ToString(arr[90]);
	this->label92->Text = Convert::ToString(arr[91]);
	this->label93->Text = Convert::ToString(arr[92]);
	this->label94->Text = Convert::ToString(arr[93]);
	this->label95->Text = Convert::ToString(arr[94]);
	this->label96->Text = Convert::ToString(arr[95]);
	this->label97->Text = Convert::ToString(arr[96]);
	this->label98->Text = Convert::ToString(arr[97]);
	this->label99->Text = Convert::ToString(arr[98]);
	this->label100->Text = Convert::ToString(arr[99]);


	this->button1->Enabled = true;
	
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label43_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
