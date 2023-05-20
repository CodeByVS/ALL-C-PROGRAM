#include <stdio.h>
int sod(int n){
    int r;
    static int s=0;
    if(n==0){
        return s;
    }else{
        r=n%10;
        s+=r;
        sod(n/10);
    }
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("sum of digits=%d",sod(num));
}
