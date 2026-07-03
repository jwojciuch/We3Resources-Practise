#include <stdio.h>

int main(void)
{
    int arr[4];

    int ctr = 0;

    for (int i = 0; i < 4; i++)
        {
            printf("");
            scanf("%d", &arr[i]);
        }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }

    for (int k = 0; k < 4; k++)
    {
        if (arr[k] > 0)
        {
            printf("%d", arr[k]);
        }
    }
    
}        