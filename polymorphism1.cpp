#include<iostream>
using namespace std;

class a{
	public:
		void area(int x,int y){
			cout<<"Area Of Rectangle :  "<<x * y<<"\n";
		}
		
		void area(int x){
			cout<<"Area of Circle    :  "<<3.14 * x * x <<"\n";
		}
};


int main(){
	a a1;
	
	a1.area(20);
	a1.area(10,20);
}
