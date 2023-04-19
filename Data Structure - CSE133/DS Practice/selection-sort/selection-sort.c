// #include <stdio.h>
// #define s 100
// int main()
// {
//     int n, arr[s], index, i, min, store;
//     printf("Enter Number of Element: ");
//     scanf("%d", &n);
    
//     for(i=0;i<n;i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for(i=0;i<n;i++)
//     {
//         min = i;
//         for(i=i+1;i<n;i++)
//         {
//             if(min>arr[i+1])
//             {
//                 index = i;
//             }
//         }
//         store = i;
//         i =  arr[i];
//         arr[i] = store;
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d", arr[i]);
//     }
// }
#include <stdio.h>
#define s 100
int main()
{
    int n, i, j, position, swap;
    printf("Number of Element: ");
    scanf("%d", &n);
    int a[s];

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

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

    return 0;
}