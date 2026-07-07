#include <stdio.h>

int main(void)
{
    int n = 1;
    int val;
    int temp;

    scanf("%d", &n);

    int arr[n + 1];
    
    if (n <= 100 && n >= 1)
    {
        printf("Input %d elements in the array in ascending order: ", n);   
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("Input the value to be inserted : ");
        scanf("%d", &val);

        arr[n] = val;

        for (int i = 0; i <=n; i++)
        {
            for (int j = i+1; j < n + 1; j++)
            {
                if (arr[j] < arr[i])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    
        for (int i = 0; i < n + 1; i++)
        {
            printf("%d", arr[i]);
        }
    }
    else 
    {
        printf("Number has to be in range [1:100]");
    }
    return 0;    
}