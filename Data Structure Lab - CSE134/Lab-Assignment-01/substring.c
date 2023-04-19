#include<stdio.h>
#define s 1000
int main()
{
    char strTake[s], strGet[s];
    int position, length, character;
    // string input
    gets(strTake);
    scanf("%d %d", &position, &length);
    
    character = 0;
    while(character < length)
    {
        strGet[character] = strTake[position + character -1];
        character++;
    }
    strGet[character] = 0;

    printf("%s", strGet);
}