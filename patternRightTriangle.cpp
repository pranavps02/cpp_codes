#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	cout<<"Enter Two number:\n";
	cin>>x>>y;
	
	int add = x + y;
	int sub = x - y;
	int mul = x * y;
	int div = x / y;
	int mod = x % y;
	
	cout<<"Addition       :"<<add<<"\n";
	cout<<"Substraction   :"<<sub<<"\n";
	cout<<"Multiplication :"<<mul<<"\n";
	cout<<"Division       :"<<div<<"\n";
	cout<<"Mod            :"<<mod<<"\n";
	
	return 0;
}
