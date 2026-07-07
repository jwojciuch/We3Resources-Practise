#include <stdio.h>

int main(void)
{

    int n;    

    printf("Enter the size: ");
    scanf("%d", &n);

    int rowsum[n];
    int colsum[n];

    int arr[n][n];

    // Scan in Matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("Enter [%d][%d]: ", i, j);
        scanf("%d", &arr[i][j]);
        }
    }

    // Get Row Sum
    for (int i = 0; i < n; i++)
    {
        rowsum[i] = 0;
        for (int j = 0; j < n; j++)
        {
            rowsum[i] += arr[i][j];
        }
    } 

    // Get Column Sum
    for (int i = 0; i < n; i++)
    {
        colsum[i] = 0;
        for (int j = 0; j < n; j++)
        {
            colsum[i] += arr[j][i];
        }
    } 

    
    // Print Matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("%d ", arr[i][j]);
        }

        if (i < n)
        {
        printf("| %d ", rowsum[i]);
        }

        printf("\n");
    }

    printf("----\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", colsum[i]);
    }

    
    return 0;    
}