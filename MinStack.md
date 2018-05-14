# 题目：
设计一个支持 push，pop，top 操作，并能在常数时间内检索到最小元素的栈。

    push(x) -- 将元素 x 推入栈中。
    pop() -- 删除栈顶的元素。
    top() -- 获取栈顶元素。
    getMin() -- 检索栈中的最小元素。
# 程序：
~~~
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        sta1.push(x);
        if (sta2.empty() || x <= sta2.top()) sta2.push(x);
    }
    
    void pop() {
        if (sta1.top() == sta2.top()) 
            sta2.pop();
            sta1.pop();
    }
    
    int top() {
        return sta1.top();
    }
    
    int getMin() {
        return sta2.top();
    }
    private:
    
    stack<int> sta1,sta2;
};
~~~
# 心得：
用两个栈来实现，一个栈来按顺序存储push进来的数据，另一个用来存出现过的最小值。

