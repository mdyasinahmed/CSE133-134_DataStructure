#include <stdio.h>
#include <string.h>
#define s 1000

int main()
{
    char str[s];
    char word[s];
    int changingPosition;
    int i, sentenceLength, lengthOfWord;

    printf("Sentence: ");
    gets(str);

    printf("Word to insert: ");
    gets(word);

    printf("Changing Position: ");
    scanf("%d", &changingPosition);
    

    sentenceLength = strlen(str);
    lengthOfWord = strlen(word);

    for (i=sentenceLength; i>=changingPosition; i--)
    {
        str[lengthOfWord] = str[i];
    }

    for (i=0; i<lengthOfWord; i++)
    {
        str[changingPosition + i] = word[i];
    }

    printf("%s\n", str);

    return 0;
}
