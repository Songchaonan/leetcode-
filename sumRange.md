# 题目：
给定一个整数数组  nums，求出数组从索引 i 到 j  (i ≤ j) 范围内元素的总和，包含 i,  j 两点。
# 程序：
~~~
class NumArray {
public:
    NumArray(vector<int> nums) {
        sum = nums;
        for (int i = 1; i < nums.size(); ++i) {
            sum[i] += sum[i - 1];
        }
    }
    
    int sumRange(int i, int j) {
        return i == 0? sum[j] : sum[j] - sum[i - 1];
    }
    private:
    vector<int> sum;
};
~~~
# 心得：
这道题要建立一个累计和的数组sum，其中sum[i]表示[0, i]区间的数字之和，那么[i,j]就可以表示为sum[j]-sum[i-1]，当i=0时，直接返回dp[j]即可.
