#include <stdio.h>
#include <stdlib.h>
int candy(int* ratings, int ratingsSize) {
    if(ratingsSize==0) return 0;
    int *candies =(int*)malloc(sizeof(int)*ratingsSize);
    for (int i = 0; i < ratingsSize; i++) {
        candies[i] = 1; 
    }
    for(int i=1;i<ratingsSize;i++){
        if(ratings[i]>ratings[i-1]){
            candies[i]=candies[i-1]+1;
        }
    }
    for(int i=ratingsSize-2;i>=0;i--){
        if(ratings[i]>ratings[i+1]){
            if(candies[i]<candies[i+1]+1) 
                candies[i]=candies[i+1]+1;
        }
    }
    int total=0;
    for(int i =0;i<ratingsSize;i++){
        total+=candies[i];
    }
    free(candies);
    return total;
}
int main(void){
    int ratings[]={1,3,4,5,2};
    int sizes = sizeof(ratings)/sizeof(ratings[0]);
    printf("%d",candy(ratings,sizes));
    return 0;
}