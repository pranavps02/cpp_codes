#include <iostream>
using namespace std;

class Employee{
	
	int emp_id;
	char name[50];
	
	public :
		 void get_val(){
		 	
		 	cout<<"Enter Employee ID and name\n";
		 	cin>>emp_id>>name;
		 }
		 
		 void print_val(){
		 	cout<<"Employee ID : "<<emp_id<<endl;
		 	cout<<"Name : "<<name<<endl;
		 }
	
	
};


int main(){
	
	Employee e;
	
	e.get_val();
	e.print_val();
	
	
}

