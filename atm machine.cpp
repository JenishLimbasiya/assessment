#include<iostream>
#include<ctime>
using namespace std;

class atm
{
	int balance,deposited_amount;
	public:
	
    atm(int x)
	{ 
	balance=x;
	char ch;
	
	do 
	{
	  int choice,option;
      cout<<"----------------------------WELCOME TO ATM------------------------"<<endl<<endl;
      cout<<"\t\t\t  ------------------"<<endl<<endl;
      
      //current date and time
      time_t tt;
      struct tm * ti;
      time(&tt);
      ti=localtime(&tt);
      cout<<"\t\tcurrent date : "<<asctime(ti)<<endl;
      
      cout<<"\t\t\t  ------------------"<<endl<<endl;
      
      cout<<"------------------------------------------------------------------"<<endl<<endl;
      cout<<"press 1 and then press enter to access your account via pin number"<<endl<<endl;
      cout<<"                              or                                  "<<endl<<endl;
      cout<<"press 0 and press enter to get help."<<endl<<endl;
   
      // for choice 1 enter in atmpin 
      cin>>choice; 
      if(choice==1)
   {
      cout<<"-----------------------ATM ACCOUNT ACCESS-------------------------"<<endl<<endl;
      cout<<"Enter Your Acc Pin Access Number! [only one attempt is allowed]"<<endl<<endl;
	  
	  //atmpin is 12345
	  int atmpin;
	  cin>>atmpin;
	  if(atmpin==12345)
	  {
	  	cout<<endl<<"----------------------ATM main menu screen-----------------------"<<endl<<endl;
	  	
	  	// if pin is correct then the display the menu screen
	  	cout<<"\t\t  Enter [1] to deposit cash"<<endl;
	  	cout<<"\t\t  Enter [2] to withdraw cash"<<endl;
	  	cout<<"\t\t  Enter [3] to balance cash"<<endl;
	  	cout<<"\t\t  Enter [0] to exit atm"<<endl<<endl;
	  	cout<<"\t\t PLEASE ENTER A SELECTION : ";
	  	
	  	cin>>option;
	  	
	  	switch(option)
	  	{
	  		case 1: 
	  		cout<<endl<<endl<<"\t--------------ATM ACCOUNT DEPOSIT SYSTEM---------------"<<endl;
	  		cout<<endl<<"\t  name of the account holder are : jenish limbasiya "<<endl;
	  		cout<<"\t  the account holder address is : rajkot"<<endl;
	  		cout<<"\t  branch location is : pedak road"<<endl;
	  		cout<<"\t  account number : 159893898 "<<endl<<endl;
	  		
	  		cout<<"\t  present available balance : "<<balance<<"Rs."<<endl;
	  		cout<<"\t  how many money deposited : ";
	  		cin>>deposited_amount;
	  		balance=balance+deposited_amount;
	  		
	  		cout<<"\t  your new available balance is : "<<balance<<endl<<endl;
	  		cout<<"\t\t\tTHANK YOU!"<<endl<<endl;
	  		break;
	  		
	  		case 2: 
	  		int withdraw_amount;
	  		cout<<endl<<"\t\t how many money withdreaw : ";
	  		cin>>withdraw_amount;
	  		
	  		if(withdraw_amount<=balance)
	  		{
	  		cout<<endl<<"\t\t after withdraw balance : "<<balance-withdraw_amount<<endl<<endl;
			}
			else
			{
				cout<<endl<<"\t\t not sufficient amount in your account"<<endl<<endl;
				cout<<"\t\t\t\tsorry!!"<<endl;
			}
	  		break;
	  		
	  		case 3:
	  		cout<<"\t\t avilable balance is : "<<balance<<endl;
	  		break;
	  		
	  		case 0:exit(0);
	  		break;
	  		
	  		default:
	  		cout<<endl<<"\t\t pleace enter correct choice..."<<endl<<endl;
		  }
	  }	
	  
	  // atm pin is incorrect (exit the screen message display)
	  else
	  {
	  	cout<<"----------------------------THANK YOU----------------------------"<<endl<<endl;
	  	cout<<"You had made your attempt which failed ! no more attempts allowed ! SORRY !"<<endl;
	  	cout<<"-----------------------------------------------------------------"<<endl;
	  }
    }
   
    else if(choice==0)
    {
   	cout<<endl<<"------------------ATM ACCOUNT STATUS-------------------"<<endl;
    cout<<"you must have the correct pin number to access this account. "<<endl<<endl;
    cout<<"bank representative for assistance during bank opening hours"<<endl<<endl;
    cout<<"           thanks for, your choice today!!"<<endl<<endl;
    cout<<"--------------------------------------------------------"<<endl<<endl;
    }
    else
    {
   	cout<<"please enter correct choice..."<<endl<<endl;
    }	
    
    cout<<"press any key to continue....";
    cin>>ch;
    
	}
	while(ch>='a'&& ch<='z');
	  
	}
};
    
int main()
{
   atm obj(20000); 
   return 0;
}