# 题目：
统计所有小于非负数整数 n 的质数的数量。
# 程序：
~~~
 int countPrimes(int n) {
        vector<bool>nums(n-1,true);
        nums[0]=false;
        int count = 0, limit = sqrt(n);
        for (int i = 2; i <= limit; ++i) 
        {
            if (nums[i - 1]) 
            {
                for (int j = i * i; j < n; j += i) 
                {
                    nums[j - 1] = false;
                }
            }
        }
        for (int j = 0; j < n - 1; ++j) 
        {
            if (nums[j]) ++count;
        }
        return count;
    }
~~~
# 心得：
从2开始遍历到根号n，先找到第一个质数2，然后将其所有的倍数全部标记出来，然后到下一个质数3，标记其所有倍数，一次类推，直到根号n，此时数组中未被标记的数字就是质数。
