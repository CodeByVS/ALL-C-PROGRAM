#include <stdio.h>
int main(){
    int x=5 ,y=2,p,q;
    p=x^y;
    q=x&y;
    int z=x|y;
    int a=x>>2;
    printf("%d\n%d\n%d\n%d",p,q,z,a);
}