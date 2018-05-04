# 题目：
给定一个二叉树，判断它是否是高度平衡的二叉树。
# 程序：
~~~
bool isBalanced(TreeNode* root) {
        if (comDepth(root) == -1) return false;
        else return true;
    }
    int comDepth(TreeNode *root) {
        if (!root) return 0;
        int left = comDepth(root->left);
        if (left == -1) 
		return -1;
        int right = comDepth(root->right);
        if (right == -1) 
		return -1;
        int diff = abs(left - right);
        if (diff > 1) 
		return -1;
        else 
		return 1 + max(left, right);

    }
~~~
# 心得：
解决此问题的方法为：对于每一个节点，我们通过comDepth方法递归获得左右子树的深度，如果子树是平衡的，则返回真实的深度，若不平衡，直接返回-1，
