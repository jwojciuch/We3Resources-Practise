#include <stdio.h>

int main(void)
{
    int n = 1;
    int val;
    int pos;

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

        printf("Input the Position : ");
        scanf("%d", &pos);
        arr[n] = val;

        for (int i = 0; i < n - pos; i++)
        {
            arr[pos] = arr[pos + 1];
        }
        arr[pos - 1] = val;
        
        for (int i = 0; i < n; i++)
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