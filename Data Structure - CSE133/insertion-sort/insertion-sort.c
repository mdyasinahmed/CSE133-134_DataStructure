#include <stdio.h>
#define s 100

int main()
{
    int n, pickedValue, i, j;
    scanf("%d", &n);
    
    int a[s];
    for(i=0; i<n; i++)
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

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}




// #include<stdio.h>

// int main()
// {
//     int n, key, i, j;
//     scanf("%d", &n);
    
//     int a[n];
//     for(i=1;i<=n;i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for(i=1;i<=n;i++)
//     {
//         key = a[i+1];
//         j = i-1;
//         // for(j=i-1;j>0;j--)
//         // {
//         //     if(a[j]>a[j-1]){
//         //         key = a[j];
//         //         shift = key;
                
//         //     }
//         // }
//         while((a[j] > key) && (j >=0))
//         {
//             a[j+1] = a[j];
//             j--;
//         }
//         key = a[j+1];
//     }

//     for(i=1; i<=n; i++)
//     {
//         printf("%d", a[i]);
//     }

//     return 0;
// }