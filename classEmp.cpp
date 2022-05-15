#include<iostream>
using namespace std;

class emp{
	public:
		int emp_id;
		char name[10];
		int sal;
		
		void get(){
			cout<<"Enter emp_id,name,sal \n";
			cin>>emp_id>>name>>sal;
		}
		
		void dis(){
			cout<<"=================================================\n";
			cout<<"Emp_id   :"<<emp_id<<"\n";
			cout<<"Emp_name :"<<name<<"\n";
			cout<<"Emp_Sal  :"<<sal<<"\n";
			cout<<"=================================================\n";
		}
};

int main(){
	emp e1;	
	e1.get();
	e1.dis();	
}
