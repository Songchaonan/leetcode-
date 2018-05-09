# 题目：
给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。
如果你最多只允许完成一笔交易（即买入和卖出一支股票），设计一个算法来计算你所能获取的最大利润。注意你不能在买入股票前卖出股票。
# 程序：
~~~
int maxProfit(vector<int>& prices) {
        if(prices.empty())
            return 0;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(i==prices.size()-1) return profit;
            for(int j=i+1;j<prices.size();j++)
                profit=max(profit,prices[j]-prices[i]);
        }
        return profit;
    }
~~~
# 心得：
这道题只要遍历数组就可以啦，后一个和前一个差最大的就是最大利润
