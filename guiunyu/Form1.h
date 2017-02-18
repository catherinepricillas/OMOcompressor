#pragma once

#include <iostream>
#include <string>
#include <string.h>
#include <msclr\marshal_cppstd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include "ADT.h"

using std::string;
namespace guiunyu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	
	//buat compress
		input1 file;
		//ListViewItem^ selItem;
		//String^ txt;
		//String^ dest ;
		string dest1;
		//String^ nama;
		string nama1;
		//buat decompress
		string file1;
		//ListViewItem^ selItem1;
		//String^ txt1 ;
		//String^ dest2;
		string d;
		long time;
		long time1;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			

		}
		System::String^ path;
		String^ fileName;
		String^ size;
		String^ entropi;
		String^ bitpersimbol;
		String^ sizesetelah;
		String^ dest;
		String^ nama;
		
	private: System::Windows::Forms::ToolTip^  toolTip1;
	public: 

	public: 

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	public: 
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;


	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::ComponentModel::IContainer^  components;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;

























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(39, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(89, 96);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox1, L"Compress");
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(26, 137);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(120, 107);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox2, L"Decompress");
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->listView1);
			this->panel1->Location = System::Drawing::Point(152, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(586, 467);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox8->Location = System::Drawing::Point(508, 12);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(45, 40);
			this->pictureBox8->TabIndex = 9;
			this->pictureBox8->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox8, L"Open File");
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form1::pictureBox8_Click);
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::Color::Gray;
			this->textBox3->Location = System::Drawing::Point(35, 28);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(464, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"Select file";
			this->textBox3->Click += gcnew System::EventHandler(this, &Form1::textBox3_Click);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			this->textBox3->Leave += gcnew System::EventHandler(this, &Form1::textBox3_Leave);
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::Color::Gray;
			this->textBox2->Location = System::Drawing::Point(152, 330);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(328, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Browse destination folder";
			this->textBox2->Click += gcnew System::EventHandler(this, &Form1::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			this->textBox2->Leave += gcnew System::EventHandler(this, &Form1::textBox2_Leave);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox7->Location = System::Drawing::Point(109, 313);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(37, 54);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox7, L"Browse Destination Folder");
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Form1::pictureBox7_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::Color::Orange;
			this->progressBar1->Location = System::Drawing::Point(84, 447);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(423, 20);
			this->progressBar1->TabIndex = 5;
			//this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox6->Location = System::Drawing::Point(258, 382);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(79, 56);
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox6, L"OMOit!");
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::pictureBox6_Click);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->Location = System::Drawing::Point(152, 356);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"OMO file name";
			this->textBox1->Click += gcnew System::EventHandler(this, &Form1::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Form1::textBox1_Leave);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(84, 268);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(39, 39);
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox4, L"Delete");
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(35, 268);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(43, 39);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox3, L"Add");
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click_1);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader5});
			this->listView1->Location = System::Drawing::Point(35, 54);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(501, 208);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 171;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Size";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Path";
			this->columnHeader5->Width = 265;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->progressBar2);
			this->panel2->Controls->Add(this->pictureBox13);
			this->panel2->Controls->Add(this->pictureBox12);
			this->panel2->Controls->Add(this->pictureBox11);
			this->panel2->Controls->Add(this->pictureBox10);
			this->panel2->Controls->Add(this->pictureBox9);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->listView2);
			this->panel2->Location = System::Drawing::Point(160, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(578, 477);
			this->panel2->TabIndex = 10;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// progressBar2
			// 
			this->progressBar2->ForeColor = System::Drawing::Color::Orange;
			this->progressBar2->Location = System::Drawing::Point(48, 380);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(449, 23);
			this->progressBar2->TabIndex = 8;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox13->Location = System::Drawing::Point(60, 179);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(43, 41);
			this->pictureBox13->TabIndex = 7;
			this->pictureBox13->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox13, L"Delete");
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Form1::pictureBox13_Click_1);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox12->Location = System::Drawing::Point(3, 179);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(51, 41);
			this->pictureBox12->TabIndex = 6;
			this->pictureBox12->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox12, L"Add");
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Form1::pictureBox12_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox11->Location = System::Drawing::Point(199, 290);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(114, 71);
			this->pictureBox11->TabIndex = 5;
			this->pictureBox11->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox11, L"unOMO!");
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Form1::pictureBox11_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox10->Location = System::Drawing::Point(79, 242);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(44, 42);
			this->pictureBox10->TabIndex = 4;
			this->pictureBox10->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox10, L"Browse Destination Folder");
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Form1::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox9->Location = System::Drawing::Point(394, 73);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(42, 39);
			this->pictureBox9->TabIndex = 3;
			this->pictureBox9->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox9, L"Open File");
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Form1::pictureBox9_Click_1);
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::Color::Gray;
			this->textBox5->Location = System::Drawing::Point(129, 252);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(295, 20);
			this->textBox5->TabIndex = 2;
			this->textBox5->Text = L"Browse destination folder";
			this->textBox5->Click += gcnew System::EventHandler(this, &Form1::textBox5_Click);
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged_1);
			this->textBox5->Leave += gcnew System::EventHandler(this, &Form1::textBox5_Leave);
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::Color::Gray;
			this->textBox4->Location = System::Drawing::Point(96, 85);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(292, 20);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"Select file";
			this->textBox4->Click += gcnew System::EventHandler(this, &Form1::textBox4_Click);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged_1);
			this->textBox4->Leave += gcnew System::EventHandler(this, &Form1::textBox4_Leave);
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->columnHeader6, this->columnHeader7, 
			this->columnHeader8, this->columnHeader9, this->columnHeader10});
			this->listView2->Location = System::Drawing::Point(3, 118);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(526, 55);
			this->listView2->TabIndex = 0;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView2_SelectedIndexChanged_1);
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Name";
			this->columnHeader6->Width = 152;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Size";
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Time";
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Packed";
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Path";
			this->columnHeader10->Width = 190;
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(739, 479);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->DoubleBuffered = true;
			this->Name = L"Form1";
			this->Text = L"OMO!";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			//
			// BackgroundWorker
			//
			this->backgroundWorker1->WorkerReportsProgress = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker1_DoWork);
			this->backgroundWorker1->ProgressChanged += gcnew ProgressChangedEventHandler(this, &Form1::backgroundWorker1_ProgressChanged);
			this->backgroundWorker1->RunWorkerCompleted += gcnew RunWorkerCompletedEventHandler(this, &Form1::backgroundWorker1_RunWorkerCompleted);
			this->backgroundWorker2->WorkerReportsProgress = true;
			this->backgroundWorker2->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker2_DoWork);
			this->backgroundWorker2->ProgressChanged += gcnew ProgressChangedEventHandler(this, &Form1::backgroundWorker2_ProgressChanged);
			this->backgroundWorker2->RunWorkerCompleted += gcnew RunWorkerCompletedEventHandler(this, &Form1::backgroundWorker2_RunWorkerCompleted);
			
			
		}
