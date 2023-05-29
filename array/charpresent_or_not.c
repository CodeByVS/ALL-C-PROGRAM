//wap to check whether the given character is present in the string or not
#include<stdio.h>
int main(){
    char b;
    char a[]="vikash";
    scanf("%c",&b);
    for(int i=0;a[i]!='\0';i++){
        if(b==a[i]){
        printf("the character is present in the string");
        break;
        }
    }

}
