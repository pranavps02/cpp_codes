#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int roll,marks;
	float  per;  
	char name[10];
	
	cout<<"Enter name :\n";
	cin>>name;
	cout<<"Enter Roll No. : \n";
	cin>>roll;
	cout<<"Enter Marks out of 300 : \n";
	cin>>marks;
	
	per = marks / 3 ;
	system("cls");
   cout<<"========================= Student Marksheet ============================\n";
   cout<<"Roll no. "<<roll<<"\n";
   cout<<"Name : "<<name<<"\n";
   cout<<"Marks :"<<marks<<"\n";
   cout<<"Percentage: "<<per<<"%\n";
   cout<<"Grade: ";
   if(per >=70){
   	cout<<"A \n";
   } else if(per < 70 && per >= 60){
   	cout<<"B \n";
   } else if(per < 60 && per >= 50){
   	cout<<"C n";
	} else {
		cout<<"Failed ";
	}
	
	cout<<"=========================================================================";
}
