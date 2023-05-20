#include<stdio.h>
int max(int x,int y){
    if(x>y){
        printf("first no. is greater than second");
    }
    else if(x<y){
        printf("second no. is greater than first");
    }
    else{
        printf("both the no. are same");
    }
}
int main(){
    int a,b;
    printf("enter 1st and 2nd no.");
    scanf("\n%d\n%d",&a,&b);
    max(a,b);
}