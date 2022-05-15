#include<iostream>
using namespace std;

class operation{
	public:
		int a,b;
		inline void get();
		inline void sum();
		inline void diffrence();
		inline void product();
		inline void division();
		
};

inline void operation :: get(){
	cout<<"Enter Values of a and b:\n";
	cin>>a>>b;
}

inline void operation :: sum(){
	cout<<"Substraction : "<<a + b<<"\n";
}

inline void operation :: diffrence(){
	cout<<"Substraction : "<<a - b<<"\n";
}
inline void operation :: product(){
	cout<<"Product : "<<a * b<<"\n";
}
inline void operation ::  division(){
	cout<<"Division : "<<a / b<<"\n";
}

int main(){
	operation s;
	
	s.get();
	s.sum();
	s.diffrence();
	s.product();
	s.division();
}
