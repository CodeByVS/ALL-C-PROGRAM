/*#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter a no:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",i);
        i++;
    }

}
*/
#include <stdio.h>

int main() {
  printf("Size of Int Data Types in C = %8d bytes \n", sizeof(short int));
  printf("Size of Long Int Data Types in C = %d bytes \n", sizeof(long int));
  printf("Size of Float Data Types in C = %d bytes \n", sizeof(float));
  printf("Size of Double Data Types in C = %d bytes \n", sizeof(double));
  printf("Size of Long Double Data Types in C = %d bytes \n", sizeof(long double));
  printf("Size of Char Data Types in C = %d bytes \n", sizeof(char));
  return 0;
}