#include <iostream>
#include<string.h>
#include<cstdlib>
using namespace std;


int main() {


    int t;
    cin>>t;
    int x;
    topp:
    while(t--){
            char a[30];
        int i,l,j;
           cin>>a;
           l=strlen(a);
           int k,coun=0,c=0;
        for(i=0;i<l/2;i++)
          {

           for(k=0,j=l-1;k<l/2;k++,j--)
           {

            if(a[j]==a[i])
            {    cout<<a[i]<<a[j];
                a[j]='0';
                coun++;
                break;
            }
            if(k=(l/2)-1 && coun==c)
                {
                    cout<<"NO";
                    goto topp;
                }

           }
            c=coun;

          }

          cout<<"YES";
          cout<<"\n";



    }
	return 0;
}
