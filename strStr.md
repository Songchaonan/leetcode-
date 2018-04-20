# 题目：
实现 strStr() 函数。
给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。
# 程序：
~~~c
int strStr(string haystack,string needle)
{
	if(needle.empty())
	{	
		return 0;
	}
	int i=0,j=0;
	while(i<=haystack.length()&&j<=needle.length())
	{
			if(i==haystack.length()&&j<(needle.length()-1))
		{
			return -1;
		}
		else if(j==needle.length())
		{
			return i-j;
		}
		else if(haystack[i]==needle[j])
		{
			i++;
		    j++;
		}
		else
		{
			i++;
			j=0;
		}
	}
}
~~~
# 心得：
解决这个问题需要两个指针i,j，分别指向两个字符串，如果needle为空，则返回0。如果needle不为空，则比较needle[i]和haystack[j]，如果相等，则将i和j加一，若不相等，则i+1，j=0；
如果最后j<needle.length()且i= haystack.length()，则说明haystack中没有needle，返回-1，若最后j=needle.length(),则说明haystack中有needle，返回i-j.

