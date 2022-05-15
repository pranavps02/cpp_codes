#include<iostream>
using namespace std;

int main(){
	int n ;
	cout<<"Enter any Number:\n";
	cin>>n;
	
	for(int i=n;i>=1;i--){
		for(int j=i;j>0;j--){
			
			cout<<i-j+1<<" ";
		}
		cout<<endl;
	}
	
}
