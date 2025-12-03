/* Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];
    char *tokens[10];
    int count = 0;

    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    char *token = strtok(name, " ");
    while (token != NULL && count < 10) {
        tokens[count++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%c.", toupper(tokens[i][0]));
    }

    if (count > 0) {
        printf(" %s\n", tokens[count - 1]);
    }
    return 0;
}