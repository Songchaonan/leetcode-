# 题目：
给定一个二叉树和一个目标和，判断该树中是否存在根节点到叶子节点的路径，这条路径上所有节点值相加等于目标和。
# 程序：
~~~
bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL) 
            return false;
        if (root->left == NULL && root->right == NULL && root->val == sum ) 
            return true;
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
~~~
# 心得：
此问题还是要使用递归搜索，如果输入的树是空的，返回false；如果只要根节点，且根节点的val=sum，返回true，否则返回false。下面开始递归了，由于函数的返回值是Ture/False，同时两个方向一起递归，中间用或||连接，只要有一个是True，整个结果就是True。递归左右节点时，这时候的sum值应该是原sum值减去当前节点的值。
