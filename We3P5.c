#include <stdio.h>

int main(void)
{
    int arr[3];

    int ctr = 0;

    for (int i = 0; i < 3; i++)
        {
            printf("");
            scanf("%d", &arr[i]);
        }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++;
                break;
            }
        }
    }



    printf("Total number of duplicate elements found in the array is : %d", ctr);   



    return 0;    
}        