# 题目：
给定两个二叉树，编写一个函数来检验它们是否相同。
如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
# 程序：
~~~
bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if ((p && !q) || (!p && q) || (p->val != q->val)) 
	return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

    }
~~~
# 心得：
用递归的方法判断是否相等。
