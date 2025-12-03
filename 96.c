/* Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    fgets(sentence, sizeof(sentence), stdin);

    char *word_start = sentence;
    char *ptr = sentence;

    while (*ptr != '\0') {
        if (*ptr == ' ' || *ptr == '\n') {
            reverseWord(word_start, ptr - 1);
            word_start = ptr + 1;
        }
        ptr++;
    }

    reverseWord(word_start, ptr - 1);

    printf("%s", sentence);
    return 0;
}