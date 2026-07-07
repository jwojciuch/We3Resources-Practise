#include <stdio.h>

int main(void)
{

    int arr[5];
    int temp;
    int sla;

    for (int i = 0; i < 5; i++)
    {
        printf("");
        scanf("%d", &arr[i]);
    }

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

    for (int i = 1; i < 4; i++)
    {
        if (arr[i] > arr[0])
        {
            sla = arr[i];
            break;
        }
    }

    printf("%d", sla);
    return 0;    
}