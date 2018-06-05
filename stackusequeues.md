# 题目：
用队列来实现栈。
# 程序：
~~~
class Stack {
public:
    void push(int x) {
        q2.push(x);
        while (q2.size() > 1) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop(void) {
        top();
        q2.pop();
    }

    int top(void) {
        if (q2.empty()) {
            for (int i = 0; i < (int)q1.size() - 1; ++i) {
                q1.push(q1.front());
                q1.pop();
            }
            q2.push(q1.front());
            q1.pop();
        }
        return q2.front();
    }
    bool empty(void) {
        return q1.empty() && q2.empty();
    }
    
private:
    queue<int> q1, q2;
};
~~~
# 心得：
要用两个队列，其中一个队列用来放最后加进来的数，模拟栈顶元素。剩下所有的数都按顺序放入另一个队列中。当push操作时，将新数字先加入模拟栈顶元素的队列中，如果此时队列中有数字，则将原本有的数字放入另一个队中，让新数字在这队列中，用来模拟栈顶元素。当top操作时，如果模拟栈顶的队中有数字则直接返回，如果没有则到另一个队列中通过平移数字取出最后一个数字加入模拟栈顶的队列中。当pop操作时，先执行下top()操作，保证模拟栈顶的队列中有数字，然后再将该数字移除即可。当empty操作时，当两个队列都为空时，栈为空。
