#include <stdio.h>
#include <string.h>
#define s 100

int main() 
{
    char text[s];
    char pattern[s];
    int i, j, index;

    gets(text);
    gets(pattern);
    
    text[strlen(text) - 1] = 0;
    pattern[strlen(pattern) - 1] = 0;

    for(i=0; text[i] != 0; i++)
    {
        for(j=0; pattern[j] != 0; j++)
        {
            if(text[i + j] != pattern[j])
            {
                break;
            }
        }
        if(pattern[j] == 0)
        {
            index = i;
            break;
        }
    }

    if(pattern[j] != 0)
    {
        printf("0");
    }
    else
    {
        printf("%d", index + 1);
    }

    return 0;
}
