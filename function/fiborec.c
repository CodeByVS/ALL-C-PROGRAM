#include<stdio.h>
int fibo(int n){
    if(n==0 || n==1) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int a;
    printf("enter a value:");
    scanf("%d",&a);
    printf("%d",fibo(a));
}