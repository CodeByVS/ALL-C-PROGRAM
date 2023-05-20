#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=i;k>=2;){
            --k;
            printf("%d",k);
        }
        printf("\n");
    }
}

//     1
//    121
//   12321
//  1234321
// 123454321