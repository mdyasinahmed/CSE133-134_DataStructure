#include<stdio.h>

int main()
{
    int n, count=0;
    scanf("%d", &n);

    int ar[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }

    //Linear Search
    int x;
    scanf("%d", &x);

    for(int i=0; i<n; i++)
    {
        if(ar[i] == x) count++;
    }

    if(count>0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }


    return 0;
}