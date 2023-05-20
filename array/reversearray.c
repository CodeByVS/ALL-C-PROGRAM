// //reverse the array with secomd array
// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int brr[7];
//     for(int i =0;i<=6;i++){
//         brr[i]=arr[6-i];
//     }
//     for(int i=0;i<=6;i++){
//         printf("%d",brr[i]);
//     }
// }

//reveraae the array without 2nd array
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int i=0;
    int j=6;
    while(i<j){
        int temp=arr[i];//1  2
        arr[i]=arr[j];//7  6
        arr[j]=temp;//1  2
        i++;
        j--;
    }
    for(int i=0;i<=6;i++){
        printf("%d",arr[i]);
    }
}
