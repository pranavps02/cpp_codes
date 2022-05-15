#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter Any 3 Diffrent Numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    ((a>b)&&(a>c))?printf("%d is Greater",a):((b>a)&&(b>c))?printf("%d is Greater",b):printf("%d is Greater",c);
}