#include <stdio.h>

int main(void)
{

    int n;
    int m;
    int temp;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    int arr[n][n];

    // Matrix 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("Enter [%d][%d]: ", i, j);
        scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // Matrix 1 Swap
    for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            }
            printf("\n");
        }    

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

    return 0;    
}