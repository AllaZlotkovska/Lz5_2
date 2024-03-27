#pragma once
#include <math.h>
namespace lz4_5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ îá÷èñëèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏğîãğàìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÀâòîğàToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ îá÷èñëèòèToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòèToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏğîãğàìóToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÀâòîğàToolStripMenuItem1;









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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->îá÷èñëèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÀâòîğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->îá÷èñëèòèToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÀâòîğàToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(149, 260);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Íàéìåíøå:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(243, 260);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L" ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(149, 295);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Íàéá³ëüøå:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(247, 295);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L" ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 283);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Îá÷èñëèòè";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 87);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(24, 121);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(24, 154);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(24, 186);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(132, 22);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(24, 218);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(132, 22);
			this->textBox5->TabIndex = 10;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(864, 471);
			this->tabControl1->TabIndex = 12;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(856, 442);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Çàâäàííÿ 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->îá÷èñëèòèToolStripMenuItem,
					this->î÷èñòèòèToolStripMenuItem, this->ïğîÏğîãğàìóToolStripMenuItem, this->ïğîÀâòîğàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(4, 4);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(848, 28);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// îá÷èñëèòèToolStripMenuItem
			// 
			this->îá÷èñëèòèToolStripMenuItem->Name = L"îá÷èñëèòèToolStripMenuItem";
			this->îá÷èñëèòèToolStripMenuItem->Size = System::Drawing::Size(99, 24);
			this->îá÷èñëèòèToolStripMenuItem->Text = L"Îá÷èñëèòè";
			this->îá÷èñëèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îá÷èñëèòèToolStripMenuItem_Click);
			// 
			// î÷èñòèòèToolStripMenuItem
			// 
			this->î÷èñòèòèToolStripMenuItem->Name = L"î÷èñòèòèToolStripMenuItem";
			this->î÷èñòèòèToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->î÷èñòèòèToolStripMenuItem->Text = L"Î÷èñòèòè";
			this->î÷èñòèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòèToolStripMenuItem_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->ïğîÏğîãğàìóToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğîÏğîãğàìóToolStripMenuItem_Click);
			// 
			// ïğîÀâòîğàToolStripMenuItem
			// 
			this->ïğîÀâòîğàToolStripMenuItem->Name = L"ïğîÀâòîğàToolStripMenuItem";
			this->ïğîÀâòîğàToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->ïğîÀâòîğàToolStripMenuItem->Text = L"Ïğî àâòîğà";
			this->ïğîÀâòîğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğîÀâòîğàToolStripMenuItem_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->menuStrip2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(856, 442);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Çàâäàííÿ 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(36, 71);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(727, 276);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(36, 373);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Îá÷èñëèòè";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->îá÷èñëèòèToolStripMenuItem1,
					this->î÷èñòèòèToolStripMenuItem1, this->ïğîÏğîãğàìóToolStripMenuItem1, this->ïğîÀâòîğàToolStripMenuItem1
			});
			this->menuStrip2->Location = System::Drawing::Point(4, 4);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(848, 28);
			this->menuStrip2->TabIndex = 4;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// îá÷èñëèòèToolStripMenuItem1
			// 
			this->îá÷èñëèòèToolStripMenuItem1->Name = L"îá÷èñëèòèToolStripMenuItem1";
			this->îá÷èñëèòèToolStripMenuItem1->Size = System::Drawing::Size(99, 24);
			this->îá÷èñëèòèToolStripMenuItem1->Text = L"Îá÷èñëèòè";
			this->îá÷èñëèòèToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::îá÷èñëèòèToolStripMenuItem1_Click);
			// 
			// î÷èñòèòèToolStripMenuItem1
			// 
			this->î÷èñòèòèToolStripMenuItem1->Name = L"î÷èñòèòèToolStripMenuItem1";
			this->î÷èñòèòèToolStripMenuItem1->Size = System::Drawing::Size(88, 24);
			this->î÷èñòèòèToolStripMenuItem1->Text = L"Î÷èñòèòè";
			this->î÷èñòèòèToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòèToolStripMenuItem1_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem1
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem1->Name = L"ïğîÏğîãğàìóToolStripMenuItem1";
			this->ïğîÏğîãğàìóToolStripMenuItem1->Size = System::Drawing::Size(124, 24);
			this->ïğîÏğîãğàìóToolStripMenuItem1->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ïğîÏğîãğàìóToolStripMenuItem1_Click);
			// 
			// ïğîÀâòîğàToolStripMenuItem1
			// 
			this->ïğîÀâòîğàToolStripMenuItem1->Name = L"ïğîÀâòîğàToolStripMenuItem1";
			this->ïğîÀâòîğàToolStripMenuItem1->Size = System::Drawing::Size(104, 24);
			this->ïğîÀâòîğàToolStripMenuItem1->Text = L"Ïğî àâòîğà";
			this->ïğîÀâòîğàToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ïğîÀâòîğàToolStripMenuItem1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(864, 471);
			this->Controls->Add(this->tabControl1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
void Calculate1() {
	int min, max;
	int array[5];
	array[0] = Convert::ToInt32(textBox1->Text);
	array[1] = Convert::ToInt32(textBox2->Text);
	array[2] = Convert::ToInt32(textBox3->Text);
	array[3] = Convert::ToInt32(textBox4->Text);
	array[4] = Convert::ToInt32(textBox5->Text);

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5 - i - 1; ++j) {
			if (array[j] > array[j + 1]) {
				// îáì³í åëåìåíò³â, ÿêùî ïîòî÷íèé á³ëüøèé çà íàñòóïíèé
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	label2->Text = Convert::ToString(array[0]);
	label4->Text = Convert::ToString(array[4]);
}
void Calculate2() {
	float x, y, z, i = 1;
	richTextBox1->AppendText("x=\t| y=\t\t| z=\n------------------------------------------------------------------------\n");
	for (x = 4.5; x <= 18.5; x += 0.4) {
		y = tan(sqrt(x));
		z = x / (pow((x - 3), 2));
		//richTextBox1->Text->(Convert::ToString("y = " + y + "\n");
		richTextBox1->AppendText(x + "\t| " + y + "\t| " + z + "\n");
		i++;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculate1();
}
	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate2();
	}

private: System::Void îá÷èñëèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate1();
}
private: System::Void î÷èñòèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
	label2->Text = "";
	label4->Text = "";
}
private: System::Void ïğîÏğîãğàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ authorInfo = "Ïğîãğàìà çíàõîäèòü 5 ä³éñíèõ ÷èñåë ³ âèçíà÷àº íàéìåíøå òà íàéá³ëüøå ñåğåä íèõ";
	MessageBox::Show(authorInfo, "Ïğî ïğîãğàìó", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void ïğîÀâòîğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ authorInfo = "Ñòóäåíòêà ãğóïè 3ÑÎÌ Çëîòêîâñüêà Àëëà Â³ëåí³âíà";
	MessageBox::Show(authorInfo, "Ïğî àâòîğà", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void îá÷èñëèòèToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate2();
}
	   
private: System::Void î÷èñòèòèToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Clear();
}
private: System::Void ïğîÏğîãğàìóToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ authorInfo = "Ïğîãğàìà çíàõîäèòü çíà÷åííÿ ôóíêö³¿ íà âèçíà÷åíîìó ïğîì³æêó";
	MessageBox::Show(authorInfo, "Ïğî ïğîãğàìó", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void ïğîÀâòîğàToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ authorInfo = "Ñòóäåíòêà ãğóïè 3ÑÎÌ Çëîòêîâñüêà Àëëà Â³ëåí³âíà";
	MessageBox::Show(authorInfo, "Ïğî àâòîğà", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
