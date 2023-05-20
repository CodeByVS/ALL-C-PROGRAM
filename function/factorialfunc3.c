#include<stdio.h>
void factorial(void){
    int fact=1;
    for(int i=5;i>0;i--){
        fact*=i;
    }
    printf("factorial:%d",fact);

}
int main(){
    factorial();
}