给定一个整数数列，找出其中和为特定值的那两个数。

你可以假设每个输入都只会有一种答案，同样的元素不能被重用。
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
