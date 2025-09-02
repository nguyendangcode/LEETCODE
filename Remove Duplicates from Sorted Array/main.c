#include <stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0; 
    int k = 1; 
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k-1]) { 
            nums[k++] = nums[i]; 
        }
    }
    return k; 
}
int main() {
    int nums1[] = {0,0,0,1};
    int size1 = sizeof(nums1)/sizeof(nums1[0]);
    int k1 = removeDuplicates(nums1, size1);

    for(int i=0;i<size1;i++){
        printf("%d",nums1[i]);
    }
   return 0;
}