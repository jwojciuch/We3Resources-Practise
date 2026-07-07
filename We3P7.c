#include <stdio.h>

int main(void)
{

    int arr[3];
    int arr2[3];
    int store[6];
    int temp = 0;

    // Get Array1
    for (int i = 0; i < 3; i++)
    {
        printf("");
        scanf("%d", &arr[i]);
    }

    // Get Array2
    for (int j = 0; j < 3; j++)
    {
        printf("");
        scanf("%d", &arr2[j]);
    }

    // Merge Array1 and Array2
    for (int i = 0; i < 3; i++)
    {
        store[i] = arr[i];
        store[i+3] = arr2[i];
    }

    for (int i = 0; i <=4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (store[j] < store[i])
            {
                temp = store[i];
                store[i] = store[j];
                store[j] = temp;
            }
        }
    }

    for (int i = 0; i <= 5; i++)
    {
        printf("%d ", store[i]);
    
    }
} 