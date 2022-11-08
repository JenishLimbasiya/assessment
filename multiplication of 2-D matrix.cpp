#include<iostream>
using namespace std;
int main()
{
	int row,col,xyz;
	int array1[2][2],array2[2][2],mul[2][2];
	
	
	cout<<"     MATRIX MULTIPLICATION"<<endl<<endl;
	cout<<"---------- MATRIX : 1 ----------"<<endl<<endl;
	for(row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			cout<<"Enter elements : ";
			cin>>array1[row][col];
		}
	}
	cout<<endl;
	for(row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			cout<<array1[row][col];
			cout<<"  ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"---------- MATRIX : 2 ----------"<<endl<<endl;
	for(row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			cout<<"Enter elements : ";
			cin>>array2[row][col];
		}
	}
	
	cout<<endl;
	for(row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			cout<<array2[row][col];
			cout<<"  ";
		}
		cout<<endl;
	}
	
	for(row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			 mul[row][col]=0;
			for(xyz=0; xyz<2;xyz++)
			{
				mul[row][col]=mul[row][col]+array1[row][xyz]*array2[xyz][col];
			}
		}cout<<endl;
	}
	cout<<"-----RESULT : MULTIPLICATION MATRIX-----"<<endl<<endl;
	for(row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			cout<<mul[row][col];
			cout<<"  ";
		}
		cout<<endl;
	}
	return 0;	
}