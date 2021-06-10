#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::Windows::Forms::MenuStrip^ menuStrip1;







	private: System::Windows::Forms::ToolStripMenuItem^ ô³ëüìèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áðîíþâàííÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîâ³äêàToolStripMenuItem;












	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label26;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button33;




























	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ô³ëüìèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áðîíþâàííÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîâ³äêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ô³ëüìèToolStripMenuItem,
					this->áðîíþâàííÿToolStripMenuItem, this->äîâ³äêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1014, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ô³ëüìèToolStripMenuItem
			// 
			this->ô³ëüìèToolStripMenuItem->Name = L"ô³ëüìèToolStripMenuItem";
			this->ô³ëüìèToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->ô³ëüìèToolStripMenuItem->Text = L"Ô³ëüìè";
			// 
			// áðîíþâàííÿToolStripMenuItem
			// 
			this->áðîíþâàííÿToolStripMenuItem->Name = L"áðîíþâàííÿToolStripMenuItem";
			this->áðîíþâàííÿToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->áðîíþâàííÿToolStripMenuItem->Text = L"Áðîíþâàííÿ";
			// 
			// äîâ³äêàToolStripMenuItem
			// 
			this->äîâ³äêàToolStripMenuItem->Name = L"äîâ³äêàToolStripMenuItem";
			this->äîâ³äêàToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->äîâ³äêàToolStripMenuItem->Text = L"Äîâ³äêà";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(48, 156);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(150, 279);
			this->panel1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(144, 214);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Controls->Add(this->dateTimePicker1);
			this->panel2->Controls->Add(this->button33);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Location = System::Drawing::Point(424, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(317, 371);
			this->panel2->TabIndex = 8;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::WindowFrame;
			this->dateTimePicker1->Location = System::Drawing::Point(85, 181);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Azure;
			this->textBox2->Location = System::Drawing::Point(85, 141);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Azure;
			this->textBox1->Location = System::Drawing::Point(85, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::Color::Azure;
			this->label26->Location = System::Drawing::Point(39, 183);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(40, 16);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Äàòà";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::Azure;
			this->label20->Location = System::Drawing::Point(229, 248);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(56, 20);
			this->label20->TabIndex = 0;
			this->label20->Text = L"70 ãðí";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::Azure;
			this->label23->Location = System::Drawing::Point(82, 223);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(14, 16);
			this->label23->TabIndex = 0;
			this->label23->Text = L"x";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::Azure;
			this->label25->Location = System::Drawing::Point(81, 252);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(15, 16);
			this->label25->TabIndex = 0;
			this->label25->Text = L"y";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::Azure;
			this->label24->Location = System::Drawing::Point(190, 248);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(42, 20);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Ö³íà";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::Azure;
			this->label22->Location = System::Drawing::Point(33, 56);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(46, 16);
			this->label22->TabIndex = 0;
			this->label22->Text = L"Ô³ëüì";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::Azure;
			this->label19->Location = System::Drawing::Point(44, 223);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(32, 16);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Ðÿä";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Azure;
			this->label17->Location = System::Drawing::Point(30, 252);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(45, 16);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Ì³ñöå";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::Azure;
			this->label16->Location = System::Drawing::Point(11, 144);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(68, 16);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Òåëåôîí";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::Azure;
			this->label18->Location = System::Drawing::Point(200, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(109, 15);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Çàïîâí³òü àíêåòó";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::Azure;
			this->label15->Location = System::Drawing::Point(49, 104);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(30, 16);
			this->label15->TabIndex = 0;
			this->label15->Tag = L"";
			this->label15->Text = L"²ì\'ÿ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::Azure;
			this->label21->Location = System::Drawing::Point(135, 47);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(54, 25);
			this->label21->TabIndex = 0;
			this->label21->Text = L"ÕÕÕ";
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(84, 298);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(160, 37);
			this->button33->TabIndex = 2;
			this->button33->Text = L"Òèöü";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1014, 591);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	};
}

