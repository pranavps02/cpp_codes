#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int id,price,qty,disc;
	float tm;  
	char name[10];
	
	cout<<"Enter book Name:\n";
	cin>>name;
	cout<<"Enter Book id : \n";
	cin>>id;
	cout<<"Enter Book price : \n";
	cin>>price;
	cout<<"Enter Book Quantity: ";
	cin>>qty;
	tm = qty * price;
	
	if (tm >= 5000){
		tm = tm - (tm*0.15);
		disc=15;
	}else if (tm < 5000 && tm >= 3000){
		tm = tm - (tm*0.10);
		disc=10;
	}else if (tm < 3000 && tm >= 1000){
		tm = tm - (tm*0.05); 
		disc=5;
	}else{
		tm = tm;
		disc=0;
	}
  system("cls");
   cout<<"========================= Final Bill ============================\n";
   cout<<"Book Name      : "<<name<<"\n";
   cout<<"Book id        : "<<id<<"\n";
   cout<<"Book Price     : "<<price<<"\n";
   cout<<"Book Quantity  : "<<qty<<"\n";
   cout<<"Discount       : "<<disc<<"% \n"; 
   cout<<"Final Amount   : "<<tm<<" /- \n";
    cout<<"=========================================================================";
}
