#include<iostream>
using namespace std;

class test{
	int x,y,z;
	public :
		void getData(int a,int b,int c);
		void display();
		void operator-();
		
};

void test :: getData(int a,int b,int c){
	x=a;
	y=b;
	z=c;

}

void test :: display(){
	cout<<"x :"<<x<<"y :"<<y<<"z :"<<z;
}

void test :: operator-(){
	x = -x;
	y = -y;
	z = -z;
}

int main(){
	test obj;
	obj.getData(10,-10,30);
	cout<<"Obj : ";
	obj.display();
	cout<<"\n";
	-obj;
	cout<<"Obj : ";
	obj.display();
}
