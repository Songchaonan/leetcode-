# 题目：
给定一个二叉树，找出其最大深度。
二叉树的深度为根节点到最远叶子节点的最长路径上的节点数
# 程序：
~~~
int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
~~~
# 心得：
求二叉树的最大深度问题用到深度优先搜索DFS，递归的应用。
