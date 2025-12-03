/* Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) 
{
    int n = strlen(s);
    int maxLen = 0;
    int start = 0; 
    int lastIndex[256];  
    for (int i = 0; i < 256; i++) 
    {
        lastIndex[i] = -1;
    }
    for (int i = 0; i < n; i++) 
    {
        char c = s[i];
        if (lastIndex[(unsigned char)c] >= start) 
        {
            start = lastIndex[(unsigned char)c] + 1;
        }
        lastIndex[(unsigned char)c] = i;
        int currentLen = i - start + 1;
        if (currentLen > maxLen) 
        {
            maxLen = currentLen;
        }
    }
    return maxLen;
}

int main() 
{
    char s[1001];
    scanf("%1000s", s);

    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);

    return 0;
}