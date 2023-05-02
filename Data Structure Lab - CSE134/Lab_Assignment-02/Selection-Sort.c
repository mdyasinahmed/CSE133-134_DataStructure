#include <stdio.h>
#define s 1000

int main()
{
    int n, i, j, position, min;
    scanf("%d", &n);
    int a[s];

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        min = a[i];
        for(j=1+i;j<n;j++)
        {
            if(min>a[j])
            {
                min = a[j];
            }
        }
    }

    if(a[i]>min)
    {
        a[position] = a[i];
        a[i] = min;
    }

    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}