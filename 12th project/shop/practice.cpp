#include <iostream>
#include <cmath>
#include <stdlib.h>
#include<vector>


using namespace std;
int tm=0;
vector<int> s;
int getweight(int ,int,int);
int getweight(int n,int i,int tm)
  {
     for( int k=i;k<n;k++)
        {tm+=s[k];
         getweight(n,i+1,tm);
        }
        return tm;

  }

int main()
{

    int t;

    cin>>t;

    while(t--)
    {   int n,x,tm=0,wt=0;




        int i=0;
        cin>>n;


        for( i=0;i<n;i++)
        {cin>>x;
        s.push_back(x);
         cout<<"\t";

        }

         int wt1=getweight(n,i,tm);
         if(wt1>wt)
            wt=wt1;














        cout<<wt;
         s.begin();
                       cout<<"\n";

    }


        return 0;
}
