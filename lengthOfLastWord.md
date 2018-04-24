# 题目：
给定一个仅包含大小写字母和空格 ' ' 的字符串，返回其最后一个单词的长度。
如果不存在最后一个单词，请返回 0 
# 程序：
~~~
int lengthOfLastWord(string s) {
        int res=0;
	int j=s.length()-1;
	if(s.empty())
		return 0;
	while(j>=0&&s[j]==' ')
		--j;
	for(int i=j;i>=0;i--)
	{
		if(s[i]!=' ')
		{
			++res;
		}
		else
		{
			break;
		}
	}
	return res;
    }
~~~
# 心得：
从字符串尾部的第一个不是空格的字符开始遍历，若不是空格，res++，若是空格，就停止遍历，返回当前的res值。
