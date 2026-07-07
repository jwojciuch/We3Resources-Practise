#include <stdio.h>

int main(void)
{
    int n;
    int ctr  = 0;

    printf("Enter array size: \n");
    scanf("%d", &n);

    int arr[n];
    int check[n];

    // Set entire array to 1
    for (int i = 0; i < n; i++)
    {
        check[i] = 1;
    }

    printf("Input %d elements in the array: ", n);

    // Scan in numbers
    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count Frequency 

    for (int i = 0; i < n; i++)
    {
        if (check[i] != 0)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    check[i]++;
                    check[j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (check[i] != 0)
        {
        printf("%d occurs %d times \n", arr[i], check[i]);
        }
    }
}