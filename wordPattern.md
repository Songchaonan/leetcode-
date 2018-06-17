# 题目：
给定一种 pattern(模式) 和一个字符串 str ，判断 str 是否遵循相同的模式。
这里的遵循指完全匹配，例如， pattern 里的每个字母和字符串 str 中的每个非空单词之间存在着双向连接的对应模式
# 程序：
~~~
bool wordPattern(string pattern, string str) {
        unordered_map<char, int> m1;
        unordered_map<string, int> m2;
        istringstream in(str);
        int i = 0;
        for (string word; in >> word; ++i) {
            if (m1.find(pattern[i]) != m1.end() || m2.find(word) != m2.end()) {
                if (m1[pattern[i]] != m2[word]) return false;
            } else {
                m1[pattern[i]] = m2[word] = i + 1;
            }
        }
        return i == pattern.size();
    }
~~~
# 心得：
这道题也可以用两个哈希表来完成，分别将字符和单词都映射到当前的位置，那么在遇到新字符和单词时，首先看两个哈希表是否至少有一个映射存在，如果有一个存在，则比较两个哈希表映射值是否相同，不同则返回false。如果两个表都不存在映射，则同时添加两个映射。
