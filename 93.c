/* Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};
    int len1, len2;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    if (str1[len1-1] == '\n') str1[len1-1] = '\0';

    len2 = strlen(str2);
    if (str2[len2-1] == '\n') str2[len2-1] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        count[tolower(str1[i]) - 'a']++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        count[tolower(str2[i]) - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}