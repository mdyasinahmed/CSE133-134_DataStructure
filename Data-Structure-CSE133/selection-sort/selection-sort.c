 #include <stdio.h>

int main()
{
    int n, i, j, position, min;
    scanf("%d", &n);
    int a[n];

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


// #include <stdio.h>

// int main()
// {
//     int i, j, n, x, min;
//     scanf("%d",&n);

//     int a[n];
//     for (i=0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (i=0; i<n-1; i++)
//     {
//         min = a[i];

//         for (j=i+1; j<n; j++)
//         {
//             if (a[j]>min)
//             {
//                 min = a[j];
//                 x = j;
//             }
//         }
//         a[i] = min;
//         a[x] = a[i];

//     }
        
//     for (i=0; i<n; i++)
//     {
//         printf("%d",a[i]);
//     }

//     return 0;
// }
    






