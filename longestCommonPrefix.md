# 题目：
编写一个函数来查找字符串数组中的最长公共前缀。
# 程序：
~~~c
string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = "";
        for (int j = 0; j < strs[0].size(); ++j) {
            char c = strs[0][j];
            for (int i = 1; i < strs.size(); ++i) {
                if (j >= strs[i].size() || strs[i][j] != c) {
                    return prefix;
                }
            }
            prefix.push_back(c);
        }
        return prefix;
    }
~~~
# 心得：
 我们定义两个变量i和j，其中i是遍历搜索字符串中的字符，j是遍历字符串集中的每个字符串。将单词上下排好，相当于一个各行长度可能不相等的二维数组，采用纵向逐列遍历，在遍历的过程中，如果某一行没有了，说明其为最短的单词，因为共同前缀的长度不能长于最短单词，所以此时返回已经找出的共同前缀。每次取出第一个字符串的某一个位置的单词，然后遍历其他所有字符串的对应位置看是否相等，如果有不满足的直接返回prefix，如果都相同，则将当前字符存入结果，继续检查下一个位置的字符，