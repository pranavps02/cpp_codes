#include<iostream>
using namespace std;

class A{
	public:
		void get1(){
			cout<<"Grand Parent \n";
		}
};

class B:public A{
	public:
		void get2(){
			cout<<"Parent \n";
		}
};

class C:public B{
	public:
		void get3(){
			cout<<"Child \n";
		}
};

int main(){
   C c1;
  
  cout<<"Multilevel Inheritance : \n";
  
  c1.get1();
  c1.get2();
  c1.get3();
}
