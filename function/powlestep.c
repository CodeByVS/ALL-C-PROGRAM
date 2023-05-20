//calculate a raised to b in logarithmic approach
#include<stdio.h>
int power(int a,int b){
    int x;
    if(b==0) return 1;
    x=power(a,b/2);
    if(b%2==0) return (x*x);
    return a*(x*x);   
}
int main(){
    int a,b;
    printf("enter a base value:");
    scanf("%d",&a);
    printf("enter a power value:");
    scanf("%d",&b);
    printf("%d",power(a,b));
}