#pragma endregion
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void pictureBox3_Click_1(System::Object^  sender, System::EventArgs^  e) {
				
			 if (textBox3->Text == "Select file")
					{
						MessageBox::Show("Please open file first.");
					}
			 else
				 {bool bener = false;
				for (int i = 0; i < listView1->Items->Count; i++)
				{
					ListViewItem^ selItem = listView1->Items[i];
					String^ txt = selItem->SubItems[2]->Text;
					if (textBox3->Text == txt)
					{
						MessageBox::Show("You have uploaded this file.");
						bener = true;
					}
				}
				if (bener == false)
				{
					 if (File::Exists(textBox3->Text) == false)
					{
						MessageBox::Show("File doesn't exist");
					}
					else
					{
						ListViewItem^ newItem = gcnew ListViewItem(fileName); //name
						newItem->SubItems->Add(size); //size
						newItem->SubItems->Add(path); //path
						listView1->Items->Add(newItem);
						textBox3->Text = "Select file";
						textBox3->ForeColor = System::Drawing::Color::Gray;
					}
				}
			 }
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
						
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Hide();
			 panel2->Show();
		 }
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listView2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel2->Hide();
			 panel1->Show();
		 }
private: System::Void listView2_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			listView1->MultiSelect = true;
			if (listView1->SelectedItems->Count == 0)
			{
				MessageBox::Show("Select file(s) to be removed.");
			}
			while (listView1->SelectedItems->Count > 0)
			{
				listView1->Items->Remove(listView1->SelectedItems[0]);
			}
		 }
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			openFileDialog1->Multiselect = true;
			openFileDialog1->InitialDirectory = "C:\\";
			openFileDialog1->Filter = "All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->RestoreDirectory = true;
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				textBox3->Text= openFileDialog1->FileName;
				path = textBox3->Text;
				fileName = openFileDialog1->SafeFileName;
				System::String^ managed = path;
				std::string filePath = msclr::interop::marshal_as<std::string>(managed);
				fileName = openFileDialog1->SafeFileName;
				struct stat stat_buf;
				int rc = stat(filePath.c_str(), &stat_buf);
				unsigned long long fileSize = rc == 0 ? stat_buf.st_size : -1;
				std::string str_fileSize = std::to_string(fileSize);
				String^ SysStr_FileSize = gcnew String(str_fileSize.c_str());
				size = SysStr_FileSize;
			}
			if (textBox3->Text != "Select file")
			  {
				  textBox3->ForeColor = System::Drawing::Color::Black;
			  }

		 }
		private: System::Void textBox4_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox1->Text == "OMO file name")
			{
				textBox1->Clear();
				textBox1->ForeColor = System::Drawing::Color::Black;
			}
		}

		private: System::Void textBox1_Leave(System::Object^  sender, System::EventArgs^  e) {
			if (textBox1->Text == String::Empty)
			{
				textBox1->Text = "OMO file name";
				textBox1->ForeColor = System::Drawing::Color::Gray;
			}
			 
		 }
		 private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox2->Text == "Browse destination folder")
			{
				textBox2->Clear();
				textBox2->ForeColor = System::Drawing::Color::Black;
			}
		 }

		private: System::Void textBox2_Leave(System::Object^  sender, System::EventArgs^  e) {
			if (textBox2->Text == String::Empty)
			{
				textBox2->Text = "Browse destination folder";
				textBox2->ForeColor = System::Drawing::Color::Gray;
			}
		 }
		private: System::Void textBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox5->Text == "Browse destination folder")
			{
				textBox5->Clear();
				textBox5->ForeColor = System::Drawing::Color::Black;
			}
		 }

		private: System::Void textBox5_Leave(System::Object^  sender, System::EventArgs^  e) {
			if (textBox5->Text == String::Empty)
			{
				textBox5->Text = "Browse destination folder";
				textBox5->ForeColor = System::Drawing::Color::Gray;
			}
		 }
		private: System::Void textBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox4->Text == "Select file")
			{
				textBox4->Clear();
				textBox4->ForeColor = System::Drawing::Color::Black;
			}
		 }

		private: System::Void textBox4_Leave(System::Object^  sender, System::EventArgs^  e) {
			if (textBox4->Text == String::Empty)
			{
				textBox4->Text = "Select file";
				textBox4->ForeColor = System::Drawing::Color::Gray;
			}			 
		 }
		 private: System::Void textBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox3->Text == "Select file")
			{
				textBox3->Clear();
				textBox3->ForeColor = System::Drawing::Color::Black;
			}
		 }

		private: System::Void textBox3_Leave(System::Object^  sender, System::EventArgs^  e) {
			if (textBox3->Text == String::Empty)
			{
				textBox3->Text = "Select file";
				textBox3->ForeColor = System::Drawing::Color::Gray;
			}	
		 }

