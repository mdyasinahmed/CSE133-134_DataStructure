#include<stdio.h>
#define s 1000
int main()
{
    int n, x, count=0;
    scanf("%d", &n);
    int a[s];

    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nSearching Value: ");
    scanf("%d", &x);

    for(int i=0;i<n;i++)
    {
        if(a[i] == x) count++;
    }

    if(count>0)
    {
        printf("Value Matched\n");
    }
    else{
        printf("Value Not Found\n");
    }

    return 0;
}