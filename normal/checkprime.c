#include<stdio.h>
int main(){
    int n;
    printf("enter the no.:");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("not prime no.");
        }else if(i<10){
            printf("prime no.");
        }
    }
}
