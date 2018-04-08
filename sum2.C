<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
=======
给定一个整数数列，找出其中和为特定值的那两个数。

你可以假设每个输入都只会有一种答案，同样的元素不能被重用。
>>>>>>> a655a19a42eab59d20ab5ea92188a82ca6379ce1
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
<<<<<<< HEAD
void main()
{
    int numsSize=5;
	int nums[5]={1,2,3,4,5};
	int target=9;
	int *p= (int*)malloc(2*sizeof(int));
    p=twoSum(nums, numsSize, target);
	printf("%d,%d\n",*p,*(p+1));

}
=======
>>>>>>> a655a19a42eab59d20ab5ea92188a82ca6379ce1
