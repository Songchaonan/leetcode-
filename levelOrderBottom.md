# 题目：
给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
# 程序：
~~~
vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > res;
        if (root == NULL) return res;

        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> oneLevel;
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                TreeNode *node = q.front();
                q.pop();
                oneLevel.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            res.insert(res.begin(), oneLevel);
        }
        return res;
    }
~~~
# 心得：
建立一个queue，然后先把根节点放进去，这时候找根节点的左右两个子节点，这时候去掉根节点，此时queue里的元素就是下一层的所有节点，用一个for循环遍历它们，然后存到一个一维向量里，遍历完之后再把这个一维向量存到二维向量里，以此类推，可以完成层序遍历。
