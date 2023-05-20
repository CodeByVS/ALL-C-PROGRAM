//check the given array is palindrome or not
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    int brr[5];
    int count=0;
    for(int i=0;i<5;i++){
        int temp=arr[i];
        arr[i]=brr[i];
        brr[i]=arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]==brr[i]){
            count++;
        }
    }
    if(count==5) printf("palindrome");
}
