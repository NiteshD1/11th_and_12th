//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>
#include<ctype.h>

//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************

class account
{
 int acno;
 char name[50];
 int deposit, withdraw;
 char type;
 public:
	void create_account()
	{
	textcolor(GREEN);
	 cout<<"\nEnter The account No.";
	 cin>>acno;
	 cout<<"\n\nEnter The Name of The account Holder ";
	 gets(name);
	 cout<<"\nEnter Type of The account (C/S) ";
	 cin>>type;
	 type=toupper(type);
	 cout<<"\nEnter The Initial amount(>=500 for Saving and >=1000 for current )";
	 cin>>deposit;
	 cout<<"\n\n\nAccount Created..";
	 }

	void show_account()
	{
	 cout<<"\nAccount No. : "<<acno;
	 cout<<"\nAccount Holder Name : ";
	 puts(name);
	 cout<<"\nType of Account : "<<type;
	 cout<<"\nBalance amount : "<<deposit;
	 }

	void modify_account()
	{
	 cout<<"\nAccount No. : "<<acno;
	 cout<<"\nModify Account Holder Name : ";
	 gets(name);
	 cout<<"\nModify Type of Account : ";cin>>type;
	 cout<<"\nModify Balance amount : ";cin>>deposit;
	 }

void dep(int x)
{
  deposit+=x;
}

void draw(int x)
{
  deposit-=x;
}

void report()
{cout<<acno<<"\t"<<name<<"\t\t"<<type<<"\t\t"<<deposit<<endl;}

  int  retacno()
  {return acno;}

  float retdeposit()
  {return deposit;}

  char rettype()
  {return type;}

};         //class ends here



//***************************************************************
//    	global declaration for stream object, object
//****************************************************************

 fstream fp;
 account ac;


//***************************************************************
//    	function to write in file
//****************************************************************

void write_account()
   {
    fp.open("account.dat",ios::out|ios::app);
    ac.create_account();
    fp.write((char*)&ac,sizeof(account));
    fp.close();
   }



//***************************************************************
//    	function to read specific record from file
//****************************************************************


void display_sp(int n)
{
    clrscr();
    textbackground(RED);
    textcolor(BLUE);
    cout<<"\nBALANCE DETAILS\n";
    int flag=0;
    fp.open("account.dat",ios::in);
    while(fp.read((char*)&ac,sizeof(account)))
	{
	 if(ac.retacno()==n)
		{
		 ac.show_account();
		 flag=1;
		}
	}
    fp.close();
if(flag==0)
 cout<<"\n\nAccount number does not exist";
    getch();
}


//***************************************************************
//    	function to modify record of file
//****************************************************************


void modify_account()
{
    int no,found=0;
    clrscr();
    textbackground(RED);
    textcolor(YELLOW+BLINK);
    cout<<"\n\n\tTo Modify ";
    cout<<"\n\n\tEnter The account No. of The account";
    cin>>no;
    fp.open("account.dat",ios::in|ios::out);
    while(fp.read((char*)&ac,sizeof(account)) && found==0)
	   {
	    if(ac.retacno()==no)
		   {
		    ac.show_account();
		    cout<<"\nEnter The New Details of account"<<endl;
		    ac.modify_account();
		    int pos=-1*sizeof(ac);
		    fp.seekp(pos,ios::cur);
		    fp.write((char*)&ac,sizeof(account));
		    cout<<"\n\n\t Record Updated";
		    found=1;
		   }
	     }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}


//***************************************************************
//    	function to delete record of file
//****************************************************************


void delete_account()
   {
    int no;
    clrscr();
    textbackground(RED);
    cout<<"\n\n\n\tDelete Record";
    cout<<"\n\nEnter The account no. of the customer You Want To Delete";
    cin>>no;
    fp.open("account.dat",ios::in|ios::out);
    fstream fp2;
    fp2.open("Temp.dat",ios::out);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&ac,sizeof(account)))
	{
	 if(ac.retacno()!=no)
		{
		 fp2.write((char*)&ac,sizeof(account));
		 }
	 }
    fp2.close();
    fp.close();
    remove("account.dat");
    rename("Temp.dat","account.dat");
    cout<<"\n\n\tRecord Deleted ..";
    getch();
    }


