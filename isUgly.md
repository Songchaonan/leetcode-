# 题目：
编写一个程序判断给定的数是否为丑数。

丑数就是只包含质因数 2, 3, 5 的正整数。
# 程序：
~~~
bool isUgly(int num) {
        while(num>1)
        {
            if(num % 2 == 0)
                num = num / 2;
            else if(num % 3 ==0)
                num = num / 3;
            else if(num % 5 == 0)
                num = num /5;
            else 
                return false;
        }
        return num ==1;
    }
~~~
# 心得：
这道题直接的方法就是用num除以2,3,5这些数，如果不能被整除，说明num不是丑数，如果能整除，则将num重新赋为num/2 or 3 or 5,直到最后，返回num==1.
