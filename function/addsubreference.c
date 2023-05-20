/* Online C Compiler and Editor */
#include <stdio.h>
void swap(int* a,int* b,int *add,int* sub,int* multi)
{
    *add=*a+*b;
    *sub=*a-*b;
    *multi=*a**b;
}
int main()
{
    int x,y;
    printf("enter two number:");
    scanf("%d,%d",&x,&y);
    int add,sub,multi;
    swap(&x,&y,&add,&sub,&multi);
    printf("%d,%d,%d,%d",x,y,add,sub);
}