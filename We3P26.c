#include <stdio.h>

int main(void)
{

    int n;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    int matsum = 0;
    int arr[n][n];

    // Matrix 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("Enter [%d][%d]: ", i, j);
        scanf("%d", &arr[i][j]);
        }
    }

    // Create Lower Triangle (Vertical)

    for (int i = 1; i < n; i++)
    {

        arr[i][0] = 0;
    }

    // Create Lower Triangle (Horizontal)
    for (int j = 1; j < n - 1; j++)
    {

        arr[n-1][j] = 0;
    }


    printf("\n");

    // Matrix 1 Print
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
            printf("%d", arr[i][j]);
            }
            printf("\n");
        }
}