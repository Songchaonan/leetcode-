# 題目：
给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。
# 程序：
~~~
int addDigits(int num) {
        while(num/10 > 0)
        {
            int sum=0;
            while(num>0)
            {
                sum += num%10;
                num /= 10;
            }
            num = sum;
        }
        return num;
        
    }
~~~
# 心得：
程序包括兩個while循環，外层循环是判断num是否为个位数，如果是，则整个循环结束，返回num，若不是，则内层循环，则将他的各个位的数相加。直到num变为个位数。