private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 //String^ nama = textBox1->Text;
			//std::string namaBaru = msclr::interop::marshal_as<std::string>(nama);
		 }
private: System::Void pictureBox9_Click_1(System::Object^  sender, System::EventArgs^  e) {
			OpenFileDialog^ openFileDialog2 = gcnew OpenFileDialog;
			openFileDialog2->Multiselect = true;
			openFileDialog2->InitialDirectory = "C:\\";
			openFileDialog2->Filter = "All files (*.*)|*.*";
			openFileDialog2->FilterIndex = 1;
			openFileDialog2->RestoreDirectory = true;
			if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				textBox4->Text= openFileDialog2->FileName;
				path = textBox4->Text;
				fileName = openFileDialog2->SafeFileName;
				System::String^ managed = path;
				std::string filePath = msclr::interop::marshal_as<std::string>(managed);
				fileName = openFileDialog2->SafeFileName;
				struct stat stat_buf;
				int rc = stat(filePath.c_str(), &stat_buf);
				unsigned long long fileSize = rc == 0 ? stat_buf.st_size : -1;
				std::string str_fileSize = std::to_string(fileSize);
				String^ SysStr_FileSize = gcnew String(str_fileSize.c_str());
				size = SysStr_FileSize;
			}
			if (textBox4->Text != "Select file")
			  {
				  textBox4->ForeColor = System::Drawing::Color::Black;
			  }
		 }
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
			 bool bener = false;
				for (int i = 0; i < listView2->Items->Count; i++)
				{
					ListViewItem^ selItem = listView2->Items[i];
					String^ txt = selItem->SubItems[2]->Text;
					if (textBox4->Text == txt)
					{
						MessageBox::Show("You have uploaded this file.");
						bener = true;
					}
				}
				if (bener == false)
				{

						if (textBox4->Text == "Select file")
						{
							MessageBox::Show("Please open file first.");
						}
						else if (File::Exists(textBox4->Text) == false)
						{
							MessageBox::Show("File doesn't exist");
						}
						else
						{
							System::String^ namafileawal = fileName;
							std::string exten = msclr::interop::marshal_as<std::string>(namafileawal);
							if (listView2->Items->Count >= 1)
							{
								MessageBox::Show("You can only decompress one file.");
							}
							else if(exten.substr(exten.find_last_of(".") + 1) != "omo") 
							{
									MessageBox::Show("You can only decompress .omo file.");
							}
							else
							{
								ListViewItem^ newItem = gcnew ListViewItem(fileName); //name
								newItem->SubItems->Add(size); //size
								newItem->SubItems->Add(path); //path
								listView2->Items->Add(newItem);
								textBox4->Text = "Select file";
								textBox4->ForeColor = System::Drawing::Color::Gray;
							}
					}
				}
		 }
