# 题目：
给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
# 程序：
~~~
ListNode *deleteDuplicates(ListNode *head)
{
	if(!head||!head->next)
		return head;
	ListNode *start=head;
	while(start&&start->next)
	{
		if(start->val==start->next->val)
		{
			ListNode *temp=start->next;
			start->next=start->next->next;
			delete temp;
		}
		else
		{
			start=start->next;
		}
	}
	return head;
}
~~~
# 心得：
移除有序链表中的重复项需要定义个指针指向该链表的第一个元素，然后第一个元素和第二个元素比较，如果重复了，则删掉第二个元素，如果不重复，指针指向第二个元素。这样遍历完整个链表，则剩下的元素没有重复项。
