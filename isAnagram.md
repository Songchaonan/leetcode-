# 题目：
给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的一个字母异位词。
# 程序：
~~~
bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;
        int Har[26] = {0};
        for (int i = 0; i < s.size(); ++i) ++Har[s[i] - 'a'];
        for (int i = 0; i < t.size(); ++i) {
            if (--Har[t[i] - 'a'] < 0) return false;
        }
        return true;
    }
~~~
# 心得：
这道题首先看两个字符串的长度是否相等，如果相等则进行下一步。建立一个哈希表，长度为26的数组Har[26],首先将数组赋值为0.然后把s中所有的字符出现个数统计起来，存入Har[26].然后再来统计t字符串，如果发现不匹配则返回false。
