/*
  " New " Operator:-
   
   Syntax:-
      
      pointer-variable = new data-type;
       e.g.   int *p = new int(25);
              float *q = new float(75.25);
              
      for Array:
         int *p = new int[10];
              
    int *p = new(nothrow) in;
                  ^=> "no throw" will not declare any exception but will return a null pointer. 
		
 
   " Delete " Operator:-
      
	 Syntax:-
	  
	   delete pointer-variable;
	   e.g.  delete p;
	         delete q;
	
	   for Array:
	       delete[] pointer-variable;
		   e.g. delete[] p;
		      
*/

#include<iostream>
using namespace std;

int main(){
	int *p = NULL;
	 
	p = new(nothrow) int;
	if(!p){
		cout<<"Memory Allocation Failed\n";
	}else{
		*p =29;
		cout<<"Value of P:"<<*p<<endl;
	}
	
	float *r = new float(75.25);
	
	cout<<"Value of r :"<<*r<<endl;
	
	int n=5;
	int *q = new(nothrow) int[n];
	
	if(!q){
		cout<<"Memory Allocation Failed.\n";
	}else{
		
		 for(int i=0;i<n;i++){
		 	q[i]=i+1;
		 }
	}
	
	cout<<"Values Stored in q[]: ";
		 for(int i=0;i<n;i++){
		 	cout<<q[i]<<" ";
		 }
}
