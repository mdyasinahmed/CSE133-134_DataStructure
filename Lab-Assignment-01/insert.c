#include <stdio.h>
#include <string.h>

#define s 1000

int main() {
    char str[s];
    char word[s];
    int changingPosition;
    int i, sentenceLength, wordLength;

    printf("Sentence: ");
    gets(str);

    printf("Inserting Word: ");
    gets(word);

    printf("Changing Position: ");
    scanf("%d", &changingPosition);
    

    sentenceLength = strlen(str);
    wordLength = strlen(word);

    for (i = sentenceLength; i >= changingPosition; i--) {
        str[wordLength] = str[i];
    }

    for (i = 0; i < wordLength; i++) {
        str[changingPosition + i] = word[i];
    }

    printf("Result: %s\n", str);

    return 0;
}
