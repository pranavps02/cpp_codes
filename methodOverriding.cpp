#include<iostream>
using namespace std;

class A{
	public:
		void print(int x){
			cout<<"Parent Called \n";
		}
	};
class B:public A{
	public:
			void print(int x){
			cout<<"Child Called \n";
		}
};

int main(){
	B b1,b2;
	
	b1.print(21);
	b2.A::print(21);
} 
