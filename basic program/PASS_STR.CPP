#include"iostream.h"
#include"conio.h"
#include"stdio.h"           //for gets()
struct EMP
{
int empno;
char name[25];
double salary;
};

void ReadEmp(EMP &e)           //pass by Reference
{
cout<<"\nEnter Employee No.";
cin>>e.empno;
cout<<"\nEnter Employee Name";
gets(e.name);
cout<<"\nEnter Employee Salary";
cin>>e.salary;
}

void ShowEmp(EMP e)             //pass by Value
{
cout<<"Employee Details\n";
cout<<"Employee No.\t"<<e.empno<<endl;
cout<<"Employee Name\t"<<e.name<<endl;
cout<<"Employee Salary\t"<<e.salary<<endl;
}

void main()
{
clrscr();
EMP E1;
ReadEmp(E1);                  //structure E1 pass by reference
ShowEmp(E1);                  //structure E1 pass by value
getch();
}

