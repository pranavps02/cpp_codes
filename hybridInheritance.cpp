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

class C1:public B{
	public:
		void get3(){
			cout<<"Child  1\n";
		}
};

class C2:public B{
	public:
		void get4(){
			cout<<"Child  2\n";
		}
};
int main(){
   C1 c1;
   C2 c2;
  
  cout<<"Hybrid Inheritance : \n";
  
  c1.get1();
  c1.get2();
  c1.get3();
  c2.get4();
}
