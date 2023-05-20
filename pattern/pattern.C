#include<stdio.h>
int main(){
    int n,m=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=m;j++){
            printf("%d",j);
            
        }
        m+=2;
        printf("\n");
    }
}