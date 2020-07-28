#include <iostream>
#include"shop.h"
#include<process.h>
#include<stdlib.h>
#include<fstream>


using namespace std;
void makebill(string,string,int,int,int);
void searchp(string);
void showbill();
shop s;
string billp[20];

      char stock[30],price[30];
      int flag=0,count=0,sign=0,istock,iprice;
      fstream bfile;
       fstream file;




int main()
{


    int n;
    cout << "                 Menu" << endl;
    cout<<"1. Serch product by name";
    cout<<"\n2. Make bill";
    cout<<"\n3. Total product";
    cout<<"\n Enter your choise:";




    cin>>n;

     switch(n)
      {
          case 1: s.getproduct();
                  searchp(s.pname);
           case 2:
          break;
          default: exit(0);
      }

      file.close();


      bfile.close();
    return 0;
}
  void makebill(string cname,string pname,int stockp,int pricep,int q)
      {
         bfile.open("backup.dat",file.ios::app);

         bfile.write((char*)&cname,sizeof(string));
          bfile.write((char*)&pname,sizeof(string));
         bfile<<pname;
        bfile<<stockp;
         bfile<<pricep;
         bfile<<q;

      }
      void showbill()
      {

      }
      void searchp(string pname)
      {
           file.open("shop.dat");


           while(!file.eof())
                  {  char add;
                       file>>stock;


                       istock=atoi(stock);

                      if(flag==1)
                      {if(istock>0)
                          cout<<pname;
                          {cout<<"yes it is available and "<<stock<<" piece is left.  Hurrrry Up!!!!";
                          cout<<"\nWant to add it in bill(y or n)";

                          cin>>add;
                          if(add=='y'||add=='Y')
                          { if(sign==0)
                                 {   s.getcustomer();
                                   sign=1;
                                 }


                               file>>price;
                               int iprice=atoi(price);
                             cout<<"\nIts price is:"<<price;
                             s.getquantity();
                             makebill(s.cname,pname,istock,iprice,s.q);
                          }

                          }
                          else
                            cout<<"\n It is not available!Sorry!!!!!";
                          cout<<"\nwant to search another product(y or n)";
                          cin>>add;
                          if(add=='y'||add=='Y')
                          { s.getproduct();

                             searchp(s.pname);
                             file.seekg(0);
                          }

                      flag=0;
                      }
                      if(stock==pname)
                      {
                          flag=1;

                      }

                  }
      }
