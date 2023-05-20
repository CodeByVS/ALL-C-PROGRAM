#include<stdio.h>
int main()
{
    int a=5,b=4,c=0;
    int d=(++a&&b++)||c++;
    //int d=a;
    printf("%d\n%d",d,c);
    return 0;
}