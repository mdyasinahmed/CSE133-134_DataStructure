#include<stdio.h>

int main()
{
    int n, i, index, value;
    printf("Number of element: ");
    scanf("%d", &n);
    int a[n];
    printf("All elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Changing Index: ");
    scanf("%d", &index);
    printf("Changing Value: ");
    scanf("%d", &value);
    for(i=0;i<n;i++)
    {
        if(i==index)
        {
            a[i] = value;
            break;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}