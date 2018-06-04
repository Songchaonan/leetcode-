# 题目：
给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，使得 nums [i] = nums [j]，并且 i 和 j 的差的绝对值最大为 k。
# 程序：
~~~
 bool containsNearbyDuplicate(vector<int>& nums, int k) {
         unordered_map<int, int> hmap;
        for (int i = 0; i < nums.size(); ++i) {
            if (hmap.find(nums[i]) != hmap.end() && i - hmap[nums[i]] <= k) 
                return true;
            else 
                hmap[nums[i]] = i;
        }
        return false;
    }
~~~
# 心得：
用一个哈希表记录记录每个数字和其坐标的映射，如果有重复数而且他们的坐标差<=k,就返回true,如果没有返回false.
