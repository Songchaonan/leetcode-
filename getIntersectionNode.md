# 题目：
编写一个程序，找到两个单链表相交的起始节点。
# 程序：
~~~
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA||!headB)
            return NULL;
        int lenA=length(headA),lenB=length(headB);
        if(lenA<lenB)
        {
            for(int i=0;i<lenB-lenA;i++)
            {
                headB=headB->next;
            }
        }
        else
        {
             for(int i=0;i<lenA-lenB;i++)
            {
                headA=headA->next;
            }
        }
        while(headA&&headB&&headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }
        return (headA&&headB)? headA:NULL;
    }
    int length(ListNode *head)
    {
        int count=0;
        while(head)
        {
            head=head->next;
            count+=1;
        }
        return count;
    }
~~~
# 心得：
分别遍历两个链表，得到分别对应的长度。然后求长度的差值，把较长的那个链表向后移动这个差值的个数，然后一一比较即可
