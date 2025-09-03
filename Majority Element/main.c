#include <stdio.h>
int majorityElement(int* nums, int numsSize) {
    int candidate; 
    int count =0;
    for(int i=0;i<numsSize;i++){
        if(count==0) candidate=nums[i];
        if(candidate==nums[i]) count+=1;
        else count-=1;
    }
    if(count >=1)
        return candidate;
    else return 0;
}
int main(){
    int num[] = {3,2,3};
    int a = majorityElement(num,3);
    printf("%d",a);
    return 0;
}