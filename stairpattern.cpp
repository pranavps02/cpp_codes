#include <stdio.h>

int main(void) {
     int i, j,n,k;
    scanf("%d", &n);   
    printf("\n");  
    for (i = 1; i <= n; i++)   
    {  
        for (j = i; j <n; j++)  
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*");
        }  
        printf ("\n");   
    }  
       
}  
