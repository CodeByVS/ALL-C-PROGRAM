#include<stdio.h>
int main(){
	int n1,n2,min,lcm,hcf,i;
	printf("enter 1st no:");
	scanf("%d",&n1);
	printf("enter 2st no:");
	scanf("%d",&n2);
	min=(n1<n2)?n1:n2;
	for(i=1;i<=min;i++){
		if(n1%i==0 && n2%i==0){
			hcf=i;
		}
  }
	lcm=(n1*n2)/hcf;
	printf("%d,%d",hcf,lcm);
}