#ifndef SHOP_H
#define SHOP_H
#include<iostream>

using namespace std;
class shop
{

    public:
        string pname,cname;
        int q;

        shop();
        virtual ~shop();

        void getproduct()
        {

             cout<<"Enter product name:";
             cin>>pname;

        }

        void getcustomer()
        {

             cout<<"Enter customer name:";
             cin>>cname;

        }
        void getquantity()
        {

             cout<<"Enter quantity of this product :";
             cin>>q;

        }


    protected:

    private:

    };

#endif // SHOP_H
