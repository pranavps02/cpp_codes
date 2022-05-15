#include<iostream>
using namespace std;

class stud{
	public:
	int roll;
	int marks;
	stud(){
		cout<<"Parameterless Constructor Called : \n";
		roll =101;
		marks =0;
	}
	void get(){
		cout<<"Enter The values Of Roll No. and Marks :\n";
		cin>>roll>>marks;
	}
	void dis(){
		cout<<"========================================================\n";
		cout<<"Roll No. :"<<roll<<"\n";
		cout<<"Marks    :"<<marks<<"\n";
		cout<<"========================================================\n";
	}
};

int main(){
	stud s1;
	
	s1.dis();
	s1.get();
	s1.dis();
}
