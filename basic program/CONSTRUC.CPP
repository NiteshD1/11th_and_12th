#include"iostream.h"
#include"conio.h"
class rajveer
{
int m,n;
char name[10];
 public:
  rajveer()
  {
  cout<<"In construct";
  }
   rajveer(int i,int j);       //Default Constructer as well as
   ~rajveer()
   {
   cout<<"In destructer";
   }
  };				      //peramiterise



   rajveer::rajveer(int i=1,int j=1)
   {
   m=i;
   n=j;
   cout<<"\n\nControl flow in Default Constructer\n\n";
   cout<<m<<"  "<<n;
   }


   void main()
   {
   clrscr();
   rajveer taj=rajveer(9090,909);
   getch();
   }


