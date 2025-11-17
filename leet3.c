#include <stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    int i,j=1,k;
	
	
	for (i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }
	printf("Unique array elemnts are %d \n",j);
	for (i=0;i<j;i++){
		printf("%d ",nums[i]);
	}
}
int main(){
	 int num[]={1,1,2,3,4,4,4};
	 removeDuplicates(num,7);
	 return 0;
}