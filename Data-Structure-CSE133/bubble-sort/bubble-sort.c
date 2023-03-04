#include <stdio.h>

int main()
{
    int size, step, store, i;
    scanf("%d", &size);
    int a[size];
    for (step = 0; step < size; step++)
    {
       scanf("%d", &a[step]);
    }

    for(step = 0; step < size; step++)
    {
        for(i=0; i < size-step-1; i++)
        {
            if(a[i]>a[i+1])
            {
                store = a[i];
                a[i] = a[i+1];
                a[i+1] = store;
            }
        }
    }
    printf("\nYour Values in Ascending Order: ");
    for (step = 0; step < size; step++)
    {
       printf("%d ", a[step]);
    }

    for(step = 0; step < size; step++)
    {
        for(i=0; i < size-step-1; i++)
        {
            if(a[i]<a[i+1])
            {
                store = a[i];
                a[i] = a[i+1];
                a[i+1] = store;
            }
        }
    }
    printf("\n");
    printf("\nYour Values in Descending Order: ");
    for (step = 0; step < size; step++)
    {
       printf("%d ", a[step]);
    }

    return 0;
}
