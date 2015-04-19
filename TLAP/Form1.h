#pragma once
#include <math.h>
#include "Sprite.h"
# define M_PI         3.141592653589793238462643383279502884L
namespace TLAP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			//
		}

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
	private: System::Windows::Forms::TextBox^  vAngleS1;
	private: System::Windows::Forms::TextBox^  vAngleS2;
	private: System::Windows::Forms::TextBox^  hAngleS2;
	protected: 

	protected: 


	private: System::Windows::Forms::TextBox^  hAngleS1;

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  xPosS1;
	private: System::Windows::Forms::TextBox^  yPosS2;


	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  xVelS1;
	private: System::Windows::Forms::TextBox^  yPosS1;


	private: System::Windows::Forms::TextBox^  xVelS2;

	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  xPosS2;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  hit;
	private: System::Windows::Forms::Label^  label2;
	Sprite* ship1;
	Sprite* ship2;
	Sprite* shell1;
	Sprite* shell2;
	Sprite* back;
	void startup(){
			Sprite::createDefaultWindow("TLAP",30,30,640,480,true);
			Sprite::setTargetFPS(60);
			shell1 = Sprite::loadSprite("shell.bmp",3);
			shell1->addImage("splash.bmp");
			shell1->addImage("hit.bmp");
			shell1->setImageColorKey(-1,true,0,0,0);
			shell2 = Sprite::loadSprite("shell.bmp",3);
			shell2->addImage("splash.bmp");
			shell2->addImage("hit.bmp");
			shell2->setImageColorKey(-1,true,0,0,0);
			ship1 = Sprite::loadSprite("bismark.bmp");
			ship1->setImageColorKey(-1,true,0,0,0);
			ship2 = Sprite::loadSprite("iowa.bmp");
			ship2->setImageColorKey(-1,true,0,0,0);
			back = Sprite::loadSprite("ocean.bmp");
			ship1->setPriority(1);
			ship2->setPriority(1);
			shell1->setPriority(2);
			shell2->setPriority(2);
			back->setPriority(-1);
			ship1->moveTo(40,40);
			ship2->moveTo(340,340);
			ship2->setFlip(SDL_FLIP_HORIZONTAL);
			ship1->sizeTo(50,15);
			ship2->sizeTo(50,15);
			shell1->setVisible(false);
			shell2->setVisible(false);
			shell1->sizeTo(50,50);
			shell2->sizeTo(50,50);
			Sprite::renderSprites();

	}
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
			this->vAngleS1 = (gcnew System::Windows::Forms::TextBox());
			this->vAngleS2 = (gcnew System::Windows::Forms::TextBox());
			this->hAngleS2 = (gcnew System::Windows::Forms::TextBox());
			this->hAngleS1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->xPosS1 = (gcnew System::Windows::Forms::TextBox());
			this->yPosS2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->xVelS1 = (gcnew System::Windows::Forms::TextBox());
			this->yPosS1 = (gcnew System::Windows::Forms::TextBox());
			this->xVelS2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->xPosS2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->hit = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// vAngleS1
			// 
			this->vAngleS1->Location = System::Drawing::Point(20, 33);
			this->vAngleS1->Name = L"vAngleS1";
			this->vAngleS1->Size = System::Drawing::Size(100, 20);
			this->vAngleS1->TabIndex = 0;
			this->vAngleS1->Text = L"18.75";
			// 
			// vAngleS2
			// 
			this->vAngleS2->Location = System::Drawing::Point(462, 33);
			this->vAngleS2->Name = L"vAngleS2";
			this->vAngleS2->Size = System::Drawing::Size(100, 20);
			this->vAngleS2->TabIndex = 1;
			this->vAngleS2->Text = L"18.75";
			// 
			// hAngleS2
			// 
			this->hAngleS2->Location = System::Drawing::Point(462, 82);
			this->hAngleS2->Name = L"hAngleS2";
			this->hAngleS2->Size = System::Drawing::Size(100, 20);
			this->hAngleS2->TabIndex = 2;
			this->hAngleS2->Text = L"225.8866";
			// 
			// hAngleS1
			// 
			this->hAngleS1->Location = System::Drawing::Point(20, 82);
			this->hAngleS1->Name = L"hAngleS1";
			this->hAngleS1->Size = System::Drawing::Size(100, 20);
			this->hAngleS1->TabIndex = 3;
			this->hAngleS1->Text = L"45.8866";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(130, 431);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(274, 70);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Boom!!!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Ship 1";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// xPosS1
			// 
			this->xPosS1->Location = System::Drawing::Point(20, 161);
			this->xPosS1->Name = L"xPosS1";
			this->xPosS1->Size = System::Drawing::Size(100, 20);
			this->xPosS1->TabIndex = 7;
			this->xPosS1->Text = L"4000";
			this->xPosS1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// yPosS2
			// 
			this->yPosS2->Location = System::Drawing::Point(462, 209);
			this->yPosS2->Name = L"yPosS2";
			this->yPosS2->Size = System::Drawing::Size(100, 20);
			this->yPosS2->TabIndex = 8;
			this->yPosS2->Text = L"34000";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(20, 306);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 9;
			this->textBox7->Text = L"0";
			// 
			// xVelS1
			// 
			this->xVelS1->Location = System::Drawing::Point(20, 257);
			this->xVelS1->Name = L"xVelS1";
			this->xVelS1->Size = System::Drawing::Size(100, 20);
			this->xVelS1->TabIndex = 10;
			this->xVelS1->Text = L"16.7";
			// 
			// yPosS1
			// 
			this->yPosS1->Location = System::Drawing::Point(20, 209);
			this->yPosS1->Name = L"yPosS1";
			this->yPosS1->Size = System::Drawing::Size(100, 20);
			this->yPosS1->TabIndex = 11;
			this->yPosS1->Text = L"4000";
			// 
			// xVelS2
			// 
			this->xVelS2->Location = System::Drawing::Point(462, 257);
			this->xVelS2->Name = L"xVelS2";
			this->xVelS2->Size = System::Drawing::Size(100, 20);
			this->xVelS2->TabIndex = 12;
			this->xVelS2->Text = L"-16.7";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(462, 306);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 13;
			this->textBox11->Text = L"0";
			// 
			// xPosS2
			// 
			this->xPosS2->Location = System::Drawing::Point(462, 161);
			this->xPosS2->Name = L"xPosS2";
			this->xPosS2->Size = System::Drawing::Size(100, 20);
			this->xPosS2->TabIndex = 14;
			this->xPosS2->Text = L"34000";
			this->xPosS2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox12_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(489, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Ship 2";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(250, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"X pos";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(250, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Y pos";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(250, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"X vel";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(250, 313);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Y vel";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(250, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"vertical";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(243, 89);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"horizontal";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// hit
			// 
			this->hit->Location = System::Drawing::Point(130, 405);
			this->hit->Name = L"hit";
			this->hit->Size = System::Drawing::Size(274, 20);
			this->hit->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(217, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Muzzle Velocity: 820m/s";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 513);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->hit);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->xPosS2);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->xVelS2);
			this->Controls->Add(this->yPosS1);
			this->Controls->Add(this->xVelS1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->yPosS2);
			this->Controls->Add(this->xPosS1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->hAngleS1);
			this->Controls->Add(this->hAngleS2);
			this->Controls->Add(this->vAngleS2);
			this->Controls->Add(this->vAngleS1);
			this->Name = L"Form1";
			this->Text = L"TLAP";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			startup();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 double MuzzleVelocity=820,vA1,hA1,vA2,hA2,xVel1,xVel2,D1,D2,T1,T2,xPosS1,yPosS1,xPosS2,yPosS2,hLocXS1,hLocYS1,hLocXS2,hLocYS2;
			 bool hit1=false,hit2=false;
			 vA1=System::Convert::ToDouble(vAngleS1->Text);
			 hA1=System::Convert::ToDouble(hAngleS1->Text);
			 vA2=System::Convert::ToDouble(vAngleS2->Text);
			 hA2=System::Convert::ToDouble(hAngleS2->Text);

			 xVel1=System::Convert::ToDouble(xVelS1->Text);
			 xVel2=System::Convert::ToDouble(xVelS2->Text);

			 xPosS1=System::Convert::ToDouble(this->xPosS1->Text);
			 yPosS1=System::Convert::ToDouble(this->yPosS1->Text);
			 xPosS2=System::Convert::ToDouble(this->xPosS2->Text);
			 yPosS2=System::Convert::ToDouble(this->yPosS2->Text);



			 T1=((sin(vA1*M_PI/180)*MuzzleVelocity*2)/9.8);
			 T2=((sin(vA2*M_PI/180)*MuzzleVelocity*2)/9.8);
			 D1=MuzzleVelocity*cos(vA1*M_PI/180)*T1;
			 D2=MuzzleVelocity*cos(vA2*M_PI/180)*T2;

			 hLocXS1=cos(hA1*M_PI/180)*D1+xPosS1;
			 hLocYS1=sin(hA1*M_PI/180)*D1+yPosS1;
			 hLocXS2=cos(hA2*M_PI/180)*D2+xPosS2;
			 hLocYS2=sin(hA2*M_PI/180)*D2+yPosS2;

			 hit->Text="";
			 double newx2=xPosS2+xVel2*T1;
			 //hit->Text+=newx2+" " +xPosS2+" "+hLocXS1+" "+hLocYS1;
			 if (hLocXS1<=135+newx2 && hLocXS1>=-135+newx2 && hLocYS1<=16.5+yPosS2 && hLocYS1>=-16.5+yPosS2){
				 hit->Text+="	Ship2 hit   ";
				 hit1 = true;
			 }

			 double newx1=xPosS1+xVel1*T2;

			 if (hLocXS2<=135+newx1 && hLocXS2>=-135+newx1 && hLocYS2<=16.5+yPosS1 && hLocYS2>=-16.5+yPosS1){
				 hit->Text+="   Ship1 hit   ";
				 hit2 = true;
			 }

			 shell1->setVisible(true);
			 shell2->setVisible(true);
			 shell1->setFrame(0);
			 shell2->setFrame(0);
			 shell1->setAngle(hA1+180);
			 shell2->setAngle(hA2+180);
			 double xs1=xPosS1,ys1=yPosS1,xs2=xPosS2,ys2=yPosS2;
			 double xr1=xPosS1,yr1=yPosS1,xr2=xPosS2,yr2=yPosS2;
			 if(T2>T1){
				 for(xs1=xPosS1;abs(xs1-newx1)>2;xs1+=(newx1-xPosS1)/200){
					 ship1->moveTo(xs1/100-25,ys1/100-7.5);
					 ship2->moveTo(xs2/100-25,ys2/100-7.5);
					 shell1->moveTo(xr1/100-25,yr1/100-25);
					 shell2->moveTo(xr2/100-25,yr2/100-25);
					 xr2+=(hLocXS2-xPosS2)/200;
					 yr2+=(hLocYS2-yPosS2)/200;
					 double vel2 = sqrt(((hLocYS2-yPosS2)/200)*((hLocYS2-yPosS2)/200)+((hLocXS2-xPosS2)/200)*((hLocXS2-xPosS2)/200));
					 if(abs(xs2-newx2)>2){
						 xr1+=vel2*cos(hA1*M_PI/180)*(MuzzleVelocity*cos(vA1*M_PI/180)/(MuzzleVelocity*cos(vA2*M_PI/180)));
						 yr1+=vel2*sin(hA1*M_PI/180)*(MuzzleVelocity*cos(vA1*M_PI/180)/(MuzzleVelocity*cos(vA2*M_PI/180)));
						 xs2+=((newx1-xPosS1)/200)*(xVel2/xVel1);
					 }else{
						 if(hit1){
							 shell1->setFrame(2);
						 }else{
							 shell1->setFrame(1);
						 }

					 }
					 Sprite::renderSprites();
				 }
				 if(hit1){
					 shell1->setFrame(2);
				 }else{
					 shell1->setFrame(1);
				 }
				 if(hit2){
					 shell2->setFrame(2);
				 }else{
					 shell2->setFrame(1);
				 }
				 Sprite::renderSprites();




			 }else{

				 for(xs2=xPosS2;abs(xs2-newx2)>2;xs2+=(newx2-xPosS2)/200){
					 ship1->moveTo(xs1/100-25,ys1/100-7.5);
					 ship2->moveTo(xs2/100-25,ys2/100-7.5);
					 shell1->moveTo(xr1/100-25,yr1/100-25);
					 shell2->moveTo(xr2/100-25,yr2/100-25);
					 xr1+=(hLocXS1-xPosS1)/200;
					 yr1+=(hLocYS1-yPosS1)/200;
					 double vel1 = sqrt(((hLocYS1-yPosS1)/200)*((hLocYS1-yPosS1)/200)+((hLocXS1-xPosS1)/200)*((hLocXS1-xPosS1)/200));
					 if(abs(xs1-newx1)>2){
						 xr2+=vel1*cos(hA2*M_PI/180)*(MuzzleVelocity*cos(vA2*M_PI/180)/(MuzzleVelocity*cos(vA1*M_PI/180)));
						 yr2+=vel1*sin(hA2*M_PI/180)*(MuzzleVelocity*cos(vA2*M_PI/180)/(MuzzleVelocity*cos(vA1*M_PI/180)));
						 xs1+=((newx2-xPosS2)/200)*(xVel1/xVel2);
					 }else{
						 if(hit2){
							 shell2->setFrame(2);
						 }else{
							 shell2->setFrame(1);
						 }

					 }
					 Sprite::renderSprites();
				 }
				 if(hit2){
					 shell2->setFrame(2);
				 }else{
					 shell2->setFrame(1);
				 }
				 if(hit1){
					 shell1->setFrame(2);
				 }else{
					 shell1->setFrame(1);
				 }
				 Sprite::renderSprites();
			 }
			


		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

