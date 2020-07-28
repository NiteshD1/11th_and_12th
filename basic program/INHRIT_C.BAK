#include"iostream.h"
#include"conio.h"
#include"stdio.h"

 class person
 {
   int code;
   char name[20];
   int age;
   int dd,mm,yy;
       public:
	 void readperson(void);
	 void displayperson(void);
  };
	 void person:: readperson(void)
	 {
	 cout<<"Enter the code of Person";
	 cin>>code;
	 cout<<"\nEnter name of Person\n";
	 gets(name);
	 cout<<"\nEnter Age of Person\n";
	 cin>>age;
	 cout<<"\nEnter DD-MM-YY of Person\n";
	 cin>>dd>>mm>>yy;
	 }

	 void person::displayperson(void)
	 {
	 cout<<"\nThe code of Person\t"<<code;
	 cout<<"\nThe Name of Person\t"<<name;
	 cout<<"\nThe Age of Person\t"<<age;
	 cout<<"\nThe DD-MM-YY of Person\t";
	 cout<<dd<<"  "<<mm<<"  "<<yy;
	 }

 class student:public person
    {
    int marks;
    float per;
    int  Class;
    public:
	void readperson(void);
	void displayperson(void);
    };
	void student::readperson(void)
	{
	person::readperson();
	cout<<"\nEnter class of Person\n";
	cin>>Class;
	cout<<"\nEnter Marks of Person\n";
	cin>>marks;
	cout<<"\nEnter persantag of person\n";
	cin>>per;
	}

	void student::displayperson(void)
	{
	person::displayperson();
	cout<<"\nThe class of Person\t"<<Class;
	cout<<"\nThe marks of Person\t"<<marks;
	cout<<"\nThe persantag(%) of Person\t"<<per;
	}


     void main()
     {
     clrscr();
     student s;
     person  p;
     p.readperson();
     p.displayperson();
     s.readperson();
     s.displayperson();
     cout<<"\n\n\n\t\t\t\t****THANK YOU****";
     getch();
     }