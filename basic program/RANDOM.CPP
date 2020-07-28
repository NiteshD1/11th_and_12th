#include"iostream.h"
#include"conio.h"
#include"stdlib.h"


    void main()
     {
      int i,j,k;
      for(int t=0;t<50;t++)
	{
	 randomize();
	 i=random(10);
	 j=random(10);
	 k=random(10);
	  if(i!=j!=k)
	    cout<<i<<"i  "<<j<<"j  "<<k<<"  k\n";

	 }
     getch();

     }