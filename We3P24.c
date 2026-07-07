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

    printf("\n");

    // Add the Right Diagonal Sum
    for (int i = n-1; i >= 0; i--)
        {
            matsum += arr[i][i];
        }    

    // Print Sum
    printf("%d", matsum);
    
    return 0;    
}