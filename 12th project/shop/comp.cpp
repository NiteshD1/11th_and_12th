#include <iostream>
#include <cmath>
#include <stdlib.h>
#include<vector>


using namespace std;
int tm=0;



int main()
{

   int n,m,o,x,tm=0,wt=0;


        vector<int> s;
        vector<int> a;
        vector<int> c;


        int i=0;
        cin>>n;
        cout<<"\t";
         cin>>m;
        cout<<"\t";
         cin>>o;


    for(int k=0;k<2;k++)
    {


        for( i=0;i<n;i++)
        {cin>>x;
        s.push_back(x);
         cout<<"\t";

        }
        cout<<"\n";
    }
     for( i=0;i<m;i++)
        {cin>>x;
        a.push_back(x);
         cout<<"\n";

        }
cout<<a[1]<<s[1];


    for(int k=0;k<2*n;k+=2)
    {
     int r=1;
     i=s[k];
        while( i<s[k+1])
        {
        c.push_back(i);

         i=s[k]+r*0;
         cout<<c[i];
         r++;
        }
        c.push_back(s[k+1]);

    }cout<<c[3];
    int k=0,sum=0;
    while( k<a.size())
        {
            x=a[i];
            sum+=c[x];

        }
        x=m;
        for(k=2;k<x;k++)
        {while((sum%k==0)&&(m%k==0))
            {sum=sum/k;
            m=m/k;

            }
        }

        cout<<sum<<"/"<<m;




        return 0;
}

