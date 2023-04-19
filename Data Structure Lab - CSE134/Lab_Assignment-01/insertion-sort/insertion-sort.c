#include <stdio.h>
#define s 100

int main()
{
    int n, pickedValue, i, j;
    scanf("%d", &n);
    
    int a[s];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=1; i<=n; i++)
    {
        pickedValue = a[i];
        j = i-1;
        while((pickedValue < a[j]) && (j >=0))
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = pickedValue;
    }

    for(i=1; i<=n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}