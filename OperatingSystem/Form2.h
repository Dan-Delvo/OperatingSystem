#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <msclr/marshal_cppstd.h>


#pragma once

struct p {
	int bt;
	int at;
	int tt;
	int wt;
	int n;
	int ft;
};



namespace OperatingSystem {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	private:
		DataTable^ dt;
	private: System::Windows::Forms::Label^ atwt;
	private: System::Windows::Forms::Label^ label5;
	public:
		Form^ form;
	public:
		Form2(void)
		{
			InitializeComponent();
			
			comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox1_SelectedIndexChanged_1);
			//
			
			//TODO: Add the constructor code here
			//
		}
		Form2(Form^ formparam) {
			form = formparam;
			InitializeComponent();

			dt = gcnew DataTable();
			// Initialize DataTable in the constructor
			dt = gcnew DataTable();
			dt->Columns->Add("ID", Int32::typeid);
			dt->Columns->Add("AT", Int32::typeid);
			dt->Columns->Add("BT", Int32::typeid);
			dt->Columns->Add("FT", Int32::typeid);
			dt->Columns->Add("TT", Int32::typeid);
			dt->Columns->Add("WT", Int32::typeid);
			dataGridView1->DataSource = dt;

		}

	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Arriv;
	private: System::Windows::Forms::TextBox^ burt;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ qtt;

	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Arriv = (gcnew System::Windows::Forms::TextBox());
			this->burt = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->qtt = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->atwt = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(409, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(245, 71);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(662, 133);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(455, 350);
			this->dataGridView1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(67, 255);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 36);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Input Arrival Time";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(83, 414);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(232, 36);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Input Burst Time";
			// 
			// Arriv
			// 
			this->Arriv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Arriv->Location = System::Drawing::Point(73, 318);
			this->Arriv->Multiline = true;
			this->Arriv->Name = L"Arriv";
			this->Arriv->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->Arriv->Size = System::Drawing::Size(228, 56);
			this->Arriv->TabIndex = 8;
			this->Arriv->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// burt
			// 
			this->burt->Location = System::Drawing::Point(89, 494);
			this->burt->Name = L"burt";
			this->burt->Size = System::Drawing::Size(212, 22);
			this->burt->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(132, 565);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 43);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Enter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(407, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 29);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Input Quantum";
			// 
			// qtt
			// 
			this->qtt->Location = System::Drawing::Point(436, 352);
			this->qtt->Name = L"qtt";
			this->qtt->Size = System::Drawing::Size(112, 22);
			this->qtt->TabIndex = 12;
			this->qtt->TextChanged += gcnew System::EventHandler(this, &Form2::textBox3_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"First Come First Serve", L"Shortest Job First",
					L"Round Robin"
			});
			this->comboBox1->Location = System::Drawing::Point(73, 164);
			this->comboBox1->Margin = System::Windows::Forms::Padding(5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(228, 24);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox1_SelectedIndexChanged_1);
			// 
			// atwt
			// 
			this->atwt->Location = System::Drawing::Point(659, 494);
			this->atwt->Name = L"atwt";
			this->atwt->Size = System::Drawing::Size(353, 101);
			this->atwt->TabIndex = 14;
			this->atwt->Text = L"label5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(655, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 38);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Output";
			this->label5->Click += gcnew System::EventHandler(this, &Form2::label5_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1186, 647);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->atwt);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->qtt);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->burt);
			this->Controls->Add(this->Arriv);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	vector<p> pro(string arriva, string burss) {
			   float att, awt, sum_tt = 0, sum_wt = 0;
			   string s, s1;

			   stringstream ss1(arriva);
			   stringstream ss2(burss);

			   // Vector to store processes
			   vector<p> id;  // Using a non-dynamic vector

			   p temp;

			   // Process input until there are no more tokens in the stringstream
			   while (getline(ss1, s, ' ') && getline(ss2, s1, ' ')) {
				   temp.at = stoi(s);
				   temp.bt = stoi(s1);
				   temp.n = id.size() + 1;
				   id.push_back(temp);
			   }

			   // Sorting processes based on arrival time
			   for (int i = 0; i < id.size() - 1; i++) {
				   for (int a = 0; a < id.size() - i - 1; a++) {
					   if (id[a].at > id[a + 1].at) {
						   temp = id[a];
						   id[a] = id[a + 1];
						   id[a + 1] = temp;
					   }
				   }
			   }

			   // Gantt chart and completion time calculation
			   for (int i = 0; i < id.size(); i++) {
				   if (i == 0) {
					   id[i].ft = id[i].at + id[i].bt;
				   }
				   else if (id[i].at > id[i - 1].ft) {
					   int waiting_time = id[i].at - id[i - 1].ft;
					   id[i].ft = id[i - 1].ft + id[i].bt + waiting_time;
				   }
				   else {
					   id[i].ft = id[i - 1].ft + id[i].bt;
				   }
			   }

			   // Turnaround time and waiting time calculation
			   for (int i = 0; i < id.size(); i++) {
				   id[i].tt = id[i].ft - id[i].at;
				   id[i].wt = id[i].tt - id[i].bt;
			   }

			   // Displaying the results;
			   for (int i = 0; i < id.size(); i++) {
				   sum_tt += id[i].tt;
				   sum_wt += id[i].wt;
			   }

			   // Calculating average turnaround time and average waiting time
			   att = sum_tt / id.size();
			   awt = sum_wt / id.size();




			   return id;
		   }

	void completionTime(int num, vector<p>& id) {
		int temp, val;

		// Calculate completion time for the first process
		id[0].ft = id[0].at + id[0].bt;

		// Calculate turnaround time and waiting time for the first process
		id[0].tt = id[0].ft - id[0].at;
		id[0].wt = id[0].tt - id[0].bt;
		if (id[0].wt < 0) {
			id[0].wt = 0;
		}

		// Loop through the remaining processes
		for (int i = 1; i < num; i++) {
			temp = id[i - 1].ft; // Initialize temp with the completion time of the previous process
			int low = id[i].bt; // Initialize low with the burst time of the current process
			val = i;

			// Find the next process with the lowest burst time that arrives before or at the completion time of the previous process
			for (int j = i; j < num; j++) {
				if (temp >= id[j].at && low >= id[j].bt) {
					low = id[j].bt;
					val = j;
				}
			}

			// Calculate completion time for the current process
			id[val].ft = temp + id[val].bt;

			// Calculate turnaround time and waiting time for the current process
			id[val].tt = id[val].ft - id[val].at;
			id[val].wt = id[val].tt - id[val].bt;
			if (id[val].wt <= 0) {
				id[val].wt = 0;
			}

			// Swap the current process with the process at index i
			swap(id[val], id[i]);
		}
	}



	vector<p> pro1(string arriva, string burss) {
		float att, awt, sum_tt = 0, sum_wt = 0;

		stringstream ss1(arriva);
		stringstream ss2(burss);

		// Vector to store processes
		vector<p> id;
		p temp;

		// Process input until there are no more tokens in the stringstream
		while (getline(ss1, arriva, ' ') && getline(ss2, burss, ' ')) {
			temp.at = stoi(arriva); // Convert the string to an integer
			temp.bt = stoi(burss); // Convert the string to an integer
			temp.n = id.size() + 1; // Assign process number dynamically
			id.push_back(temp); // Use push_back to add elements to the vector
		}

		// Sorting processes based on arrival time
		for (int i = 0; i < id.size() - 1; i++) {
			for (int a = 0; a < id.size() - i - 1; a++) {
				if (id[a].at > id[a + 1].at) {
					temp = id[a];
					id[a] = id[a + 1];
					id[a + 1] = temp;
				}
			}
		}

		// Function to calculate completion time and sort processes
		completionTime(id.size(), id);

		// Turnaround time and waiting time calculation
		for (int i = 0; i < id.size(); i++) {
			id[i].tt = id[i].ft - id[i].at;
			id[i].wt = id[i].tt - id[i].bt;
		}

		// Displaying the results
		
		for (int i = 0; i < id.size(); i++) {
			cout << id[i].n << "\t\t" << id[i].at << "\t" << id[i].bt << "\t" << id[i].ft << "\t" << id[i].tt << "\t" << id[i].wt << endl;
			sum_tt += id[i].tt;
			sum_wt += id[i].wt;
		}

		// Sorting processes based on arrival time
		for (int i = 0; i < id.size() - 1; i++) {
			for (int a = 0; a < id.size() - i - 1; a++) {
				if (id[a].at > id[a + 1].at) {
					temp = id[a];
					id[a] = id[a + 1];
					id[a + 1] = temp;
				}
			}
		}

		// Calculating average turnaround time and average waiting time
		att = sum_tt / id.size();
		awt = sum_wt / id.size();

		return id;
	}





	vector<p> pro2(string arriva, string burss, string qtss) {
		//List of current process
		vector<p> myvector;
		//List of burst time will change value over time
		vector<int> temp1;
		//Number of processes
		int pID = 0;

		string arrival, burst, temp0, temp2;
		p temp;

		stringstream ssarrival(arriva);
		stringstream ssburst(burss);

		while (getline(ssarrival, temp0, ' ') && getline(ssburst, temp2, ' ')) {
			temp.at = stoi(temp0);
			temp.bt = stoi(temp2);
			temp.n = ++pID;

			myvector.push_back(temp);
		}


		int quantum = stoi(qtss);

		//Sort my vector by arrival time (incresing)
		for (int i = 0; i < myvector.size(); i++) {
			for (int j = 0; j < myvector.size() - 1 - i; j++) {
				if (myvector[j + 1].at < myvector[j].at) {
					swap(myvector[j], myvector[j + 1]);
				}
			}
		}

		// temporary variable for the burst time with sorted process
		for (int i = 0; i < myvector.size(); i++) {
			temp1.push_back(myvector[i].bt);
		}

		//Holds the current time
		int time = 0;

		for (int i = 0; i < myvector.size();) {
			// Reference to the current element in myvector
			auto& vec = myvector[i];

			//Checks if process already arrived with the current time and the burst time is not 0
			if (vec.at <= time && temp1[i] != 0) {
				//Assign the passed time by quantum time or burst time, whichever is the lowest
				int timePassed = quantum > temp1[i] ? temp1[i] : quantum;
				//Subtract the passed time from the burst time to track the remaining time of the process
				temp1[i] -= timePassed;
				//Add the passed time to the current time
				time += timePassed;
				//Assign the current time to the temporary complete time of process
				vec.ft = time;
			}
			//Increment the loop index
			i++;

			//Check if the loop is on the end stage
			if (i == myvector.size()) {
				//Check if all burst times are zero, reset the loop index if not
				bool zeros = true;

				for (int z : temp1) {
					if (z != 0) {
						zeros = false;
						break;  // Exit the loop as soon as a non-zero element is found
					}
				}
				if (!zeros) {
					i = 0;

					for (int z = 0; z < myvector.size(); z++) {
						//Check if the arrival time is <= the current time but not zero, break the loop
						if (temp1[z] != 0 && myvector[z].at <= time)
							break;
						//Check if there's a gap between the current time and the arrival time
						//Assign the arrival time to the current time then break
						if (myvector[z].at > time) {
							time = myvector[z].at;
							break;
						}
					}
				}
			}
		}


		float sumtt = 0, sumwt = 0;
		float avett = 0, avewt = 0;

		// Return the order of ID in the original place
		for (int i = 0; i < myvector.size(); i++) {
			for (int j = 0; j < myvector.size() - 1 - i; j++) {
				if (myvector[j + 1].n < myvector[j].n) {
					swap(myvector[j], myvector[j + 1]);
				}
			}
		}


		for (int i = 0; i < myvector.size(); i++) {
			auto vec = myvector[i];
			vec.tt = vec.ft - vec.at;
			vec.wt = vec.tt - vec.bt;
			sumtt += vec.tt;
			sumwt += vec.wt;

		}
		avett = sumtt / pID;
		avewt = sumwt / pID;

		return myvector;
	}









	

		   // In the Form2 class



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		form->Show();
	}

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedItem = comboBox1->SelectedItem->ToString()->ToLower(); // Convert to lowercase for case-insensitive comparison

		// Set visibility explicitly in all cases
		label4->Visible = false;
		qtt->Visible = false;

		// Check if the selected item is "round robin" and show Label4 and TextBox3
		if (selectedItem == "round robin") {
			label4->Visible = true;
			qtt->Visible = true;
		}
	}
