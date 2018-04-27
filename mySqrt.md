# 题目：
实现 int sqrt(int x) 函数。
计算并返回 x 的平方根，其中 x 是非负整数。
由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
# 程序：
~~~
int mySqrt(int x) {
        int low=1;
    int high=x;
    int mid;
    if(x==0)
        return 0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(mid==x/mid)
            break;
        else if(mid<x/mid)
            low=mid+1;
        else
            high=mid-1;

    }
    if(mid>x/mid)
        return mid-1;
    else
        return mid;
}
~~~
# 心得：
我们能想到的方法就是算一个候选值的平方，然后和x比较大小，为了缩短查找时间，我们采用二分搜索法来找平方根，
