# 题目：
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
有效字符串需满足：
左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。
# 程序：
~~~c
bool isValid(string s) {
        stack<char> p;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') p.push(s[i]);
            else {
                if (p.empty()) return false;
                if (s[i] == ')' && p.top() != '(') return false;
                if (s[i] == ']' && p.top() != '[') return false;
                if (s[i] == '}' && p.top() != '{') return false;
                p.pop();
            }
        }
        return p.empty();
    }
~~~
# 心得：
这道题需要用一个栈，遍历输入字符串，如果当前字符为左半边括号时，则将其压入栈中，如果遇到右半边括号时，若此时栈为空，则直接返回false，如不为空，则取出栈顶元素，若为对应的左半边括号，则继续循环，反之返回false.