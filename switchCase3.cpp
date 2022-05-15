#include<iostream>
using namespace std;

int main(){
	int x,y,z,ch,count;
	float si;
	
	do{
		cout<<"Enter Choice : \n 1.Simple Interest\n 2.Prime Number\n 3.Odd or Even\n 4.To Exit \n";
		cin>>ch;
		if(ch == 4 ){
			break;
		}
			
		
		switch (ch){
			case 1 :
				cout<<"Enter Principal Amount: \n";
				cin>>x;
				cout<<"Enter Rate :\n";
				cin>>y;
				cout<<"Enter Time Period:\n";
				cin>>z;
				si = (x * y * z)/100;
				cout<<"Simple Interest : "<<si<<"\n";
				break;
		
		    case 2 :
				cout<<"Enter Any Number :\n";
				cin>>x;
				for(int i = 1;i<=x;i++){
					if(x%i==0){
				     count++;
					}
				}
				if(count>2){
					cout<<"Number Is Prime"<<"\n";
					
				}else{
					cout<<"Number Is Not Prime"<<"\n";
				}
				break;
		
		    case 3 :
				cout<<"Enter Any Number :\n";
				cin>>x;
				
				if(x%2==0){
					cout<<"Number Is Even\n"<<"\n";
					
				}else{
					cout<<"Number Is Odd\n"<<"\n";
				}
				break;
		    case 4:
				break;
			default :
				cout<<"Entered Wrong Choices \n"<<"\n";
		
	}
	cout<<"==============================================================================================\n";
	
   }while(ch != 5);
}
