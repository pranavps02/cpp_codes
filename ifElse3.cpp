#include<iostream>
using namespace std;

int main(){
	
	int curr,joined;
	
	cout<<"Enter the current Year:\n";
	cin>>curr;
	cout<<"Enter the Year in which Employee Joined:\n";
	cin>>joined;
	
	if(curr-joined >=3 ){
		cout<<"Bonus Applied : 2500 Rs.\n";
	}
	else{
		cout<<"Worked For less than 3 years\n";
	}
}
