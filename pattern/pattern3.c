#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=n+1;i++){
        printf("%d",i);
    }
    for(int i=n;i>=1;i--){
        printf("%d",i);
    }
    printf("\n");
    for(int j=1;j<=n;j++){
        int a=1;
        for(int k=1;k<=nst;k++){
            printf("%d",a);
            a++;
        }
        for(int m=1;m<=nsp;m++){
            printf(" ");
        }
        for(int l=1;l<=nst;l++){
            a--;
            printf("%d",a);
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}