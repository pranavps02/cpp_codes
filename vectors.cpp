#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v1={1,2,3,4,5};
	vector<int> v2{1,2,3,4,5};
	vector<int> v3(5,6);
	
	cout<<"Vector 1:";
	for(const int& i:v1){
		cout<<i<<" ";
	}
	
	cout<<"\nVector 2:";
	for(const int& i:v2){
		cout<<i<<" ";
	}
	
	cout<<"\nVector 3:";
	for(const int& i:v3){
		cout<<i<<" ";
	}
	
}
