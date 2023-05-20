#include<stdio.h>
int factorial(void){
    int fact=1;
    for(int i=5;i>0;i--){
        fact*=i;
    }
    return fact;
}
int main(){
    printf("factorial:%d",factorial());
}