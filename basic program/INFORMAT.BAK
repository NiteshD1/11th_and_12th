/*It's a program of class which take total information of student & print
 data of 2 student selected randomly...
							Made by-Rajveer singh
								jadav;*/


#include"iostream.h"
#include"conio.h"
#include"STDLIB.H"
#include"stdio.h"

  class ADMISSION
  {
  int AD_NO;
  char NAME[20];
  int CLASS;
  int FEES;

  public:

  void Read_Data(void);
  void Display(void);
  int Draw_Nos(void);
  int getAD_NO(void);
  };

	void ADMISSION::Read_Data(void)
	{
	cout<<"Enter Asmission number of student(10-2000)\n";
	cin>>AD_NO;
	cout<<"Enter Name of Student\n";
	gets(NAME);
	cout<<"Enter the Class of Student\n";
	cin>>CLASS;
	cout<<"Enter the Fees of Student\n";
	cin>>FEES;
	}


	void ADMISSION::Display(void)
	{
	cout<<"\nThe Admission number of Student\t"<<AD_NO;
	cout<<"\nThe Name of Student\t"<<NAME;
	cout<<"\nThe Class of student\t"<<CLASS;
	cout<<"\nThe Fees of Student\t"<<FEES;
	}

	int ADMISSION::getAD_NO()
	{
	return AD_NO;
	}

	int ADMISSION::Draw_Nos(void)
	{
	int A;
	randomize();
	A=10+random(1991);
	clrscr();
	return A;
	}

 void main()
	  {
	     clrscr();
	     ADMISSION stu[3];
	     int  ch;
	     int D1,D2,selec1,selec2;
	do
	   {
	     cout<<"Main Manu\n";
	     cout<<"\n1.To Read Student's data\n";
	     cout<<"\n2.To Disply the Student's data\n";
	     cout<<"\n3.To display the data of Two student Randomly";
	     cout<<"\nEnter no.1-3";
	     cin>>ch;
	switch(ch)
	     {
	    case 1:
		   for(int i=0;i<3;i++)
		   stu[i].Read_Data();
		   break;
	    case 2:
		   for(int j=0;j<3;j++)
		   stu[j].Display();
		   break;
	    case 3:
		   D1=stu[0].Draw_Nos();
		   for(int k=0;k<3;k++)
		   {
		   if (stu[k].getAD_NO()==D1)
		   {
		   selec1=k;
		   }
		   }
		   stu[selec1].Display();
		   D2=stu[0].Draw_Nos();
		   for(int l=0;l<3;l++)
		   {
		   if (stu[l].getAD_NO()==D2)
		   {
		   selec2=l;
		   }
		   }
		   stu[selec2].Display();
		   break;
	    default:
	    cout<<"Wrong choice";
	    }}while(ch>0&&ch<3);
	  getch();
	  }