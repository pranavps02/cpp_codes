#include<iostream.h>
using namespace std;

class Employee{
	int id;
	static int count;
	
	public:
		void setData(void){
			cout<<"Enter the id:"<<endl;
			cin>>id;
			count++;
		}
		
		void getData(void){
			cout<<"The id of this employee is"<<id<<"and this is employee number"<<cout<<endl;
		
		}
		
		static void getCount(void){
			cout<<"The value of count is "<<count<<endl;
		}
		
};

int Employee::count;

int main(){
	Employee hyden,rohan,sam,mathews;
	
	hyden.setData();
	hyden.getData();
	Employee::getCount();
	
	hyden.setData();
	hyden.getData();
	Employee::getCount();
	
	hyden.setData();
	hyden.getData();
	Employee::getCount();
	
	hyden.setData();
	hyden.getData();
	Employee::getCount();
}
