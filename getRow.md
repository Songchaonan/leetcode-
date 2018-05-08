# 题目：
给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。
# 程序：
~~~
 vector<int> getRow(int rowIndex) {
        vector<int> res ;
        if(rowIndex<0)
            return res;
        res.assign(rowIndex+1,0);
        for (int i=0; i<=rowIndex; ++i) {
            if ( i == 0) {
                res[0] = 1;
                continue;
            }
            for (int j=rowIndex; j>=1; --j) {
                res[j] = res[j] + res[j-1];
            }
        }
        return res;
        }
~~~
# 心得：
这题只需要返回第rowIndex行的数，只需要两个for循环，除了第一个数为1之外，后面的数都是上一次循环的数值加上它前面位置的数值之和，不停地更新每一个位置的值，便可以得到第rowIndex行的数字.
