//print number from decreasing to increasing
#include<stdio.h>
void inde( int num){
    if(num==0)return;
    printf("%d",num);
    inde(num-1);
    printf("%d",num);
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    inde(n);
    return 0;
}