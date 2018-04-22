# 题目:
给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
# 程序：
~~~
int maxSubArray(vector<int>& nums) {
        int res=INT_MIN;
	int sum=0;
	for(int i=0;i<nums.size();i++)
	{
		sum=max(nums[i]+sum,nums[i]);
		res=max(res,sum);
	}
	return res;
    }
~~~
# 心得：
定义两个变量res和sum，其中res保存最终要返回的结果，即最大的子数组之和，sum初始值为0，每遍历一个数字num，比较sum + num和num中的较大值存入sum，然后再把res和sum中的较大值存入res，以此类推直到遍历完整个数组，可得到res.
