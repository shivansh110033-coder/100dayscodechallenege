/* Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main() {
    FILE *file;
    char name[100];
    int age;

    file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    int len = 0;
    while (name[len] != '\0') {
        if (name[len] == '\n') {
            name[len] = '\0';
            break;
        }
        len++;
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s, Age: %d\n", name, age);

    fclose(file);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}