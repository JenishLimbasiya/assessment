#include<iostream>
using namespace std;
class lecture
{
	public:
	string lecturer;
	string subject;
	string course;
	int lectuers;
	
	lecture(string lec,string sub,string cou,int num)
	{
		lecturer=lec;
		subject=sub;
		course=cou;
		lectuers=num;
	}

	int display()
	{
		cout<<"    name of lecturer : "<<lecturer<<endl;
		cout<<"    name of subject : "<<subject<<endl;
		cout<<"    name of course : "<<course<<endl;
		cout<<"    number of lecters : "<<lectuers<<endl;
		cout<<endl;
	}
};
int main()
{
	cout<<endl<<"-------lecture managment system-------"<<endl<<endl<<endl;
	
	lecture obj1("hemali mem","envirnment","microbiology",1);
	lecture obj2("jaydeep sir","organic chemisry","microbiology",2);
	lecture obj3("vijay sir","DNA","microbiology",3);
	lecture obj4("virali mem","industrial fermentation","microbiology",4);
	lecture obj5("anjish mem","dairy microbiology","microbiology",5);
	
	obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();
	obj5.display();
	return 0;
}