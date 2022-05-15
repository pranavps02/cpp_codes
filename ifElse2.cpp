#include<iostream>
using namespace std;

int main(){
	int quantity,price,total;
     
    cout<<"Enter Quantity Purchased:\n";
    cin>>quantity;
    cout<<"Enter Price per item:\n";
    cin>>price;
    
    total=price*quantity;
    if(quantity>=1000){
         total=total-0.1*total;
         cout<<"With 10% discount:\n";
	}
	cout<<"Bill: "<<total;
	return 0;
}
