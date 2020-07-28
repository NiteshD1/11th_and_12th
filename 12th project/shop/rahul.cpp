#include <iostream>
#include <string.h>
using namespace std;
#include<climits>

int main() {
    int t;
    cin>>t;
    while(t--){
        int win=0,i=0,hint=0;
        char a[128];

       cin>>a;
       i=strlen(a);
        while(win==0){
          if(hint==0)
            {for(int j=0;j<i;j++)
            {
                if(a[j]=='W')
                {if(a[j+1]!='W')
                    {a[j+1]='W';
                    a[j]='.';
                    hint=1;

                    break;
                    }
                }
                if(j==i-1)
                    win=1;
             }
            }
             if(hint==1)
            {for(int j=i-1;j>=0;j--)
            {
                if(a[j]=='B')
                {if(a[j-1]!='B')
                    {a[j-1]='B';
                    a[j]='.';
                    hint=0;

                    break;
                    }
                }
                if(j==0)
                    win=2;
             }
            }
        }
        if(win==1)
        cout<<"B"<<endl;
        else if(win==2)
            cout<<"W"<<endl;

    }
	return 0;
}
