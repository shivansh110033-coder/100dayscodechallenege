/* Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CHAR 26

bool areAnagrams(char* s, char* t) {
    int countS[MAX_CHAR] = {0};
    int countT[MAX_CHAR] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        countS[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        countT[t[i] - 'a']++;
    }

    for (int i = 0; i < MAX_CHAR; i++) {
        if (countS[i] != countT[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char s[1001], t[1001];

    printf("Enter string s: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter string t: ");
    fgets(t, sizeof(t), stdin);

    size_t lenS = strlen(s);
    if (lenS > 0 && s[lenS - 1] == '\n') s[lenS - 1] = '\0';
    size_t lenT = strlen(t);
    if (lenT > 0 && t[lenT - 1] == '\n') t[lenT - 1] = '\0';

    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}