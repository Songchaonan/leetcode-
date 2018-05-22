# 题目：
颠倒给定的 32 位无符号整数的二进制位。
# 程序：
~~~
uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for (int i = 0; i < 32; ++i) {
            if (n & 1 == 1) {
                res = (res << 1) + 1;
            } else {
                res = res << 1;
            }
            n = n >> 1;
        }
        return res;
    }
~~~
# 心得：
把要翻转的数从右向左一位位的取出来，如果是1，将结果res左移一位并且加上1；如果是0，将结果res左移一位，然后将n右移一位。
