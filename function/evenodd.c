#include<stdio.h>
int oddeven(int num){
    if(num%2==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    oddeven(n);
}