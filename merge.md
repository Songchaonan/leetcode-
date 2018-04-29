# 题目：
给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。
# 程序：
~~~
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int>nums(m+n);
		int i=0,j=0,count=0;
		if(nums1.empty())
        {
			for(int a=0;a<n;a++)
				nums1[a]=nums2[a];
			return ;
        }
		else if(nums2.empty())
			return ;
		else if(nums1.empty()&&nums2.empty())
			return;
		while(i<m||j<n)
		{
			if(i==m&&j<n)
			{
				nums[count]=nums2[j];
				j+=1;
			}
			else if(j==n&&i<m)
			{
				nums[count]=nums1[i];
				i+=1;
			}
			else if(nums1[i]<=nums2[j])
			{
				nums[count]=nums1[i];
				i+=1;
			}
			else if(nums1[i]>nums2[j])
			{
				nums[count]=nums2[j];
				j+=1;
			}
			count+=1;
		}
		for(i=0;i<m+n;i++)
			nums1[i]=nums[i];
		return ;
    }
~~~
# 心得：
由于两个数组都是有序的，所有只要按顺序比较大小即可。建立一个m+n大小的新数组，然后逐个从nums1和nums2数组中取出元素比较，把较小的加入新数组，然后在考虑nums1数组有剩余和nums2数组有剩余的两种情况，最后在把新数组的元素重新赋值到nums1数组中即可。