private: System::Void pictureBox13_Click_1(System::Object^  sender, System::EventArgs^  e) {
			listView2->MultiSelect = true;
			if (listView2->SelectedItems->Count == 0)
			{
				MessageBox::Show("Select file(s) to be removed.");
			}
			while (listView2->SelectedItems->Count > 0)
			{
				listView2->Items->Remove(listView2->SelectedItems[0]);
			}
		 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
			 FolderBrowserDialog^ folderBrowserDialog1 = gcnew FolderBrowserDialog;
			  if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			  {
				 textBox2->Text = folderBrowserDialog1->SelectedPath;
			  }
			  if (textBox2->Text != "Browse file destination")
			  {
				  textBox2->ForeColor = System::Drawing::Color::Black;
			  }
		 }
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
			 FolderBrowserDialog^ folderBrowserDialog2 = gcnew FolderBrowserDialog;
			  if (folderBrowserDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			  {
				 textBox5->Text = folderBrowserDialog2->SelectedPath;
			  }
			  if (textBox5->Text != "Browse file destination")
			  {
				  textBox5->ForeColor = System::Drawing::Color::Black;
			  }
		 }
private: System::Void textBox5_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 if (listView2->Items->Count == 0)
			{
				MessageBox::Show("You haven't uploaded any file.");
			}
			else if (textBox5->Text == "Browse destination folder")
			{
				MessageBox::Show("You haven't select destination folder.");
			} else 
				{
			ListViewItem^ selItem1 = listView2->Items[0];
			String^ txt1 = selItem1->SubItems[2]->Text;
			MessageBox::Show(txt1);
			MarshalString(txt1,file1);
			String^ dest2 = textBox5->Text;
			MarshalString(dest2,d);
			time1 = GetTickCount();
			backgroundWorker2->RunWorkerAsync();
			time1 = GetTickCount() - time1;
			
			textBox5->Text = "Browse destination folder";
			textBox5->ForeColor = System::Drawing::Color::Gray;
			while (listView2->Items->Count > 0)
			{
				listView2->Items->Clear();
			} //ini buat abis decompress trus filenya ilang
			}
		 }
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			if (listView1->Items->Count == 0)
			{
				MessageBox::Show("You haven't uploaded any file.");
			}
			else if (textBox2->Text == "Browse destination folder")
			{
				MessageBox::Show("You haven't select destination folder.");
			} else if (textBox1->Text == "OMO file name")
			{
				MessageBox::Show("Input file name.");
			}
			else
			{

			
			int n;
			n = listView1->Items->Count;
			file.Neff = n;
			file.Arr = new string [file.Neff];
			file.read = new long [file.Neff];
			
			for (int i = 0; i < n; i++)
				{
					ListViewItem^ selItem = listView1->Items[i];
					String^ txt = selItem->SubItems[2]->Text;
					MarshalString(txt,file.Arr[i]);
					//MessageBox::Show(txt);
			}
			dest = textBox2->Text;
			MarshalString(dest,dest1);
			nama = textBox1->Text;
			MarshalString(nama,nama1);
			//MessageBox::Show("hahaha");
			
			this->progressBar1->Value = 0;
			time = GetTickCount();
			backgroundWorker1->RunWorkerAsync();
			time = GetTickCount() - time;
			textBox1->Text = "OMO file name";
			textBox1->ForeColor = System::Drawing::Color::Gray;
			textBox2->Text = "Browse destination folder";
			textBox2->ForeColor = System::Drawing::Color::Gray;
			while (listView1->Items->Count > 0)
			{
				listView1->Items->Clear();
			} //ini buat abis compress trus filenya ilang semua
			}
		 }
