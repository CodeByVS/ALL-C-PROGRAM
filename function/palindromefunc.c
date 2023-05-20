#include<stdio.h>
int palindrome(int num){
    int rev=0;
        while(num!=0){
        rev=rev*10+(num%10);
        num/=10;
    }
    if(num==rev){
        printf("palindrome no.");
    }
    else{
        printf("not palindrome no.");
    }
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    palindrome(n);
}