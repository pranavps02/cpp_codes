#include<iostream>
using namespace std;

class A{
	public:
		void print(int x){
			cout<<"Int Called \n";
		}
		void print(float a){
			cout<<"Float Called \n";
		}
		void print(int x,float y){
			cout<<"Int Float Called \n";
		}
};

int main(){
	A a1;
	
	a1.print(21);
	a1.print(21.211);
	a1.print(21,21.211);
} 
