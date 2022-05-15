#include <stdio.h>

int main(void) {
	int amount;
	float a;
	
	scanf("%d",&amount);
	scanf("%f",&a);
	
	if(amount<a){
	    if(amount%5==0 && amount !=0){
	        printf("%d %f",amount,(a-amount-0.50));
	    }
	    	else{
	    printf("%f",a);
	}
	    
	    
	}
	else{
	    printf("%f",a);
	}
	
	
	
	return 0;
}