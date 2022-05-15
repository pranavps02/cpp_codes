#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
	
	int fct=1;
	
	for(int i = n;i>=1;i--){
		fct = fct*i;
	}
	
	return fct;
}

int main(){
	int n,sum=0;
	cout<<"Enter Any Number:\n";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		sum =sum + ( pow(n,i)/fact(i));
	}
	
	cout<<"Ans: "<<sum;
	
 
   
}
