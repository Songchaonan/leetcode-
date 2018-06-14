# 題目：
给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，找出 0 .. n 中没有出现在序列中的那个数。
# 程序：
~~~
int missingNumber(vector<int>& nums) {
        int sum = 0, n = nums.size();
        for (int i=0;i<n;i++) {
            sum += nums[i];
        }
        return 0.5 * n * (n + 1) - sum;
    }
~~~
# 心得：
这道题的解法是，求出0到n之间所有的数字之和，然后再遍历数组算出给定数字的累加和，然后做减法，差值就是丢失的那个数字
