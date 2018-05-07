# 题目：
给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
# 程序：
~~~
vector<vector<int>> generate(int numRows) {
       vector<vector<int> > out;
        if (numRows <= 0) 
	return out;
       out.assign(numRows, vector<int>(1));
        for (int i = 0; i < numRows; ++i) {
            out[i][0] = 1;
            if (i == 0) continue;
            for (int j = 1; j < i; ++j) {
                out[i].push_back(out[i-1][j] + out[i-1][j-1]);
            }
            out[i].push_back(1);
        }
        return out;

    }
~~~
# 心得：
杨辉三角的规律是：第n行第k个数字等于第n-1行的第k-1个数字与第k个数字的和。用vector 开辟二维数组，先给每一行的第一个赋值为1，然后利用规律有out[i].push_back(out[i-1][j]+out[i-1][j--1]).最后别忘了给每一行最后一个赋值为1.
