#include<iostream>
using namespace std;

inline int add(int x,int y){
	return (x+y);
}

inline int mul(int x,int y){
	return (x * y);
}

int main(){
	cout<<"Addition       : "<<add(10,20)<<"\n";
	cout<<"Multiplication : "<<mul(10,20);
	
}
