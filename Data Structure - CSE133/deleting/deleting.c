#include <stdio.h>
#define s 100

int main()
{
    int i, j, n, p;

    int a[s];
    printf("Total Value: ");
    scanf("%d", &n);

    printf("Enter Value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Deleting Position: ");
    scanf("%d", &p);

    for(i=0;i<n;i++)
    {
        if(i==p-1)
        {
            for(j=i;j>n;j++)
            {
                a[j] = a[j+1];
            }
            break;
        }
    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}