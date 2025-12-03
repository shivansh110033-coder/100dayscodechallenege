/* Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int findRepeatedElement(int nums[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= nums[i];
    }

    for (int i = 0; i < n - 1; i++) {
        result ^= i;
    }

    return result;
}

int main() {
    int nums1[] = {1, 3, 3, 4};  
    int n = sizeof(nums1) / sizeof(nums1[0]);

    int repeated = findRepeatedElement(nums1, n);
    printf("%d\n", repeated);

    return 0;
}
