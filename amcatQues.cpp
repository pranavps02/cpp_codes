#include<iostream>
using namespace std;
#define n 50
int main(){
	int arr[n],x,temp;
	
	cout<<"Enter size of an array"<<endl;
	cin>>x;
	
	for(int i = 0;i<x;i++){
		cin>>arr[i];
	}
	
	for(int i = 0;i<x;i++){
		temp = arr[i];
		arr[temp] = i;
	}
	
	for(int i = 0;i<x;i++){
		cout<<arr[i]<<" ";
	}
	
}
