#include <stdio.h>

int main(void)
{

    int n;
    int m;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    int arr[n][n];
    int arr2[n][n];

    int matsum[n][n];

    // Matrix 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("Enter [%d][%d]: ", i, j);
        scanf("%d", &arr[i][j]);
        }
    }

    // Matrix 2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("Enter [%d][%d]: ", i, j);
        scanf("%d", &arr2[i][j]);
        }
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
    
    // Matrix 2 Print
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
            printf("%d", arr2[i][j]);
            }
            printf("\n");
        }

    printf("\n");

    // Add the Matrices
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
            matsum[i][j] = arr[i][j] - arr2[i][j];
            }
            printf("\n");
        }    

    // Print Sum
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
            printf("%d ", matsum[i][j]);
            }
            printf("\n");
        }

    return 0;    
}