//***************************************************************
//    	function to display all accounts deposit list
//****************************************************************

    void display_all()
    {
     clrscr();
     textbackground(RED);
     fp.open("account.dat",ios::in);
     if(!fp)
     {
       cout<<"ERROR!!! FILE COULD NOT BE OPEN\n\n\n Go To Admin Menu to create File";
       getch();
       return;
     }

     cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
	  cout<<"====================================================\n";
	  cout<<"A/c no.\tNAME\t\tType\t\tBalance\n";
	  cout<<"====================================================\n";

      while(fp.read((char*)&ac,sizeof(account)))
	 {
	   ac.report();
	}
     fp.close();
}


//***************************************************************
//    	function to deposit and withdraw amounts
//****************************************************************

void deposit_withdraw(int option)
{
    int no,found=0,amt;
    clrscr();
    textbackground(RED);
    cout<<"\n\n\tEnter The account No.";
    cin>>no;
    fp.open("account.dat",ios::in|ios::out);
    while(fp.read((char*)&ac,sizeof(account)) && found==0)
       {
	    if(ac.retacno()==no)
	   {
		    ac.show_account();
		    if(option==1)
		       {
			cout<<"\n\n\tTO DEPOSITE AMOUNT ";
			cout<<"\n\nEnter The amount to be deposited";
			cin>>amt;
			ac.dep(amt);
		       }
		     if(option==2)
		       {
			cout<<"\n\n\tTO WITHDRAW AMOUNT ";
			cout<<"\n\nEnter The amount to be withdraw";
			cin>>amt;
			 int bal=ac.retdeposit()-amt;
			 if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C'))
			      cout<<"Insufficience balance";
				   else
			       ac.draw(amt);
		      }
			 int pos=-1*sizeof(ac);
			 fp.seekp(pos,ios::cur);
			 fp.write((char*)&ac,sizeof(account));
			 cout<<"\n\n\t Record Updated";
			 found=1;
	       }
	 }
    fp.close();
    if(found==0)
    cout<<"\n\n Record Not Found ";
    getch();
}





//***************************************************************
//    	INTRODUCTION FUNCTION
//****************************************************************

void intro()
{
 clrscr();
 textbackground(RED);
 textcolor(WHITE+BLINK);
 gotoxy(28,10);
 cout<<"BANKING";
 gotoxy(38,10);
 cout<<"TRANSACTIONS";
 gotoxy(35,12);
 cout<<"SYSTEM";
 cout<<"\n\nMADE BY : NITESH DEWADA";
 cout<<"\n\nSCHOOL : JAWAHAR NAVODAYA VIDYALAYA RATLAM";
 getch();

}



//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************


void main()
{
  char ch;
  intro();
  textbackground(RED);
  textcolor(WHITE);
  do
    {
	  clrscr();
	  cout<<"\n\n\n\tMAIN MENU";
	  cout<<"\n\n\t01. NEW ACCOUNT";
	  cout<<"\n\n\t02. DEPOSIT AMOUNT";
	  cout<<"\n\n\t03. WITHDRAW AMOUNT";
	  cout<<"\n\n\t04. BALANCE ENQUIRY";
	  cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
	  cout<<"\n\n\t06. CLOSE AN ACCOUNT";
	  cout<<"\n\n\t07. MODIFY AN ACCOUNT";
	  cout<<"\n\n\t08. EXIT";
	  cout<<"\n\n\tSelect Your Option (1-8) ";
	  ch=getche();
	  switch(ch)
	  {
		case '1': clrscr();
			  write_account();
			  getch();
			break;
		case '2': clrscr();
			  deposit_withdraw(1);
			  break;
		case '3': clrscr();
			  deposit_withdraw(2);
			  getch();
			  break;
		case '4': int num;
			  clrscr();
			  cout<<"\n\n\tEnter The account No. ";
			  cin>>num;
			  display_sp(num);
			  break;
		case '5': clrscr();
			  display_all();
			getch();
			 break;
		case '6': delete_account();
			  break;
		 case '7': clrscr();
			   modify_account();
			   getch();
			   break;
		  case '8':exit(0);
		  default :cout<<"\a";
	}
    }while(ch!='8');
}

//***************************************************************
//    			END OF PROJECT
//***************************************************************
