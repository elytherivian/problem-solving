#include <stdio.h>
#include <stdlib.h>

// https://leetcode.com/problems/binary-search/

/**
 * 1、C语言中数组不能作为函数参数直接传递，但是当数组作为函数参数传递时，会自动退化为指向首元素的指针
 * 2、arr -> &arr[0] 而他的类型正是 int*
 * 3、search(int* nums, int numsSize, int target) == int search(int nums[], int numsSize, int target)
 * 4、之所以传入 numsSize 是因为指针本身并不知道数组的长度
 * 5、nums[i] == *(nums + i)
 */
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int mid = numsSize / 2;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {

}
