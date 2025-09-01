#include <stdio.h>

int trap(int* height, int heightSize) {
    int left = 0, right = heightSize - 1;
    int left_max = 0, right_max = 0;
    int water_total = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= left_max)
                left_max = height[left];
            else
                water_total += left_max - height[left];
            left++;
        } else {
            if (height[right] >= right_max)
                right_max = height[right];
            else
                water_total += right_max - height[right];
            right--;
        }
    }

    return water_total;
}

int main() {
    int a[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    printf("%d\n", trap(a, 12));  // Output: 6
    return 0;
}
