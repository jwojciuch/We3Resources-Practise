#include <stdio.h>

int main(void)
{

    int sum = 0;
    int N = 2;
    int arr[N];

    for (int i = 0; i <= N; i++)
    {
        printf("");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= N; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d", sum);

    return 0;
}