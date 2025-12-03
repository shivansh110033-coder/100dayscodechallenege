/* Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>

int findMajorityElement(int nums[], int size) {
    int count_map[100000] = {0};
for (int i = 0; i < size; i++){
    count_map[nums[i]]++;
    }

    for (int i = 0; i < size; i++) {
        if (count_map[nums[i]] > size / 2) {
            return nums[i];
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majority = findMajorityElement(nums, n);
    printf("%d\n", majority);

    return 0;
}
