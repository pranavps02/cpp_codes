#include<iostream>
using namespace std;

class A{
	public:
		void get1(){
			cout<<"Parent \n";
		}
};

class C1:public A{
	public:
		void get2(){
			cout<<"Child 1\n";
		}
};

class C2:public A{
	public:
		void get3(){
			cout<<"Child 2 \n";
		}
};

int main(){
   C1 c1;
   C2 c2;
  
  cout<<"Hierarchical Inheritance : \n";
  
  c1.get1();
  c1.get2();
  
  c2.get3();
}
