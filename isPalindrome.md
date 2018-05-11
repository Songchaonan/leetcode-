# 题目:
给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
# 程序：
~~~
bool isPalindrome(string s) { 
        int i=0,j=s.size()-1;
        if(s.empty())
            return true;
        while(i<j)
        {
            if(!isAlphaNum(s[i])) ++i;
            else if(!isAlphaNum(s[j])) --j;
            else if((s[i] + 32 - 'a') %32 != (s[j] + 32 - 'a') % 32)  return false;                                            
            else  {++i;--j;}
        }
        return true;
    }
   bool isAlphaNum(char &ch) {
        if (ch >= 'a' && ch <= 'z') return true;
        if (ch >= 'A' && ch <= 'Z') return true;
        if (ch >= '0' && ch <= '9') return true;
        return false;
    }
~~~
# 心得：
用两个指向首尾的指针i、j首先需要判断字符串中的字符是否是字母，然后比较首尾的字母，且要忽略大小写。如果不是相同字母，返回false。
