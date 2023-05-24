//find the unique no. present in the array
#include <stdio.h>
int main()
{
    int var;
    int count;
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    for (int i = 0; i <=6; i++)
    {
        count = 0;
        for (int j = i + 1; j <=6; j++)
        {
            if (arr[i] == arr[j])
            {
                count = 1;
            }
        }
        if (count == 0)
        {
            printf("%d", arr[i]);
            break;
        }
    }
}
