#include <stdio.h>

int main()
{
    int n, i, x, count=0;
    printf("How much values: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter Values: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Number you want to search: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            count++;
        }
    }

    if (count>0)
    {
        printf("Number Matched!");
    }
    else{
        printf("Number Not Found!");
    }
    

    return 0;
}