# 题目：
给定一个链表，判断链表中是否有环。
# 程序：
~~~
bool hasCycle(ListNode *head) {
        ListNode *left = head ; 
        ListNode *right = head;
        while(right && right->next)
        {
            left = left->next;
            right = right->next->next;
            if(left == right)
                return true;
        }
        return false;
    }
~~~
# 心得：
设两个指针，一个每次走一步的左指针和一个每次走两步的右指针，如果链表里有环的话，两个指针最终肯定指向同一个量相同。
