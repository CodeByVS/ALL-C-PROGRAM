#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("enter two number:");
    scanf("\n%d\n%d",&a,&b);
    printf("sum=%d",sum(a,b));
}
int sum(int a,int b){
    int c=a+b;
    return c;
}