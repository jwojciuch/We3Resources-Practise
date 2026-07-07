#include <stdio.h>

int main(void)
{
    // Original Array
    int arr[5];

    // Odd and Even array
    int arro[5] = {0};
    int arre[5] = {0};

    int even_count = 0;
    int odd_count = 0;

    // Scan in Array and count Odd and Even
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            arre[even_count] = arr[i];
            even_count++;
        }
        else
        {
            arro[odd_count] = arr[i];
            odd_count++;
        }
    }
    
    // Print out Odd and Even numbers
    printf("Even: ");

    for (int i = 0; i < even_count; i++)
    {
        printf("%d ", arre[i]);
    }
    
    printf("\n");

    printf("Odd: ");
    for (int i = 0; i < odd_count; i++)
    {
        printf("%d ", arro[i]);
    }
    return 0;    
}