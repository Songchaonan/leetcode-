# 题目：
请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点，你将只被给定要求被删除的节点。
# 程序：
~~~
void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode *temp = node->next;
        node->next = temp->next;
        delete temp;
    }
~~~
# 心得：
这道题只给了要被删的节点，要删掉此节点，需要先将当前节点的值用下一个节点的值覆盖掉，再创建一个中间节点temp指向下一个节点，再将当前节点的下一个节点变为temp->next，然后删掉temp即可。