private: System::Void Form2_Load_1(System::Object^ sender, System::EventArgs^ e) {
	label4->Visible = false;
	qtt->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ selectedItem = comboBox1->SelectedItem->ToString()->ToLower(); // Convert to lowercase for case-insensitive comparison


	if (selectedItem == "first come first serve") {
		try {
			String^ arri = Arriv->Text;
			String^ burs = burt->Text;

			// Check if either 'at' or 'bt' is empty
			if (arri->Trim() == "" || burs->Trim() == "") {
				MessageBox::Show("Please enter both 'at' and 'bt' values.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Convert System::String^ to std::string
			std::string atString = marshal_as<std::string>(arri);
			std::string btString = marshal_as<std::string>(burs);

			// Create string streams for extraction
			std::istringstream atStream(atString);
			std::istringstream btStream(btString);

			// Variables to hold extracted values
			int atValue, btValue;

			// Vectors to store 'at' and 'bt' values
			vector<int> at, bt;

			// Extract 'at' values
			while (atStream >> atValue) {
				at.push_back(atValue);
				if (atStream.peek() == ',') atStream.ignore();
			}

			// Extract 'bt' values
			while (btStream >> btValue) {
				bt.push_back(btValue);
				if (btValue == 0) {
					MessageBox::Show("Please enter 'bt' values not 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				};
				if (btStream.peek() == ',') btStream.ignore();
			}

			// Check if the sizes of 'at' and 'bt' are the same
			if (at.size() != bt.size()) {
				MessageBox::Show("Please enter 'at' and 'bt' with the same size.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			string arriva = marshal_as<string>(arri);
			string burss = marshal_as<string>(burs);

			// Call the scheduling algorithm-------------------------------------------------eto lang babaguhin
			vector<p> res = pro(arriva, burss);

			// Clear existing rows in the DataTable and DataGridView
			dt->Rows->Clear();
			dt->Clear();
			dataGridView1->DataSource = nullptr;

			// Define the columns in the DataTable
			dt->Columns->Clear();
			dt->Columns->Add("ID", Int32::typeid);
			dt->Columns->Add("AT", Int32::typeid);
			dt->Columns->Add("BT", Int32::typeid);
			dt->Columns->Add("FT", Int32::typeid);
			dt->Columns->Add("TT", Int32::typeid);
			dt->Columns->Add("WT", Int32::typeid);


			for (int i = 0; i < res.size(); i++) {
				DataRow^ row = dt->NewRow();
				row["ID"] = res[i].n;
				row["AT"] = res[i].at;
				row["BT"] = res[i].bt;
				row["FT"] = res[i].ft;
				row["TT"] = res[i].tt;
				row["WT"] = res[i].wt;
				dt->Rows->Add(row);
			}

			float sum_tt = 0, sum_wt = 0;

			for (int i = 0; i < res.size(); i++) {
				res[i].tt = res[i].ft - res[i].at;
				res[i].wt = res[i].tt - res[i].bt;
			}

			for (int i = 0; i < res.size(); i++) {
				sum_tt += res[i].tt;
				sum_wt += res[i].wt;
			}

			float att = sum_tt / res.size();
			float awt = sum_wt / res.size();
			atwt->Text = "Average Turnaround Time (ATT): " + att.ToString() + "\nAverage Waiting Time (AWT): " + awt.ToString();

			dataGridView1->DataSource = dt; // Set the DataTable as the new data source
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (selectedItem == "shortest job first") {
		try {
			String^ arri = Arriv->Text;
			String^ burs = burt->Text;

			// Check if either 'at' or 'bt' is empty
			if (arri->Trim() == "" || burs->Trim() == "") {
				MessageBox::Show("Please enter both 'at' and 'bt' values.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Convert System::String^ to std::string
			std::string atString = marshal_as<std::string>(arri);
			std::string btString = marshal_as<std::string>(burs);

			// Create string streams for extraction
			std::istringstream atStream(atString);
			std::istringstream btStream(btString);

			// Variables to hold extracted values
			int atValue, btValue;

			// Vectors to store 'at' and 'bt' values
			vector<int> at, bt;

			// Extract 'at' values
			while (atStream >> atValue) {
				at.push_back(atValue);
				if (atStream.peek() == ',') atStream.ignore();
			}

			// Extract 'bt' values
			while (btStream >> btValue) {
				bt.push_back(btValue);
				if (btValue == 0) {
					MessageBox::Show("Please enter 'bt' values not 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				};
				if (btStream.peek() == ',') btStream.ignore();
			}

			// Check if the sizes of 'at' and 'bt' are the same
			if (at.size() != bt.size()) {
				MessageBox::Show("Please enter 'at' and 'bt' with the same size.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			string arriva = marshal_as<string>(arri);
			string burss = marshal_as<string>(burs);

			// Call the scheduling algorithm-------------------------------------------------eto lang babaguhin
			vector<p> res = pro1(arriva, burss);

			// Clear existing rows in the DataTable and DataGridView
			dt->Rows->Clear();
			dt->Clear();
			dataGridView1->DataSource = nullptr;

			// Define the columns in the DataTable
			dt->Columns->Clear();
			dt->Columns->Add("ID", Int32::typeid);
			dt->Columns->Add("AT", Int32::typeid);
			dt->Columns->Add("BT", Int32::typeid);
			dt->Columns->Add("FT", Int32::typeid);
			dt->Columns->Add("TT", Int32::typeid);
			dt->Columns->Add("WT", Int32::typeid);


			for (int i = 0; i < res.size(); i++) {
				DataRow^ row = dt->NewRow();
				row["ID"] = res[i].n;
				row["AT"] = res[i].at;
				row["BT"] = res[i].bt;
				row["FT"] = res[i].ft;
				row["TT"] = res[i].tt;
				row["WT"] = res[i].wt;
				dt->Rows->Add(row);
			}

			float sum_tt = 0, sum_wt = 0;

			for (int i = 0; i < res.size(); i++) {
				res[i].tt = res[i].ft - res[i].at;
				res[i].wt = res[i].tt - res[i].bt;
			}

			for (int i = 0; i < res.size(); i++) {
				sum_tt += res[i].tt;
				sum_wt += res[i].wt;
			}

			float att = sum_tt / res.size();
			float awt = sum_wt / res.size();
			atwt->Text = "Average Turnaround Time (ATT): " + att.ToString() + "\nAverage Waiting Time (AWT): " + awt.ToString();

			dataGridView1->DataSource = dt; // Set the DataTable as the new data source
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	if (selectedItem == "round robin") {
		try {
			String^ arri = Arriv->Text;
			String^ burs = burt->Text;
			String^ qts = qtt->Text;

			// Check if either 'at' or 'bt' is empty
			if (arri->Trim() == "" || burs->Trim() == "" || qts->Trim() == "") {
				MessageBox::Show("Please enter both 'at' and 'bt' values.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Convert System::String^ to std::string
			std::string atString = marshal_as<std::string>(arri);
			std::string btString = marshal_as<std::string>(burs);

			// Create string streams for extraction
			std::istringstream atStream(atString);
			std::istringstream btStream(btString);

			// Variables to hold extracted values
			int atValue, btValue;

			// Vectors to store 'at' and 'bt' values
			vector<int> at, bt;

			// Extract 'at' values
			while (atStream >> atValue) {
				at.push_back(atValue);
				if (atStream.peek() == ',') atStream.ignore();
			}

			// Extract 'bt' values
			while (btStream >> btValue) {
				bt.push_back(btValue);
				if (btValue == 0) {
					MessageBox::Show("Please enter 'bt' values not 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				};
				if (btStream.peek() == ',') btStream.ignore();
			}

			// Check if the sizes of 'at' and 'bt' are the same
			if (at.size() != bt.size()) {
				MessageBox::Show("Please enter 'at' and 'bt' with the same size.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			string arriva = marshal_as<string>(arri);
			string burss = marshal_as<string>(burs);
			string qtss = marshal_as<string>(qts);


			// Call the scheduling algorithm-------------------------------------------------eto lang babaguhin
			vector<p> res = pro2(arriva, burss, qtss);

			// Clear existing rows in the DataTable and DataGridView
			dt->Rows->Clear();
			dt->Clear();
			dataGridView1->DataSource = nullptr;

			// Define the columns in the DataTable
			dt->Columns->Clear();
			dt->Columns->Add("ID", Int32::typeid);
			dt->Columns->Add("AT", Int32::typeid);
			dt->Columns->Add("BT", Int32::typeid);
			dt->Columns->Add("FT", Int32::typeid);
			dt->Columns->Add("TT", Int32::typeid);
			dt->Columns->Add("WT", Int32::typeid);




			float sum_tt = 0, sum_wt = 0;

			for (int i = 0; i < res.size(); i++) {
				res[i].tt = res[i].ft - res[i].at;
				res[i].wt = res[i].tt - res[i].bt;
			}

			for (int i = 0; i < res.size(); i++) {
				DataRow^ row = dt->NewRow();
				row["ID"] = res[i].n;
				row["AT"] = res[i].at;
				row["BT"] = res[i].bt;
				row["FT"] = res[i].ft;
				row["TT"] = res[i].tt;
				row["WT"] = res[i].wt;
				dt->Rows->Add(row);
			}

			for (int i = 0; i < res.size(); i++) {
				sum_tt += res[i].tt;
				sum_wt += res[i].wt;
			}

			float att = sum_tt / res.size();
			float awt = sum_wt / res.size();
			atwt->Text = "Average Turnaround Time (ATT): " + att.ToString() + "\nAverage Waiting Time (AWT): " + awt.ToString();

			dataGridView1->DataSource = dt; // Set the DataTable as the new data source
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
