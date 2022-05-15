#include<iostream>
using namespace std;

class complex{
	float x,y;
	public:
		complex(){
			
		}
		complex(float real,float imag){
			x=real;
			y=imag;
		}
		void display();
		complex operator+(complex objC);
		
};

void complex :: display(){
	cout<<x<<" +i"<<y<<"\n";
}

complex complex :: operator+(complex objC){
	complex temp;
	
	temp.x = x + objC.x;
	temp.y = y + objC.y;
	return temp;
}

int main(){
	complex c1(2.5,3.5),c2(1.6,2.7),c3;
	c3 = c1 + c2;
	
	cout<<"C1 : ";
	c1.display();
	cout<<"\n";
	cout<<"C2 : ";
	c2.display();
	cout<<"\n";
	cout<<"C3 : ";
	c3.display();
	cout<<"\n";
	}
