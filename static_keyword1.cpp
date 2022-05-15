#include<iostream>
using namespace std;

class Sample {
	int num;
	public:
		static int a;
		
		Sample(int n){
			num = n;
		}
		
		static void display(){
			cout<<"a is "<<a<<endl;
		}
		
		void show(){
			cout<<"num is "<<num<<endl;
		}
};

int Sample:: a=10;

int main(){
	Sample s(50);
	
	Sample::display();
	s.show();
}
