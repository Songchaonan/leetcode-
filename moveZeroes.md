# 题目：
给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
# 程序：
~~~
void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i])
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
~~~
# 心得：
这道题要求只能在原数组上操作，需要用两个指针，一个不停的向后扫，找到非零位置，然后和前面那个指针交换位置即可。
