# 题目：
给定一个Excel表格中的列名称，返回其相应的列序号。
# 程序：
~~~
int titleToNumber(string s) {
        int n = s.size();
        int res = 0;
        int tmp = 1;
        for (int i = n; i >= 1; --i) {
            res += (s[i - 1] - 'A' + 1) * tmp; 
            tmp *= 26;
        }
        return res;
    }
~~~
# 心得：
相当于26进制转10进制。
