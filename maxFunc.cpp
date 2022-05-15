#include<iostream>
using namespace std;

void max();

int main(){
	cout<<"1st : \n";
	max();
	cout<<"2nd : \n";
	max();
}

void max(){
	int x , y;
	cout<<"Enter two Number: \n";
	cin>>x>>y;
	
	if(x>y){
		cout<<x<<" is Greater than "<<y<<"\n";
	}

	if(y>x){
		cout<<y<<" is Greater than "<<x<<"\n";
	}	
}
