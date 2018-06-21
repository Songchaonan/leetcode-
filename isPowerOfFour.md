# 题目：
给定一个整数 (32位有符整数型)，请写出一个函数来检验它是否是4的幂。
# 程序：
~~~
bool isPowerOfFour(int num) {
        while(num && (num % 4 == 0))
        {
            num = num / 4;
        }
        return num == 1;
    }
~~~
# 心得：
这道题最直接的方法就是不停的除以4，看最终结果是否为1。
