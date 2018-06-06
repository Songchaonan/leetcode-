# 题目：
翻转一棵二叉树。
# 程序：
~~~
TreeNode* invertTree(TreeNode* root) {
        if (!root) return NULL;
        TreeNode *temp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(temp);
        return root;
    }
~~~
# 心得:
交换当前左右节点，并直接调用递归即可
