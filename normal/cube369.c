#include<stdio.h>
#include<math.h>
int main(){
    int n,m=0,x;
    printf("enter a number:");
    scanf("%d",n);
    for(int i=1;i<=n;i++){
        if(i%3==0){
            x=pow(i,3);
            m+=x;
        }
    }
    printf("%d",m);
}