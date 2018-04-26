# 题目：
给定两个二进制字符串，返回他们的和（用二进制表示）。
输入为非空字符串且只包含数字 1 和 0。
# 程序：
~~~
string addBinary(string a, string b) {
        string res = "";
        int i = a.size() - 1, j = b.size() - 1, ci = 0;
        while (i >= 0 || j >= 0) {
            int p = i >= 0 ? a[i--] - '0' : 0;
            int q = j >= 0 ? b[j--] - '0' : 0;
            int sum = p + q + ci;
            res = to_string(sum % 2) + res;
            ci = sum / 2;
        }
        return ci == 1 ? "1" + res : res;
}
~~~
# 心得：
用两个指针分别指向a和b的末尾，然后每次取出一个字符，转为数字，若无法取出字符则按0处理，然后定义进位ci，初始化为0，将三者加起来，对2取余即为当前位的数字，对2取商即为当前进位的值，记得最后还要判断下ci，如果为1的话，要在结果最前面加上一个1.
