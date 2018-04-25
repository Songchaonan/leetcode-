# 题目：
给定一个非负整数组成的非空数组，在该数的基础上加一，返回一个新的数组。
最高位数字存放在数组的首位， 数组中每个元素只存储一个数字。
你可以假设除了整数 0 之外，这个整数不会以零开头。
# 程序：
~~~
vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] == 9) digits[i] = 0;
            else {
                digits[i] += 1;
                return digits;
            }
        }
        if (digits.front() == 0) digits.insert(digits.begin(), 1);
        return digits;

    }
};
~~~
# 心得：
一开始想要先把数组转换为整型之后再加一，然后再将此时的数转换为数组，但这样十分麻烦。于是想要，只要先遍历整个数组的数字哪个是9，若是9则这位数赋值为0，若不是，则直接加一后返回。因为可能出现99的情况，所以最后要判断数组的第一位是不是0，如果是0，需要在数组首部插入1。
