#include<iostream>
using namespace std;

class A{
	public:
		void get1(){
			cout<<"\nParent  1\t";
		}
};

class B{
	public:
		void get2(){
			cout<<"Parent 2\n";
		}
};

class C:public A,public B{
	public:
		void get3(){
			cout<<"\t  Child \n";
		}
};

int main(){
   C c1;
  
  cout<<"Multiple Inheritance : \n";
  
  c1.get1();
  c1.get2();
  c1.get3();
}
