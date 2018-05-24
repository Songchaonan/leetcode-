# 题目：
你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
给定一个代表每个房屋存放金额的非负整数数组，计算你在不触动警报装置的情况下，能够偷窃到的最高金额。
# 程序：
~~~
int rob(vector<int>& nums) {
        if(nums.empty())
            return 0;
        if(nums.size()==1)
            return nums[0];
        vector<int> flag = {nums[0], max(nums[0], nums[1])};
        for(int i=2;i<nums.size();++i)
        {
            flag.push_back(max(flag[i-2]+nums[i],flag[i-1]));
        }
        return flag.back();
    }
~~~
# 心得：
如果数组为空，返回0。如果数组大小为1，返回nums[0].若不是以上两种情况，则需要一个动态数组flag，flag[i]表示到i位置时不相邻数能形成的最大和，如果nums为{3, 2, 1, 5}，那么
flag[0]=3，再来看flag[1]，由于3比2大，所以抢第一个房子的3，当前房子的2不抢，所以
flag[1]=3，再来看flag[2]，由于不能抢相邻的，可以用再前面的一个的flag值加上当前房间的值，和当前房间的前面一个flag值比较，取较大值当做当前flag值，可以得到递推公式flag[i] = max(num[i] + flag[i - 2], flag[i - 1]).需要对flag[0]和flag[1]初始化。
flag[0]=nums[0],flag[1]=max(nums[0],nums[1]).
