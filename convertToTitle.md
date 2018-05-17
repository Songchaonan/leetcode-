# 题目：
给定一个正整数，返回它在 Excel 表中相对应的列名称。
# 程序：
~~~
string convertToTitle(int n) {
        string res="";
        while(n)
        {
            if(n%26==0)
            {
                res+='Z';
                n-=26;
            }
            else
            {
                res+='Z' - (26-n%26);
                n-=n%26;
            }
            n/=26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
~~~
# 心得：
一位一位的求，此题从低位往高位求，每进一位，则把原数缩小26倍，再对26取余，之后减去余数，再缩小26倍，最后将整个字符串翻转一下。
