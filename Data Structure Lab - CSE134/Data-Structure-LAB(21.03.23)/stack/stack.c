#include <stdio.h>

void underFlow(int arr[], int s)
{
    int i, top=-1, max;
    for(i=0;i<s;i++)
    {
        if(arr[i]!='\0')
        {
           top++;
        }
        max = (s-1);
    }
    if((max-top)>0)
    {
        printf("Empty");
    }
}
void overFlow(int arr[], int s)
{
    int i, top=-1, max;
    for(i=0;i<s;i++)
    {
        if(arr[i]!='\0')
        {
           top++;
        }
        max = (s-1);
    }
    if(top==max)
    {
        printf("Full");
    }
} 

int main()
{
    int s, a[s];
    scanf("%d", &s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    underFlow(a,s);
    overFlow(a,s);
    

}