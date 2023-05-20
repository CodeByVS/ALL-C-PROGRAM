#include<stdio.h>
int main()
{
    int test=1;
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=2; i<=num/2; i++) {
        if(num%i==0) {
            test=0;
            break;
        }
    }
    if (test==1) {
        printf("f %d ",num);
    } else {
        printf(" %d ",num);
    }
}