#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int nums2[numsSize];
    int j=0,i;
    for (i=0;i<numsSize;i++){
            if (nums[i]!=0){
                nums2[j]=nums[i];
                j++;
            }        
    }
     while (j<numsSize){
            nums2[j]=0;
            j++;
        }
		for (i=0;i<numsSize;i++){
            printf("%d ",nums[i]);
            }  
			printf("\nTo this\n");
        for (i=0;i<numsSize;i++){
            printf("%d ",nums2[i]);
            }  
}
int main(){
	
	int nums[]={1,0,3,5,0};
	moveZeroes(nums,5);
}
