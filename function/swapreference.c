#include<stdio.h>
int a,b;
void swap(int* v,int* n){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int a=2;
    int b=3;
    int *x=&a;
    int *y=&b;
    swap(x,y);
    printf("first value=%d\n",a);
    printf("second value=%d",b);
}