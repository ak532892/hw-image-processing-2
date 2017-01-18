#pragma once
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <algorithm>

namespace Project1 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//存眼睛座標
	struct Eye{
		int x;
		int y;
		int r;
	};
	FILE *fPtr = fopen( "test img//output.txt", "w" );
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
		private: System::Windows::Forms::PictureBox^  pictureBox1;
		protected: 
		private: System::Windows::Forms::TrackBar^  trackBar1;
		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::Label^  label3;
		private: System::Windows::Forms::Button^  button1;
		private: System::Windows::Forms::Button^  button2;
		private: System::Windows::Forms::Label^  label4;
		private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

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
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
				this->SuspendLayout();
				// 
				// pictureBox1
				// 
				this->pictureBox1->Location = System::Drawing::Point(104, 61);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(896, 504);
				this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->pictureBox1->TabIndex = 0;
				this->pictureBox1->TabStop = false;
				// 
				// trackBar1
				// 
				this->trackBar1->Location = System::Drawing::Point(183, 588);
				this->trackBar1->Maximum = 0;
				this->trackBar1->Name = L"trackBar1";
				this->trackBar1->Size = System::Drawing::Size(687, 56);
				this->trackBar1->TabIndex = 1;
				this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->label1->Location = System::Drawing::Point(517, 15);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(88, 31);
				this->label1->TabIndex = 2;
				this->label1->Text = L"Image";
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->label2->Location = System::Drawing::Point(108, 586);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(24, 31);
				this->label2->TabIndex = 3;
				this->label2->Text = L"/";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->label3->Location = System::Drawing::Point(872, 585);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(77, 31);
				this->label3->TabIndex = 4;
				this->label3->Text = L"Time:";
				// 
				// button1
				// 
				this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button1->Location = System::Drawing::Point(1027, 166);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(109, 73);
				this->button1->TabIndex = 5;
				this->button1->Text = L"Show Result";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
				// 
				// button2
				// 
				this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->button2->Location = System::Drawing::Point(1027, 61);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(109, 73);
				this->button2->TabIndex = 6;
				this->button2->Text = L"Load Image";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15));
				this->label4->Location = System::Drawing::Point(1031, 284);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(117, 31);
				this->label4->TabIndex = 7;
				this->label4->Text = L"Waiting..";
				// 
				// openFileDialog1
				// 
				this->openFileDialog1->FileName = L"openFileDialog1";
				this->openFileDialog1->Multiselect = true;
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1162, 657);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->trackBar1);
				this->Controls->Add(this->pictureBox1);
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion
			void initPictureBox()
			{
				this->label3->Text = L"Time:";
				this->label4->Text = L"Waiting..";
				this->label3->Refresh();
				this->label4->Refresh();
			}
			void drawCircle( Bitmap^ *img, struct Eye eye, int r, int g, int b )
			{
				for(int x = (eye.x - eye.r); x <= (eye.x + eye.r); x++){
					for(int y = (eye.y - eye.r); y <= (eye.y + eye.r); y++){
						double result = pow((double)(x - eye.x), 2) + pow((double)(y - eye.y), 2) - pow((double)eye.r, 2);
						if( ( -50 <= result ) && ( result <= 50 ) )
							(*img)->SetPixel( x, y, Color::FromArgb( r, g, b ) );
					}
				}
			}
			void drawGroundTruth( Bitmap^ *img, int frameNum )
			{
				FILE *fPtr = fopen( "test img//Ground Truth.txt", "r" );
				struct Eye rightEye, leftEye;

				for(int i = 0; i < frameNum; i++)
					fscanf( fPtr, "%d %d %d %d %d %d" , &rightEye.r, &rightEye.x, &rightEye.y, 
					&leftEye.r, &leftEye.x, &leftEye.y );
				fclose( fPtr );
				
				drawCircle( img, rightEye, 255, 0, 0 );
				drawCircle( img, leftEye, 255, 0, 0 );
			}
			void calcGauMask(double gMask[][3])
			{
				double sigma = 1.0;
				double r, s = 2.0 * sigma * sigma;
				double sum = 0.0;
 
				for (int x = -1; x <= 1; x++){
					for(int y = -1; y <= 1; y++){
						r = sqrt(x*x + y*y);
						gMask[x + 1][y + 1] = (exp(-(r*r)/s))/(M_PI * s);
						sum += gMask[x + 1][y + 1];
					}
				}
 
				for(int i = 0; i < 3; ++i)
					for(int j = 0; j < 3; ++j)
						gMask[i][j] /= sum;
 			}
			void GaussianFilter( Bitmap^ *img, Bitmap^ refImg )
			{
				double gauTemplate[3][3];
				calcGauMask(gauTemplate);

				int h = (refImg->Height - 3 + 1), 
					w = (refImg->Width - 3 + 1);
				for(int y = 0; y < h; y++){
					for(int x = 0; x < w; x++){
						int sum = 0;
						
						for(int i = 0; i < 3; i++){
							for(int j = 0; j < 3; j++)
								sum += (refImg->GetPixel( x + j, y + i ).R * gauTemplate[i][j]);
						}
						(*img)->SetPixel( x + 1, y + 1, Color::FromArgb( sum, sum, sum ) );
					}
				}
			}
			void sobelFilter( Bitmap^ *img, int *mask, Bitmap^ refImg )
			{
				int h = (refImg->Height - 3 + 1), 
					w = (refImg->Width - 3 + 1);

				for(int y = 0; y < h; y++){
					for(int x = 0; x < w; x++){
						int sum = 0;

						for(int i = 0; i < 9; i++)
							sum += (refImg->GetPixel( x + i%3, y + i/3 ).R * mask[i]);

						if( sum < 0 ) sum = -sum; if( sum > 255 ) sum = 255;
						(*img)->SetPixel( x + 1, y + 1, Color::FromArgb( sum, sum, sum ) );
					}
				}
			}
			void sobelFilterXY( Bitmap^ *imgX, Bitmap^ *imgY, Bitmap^ *img )
			{				
				int h = ((*img)->Height - 3 + 1), 
					w = ((*img)->Width - 3 + 1);

				for(int y = 0; y < h; y++){
					for(int x = 0; x < w; x++){
						int sum = ( (*imgX)->GetPixel( x, y ).R + 
									(*imgY)->GetPixel( x, y ).R );

						if( sum > 255 ) sum = 255;
						(*img)->SetPixel( x, y, Color::FromArgb( sum, sum, sum ) );
					}
				}
			}
			void threshold( Bitmap^ *img )
			{
				int thresholdIntensity = 50;
			
				for(int y = 0; y < (*img)->Height; y++){
					for(int x = 0; x < (*img)->Width; x++){
						if( (*img)->GetPixel( x, y ).R > thresholdIntensity )
							(*img)->SetPixel( x, y, Color::FromArgb( 255, 255, 255 ) );
						else
							(*img)->SetPixel( x, y,  Color::FromArgb( 0, 0, 0 ) );
					}
				}
			}

			void houghTransform( Bitmap^ *img, Bitmap^ *result, int a1, int a2, int b1, int b2, int r1, int r2 )
			{
				int acc[30][25][20] = {};
				int localMax = 0;

				for(int y = 0; y < (*img)->Height; y++){
					for(int x = 0; x < (*img)->Width; x++){
						int val = (*img)->GetPixel( x, y ).R;
			
						if( val ){
							for(int a = a1; a <= a2; a++){
								for(int b = b1; b <= b2; b++){
									int r = sqrt((x-a)*(x-a) + (y-b)*(y-b));

									if( ( r1 <= r ) && ( r <= r2 ) ){
										acc[a-a1][b-b1][r-r1]++;
										localMax = acc[a-a1][b-b1][r-r1] > localMax ?
												   acc[a-a1][b-b1][r-r1] : localMax;
									}
								}
							}
						}
					}
				}

				bool find = 0;

				for(int a = 0; a < 30 && !find; a++){
					for(int b = 0; b < 25 && !find; b++){
						for(int r = 0; r < 20 && !find; r++){
							if(acc[a][b][r] == localMax){
								struct Eye eye;

								eye.x = a + a1 + (*result)->Width*0.15, eye.y = b + b1 + (*result)->Height*0.28 , eye.r = r + r1;
								if(localMax <= 40)
									fprintf( fPtr, "0\t0\t0\t");
								else{
									fprintf( fPtr, "%d\t%d\t%d\t", eye.r, eye.x, eye.y);
									drawCircle( result, eye, 255, 255, 0 );
								}
								find = 1;
							}
						}
					}
				}
			}
			static int frameNum = 1, allFrameNum;
			array< Bitmap^ >^ framSeq;			
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) 
			{
				frameNum = trackBar1->Value + 1;
				label2->Text = String::Format( "{0}/{1}", frameNum, allFrameNum );

				pictureBox1->Image = framSeq[frameNum-1];
			}
			void toGray(Bitmap^ *img, Bitmap^ pre)
			{

				for(int y = 0; y < pre->Height; y++){
					for(int x = 0; x <pre->Width; x++){
						Color RGB = pre->GetPixel( x, y ); 
						//讀取影像平面上 (j,i) 的 RGB 資訊
						//這邊要注意因為縱軸座標是 i 橫軸座標是 j 所以要寫成 (j,i) ;
						int r = Convert::ToInt32( RGB.R );
						int g = Convert::ToInt32( RGB.G );
						int b = Convert::ToInt32( RGB.B );
						int gray = ( r + g + b ) / 3;

						(*img)->SetPixel( x, y, Color::FromArgb( gray, gray, gray ) );
					}
				}
			}
			void cutRoi(Bitmap^ img, Bitmap^ *roi){
				for(int y = 0; y < (*roi)->Height; y++){
					for(int x = 0; x < (*roi)->Width; x++){
						Color RGB = img->GetPixel( x + (img)->Width*0.15,
							y + (img)->Height*0.28 ); 

						int r = Convert::ToInt32( RGB.R );
						int g = Convert::ToInt32( RGB.G );
						int b = Convert::ToInt32( RGB.B );
						int gray = ( r + g + b ) / 3;

						(*roi)->SetPixel( x, y, Color::FromArgb( gray, gray, gray ) );
					}
				}
			}
			
			private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e)
			{
				//Result
				initPictureBox();
				clock_t start = clock();

				for(int i = 1; i <= allFrameNum; i++ ){
					Bitmap^ image = framSeq[i-1];
					Bitmap^ roiImage = gcnew Bitmap( image->Width*0.74, image->Height*0.23 );

					cutRoi( image, &roiImage );
				
					Bitmap^ roiGaufilter = gcnew Bitmap( roiImage->Width, roiImage->Height );

					GaussianFilter( &roiGaufilter, roiImage );

					Bitmap^ sobelX = gcnew Bitmap( roiImage->Width, roiImage->Height );
					Bitmap^ sobelY = gcnew Bitmap( roiImage->Width, roiImage->Height );
					Bitmap^ sobel = gcnew Bitmap( roiImage->Width, roiImage->Height );
					int maskX[] = {-1, -2, -1, 0, 0, 0, 1, 2, 1};
					int maskY[] = {-1, 0, 1, -2, 0, 2, -1, 0, 1};
				
					sobelFilter( &sobelX, maskX, roiGaufilter );
					sobelFilter( &sobelY, maskY, roiGaufilter );
					sobelFilterXY( &sobelX, &sobelY, &sobel );

					threshold( &sobel );

					//(x-a)^2+(y-b)^2-r^2=0
					//+-2, +-5, +-5
					houghTransform( &sobel, &image, (roiImage)->Width*0.16, (roiImage)->Width*0.17, (roiImage)->Height*0.33, (roiImage)->Height*0.45, 12, 27 );
					houghTransform( &sobel, &image, (roiImage)->Width*0.815, (roiImage)->Width*0.84, (roiImage)->Height*0.31, (roiImage)->Height*0.42, 12, 27 );
					fprintf( fPtr, "\n" );

					drawGroundTruth( &image, i );

					framSeq[i-1] = image;
				}
				
				pictureBox1->Image = framSeq[frameNum-1];
				label3->Text = String::Format( "Time: {0} ms", clock() - start );
				this->label4->Text = L"Finish!";
			 }
			private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				//Load
				initPictureBox();
				if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
					// 如果成功開檔
					allFrameNum = openFileDialog1->FileNames->Length;
					this->trackBar1->Maximum = allFrameNum-1;
					frameNum = 1;
					label2->Text = String::Format( "{0}/{1}", frameNum, allFrameNum );

					int i = 0; 

					framSeq = gcnew array< Bitmap^ >(allFrameNum);
					for each (String^ fileName in openFileDialog1->FileNames) {
						Bitmap^ image = gcnew Bitmap( fileName );

						framSeq[i++] = image;
					}

					pictureBox1->Image = framSeq[0];
				}
			}
	};
}
