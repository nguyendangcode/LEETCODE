#include<stdio.h>
int removeElement(int* nums, int numsSize, int val) {
    int k = 0; // chỉ số để ghi phần tử hợp lệ
    for(int i =0; i < numsSize;i++){
        if(nums[i]!=val){
            nums[k++]=nums[i];
        }
    }
    return k;
}
int main(){
    int a[] ={0,1,2,2,3,0,4,2};;
    removeElement(a,8,2);
    for(int i=0;i<8;i++){
        printf("%d",a[i]);
    }
    return 0;
}