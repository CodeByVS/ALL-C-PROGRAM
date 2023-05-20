#include<stdio.h>
int factorial(int num){
    int fact=1;
    for(int i=num;i>0;i--){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("factorial:%d",factorial(n));
}