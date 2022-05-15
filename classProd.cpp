#include<iostream>
using namespace std;

class prod{
	public:
		int prod_id;
		int prod_price;
		int prod_qty;
		
		prod(int x,int y,int z){
			prod_id=x;
			prod_price=y;
			prod_qty=z;
		}
		
		prod(prod &s1){
			cout<<"copy Cons. Called: \n";
			prod_id=s1.prod_id;
			prod_price=s1.prod_price;
			prod_qty=s1.prod_qty;
		}
		
		void dis(){
			cout<<"===========================================\n";
			cout<<"         Product Details        \n";
			cout<<"===========================================\n";
			cout<<"Product Id      :"<<prod_id<<"\n";
			cout<<"Product Price   :"<<prod_price<<" Rs.\n";
			cout<<"Product Quantity:"<<prod_qty<<"\n";
		    cout<<"===========================================\n";
		}
};
int main(){
	prod p1(1,100,10);
	cout<<"P1 : \n"; 
	p1.dis();
	cout<<"P2: \n";
	prod p2(p1);
	p2.dis();
	
}
