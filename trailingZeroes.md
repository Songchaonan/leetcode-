# 题目：
给定一个整数 n，返回 n! 结果尾数中零的数量。
# 程序：
~~~
int trailingZeroes(int n) {
        int count = 0;
        while (n) {
            count += n / 5;
            n /= 5;
        }
        return count;

    }
~~~
# 心得：
此题寻找0的个数，其实就是找因式中10的个数，10又等于5乘以2，又因为2的数量太多，所以就只能找5的个数。
