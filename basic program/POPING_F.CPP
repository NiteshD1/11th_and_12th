#include"iostream.h"
#include"process.h"                      //for exit()
int Pop(int [],int&);          //prototype
int Push(int [],int&,int);     //prototype
void Display(int [],int);      //prototype

/*---------------------------------------------------------------------------
  Function Push() receives the stack-array,it's top position and element
  to be pushed into. If overflow occurs ,it returns -1 and successfully
  pushed the element ,it returns 0.

  function Pop() recieve the stack-array ,and its top's position.If underflow
  occour,it returns -1 and successful pops the element ,it returns poped
  element.

  function Display() displays the stack after insertion.
 ---------------------------------------------------------------------------*/

 const int size=50;
 int main()
 {
 int Stack[size],Item,top=-1,res;
 char ch='y';
 while(ch=='y'||ch=='Y')
 {   cout<<"\nENter Item for Insertion";
     cin>>Item;
     res=Push(Stack,top,Item);
     if (res==-1)
      {   cout<<"\nOVERFLOW!!!!";
	  exit(1);
      }
      cout<<"\nThe Stack now is";
      Display(Stack,top);
      cout<<"\nWant to insert more elements(y/n)?";
      cin>>ch;
      }

      cout<<"\nNow deletion of elements begins";
      ch='y';

      while (ch=='y'||ch=='Y')
      { res=Pop(Stack,top);
	if(res==-1)
	{
	cout<<"\nUNDERFLOW!!!";
	exit(1);
	}
	else
	{
	cout<<"\nElement deleted is:"<<res<<endl;
	cout<<"\nThe Stack now is:";
	Display(Stack,top);
	}
	cout<<"\nWant to delete more elements(y/n)";
	cin>>ch;
	}
	return 0;
     }

     int Push(int Stack[],int & top,int ele)  //prototype to push elements
     {
      if(top==size-1)  return -1;
      else
      {
      top++;
      Stack[top]=ele;
      }
      return 0;
     }

     int Pop(int Stack[],int & top) //function to pop elements
     {
      int ret;
      if(top==-1)  return -1;
      else
      {  ret=Stack[top];
      top--;
 }
 return ret;
 }

 void Display(int Stack[],int top)      //To Display
 {  if (top==-1)  return;
   cout<<Stack[top]<<"<--"<<endl;
   for(int i=top-1;i>=0;i--)
   cout<<Stack[i]<<endl;
   }

