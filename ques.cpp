#include<iostream>
#include<vector>
#include<string.h>
using namespace std;


int main(){

vector<int> v1{3,5,6};

char s[30];

cin>>s;

for(int i=0;i<size(faultyPosition);i++){
	cin>>faultyPosition[i];
}

for(int i=0;i<strlen(s);i++){
    for(int j=0;j<size(faultyPosition);j++){
    	if(i==j){
    		s[i]="*";
		}
	}
}

cout<<"\n"<<s;
}
