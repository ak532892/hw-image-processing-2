#pragma once
#include <algorithm>
#include <cmath>
#include <windows.h>
namespace Project1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		public:
			MyForm(void)
			{
				InitializeComponent();
				//
				//TODO: 在此加入建構函式程式碼
				//
			}

		protected:
			/// <summary>
			/// 清除任何使用中的資源。
			/// </summary>
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
		private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
		private: System::Windows::Forms::PictureBox^  pictureBox1;	
		private: System::Windows::Forms::PictureBox^  pictureBox2;
		private: System::Windows::Forms::PictureBox^  pictureBox3;
		private: System::Windows::Forms::PictureBox^  pictureBox4;
		private: System::Windows::Forms::PictureBox^  pictureBox5;
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
		private: System::Windows::Forms::TextBox^  textBox1;
		private: System::Windows::Forms::TextBox^  textBox2;
		private: System::Windows::Forms::TextBox^  textBox3;
		private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
		private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
		private: System::Windows::Forms::Button^  button1;
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

		protected: 

		private:
			/// <summary>
			/// 設計工具所需的變數。
			/// </summary>
			System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
			/// <summary>
			/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
			/// 修改這個方法的內容。
			/// </summary>
			void InitializeComponent(void)
			{
				System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
				System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
				System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
				System::Windows::Forms::DataVisualization::Charting::Title^  title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
				System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
				System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
				System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
				System::Windows::Forms::DataVisualization::Charting::Title^  title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
				this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
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
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
				this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
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
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
				this->SuspendLayout();
				// 
				// openFileDialog1
				// 
				this->openFileDialog1->FileName = L"openFileDialog1";
				// 
				// pictureBox1
				// 
				this->pictureBox1->Location = System::Drawing::Point(253, 107);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(300, 300);
				this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->pictureBox1->TabIndex = 0;
				this->pictureBox1->TabStop = false;
				// 
				// pictureBox2
				// 
				this->pictureBox2->Location = System::Drawing::Point(583, 107);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(300, 300);
				this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->pictureBox2->TabIndex = 1;
				this->pictureBox2->TabStop = false;
				// 
				// pictureBox3
				// 
				this->pictureBox3->Location = System::Drawing::Point(899, 107);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(300, 300);
				this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->pictureBox3->TabIndex = 2;
				this->pictureBox3->TabStop = false;
				// 
				// pictureBox4
				// 
				this->pictureBox4->Location = System::Drawing::Point(583, 443);
				this->pictureBox4->Name = L"pictureBox4";
				this->pictureBox4->Size = System::Drawing::Size(300, 300);
				this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->pictureBox4->TabIndex = 3;
				this->pictureBox4->TabStop = false;
				// 
				// pictureBox5
				// 
				this->pictureBox5->Location = System::Drawing::Point(899, 443);
				this->pictureBox5->Name = L"pictureBox5";
				this->pictureBox5->Size = System::Drawing::Size(300, 300);
				this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->pictureBox5->TabIndex = 4;
				this->pictureBox5->TabStop = false;
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->label1->Location = System::Drawing::Point(355, 44);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(94, 31);
				this->label1->TabIndex = 5;
				this->label1->Text = L"Source";
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->label2->Location = System::Drawing::Point(839, 44);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(85, 31);
				this->label2->TabIndex = 6;
				this->label2->Text = L"Result";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(136)));
				this->label3->Location = System::Drawing::Point(587, 80);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(30, 22);
				this->label3->TabIndex = 7;
				this->label3->Text = L"(1)";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(136)));
				this->label4->Location = System::Drawing::Point(905, 80);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(30, 22);
				this->label4->TabIndex = 8;
				this->label4->Text = L"(2)";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(136)));
				this->label5->Location = System::Drawing::Point(587, 412);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(30, 22);
				this->label5->TabIndex = 9;
				this->label5->Text = L"(3)";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(136)));
				this->label6->Location = System::Drawing::Point(905, 412);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(30, 22);
				this->label6->TabIndex = 10;
				this->label6->Text = L"(4)";
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 20));
				this->label7->Location = System::Drawing::Point(60, 9);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(356, 34);
				this->label7->TabIndex = 11;
				this->label7->Text = L"Waiting for the results . . .";
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(136)));
				this->label8->Location = System::Drawing::Point(259, 429);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(146, 30);
				this->label8->TabIndex = 12;
				this->label8->Text = L"Mask Size X";
				// 
				// label9
				// 
				this->label9->AutoSize = true;
				this->label9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(136)));
				this->label9->Location = System::Drawing::Point(259, 479);
				this->label9->Name = L"label9";
				this->label9->Size = System::Drawing::Size(145, 30);
				this->label9->TabIndex = 13;
				this->label9->Text = L"Mask Size Y";
				// 
				// label10
				// 
				this->label10->AutoSize = true;
				this->label10->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(136)));
				this->label10->Location = System::Drawing::Point(259, 529);
				this->label10->Name = L"label10";
				this->label10->Size = System::Drawing::Size(196, 30);
				this->label10->TabIndex = 14;
				this->label10->Text = L"Threshold Value";
				// 
				// textBox1
				// 
				this->textBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11));
				this->textBox1->Location = System::Drawing::Point(475, 425);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(45, 32);
				this->textBox1->TabIndex = 15;
				this->textBox1->Text = L"3";
				// 
				// textBox2
				// 
				this->textBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11));
				this->textBox2->Location = System::Drawing::Point(475, 475);
				this->textBox2->Name = L"textBox2";
				this->textBox2->Size = System::Drawing::Size(45, 32);
				this->textBox2->TabIndex = 16;
				this->textBox2->Text = L"3";
				// 
				// textBox3
				// 
				this->textBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11));
				this->textBox3->Location = System::Drawing::Point(475, 525);
				this->textBox3->Name = L"textBox3";
				this->textBox3->Size = System::Drawing::Size(45, 32);
				this->textBox3->TabIndex = 17;
				this->textBox3->Text = L"128";
				// 
				// chart1
				// 
				chartArea3->Name = L"ChartArea1";
				this->chart1->ChartAreas->Add(chartArea3);
				legend3->Enabled = false;
				legend3->ItemColumnSpacing = 0;
				legend3->Name = L"Legend1";
				this->chart1->Legends->Add(legend3);
				this->chart1->Location = System::Drawing::Point(899, 440);
				this->chart1->Name = L"chart1";
				this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
				series3->ChartArea = L"ChartArea1";
				series3->IsVisibleInLegend = false;
				series3->IsXValueIndexed = true;
				series3->Legend = L"Legend1";
				series3->Name = L"histogram";
				this->chart1->Series->Add(series3);
				this->chart1->Size = System::Drawing::Size(300, 300);
				this->chart1->TabIndex = 18;
				this->chart1->Text = L"chart1";
				title3->Name = L"Title1";
				title3->Text = L"Histogram of Gray level";
				this->chart1->Titles->Add(title3);
				this->chart1->Visible = false;
				// 
				// chart2
				// 
				chartArea4->Name = L"ChartArea1";
				this->chart2->ChartAreas->Add(chartArea4);
				legend4->Enabled = false;
				legend4->ItemColumnSpacing = 0;
				legend4->Name = L"Legend1";
				this->chart2->Legends->Add(legend4);
				this->chart2->Location = System::Drawing::Point(583, 440);
				this->chart2->Name = L"chart2";
				this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
				series4->ChartArea = L"ChartArea1";
				series4->IsVisibleInLegend = false;
				series4->IsXValueIndexed = true;
				series4->Legend = L"Legend1";
				series4->Name = L"histogram";
				this->chart2->Series->Add(series4);
				this->chart2->Size = System::Drawing::Size(300, 300);
				this->chart2->TabIndex = 19;
				this->chart2->Text = L"chart2";
				title4->Name = L"Title1";
				title4->Text = L"Histogram of Gray level";
				this->chart2->Titles->Add(title4);
				this->chart2->Visible = false;
				// 
				// button1
				// 
				this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button1->Location = System::Drawing::Point(66, 195);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(120, 60);
				this->button1->TabIndex = 20;
				this->button1->Text = L"1";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				// 
				// button2
				// 
				this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button2->Location = System::Drawing::Point(66, 290);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(120, 60);
				this->button2->TabIndex = 21;
				this->button2->Text = L"2";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				// 
				// button3
				// 
				this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button3->Location = System::Drawing::Point(66, 385);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(120, 60);
				this->button3->TabIndex = 22;
				this->button3->Text = L"3";
				this->button3->UseVisualStyleBackColor = true;
				this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
				// 
				// button4
				// 
				this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button4->Location = System::Drawing::Point(66, 480);
				this->button4->Name = L"button4";
				this->button4->Size = System::Drawing::Size(120, 60);
				this->button4->TabIndex = 23;
				this->button4->Text = L"4";
				this->button4->UseVisualStyleBackColor = true;
				this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
				// 
				// button5
				// 
				this->button5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button5->Location = System::Drawing::Point(66, 575);
				this->button5->Name = L"button5";
				this->button5->Size = System::Drawing::Size(120, 60);
				this->button5->TabIndex = 24;
				this->button5->Text = L"5";
				this->button5->UseVisualStyleBackColor = true;
				this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
				// 
				// button6
				// 
				this->button6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button6->Location = System::Drawing::Point(66, 670);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(120, 60);
				this->button6->TabIndex = 25;
				this->button6->Text = L"6";
				this->button6->UseVisualStyleBackColor = true;
				this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
				// 
				// button7
				// 
				this->button7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button7->Location = System::Drawing::Point(66, 765);
				this->button7->Name = L"button7";
				this->button7->Size = System::Drawing::Size(120, 60);
				this->button7->TabIndex = 26;
				this->button7->Text = L"7";
				this->button7->UseVisualStyleBackColor = true;
				this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
				// 
				// button8
				// 
				this->button8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button8->Location = System::Drawing::Point(66, 100);
				this->button8->Name = L"button8";
				this->button8->Size = System::Drawing::Size(120, 60);
				this->button8->TabIndex = 27;
				this->button8->Text = L"Load";
				this->button8->UseVisualStyleBackColor = true;
				this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
				// 
				// button9
				// 
				this->button9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button9->Location = System::Drawing::Point(253, 670);
				this->button9->Name = L"button9";
				this->button9->Size = System::Drawing::Size(202, 60);
				this->button9->TabIndex = 28;
				this->button9->Text = L"Mean Filter";
				this->button9->UseVisualStyleBackColor = true;
				this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
				// 
				// button10
				// 
				this->button10->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button10->Location = System::Drawing::Point(503, 765);
				this->button10->Name = L"button10";
				this->button10->Size = System::Drawing::Size(202, 60);
				this->button10->TabIndex = 29;
				this->button10->Text = L"Sobel Edge";
				this->button10->UseVisualStyleBackColor = true;
				this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
				// 
				// button11
				// 
				this->button11->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button11->Location = System::Drawing::Point(751, 765);
				this->button11->Name = L"button11";
				this->button11->Size = System::Drawing::Size(202, 60);
				this->button11->TabIndex = 30;
				this->button11->Text = L"Erosion";
				this->button11->UseVisualStyleBackColor = true;
				this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
				// 
				// button12
				// 
				this->button12->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button12->Location = System::Drawing::Point(995, 765);
				this->button12->Name = L"button12";
				this->button12->Size = System::Drawing::Size(202, 60);
				this->button12->TabIndex = 31;
				this->button12->Text = L"Dilation";
				this->button12->UseVisualStyleBackColor = true;
				this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
				// 
				// button13
				// 
				this->button13->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button13->Location = System::Drawing::Point(253, 765);
				this->button13->Name = L"button13";
				this->button13->Size = System::Drawing::Size(202, 60);
				this->button13->TabIndex = 32;
				this->button13->Text = L"Median Filter";
				this->button13->UseVisualStyleBackColor = true;
				this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
				// 
				// button14
				// 
				this->button14->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button14->Location = System::Drawing::Point(253, 575);
				this->button14->Name = L"button14";
				this->button14->Size = System::Drawing::Size(202, 60);
				this->button14->TabIndex = 33;
				this->button14->Text = L"Thresholding";
				this->button14->UseVisualStyleBackColor = true;
				this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
				// 
				// button15
				// 
				this->button15->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button15->Location = System::Drawing::Point(1077, 15);
				this->button15->Name = L"button15";
				this->button15->Size = System::Drawing::Size(120, 60);
				this->button15->TabIndex = 34;
				this->button15->Text = L"Save";
				this->button15->UseVisualStyleBackColor = true;
				this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1241, 863);
				this->Controls->Add(this->button15);
				this->Controls->Add(this->button14);
				this->Controls->Add(this->button13);
				this->Controls->Add(this->button12);
				this->Controls->Add(this->button11);
				this->Controls->Add(this->button10);
				this->Controls->Add(this->button9);
				this->Controls->Add(this->button8);
				this->Controls->Add(this->button7);
				this->Controls->Add(this->button6);
				this->Controls->Add(this->button5);
				this->Controls->Add(this->button4);
				this->Controls->Add(this->button3);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->chart2);
				this->Controls->Add(this->chart1);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->pictureBox4);
				this->Controls->Add(this->pictureBox5);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->label9);
				this->Controls->Add(this->label10);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->textBox2);
				this->Controls->Add(this->textBox3);
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		Bitmap^ globalImg;
		void initPictureBox()
		{
			pictureBox1->Image = nullptr;
			pictureBox2->Image = nullptr;
			pictureBox3->Image = nullptr;
			pictureBox4->Image = nullptr;
			pictureBox5->Image = nullptr;
			this->chart1->Visible = false;
			this->chart2->Visible = false;
			this->label3->Text = L"(1)";
			this->label4->Text = L"(2)";
			this->label5->Text = L"(3)";
			this->label6->Text = L"(4)";
			this->label7->Text = L"Waiting for the results . . .";
			this->label3->Refresh();
			this->label4->Refresh();
			this->label5->Refresh();
			this->label6->Refresh();
			this->label7->Refresh();
		}
		void initImg( Bitmap^ *img )
		{
			for(int y = 0; y < (*img)->Height; y++){
				for(int x = 0; x < (*img)->Width; x++){
					(*img)->SetPixel( x, y, Color::FromArgb( 0, 0, 0 ) );
				}
			}
		}
		void meanFilter( Bitmap^ *img )
		{
			int maskSizeX = Convert::ToInt32( textBox1->Text ), maskSizeY = Convert::ToInt32( textBox2->Text );
			int shiftX = maskSizeX / 2, shiftY = maskSizeY / 2;

			initImg( img );

			for(int y = 0; y < (globalImg->Height - maskSizeY + 1); y++){
				for(int x = 0; x < (globalImg->Width - maskSizeX + 1); x++){
					int fsum = 0;
					int maskSize = maskSizeX * maskSizeY;

					for(int yi = 0; yi < maskSizeY; yi++){
						for(int xi = 0; xi < maskSizeX; xi++){
							fsum += Convert::ToInt32( globalImg->GetPixel( x + xi, y + yi ).R );
						}
					}

					fsum /= ( maskSize );

					(*img)->SetPixel( x + shiftX, y + shiftY, Color::FromArgb( fsum, fsum, fsum ) );
				}
			}
		}
		void medianFilter( Bitmap^ *img )
		{
			int maskSizeX = Convert::ToInt32( textBox1->Text ), maskSizeY = Convert::ToInt32( textBox2->Text );
			int shiftX = maskSizeX / 2, shiftY = maskSizeY / 2;

			initImg( img );

			for(int y = 0; y < (globalImg->Height - maskSizeY + 1); y++){
				for(int x = 0; x < (globalImg->Width - maskSizeX + 1); x++){
					int maskSize = maskSizeX * maskSizeY;
					int *fseq = new int [maskSize];

					for(int yi = 0; yi < maskSizeY; yi++){
						for(int xi = 0; xi < maskSizeX; xi++){
							fseq[yi*maskSizeX + xi] = Convert::ToInt32( globalImg->GetPixel( x + xi, y + yi ).R );
						}
					}
					sort( fseq, fseq + maskSize );

					(*img)->SetPixel( x + shiftX, y + shiftY, Color::FromArgb( fseq[maskSize / 2], fseq[maskSize / 2], fseq[maskSize / 2] ) );
					delete fseq;
				}
			}
		}
		void threshold( Bitmap^ *img )
		{
			int thresholdIntensity = Convert::ToInt32( textBox3->Text );
			
			for(int y = 0; y < (*img)->Height; y++){
				for(int x = 0; x < (*img)->Width; x++){
					if( (*img)->GetPixel( x, y ).R > thresholdIntensity )
						(*img)->SetPixel( x, y, Color::FromArgb( 255, 255, 255 ) );
					else
						(*img)->SetPixel( x, y,  Color::FromArgb( 0, 0, 0 ) );
				}
			}
		}
		void sobelFilterX( Bitmap^ *img )
		{
			int maskX[] = {-1, -2, -1, 0, 0, 0, 1, 2, 1};

			for(int y = 0; y < (globalImg->Height - 3 + 1); y++){
				for(int x = 0; x < (globalImg->Width - 3 + 1); x++){
					int sumX = 0;

					for(int yi = 0; yi < 3; yi++){
						for(int xi = 0; xi < 3; xi++){
							sumX += Convert::ToInt32( globalImg->GetPixel( x + xi, y + yi ).R ) * maskX[xi + yi*3];
						}
					}

					if( sumX < 0 ) sumX = -sumX; if( sumX > 255 ) sumX = 255;

					(*img)->SetPixel( x + 1, y + 1, Color::FromArgb( sumX, sumX, sumX ) );
				}
			}
		}
		void sobelFilterY( Bitmap^ *img )
		{		
			int maskY[] = {-1, 0, 1, -2, 0, 2, -1, 0, 1};

			for(int y = 0; y < (globalImg->Height - 3 + 1); y++){
				for(int x = 0; x < (globalImg->Width - 3 + 1); x++){
					int sumY = 0;

					for(int yi = 0; yi < 3; yi++){
						for(int xi = 0; xi < 3; xi++){
							sumY += Convert::ToInt32( globalImg->GetPixel( x + xi, y + yi ).R ) * maskY[xi + yi*3];
						}
					}

					//abs
					if( sumY < 0 ) sumY = -sumY; if( sumY > 255 ) sumY = 255;
					(*img)->SetPixel( x + 1, y + 1, Color::FromArgb( sumY, sumY, sumY ) );
				}
			}
		}
		void sobelFilterXY( Bitmap^ *imgX, Bitmap^ *imgY, Bitmap^ *img )
		{				
			for(int y = 0; y < ((*img)->Height - 3 + 1); y++){
				for(int x = 0; x < ((*img)->Width - 3 + 1); x++){
					int sumX = Convert::ToInt32( (*imgX)->GetPixel( x, y ).R ),
						sumY = Convert::ToInt32( (*imgY)->GetPixel( x, y ).R ),
						sum = (sumX + sumY);

					if( sum > 255 ) sum = 255;

					(*img)->SetPixel( x, y, Color::FromArgb( sum, sum, sum ) );
				}
			}
		}
		void erosion( Bitmap^ *img )
		{
			int maskSizeX = Convert::ToInt32( textBox1->Text ), maskSizeY = Convert::ToInt32( textBox2->Text );
			int shiftX = maskSizeX / 2, shiftY = maskSizeY / 2;

			Bitmap^ erosionImg = gcnew Bitmap( globalImg->Width, globalImg->Height );

			initImg( &erosionImg );

			for(int y = 0; y < (globalImg->Height - maskSizeY + 1); y++){
				for(int x = 0; x < (globalImg->Width - maskSizeX + 1); x++){
					int maskCount = 0;
					int maskSize = maskSizeX * maskSizeY;

					for(int yi = 0; yi < maskSizeY; yi++){
						for(int xi = 0; xi < maskSizeX; xi++){
							if(Convert::ToInt32( (*img)->GetPixel( x + xi, y + yi ).R ))
								maskCount++;
						}
					}

					if( maskCount == maskSize )
						erosionImg->SetPixel( x, y, Color::FromArgb( 255, 255, 255 ) );
				}
			}
			(*img) = gcnew Bitmap( erosionImg );
		}
		void dilation( Bitmap^ *img )
		{
			int maskSizeX = Convert::ToInt32( textBox1->Text ), maskSizeY = Convert::ToInt32( textBox2->Text );
			int shiftX = maskSizeX / 2, shiftY = maskSizeY / 2;

			Bitmap^ dilationImg = gcnew Bitmap( globalImg->Width, globalImg->Height );

			initImg( &dilationImg );

			for(int y = 0; y < (globalImg->Height - maskSizeY + 1); y++){
				for(int x = 0; x < (globalImg->Width - maskSizeX + 1); x++){
					int maskCount = 0;
					int maskSize = maskSizeX * maskSizeY;
					
					//maskCount++;
					for(int yi = 0; yi < maskSizeY; yi++){
						for(int xi = 0; xi < maskSizeX; xi++){
							if(Convert::ToInt32( (*img)->GetPixel( x + xi, y + yi ).R )){
								maskCount++;
								break;
							}
						}
						if(maskCount)	break;
					}

					if( maskCount )
						dilationImg->SetPixel( x, y, Color::FromArgb( 255, 255, 255 ) );
				}
			}
			(*img) = gcnew Bitmap( dilationImg );
		}
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			initPictureBox();
			if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
				// 如果成功開檔
				Bitmap^ src = gcnew Bitmap( openFileDialog1->FileName );
				Bitmap^ srcRchannel = gcnew Bitmap( src->Width, src->Height );
				Bitmap^ srcGchannel = gcnew Bitmap( src->Width, src->Height );
				Bitmap^ srcBchannel = gcnew Bitmap( src->Width, src->Height );
				Bitmap^ srcGray = gcnew Bitmap( src ->Width, src->Height );

				pictureBox1->Image = src;
				//宣告暫存的 Bitmap
				for(int y = 0; y < src->Height; y++){
					for(int x = 0; x <src->Width; x++){
						Color RGB = src->GetPixel( x, y ); 
						//讀取影像平面上 (j,i) 的 RGB 資訊
						//這邊要注意因為縱軸座標是 i 橫軸座標是 j 所以要寫成 (j,i) ;
						int r = Convert::ToInt32( RGB.R );
						int g = Convert::ToInt32( RGB.G );
						int b = Convert::ToInt32( RGB.B );
						int gray = ( r + g + b ) / 3;

						//RGB 是VS內建的class 可以直接讀取影像的色彩資訊 R = Red G = Green B =Blue
						srcRchannel->SetPixel( x, y, Color::FromArgb( r, r, r ) );
						srcGchannel->SetPixel( x, y, Color::FromArgb( g, g, g ) );
						srcBchannel->SetPixel( x, y, Color::FromArgb( b, b, b ) );
						srcGray->SetPixel( x, y, Color::FromArgb( gray, gray, gray ) );
					}
				}
				pictureBox2->Image = srcRchannel;
				pictureBox3->Image = srcGchannel;
				pictureBox4->Image = srcBchannel;
				pictureBox5->Image = srcGray;

				this->label3->Text = L"R channel";
				this->label4->Text = L"G channel";
				this->label5->Text = L"B channel";
				this->label6->Text = L"Grayscale";
				
				globalImg = gcnew Bitmap( srcGray );
			}
			this->label7->Text = L"Finish!";
		}
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		{
			initPictureBox();
			if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
				// 如果成功開檔
				globalImg = gcnew Bitmap( openFileDialog1->FileName );
				Bitmap^ srcMeanfilter = gcnew Bitmap( globalImg->Width, globalImg->Height );
				Bitmap^ srcMedianfilter = gcnew Bitmap( globalImg->Width, globalImg->Height );

				meanFilter( &srcMeanfilter );
				medianFilter( &srcMedianfilter );

				pictureBox1->Image = globalImg;
				pictureBox2->Image = srcMeanfilter;
				pictureBox3->Image = srcMedianfilter;
				
				this->label3->Text = L"Mean Filter";
				this->label4->Text = L"Median Filter";

				globalImg = gcnew Bitmap( srcMedianfilter );
			}
			this->label7->Text = L"Finish!";
		}
		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		{
			initPictureBox();
			if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
				// 如果成功開檔
				Bitmap^ src = gcnew Bitmap( openFileDialog1->FileName );
				Bitmap^ srcEqual = gcnew Bitmap( src->Width, src->Height );

				pictureBox1->Image = src;
				//count probability with all pixel
				double pr[256] = {};
				
				for(int y = 0; y < src->Height; y++){
					for(int x = 0; x < src->Width; x++){
						int intensity = Convert::ToInt32( src->GetPixel( x, y ).R );

						pr[intensity]++;
					}
				}

				//sk = T(rk) = (L-1)sig j=0~k pr(rj)
				int imgSize = ( src->Height * src->Width );
				double s[256];

				for(int i = 0; i < 256; i++){
					this->chart2->Series["histogram"]->Points->AddXY(i, pr[i]);
					pr[i] /= imgSize;
					
					if(i == 0)
						s[i] = 255 * pr[i];
					else
						s[i] = (s[i-1] + 255 * pr[i]);
				}
				
				int intensityCount[256] = {};
				//round and equalization
				for(int y = 0; y < src->Height; y++){
					for(int x = 0; x < src->Width; x++){
						int intensity = Convert::ToInt32( src->GetPixel( x, y ).R );
						int roundS = (int)floor( s[intensity] + 0.5 );
						
						srcEqual->SetPixel( x, y, Color::FromArgb( roundS, roundS, roundS ) );
						intensityCount[roundS]++;
					}
				}
				
				//draw histogram
				for(int i = 0; i < 256; i++)
					this->chart1->Series["histogram"]->Points->AddXY(i, intensityCount[i]);
				
				pictureBox2->Image = src;
				pictureBox3->Image = srcEqual;
				this->chart1->Visible = true;
				this->chart2->Visible = true;

				this->label3->Text = L"Original";
				this->label4->Text = L"Histogram Equalization";
				this->label5->Text = L"Histogram of Gray Level";
				this->label6->Text = L"Histogram of Gray Level";

				globalImg = gcnew Bitmap( srcEqual );
			}
			this->label7->Text = L"Finish!";
		}
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
		{
			initPictureBox();
			if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
				// 如果成功開檔
				Bitmap^ src = gcnew Bitmap( openFileDialog1->FileName );
				Bitmap^ srcThreshold = gcnew Bitmap( src );
				
				threshold( &srcThreshold );

				pictureBox1->Image = src;
				pictureBox2->Image = srcThreshold;

				this->label3->Text = L"Thresholding";

				globalImg = gcnew Bitmap( srcThreshold );
			}
			this->label7->Text = L"Finish!";
		}
		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
		{
			initPictureBox();
			if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
				// 如果成功開檔
				globalImg = gcnew Bitmap( openFileDialog1->FileName );
				Bitmap^ sobelX = gcnew Bitmap( globalImg->Width, globalImg->Height );
				Bitmap^ sobelY = gcnew Bitmap( globalImg->Width, globalImg->Height );
				Bitmap^ sobel = gcnew Bitmap( globalImg->Width, globalImg->Height );		

				pictureBox1->Image = globalImg;

				initImg( &sobelX );
				initImg( &sobelY );
				initImg( &sobel );

				sobelFilterX( &sobelX );
				sobelFilterY( &sobelY );
				sobelFilterXY( &sobelX, &sobelY, &sobel);
				
				pictureBox2->Image = sobelX;
				pictureBox3->Image = sobelY;
				pictureBox4->Image = sobel;

				this->label3->Text = L"Horizontal";
				this->label4->Text = L"Vertical";
				this->label5->Text = L"Combined";

				globalImg = gcnew Bitmap( sobel );
			}
			this->label7->Text = L"Finish!";
		}
		private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
		{
			initPictureBox();
			if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
				// 如果成功開檔
				globalImg = gcnew Bitmap( openFileDialog1->FileName );
				Bitmap^ src = gcnew Bitmap( openFileDialog1->FileName );
				Bitmap^ sobelX = gcnew Bitmap( src->Width, src->Height );
				Bitmap^ sobelY = gcnew Bitmap( src->Width, src->Height );
				Bitmap^ sobel = gcnew Bitmap( src->Width, src->Height );		

				initImg( &sobelX );
				initImg( &sobelY );
				initImg( &sobel );

				sobelFilterX( &sobelX );
				sobelFilterY( &sobelY );
				sobelFilterXY( &sobelX, &sobelY, &sobel);

				pictureBox1->Image = sobel;
				Bitmap^ sobelThreshold = gcnew Bitmap( sobel );

				threshold( &sobelThreshold );
				pictureBox2->Image = sobelThreshold;
				
				Bitmap^ srcSobelThreshold1 = gcnew Bitmap( src->Width, src->Height );
				Bitmap^ srcSobelThreshold2 = gcnew Bitmap( src->Width, src->Height );
				
				for(int y = 0; y < src->Height; y++){
					for(int x = 0; x < src->Width; x++){
						int threshold = Convert::ToInt32( sobelThreshold->GetPixel( x, y ).R );
						int srcInt = Convert::ToInt32( src->GetPixel( x, y ).R );

						if( threshold ){
							srcSobelThreshold1->SetPixel( x, y, Color::FromArgb( 255, 255, 255 ) );
							srcSobelThreshold2->SetPixel( x, y, Color::FromArgb( 0, 255, 255 ) );
						}
						else{
							srcSobelThreshold1->SetPixel( x, y, Color::FromArgb( srcInt, srcInt, srcInt ) );
							srcSobelThreshold2->SetPixel( x, y, Color::FromArgb( srcInt, srcInt, srcInt ) );
						}
					}
				}
				pictureBox3->Image = srcSobelThreshold1;
				pictureBox4->Image = srcSobelThreshold2;
				this->label3->Text = L"Thresholding";
				this->label4->Text = L"Overlap1";
				this->label5->Text = L"Overlap2";

				globalImg = gcnew Bitmap( srcSobelThreshold2 );
			}
			this->label7->Text = L"Finish!";
		}
		private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
		{
			initPictureBox();
			if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
				// 如果成功開檔
				globalImg = gcnew Bitmap( openFileDialog1->FileName );
				Bitmap^ sobelX = gcnew Bitmap( globalImg->Width, globalImg->Height );
				Bitmap^ sobelY = gcnew Bitmap( globalImg->Width, globalImg->Height );
				Bitmap^ sobel = gcnew Bitmap( globalImg->Width, globalImg->Height );		

				pictureBox1->Image = globalImg;

				initImg( &sobelX );
				initImg( &sobelY );
				initImg( &sobel );

				sobelFilterX( &sobelX );
				sobelFilterY( &sobelY );
				sobelFilterXY( &sobelX, &sobelY, &sobel);

				Bitmap^ sobelThreshold = gcnew Bitmap( sobel );

				threshold( &sobelThreshold );
				pictureBox1->Image = sobelThreshold;

				Bitmap^ erosionImg = gcnew Bitmap( sobelThreshold );
				Bitmap^ dilationImg = gcnew Bitmap( sobelThreshold );

				erosion( &erosionImg );
				dilation( &dilationImg );
				
				pictureBox2->Image = erosionImg;
				pictureBox3->Image = dilationImg;

				this->label3->Text = L"Erosion";
				this->label4->Text = L"Dilation";

				globalImg = gcnew Bitmap( dilationImg );
			}
			this->label7->Text = L"Finish!";
		}
		private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			initPictureBox();
			if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
				globalImg = gcnew Bitmap( openFileDialog1->FileName );

				pictureBox1->Image = globalImg;
			}
			this->label7->Text = L"Finish!";
		}
		private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			//Mean Filter
			initPictureBox();
			Bitmap^ srcMeanfilter = gcnew Bitmap( globalImg->Width, globalImg->Height );

			meanFilter( &srcMeanfilter );

			pictureBox1->Image = globalImg;
			pictureBox2->Image = srcMeanfilter;

			this->label3->Text = L"Mean Filter";

			globalImg = gcnew Bitmap( srcMeanfilter );
			this->label7->Text = L"Finish!";
		}
		private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//Sobel
			initPictureBox();

			Bitmap^ sobelX = gcnew Bitmap( globalImg->Width, globalImg->Height );
			Bitmap^ sobelY = gcnew Bitmap( globalImg->Width, globalImg->Height );
			Bitmap^ sobel = gcnew Bitmap( globalImg->Width, globalImg->Height );

			initImg( &sobelX );
			initImg( &sobelY );
			initImg( &sobel );

			sobelFilterX( &sobelX );
			sobelFilterY( &sobelY );
			sobelFilterXY( &sobelX, &sobelY, &sobel );
				
			pictureBox1->Image = globalImg;
			pictureBox2->Image = sobelX;
			pictureBox3->Image = sobelY;
			pictureBox4->Image = sobel;
			
			this->label3->Text = L"Horizontal";
			this->label4->Text = L"Vertical";
			this->label5->Text = L"Combined";

			globalImg = gcnew Bitmap( sobel );
			this->label7->Text = L"Finish!";
		}
		private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//Erosion
			initPictureBox();
			Bitmap^ sobelX = gcnew Bitmap( globalImg->Width, globalImg->Height );
			Bitmap^ sobelY = gcnew Bitmap( globalImg->Width, globalImg->Height );
			Bitmap^ sobel = gcnew Bitmap( globalImg->Width, globalImg->Height );		

			initImg( &sobelX );
			initImg( &sobelY );
			initImg( &sobel );

			sobelFilterX( &sobelX );
			sobelFilterY( &sobelY );
			sobelFilterXY( &sobelX, &sobelY, &sobel);

			Bitmap^ sobelThreshold = gcnew Bitmap( sobel );

			threshold( &sobelThreshold );
			pictureBox1->Image = sobelThreshold;

			Bitmap^ erosionImg = gcnew Bitmap( sobelThreshold );

			erosion( &erosionImg );

			pictureBox1->Image = globalImg;
			pictureBox2->Image = erosionImg;

			this->label3->Text = L"Erosion";

			globalImg = gcnew Bitmap( erosionImg );
			this->label7->Text = L"Finish!";
		}
		private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//Dilation
			initPictureBox();
			Bitmap^ sobelX = gcnew Bitmap( globalImg->Width, globalImg->Height );
			Bitmap^ sobelY = gcnew Bitmap( globalImg->Width, globalImg->Height );
			Bitmap^ sobel = gcnew Bitmap( globalImg->Width, globalImg->Height );		

			initImg( &sobelX );
			initImg( &sobelY );
			initImg( &sobel );

			sobelFilterX( &sobelX );
			sobelFilterY( &sobelY );
			sobelFilterXY( &sobelX, &sobelY, &sobel);

			Bitmap^ sobelThreshold = gcnew Bitmap( sobel );

			threshold( &sobelThreshold );

			Bitmap^ dilationImg = gcnew Bitmap( sobelThreshold );

			dilation( &dilationImg );

			pictureBox1->Image = globalImg;
			pictureBox2->Image = dilationImg;

			this->label3->Text = L"Dilation";

			globalImg = gcnew Bitmap( dilationImg );
			this->label7->Text = L"Finish!";
		}
		private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//Median Filter
			initPictureBox();

			Bitmap^ srcMedianfilter = gcnew Bitmap( globalImg->Width, globalImg->Height );

			medianFilter( &srcMedianfilter );

			pictureBox1->Image = globalImg;
			pictureBox2->Image = srcMedianfilter;

			this->label3->Text = L"Median Filter";

			globalImg = gcnew Bitmap( srcMedianfilter );
			this->label7->Text = L"Finish!";
		}
		private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//Thresholding
			initPictureBox();

			Bitmap^ srcThreshold = gcnew Bitmap( globalImg );

			threshold( &srcThreshold );

			pictureBox1->Image = globalImg;
			pictureBox2->Image = srcThreshold;

			this->label3->Text = L"Thresholding";

			globalImg = gcnew Bitmap( srcThreshold );
			this->label7->Text = L"Finish!";
		}
		private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			
			SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();
		    saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
			saveFileDialog1->Title = "Save an Image File";
			
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ sfd = saveFileDialog1->FileName;
				
				globalImg->Save(sfd,System::Drawing::Imaging::ImageFormat::Jpeg);
			 } //button
		}
	};
}