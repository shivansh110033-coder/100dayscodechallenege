/* Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main(void) {
    FILE *fp;
    char line[256];

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append:\n");
    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("Error reading input.\n");
        fclose(fp);
        return 1;
    }

    fprintf(fp, "\n%s", line);

    fclose(fp);
    printf("File updated successfully with appended text.\n");

    return 0;
}