# 题目：
给定一个正整数n，输出报数序列的第n项。
注意：整数顺序将表示为一个字符串
# 程序：
~~~
string countAndSay(int n)
{
	if(n<=0)
		return " ";
	string res="1";
	while(--n)
	{
		string cur=" ";
		for(int i=0;i<res.size();++i)
		{
			int cnt=1;
			while(res[i]==res[i+1]&&i+1<res.size())
			{
				++cnt;
				++i;
			}
			cur+=to_string(cnt)+res[i];
		}
		res=cur;
	}
	return res;
}
~~~
# 心得：
这个问题需要找出前一个数的相同元素的个数，把个数和该元素存到新的字符串中。