private: System::Void MarshalString(String^ s, string& os){
			 using namespace System::Runtime::InteropServices;
			 const char* chars =
				 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			 os = chars;
			 Marshal::FreeHGlobal(IntPtr((void*)chars));
		 }

private: System::Void backgroundWorker1_DoWork(Object^ sender, DoWorkEventArgs^ e )	{
			BackgroundWorker^ progress = dynamic_cast<BackgroundWorker^>(sender);
			double entropy;
			double bitpersymbol;
			Compress(file,dest1,nama1,progress,&entropy,&bitpersymbol);
			
			entropi = Convert::ToString(entropy);
			bitpersimbol = Convert::ToString(bitpersymbol);
				
		 }
private: System::Void backgroundWorker2_DoWork(Object^ sender, DoWorkEventArgs^ e)	{
			BackgroundWorker^ progress = dynamic_cast<BackgroundWorker^>(sender);
			Decompress(file1,d,progress);
		 }
private: System::Void backgroundWorker1_ProgressChanged(Object^ sender, ProgressChangedEventArgs^ e) {
			 this->progressBar1->Value = e->ProgressPercentage;
		 }

private: System::Void backgroundWorker2_ProgressChanged(Object^ sender, ProgressChangedEventArgs^ e) {
			 this->progressBar2->Value = e->ProgressPercentage;
		 }
private: System::Void backgroundWorker1_RunWorkerCompleted(Object^ sender, RunWorkerCompletedEventArgs^ e) {
			 if(e->Error != nullptr)
			 { 
				 MessageBox::Show(e->Error->Message);
			 }
			 else
			 {
				String^ pathsetelah  = dest + "\\"+ nama + ".omo";
				System::String^ managed = pathsetelah;
				std::string filePathsetelah = msclr::interop::marshal_as<std::string>(managed);
				struct stat stat_buf;
				int rc = stat(filePathsetelah.c_str(), &stat_buf);
				unsigned long long fileSizesetelah = rc == 0 ? stat_buf.st_size : -1;
				std::string str_fileSizesetelah = std::to_string(fileSizesetelah);
				String^ SysStr_FileSizesetelah = gcnew String(str_fileSizesetelah.c_str());
				sizesetelah = SysStr_FileSizesetelah;
				String^ pesan = "You've been OMO!ed\nEntropy result : " + entropi +"\nBitPerSymbol result : " + bitpersimbol +"\nPacked : " + sizesetelah + "\nTime : " + time + " ms";
				MessageBox::Show(pesan);
			
				this->progressBar1->Value = 0;
			 }
			 

		 }
private: System::Void backgroundWorker2_RunWorkerCompleted(Object^ sender, RunWorkerCompletedEventArgs^ e) {
			 if(e->Error != nullptr)
			 {
				 MessageBox::Show(e->Error->Message);
			 }
			 else
			 {
				 MessageBox::Show("unOMO!, It's done\nTime: " + time1 +" ms");
				 this->progressBar2->Value = 0;
			 }
		 }

		 };
}

