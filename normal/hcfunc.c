#include<stdio.h>
int min(int a,int b){
    if(a>b)return b;
    else return a;
}
int hcf(int a,int b){
    int x;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            x=i;
        }
    }
    return x;
}
int main(){
    int a,b;
    printf("enter 1st no:");
    scanf("%d",&a);
    printf("enter 2nd no:");
    scanf("%d",&b);
    printf("%d",hcf(a,b));
}