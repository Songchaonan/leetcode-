# 题目：
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
你可以假设数组中无重复元素。
# 程序：
~~~c
int removeElement(vector<int>& nums,int target)
{
	int i;
	int len=nums.size();
	if(nums[0]>=target)
		return 0;
	else if(nums[len-1]<target)
		return len;
	else if(nums[len-1]==target)
		return len-1;
	for(i=0;i<len-1;i++)
		{
			if(nums[i]==target)
				return i;
			else if(nums[i]<target&&nums[i+1]>target)
				return i+1;
		}
}
~~~
# 心得：
这道题简单，只需要比对即可。有下列几种情况：1：target小于等于nums[0],直接返回“0”.
2：target等于nums[nums.size()-1]，返回nums.size()-1;
3:target等于中间的某个数，用for循环，比较哪个与之相同，直接返回i；
4：target位于两个数之间，返回i+1；
