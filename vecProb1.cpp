#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
	vector<char> s[30];
	vector<int> pos;
	int num,ele;
	char s1;
	
	cout<<"Enter The string :\n";
	for(int i=0;i<30;i++){
		cin>>s1;
		s.push_back(s1);
	}
	cout<<s1;
	cout<<"Enter No. of Positions:\n";
	cin>>num;
	
	cout<<"Enter Positions:\n";
	for(int i=0;i<num;i++){
		cin>>ele;
		pos.push_back(ele);
	}
	
	cout<<s.size();
	
	
//	for(int i=0;i<num;i++){
//		replace(s.begin(),s.end(),pos[i],"*");
//	}
//	
//	for(int i=0;i<s.size();i++){
//		cout<<s[i];
//	}
	
	
	return 0;
	
	
}
