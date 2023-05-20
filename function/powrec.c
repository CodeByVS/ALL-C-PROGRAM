// #include<stdio.h>
// int power(int a,int b){
//     int x=1;
//     for(int i=1;i<=b;i++){
//         x*=a;
//     }
//     return x;
// }
// int main(){
//     int a,b;
//     printf("enter a base value:");
//     scanf("%d",&a);
//     printf("enter a power value:");
//     scanf("%d",&b);
//     printf("%d",power(a,b));
// }

#include<stdio.h>
int power(int a,int b){ 
    int ans;
    if(b==0) return 1;
    else{
        ans=a*power(a,b-1);
    }
    return ans; 
}
int main(){
    int a,b;
    printf("enter a base value:");
    scanf("%d",&a);
    printf("enter a power value:");
    scanf("%d",&b);
    printf("%d",power(a,b));
}