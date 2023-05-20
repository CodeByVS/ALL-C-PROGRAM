#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of stars:");
    scanf("%d", &n);
    int nsp = 1;
    int nst = n;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int j = 1; j <= n; j++)
    {
        for (int p = 1; p <= nst; p++)
        {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int m = 1; m <= nst; m++)
        {
            printf("*");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}