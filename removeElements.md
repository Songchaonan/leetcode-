# 题目：
删除链表中等于给定值 val 的所有节点。
# 程序：
~~~
 ListNode* removeElements(ListNode* head, int val) {
        ListNode *res = new ListNode(-1),*flag=res;
        res->next = head;
        while (flag -> next!=NULL)
        {
            if(flag -> next -> val==val)
            {
                ListNode *t = flag -> next;
                flag -> next = t -> next;
                t -> next = NULL;
                delete t;
            }
            else 
            {
                flag = flag -> next;
            }
        }
        return res->next;
    }
~~~
# 心得：
定义几个辅助指针，然后遍历原链表，遇到与给定值相同的元素，将该元素的前后连个节点连接起来，然后删除该元素即可
