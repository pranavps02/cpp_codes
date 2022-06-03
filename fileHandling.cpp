#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream outf("cpp.txt");
	char name[30];
	float cost;
	
	cout<<"Enter Item Name:";
	cin>>name;
	outf<<name<<"\n";
	
	cout<<"Enter Cost:";
	cin>>cost;
	outf<<cost;
	outf.close();
	
	ifstream inf("cpp.txt");
	inf>>name;
	inf>>cost;
	
	cout<<"Item Name :"<<name<<"\n";
	cout<<"Item Cost:"<<cost;
	inf.close();
	
}
