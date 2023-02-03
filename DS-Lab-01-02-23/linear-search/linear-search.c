#include<stdio.h>

int main()
{
    int n, value, i, update=0;
    printf("Number of element: ");
    scanf("%d", &n);
    
    int a[n];

    printf("All value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Searching value: ");
    scanf("%d", &value);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==value)
        {
            update++;
            break;
        }
    }

    if(update>0)
    {
        printf("Value Matched");
    }
    else{
        printf("Value isn't here.");
    }
}