#include <stdio.h>

int main(void)
{

    int N = 4;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        printf("");
        scanf("%d", &arr[i]);
    }

    for (int i = N-1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    
    }

    return 0;
}