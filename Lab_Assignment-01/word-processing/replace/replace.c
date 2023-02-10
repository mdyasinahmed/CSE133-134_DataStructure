#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char original_sentence[100]; //original sentence
char word_to_replace[100]; //word to replace
char new_word[100]; //new word to replace with
char result[100]; //resultant sentence after replacement

//input original sentence
printf("Enter the original sentence: ");
scanf("%[^\n]", original_sentence);

//input word to replace
printf("Enter the word to replace: ");
scanf("%s", word_to_replace);

//input new word to replace with
printf("Enter the new word to replace with: ");
scanf("%s", new_word);

char *temp;
char *position;

//copy the original sentence into the result string
strcpy(result, original_sentence);

//find the position of the word to replace
position = strstr(result, word_to_replace);

//replace the word with new word
temp = result + (position - result);
strcpy(temp, new_word);
strcat(temp, position + strlen(word_to_replace));

//print the resultant sentence
printf("The resultant sentence after replacement is: %s", result);

return 0;
}