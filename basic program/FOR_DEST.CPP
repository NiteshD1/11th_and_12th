#include"iostream.h"
#include"conio.h"
class raju
{
int con;
   public:
   void read();
   raju()
   {
   cout<<"Control flow in CONSTRUCTER\n\n\n";
   }
   ~raju()
   {
   cout<<"\nNow Control flow in DESTRUCTER";
   }
};
void raju::read()
{
cout<<"\n\nEnter con number\n\n";
cin>>con;
cout<<"\n\nThe number is\t"<<con;
}


     void main()
     {
     clrscr();
     if(1)
     {
     raju construct;

     construct.read();
     }
     getch();
     }