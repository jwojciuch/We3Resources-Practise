#include <stdio.h>

int main(void)
{
    int N = 2;
    int arr[N];
    int arr2[N];

    for (int i = 0; i <= N; i++)
        {
            printf("");
            scanf("%d", &arr[i]);
            arr2[i] = arr[i];
        }

    printf("Array1: ");
    for (int i = 0; i <= N; i++)
        {
        printf("%d", arr[i]);
        }
    
    printf("\n");

    printf("Array2: ");
    for (int i = 0; i <= N; i++)
        {
        printf("%d", arr[i]);
        }
}