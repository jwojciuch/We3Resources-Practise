#include <stdio.h>

int main(void)
{
    int min = 2147483647;
    int max = -2147483647;

    int arr[3];
    
    // Scan in numbers
    for (int i = 0; i < 3; i++)
    {
        printf("");
        scanf("%d", &arr[i]);
    }

    // Check for min
    for (int i = 0; i < 3; i++)
    {
    if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Min: %d \n", min);

    // check for max    
    for (int j = 0; j < 3; j++)
    {
    if (arr[j] > max)
        {
            max = arr[j];
        }
    }

    // Print answer
    printf("Max: %d", max);

    return 0;
}