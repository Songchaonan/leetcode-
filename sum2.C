#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target) {
   int *a= (int*)malloc(2*sizeof(int));
    for(int i = 0;i<numsSize;i++)  
    {  
        for(int j = i+1;(j<numsSize && j != i);j++)  
        {  
            if(nums[i] + nums[j] == target)  
            {  
                a[0]=i;
                a[1]=j;
            }  
        }  
    }  
    return a;
}
void main()
{
    int numsSize=5;
	int nums[5]={1,2,3,4,5};
	int target=9;
	int *p= (int*)malloc(2*sizeof(int));
    p=twoSum(nums, numsSize, target);
	printf("%d,%d\n",*p,*(p+1));

}