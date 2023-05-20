#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={-100,-2,-28,-10,-78,-8,-65};
    int x=INT_MIN;
    int sx=INT_MIN;
    for(int i=0;i<7;i++){
        if(x<arr[i]){
            x=arr[i];
        }
    }
    for(int i=0;i<7;i++){
        if(x!=arr[i] && sx<arr[i]){
            sx=arr[i];
        }
    }
    printf("%d",sx);
}