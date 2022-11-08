#include<stdio.h>
int main()
{
	int choice,quentitie,day,month,year;
	float price, amount;
	static total_amount=0;
	char ch;
	
	do
	{
	printf("\n\t\t=======================================");
	printf("\n\t\t              L&K HOTEL           ");
	printf("\n\t\t=======================================");
	
	printf("\n\t\t\tMENU             DATE:");
	scanf("%d%d%d",&day,&month,&year);
	
	printf("\n\n\t\t1.italian pizza\t\tprice : 450rs/-\n");
	printf("\t\t2.dosa\t\t\tprice : 250rs/-\n");	
	printf("\t\t3.pani puri\t\tprice : 70rs/-\n");
	printf("\t\t4.sandwich\t\tprice : 210rs/-");
	
	printf("\n\n\t\tplease enter your choose.... : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("\t\tyou have selected pizza.");
		        price= 450.00;  
		break;
		
		case 2 : printf("\t\tyou have selected dosa.");
		        price= 250.00; 
		break;
		
		case 3 : printf("\t\tyou have selected pani puri.");
		         price= 70.00; 
		break;
		
		case 4 : printf("\t\tyou have selected sandwich.");
		        price=210.00;
		break;
		
		default:
		printf("\t\tnot available in menu..");
		
	}
	  printf("\n\n\t\tenter the quntitie : ");
	  scanf("%d",&quentitie);
	  
	  amount=price*quentitie;
	  printf("\n\t\tamount : %.2f",amount);
	  
	  printf("\n\n\t\t=======================================");
	  
	  total_amount=amount+total_amount;
	  printf("\n\n\t\ttotal amount : %d",total_amount);
	  
	  printf("\n\n\t\tdo you want place more order? y & n : ");
      ch=getche();
      
	}
	while(ch=='y');
	return 0;
}
