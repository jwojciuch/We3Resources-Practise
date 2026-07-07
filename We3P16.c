#include <stdio.h>

int main(void)
{

    int arr[5];
    int temp;
    int sla = 0;

    // Input your array
    for (int i = 0; i < 5; i++)
    {
        printf("");
        scanf("%d", &arr[i]);
    }

    // Sort your array
    for (int i = 0; i <=4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Logic for second largest
    for (int i = 3; i >= 0; i--)
    {
        if (arr[i] < arr[4])
        {
            sla = arr[i];
            break;
        }
    }

    printf("%d ", sla);

    return 0;    
}