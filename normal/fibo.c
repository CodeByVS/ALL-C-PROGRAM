#include<stdio.h>
int main(){
    int a,b,x,sum=0;
    printf("enter a value:");
    scanf("%d",&x);
    a=0;
    b=1;
    if(x==1){
        printf("%d",b);
        return 0;
    }
    for(int i=2;i<=x;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("%d",sum);
}