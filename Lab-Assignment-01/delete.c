#include <stdio.h>
#include <string.h>

#define s 1000

char str[s];

int main() {
    int pos, len, i;
    printf("Enter a string (max %d characters): ", s - 1);
    gets(str);
    printf("Enter the starting position of the substring: ");
    scanf("%d", &pos);
    printf("Enter the length of the substring: ");
    scanf("%d", &len);

    int strLen = strlen(str);

    if (pos + len <= strLen) 
    {
        for (i = pos; i <= strLen - len; i++) 
        {
            str[i] = str[i + len];
        }
        str[i] = '\0';
    }

    printf("String after deletion: %s\n", str);
    return 0;
}
