#include<iostream>
using namespace std;

class Student{
	public:
		int roll,marks;
		char name[10];
		
		void get(){
			cout<<"Enter the Roll No.\n";
			cin>>roll;
			cout<<"Enter Name Of Student:\n";
			cin>>name;
			cout<<"Enter Marks Obatained outoff 100: \n";
			cin>>marks;
		   
		}
		
		void dis(){
			cout<<"=========================================\n";
			cout<<"Roll No          : "<<roll<<"\n";
			cout<<"Student Name     : "<<name<<"\n";
			cout<<"Marks outoff 100 :"<<marks<<"\n";
			cout<<"=========================================\n";
		}
		
};

int main(){
	Student s1;
	
	s1.get();
	s1.dis();
}
