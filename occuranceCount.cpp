#include<iostream>
using namespace std;

int main(){
	
	int n,num,rem=0,count=0;
	cout<<"Enter any Number:"<<endl;
	cin>>n;
	cout<<"Enter Number to check:\n";
	cin>>num;
	
	while(n!=0){
		
		rem = n%10;
		if(num == rem){
			count++;
		}
		
		n = n/10;
		
	}
	
	cout<<num<<" is present "<<count<<" times";
}
