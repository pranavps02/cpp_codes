#include<iostream>
using namespace std;

int main(){
	int num;
	
	cout<<"Pattern:\n";
	
	for(int i=1;i<=5;i++){
	   switch (i){
	   
	   
	       case 1:
	          cout<<"*\n";
	   	       continue;
	       case 2:
	   	      cout<<"**\n";
	   	      continue;
	      case 3:
	   	      cout<<"***\n";
	   	      continue;
	      case 4:
	   	      cout<<"****\n";
	    	 continue;
    	 case 5:
	   	      cout<<"*****\n";
	   	       continue;
	   }
	}
}

