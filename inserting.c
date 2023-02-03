#include <stdio.h>
#define s 100

int main()
{
    int i, j, n, p, v;

    int a[s];
    printf("Total Value: ");
    scanf("%d", &n);

    printf("Enter Value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Changing Position: ");
    scanf("%d", &p);

    printf("Changing Value: ");
    scanf("%d", &v);

    for(i=0;i<n;i++)
    {
        if(i==p-1)
        {
            for(j=n;j>i;j--)
            {
                a[j] = a[j-1];
            }
            a[i]=v;
            break;
        }
    }
    printf("\n");
    for(i=0;i<n+1;i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}