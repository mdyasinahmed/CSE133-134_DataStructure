#include <stdio.h>
#include <string.h>
#define s 1000

int main() 
{
    char str[s];
    int position, len, i;
    gets(str);
    scanf("%d", &position);
    scanf("%d", &len);

    int strLen = strlen(str);

    if ((position+len) <= strLen) 
    {
        for (i=position; i<=(strLen-len); i++) 
        {
            str[i] = str[i+len];
        }
        str[i] = 0;
    }

    printf("%s", str);
    
    return 0;
}
