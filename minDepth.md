# 题目：
给定一个二叉树，找出其最小深度。
最小深度是从根节点到最近叶子节点的最短路径上的节点数量。
# 程序：
~~~
int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right == NULL) 
            return 1;
        if (root->left == NULL) 
            return minDepth(root->right) + 1;
        else if (root->right == NULL) 
            return minDepth(root->left) + 1;
        else 
            return 1 + min(minDepth(root->left), minDepth(root->right));
    
    }
~~~
# 心得：
递归的方法搜索即可，有几种情况，1：只有根节点，返回1；2：左子树为空，返回右子树的最小深度；3：右子树为空，返回左子树的最小深度；4：左右子树均不为空，返回深度最小的子树的深度。
