#include <stdio.h>
#define s 100
int main()
{
    int n, i, j, position, swap;
    printf("Number of Element: ");
    scanf("%d", &n);
    int a[s];

    printf("Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    // sorting with selection-sort
    for(i=0;i<(n-1);i++)
    {
        position = i;
        for(j=(i+1);j<n;j++)
        {
            if(a[position]>a[j])
            {
                position = j;
            }
        }
        if(position>i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    // binary-search operation
    int item, location, beginning, end, mid;
    printf("\nSearch Element: ");
    scanf("%d", &item);
    
    beginning = 0;
    end = n-1;
    mid = (beginning+end)/2;
    // for(i=0;i<n;i++)
    // {
    // }
    // printf("\n%d", beginning);
    // printf("\n%d", end);
    while((beginning <= end) && (a[mid] != item))
    {
        if(item < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            beginning = mid + 1;
        }
        mid = (beginning + end)/2;
    }

    if(a[mid] == item)
    {
        printf("Number Matched at the position %d", mid);
    }
    else
    {
        printf("Number Not Found");
    }

    return 0;
}