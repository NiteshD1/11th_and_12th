#include"iostream.h"
#include"conio.h"

int bsearch(int ar[],int,int);

void main()
{
clrscr();
int arr[10],n,index,real;
cout<<"\nEnter the array elements(Max=10)\n::\n";
cin>>n;

for(int i=0;i<n;i++)
 {
 cout<<"\nEnter the element\t"<<i+1;
 cin>>arr[i];
 }

cout<<"\nEnter the element u want to search\t";
cin>>index;

real=bsearch(arr,n,index);
  if(real==-1)
    cout<<"\nSorry!!!!!!!!No Element in Array\n";
  else
  cout<<"The element "<<index<<"is present at"<<real;
  getch();
}

int bsearch(int ar[],int N,int SEA)
{
int big=0,last=N-1,mid;
 while(big<=last)
  {
  mid=(big+last)/2;
   if(ar[mid]==SEA)
   return (mid+1);
   else
    if(SEA>mid)
     big=mid+1;
   else
     last=mid-1;
  }
return -1;
}
