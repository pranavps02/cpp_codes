#include<iostream>
using namespace std;

int main(){
	int x,y,z,ch;
	
	do{
		cout<<"Enter Choice : \n 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.To Exit \n";
		cin>>ch;
		if(ch == 5 ){
			break;
		}
		cout<<"\nEnter Two Numbers:\n";
		cin>>x>>y;
			
		
		switch (ch){
			case 1 :
				cout<<"Addition : "<<x+y<<"\n";
				break;
		
		    case 2 :
				cout<<"Substraction : "<<x-y<<"\n";
				break;
		
		    case 3 :
				cout<<"Multiplication : "<<x*y<<"\n";
				break;
		
		    case 4 :
				cout<<"Division : "<<x/y<<"\n";
				break;
			case 5:
				break;
			default :
				cout<<"Entered Wrong Choices \n";
		
	}
	cout<<"==============================================================================================\n";
	
   }while(ch != 5);
}
