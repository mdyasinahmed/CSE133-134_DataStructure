#include<stdio.h>
#define s 1000
int main()
{
    char text[s], pattern[s];
    int i, j, k, max, index;
    // Main string input
    gets(text);
    // Searching string input
    gets(pattern);

    int lenStr = strlen(text);
    int lenPat = strlen(pattern);
    
    // for(i=0; i<lenStr; i++)
    // {
    //     text[s] = text[i];
    //     pattern[s] = pattern[i];
    // }

    // for(i=0; i<lenStr; i++)
    // {
    //     printf("%c", text[i]);
    // }



    i = 1;
    max = lenStr - lenPat;

    while(i <= max)
    {
        for(j = 1; j<=lenPat; j++)
        {
            if(text[i+j-1] != pattern[j])
            {
                i = i + 1;
            }
            index++;
        }
        index = 0;
    }

    printf("%d", index);


    // int length = strlen(strMain);
    // printf("%d", length);
    // // printf("%s\n", &strMain);
    // // printf("%s", &strSearch);

    //  for(i=0; i<length; i++)
    // {
    //     strMain[i] = 
    // }
    // while(character < length)
    // {
    //     strGet[character] = strTake[position + character -1];
    //     character++;
    // }
    // strGet[character] = 0;

    // printf("%s", strGet);
}