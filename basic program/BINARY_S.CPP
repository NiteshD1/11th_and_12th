#include"iostream.h"
#include"conio.h"
int Bsearch(int[],int,int) ;

void main()
{
clrscr();
int AR[50],ITEM,N,index;
cout<<"\n\a\a\aEnter Array Size\n";
cin>>N;

for(int i=0;i<N;i++)
{
cout<<"\nEnter Array Elements"<<i+1;
cin>>AR[i];
}

cout<<"\nEnter Element to be Search\n";
cin>>ITEM;
index=Bsearch(AR,N,ITEM);
if(index==-1)
  cout<<"\nSorry!!";
else
  cout<<"\nElement found at index\t\a"<<index<<"\tposition\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\t"<<index+1;
getch();
}


int Bsearch(int AR[],int size,int item)

{
int beg,last,mid;
beg=0;last=size-1;
while(beg<=last)
{
mid=(beg+last)/2;
if(AR[mid]==item)
   return mid;
 else if (AR[mid]>mid)
    beg=mid+1;
else
    last=mid-1;
}
return -1;
}

