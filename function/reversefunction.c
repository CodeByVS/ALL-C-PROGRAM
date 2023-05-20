#include<stdio.h>
int reverse(int num){
	int rev=0;
	while(num>0){
		rev = num %10;
		printf("%d",rev);
		num/=10;
		}
}
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	reverse(n);
}