#pragma once
#include "Form2.h"
#include "About.h"
#include "Information.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include <msclr/marshal_cppstd.h>


namespace OperatingSystem {
	using namespace std;
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Finals
	/// </summary>
	public ref class Finals : public System::Windows::Forms::Form
	{
	public:

		Finals(void)
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
		~Finals()
		{
			if (components)
			{
				delete components;
			}
		}






	protected:

	protected:

	protected:

	protected:





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Button^ btn_start;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



		Form2^ form2;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Finals::typeid));
			this->btn_start = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_start
			// 
			this->btn_start->BackColor = System::Drawing::Color::Transparent;
			this->btn_start->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_start.Image")));
			this->btn_start->Location = System::Drawing::Point(267, 183);
			this->btn_start->Margin = System::Windows::Forms::Padding(1);
			this->btn_start->Name = L"btn_start";
			this->btn_start->Size = System::Drawing::Size(235, 75);
			this->btn_start->TabIndex = 4;
			this->btn_start->UseVisualStyleBackColor = false;
			this->btn_start->Click += gcnew System::EventHandler(this, &Finals::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(267, 402);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 73);
			this->button2->TabIndex = 5;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Finals::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(267, 296);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 73);
			this->button3->TabIndex = 6;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Finals::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(125, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(518, 106);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Finals
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(762, 519);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_start);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Finals";
			this->Text = L"Finals";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form2^ f1 = gcnew Form2(this);
		f1->Show();
		Hide();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		About^ f3 = gcnew About(this);
		f3->Show();
		Hide();
		
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Information^ f2 = gcnew Information(this);
		f2->Show();
		Hide();
}


};
}


