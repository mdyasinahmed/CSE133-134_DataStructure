#include <stdio.h>
#include <string.h>
#define s 1000

int main()
{
    char sentenceMain[s];
    char wordToReplace[s];
    char replacingWord[s];
    char finalOutput[s];

    gets(sentenceMain);
    gets(wordToReplace);
    gets(replacingWord);

    char *store;
    char *position;

    strcpy(finalOutput, sentenceMain);

    position = strstr(finalOutput, wordToReplace);

    store = finalOutput + (position - finalOutput);
    strcpy(store, replacingWord);
    strcat(store, position + strlen(wordToReplace));


    printf("%s", finalOutput);

    return 0;
}