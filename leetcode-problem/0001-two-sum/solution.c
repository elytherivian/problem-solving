#include <stdio.h>
#include <stdlib.h>

// https://leetcode.com/problems/two-sum/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* ans = malloc(sizeof(int) * 2);
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }

    return NULL;
}

/**
 * C语言
 * 1、函数中新申请的数据，如果不使用malloc，函数返回时数据会被释放，具体细节再学习
 * 2、c语言的返回数据只有一个，所有很多时候需要传入指针进行针对数据进行修改
 */

int main() {

}
