
#include <iostream>

using namespace std;

int main()
{

    int t,a,b,c,d,e,win,lead=0,x=0,y=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cin>>b;
        x+=a;
        y+=b;

        if(a>b)
           {
           c=a-b;

           }
           else
           {

               c=b-a;
           }

        if(c>lead)
            {
                lead=c;
                if(a>b)
                    win=1;
                else win=2;
            }




    }
    cout<<win<<" "<<lead;
    return 0;
}
