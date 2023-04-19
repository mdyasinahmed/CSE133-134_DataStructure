#include<stdio.h>

int main()
{
    int x, y, temp;
    scanf("%d %d", &x, &y);
    printf("X=%d, Y=%d, Temp=%d\n", x, y, temp);

    temp = x;
    printf("When Temp=X:\n");
    printf("Temp=%d, X=%d, Y=%d\n", temp, x, y);
    printf("\n");

    x = y;
    printf("Temp=%d, X=%d, Y=%d\n", temp, x, y);
    printf("\n");

    y = temp;
    printf("%d %d\n", x, y);

    return 0;
}
