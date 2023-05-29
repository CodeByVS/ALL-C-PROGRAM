//wap to count the occurance of given character in a string
#include<stdio.h>
int main(){
    int count;
    char a[12]="vikash";
    for(int i=0;a[i]!='\0';i++){
        count=0;
        for(int j=0;a[j]!='\0';j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        printf("occurance of %c is %d \n",a[i],count);
    }
    return 0;
}
