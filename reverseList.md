# 题目：
反转一个单链表。
# 程序：
~~~
ListNode* reverseList(ListNode* head) {
        if (!head) return head;
        ListNode *first = new ListNode(-1);
        first->next=head;
        ListNode *flag = head;
        while(flag->next)
        {
            ListNode *temp=flag->next;
            flag->next=temp->next;
            temp->next=first->next;
            first->next=temp;
        }
        return first->next;
    }
~~~
# 心得：
在原链表之前建立一个first node，因为首节点会变，然后从head开始，将之后的一个节点移到first node之后，重复此操作直到head成为末节点为止，
