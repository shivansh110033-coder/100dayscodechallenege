/* Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[100];
    int maxLen = 0;

    fgets(sentence, sizeof(sentence), stdin);

    char *word = strtok(sentence, " \n");
    while (word != NULL) {
        int len = strlen(word);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }
        word = strtok(NULL, " \n");
    }

    printf("%s\n", longest);
    return 0;
}