# 題目：
给定一个二叉树，返回所有从根节点到叶子节点的路径。
# 程序：
~~~
vector<string> binaryTreePaths(TreeNode* root) {
        if (!root) return {};
        if (!root->left && !root->right) 
            return {to_string(root->val)};
        vector<string> res;
        for (string str : binaryTreePaths(root->left)) 
        {
            res.push_back(to_string(root->val) + "->" + str);
        }
        for (string str : binaryTreePaths(root->right)) 
        {
            res.push_back(to_string(root->val) + "->" + str);
        }
        return res;

    }
~~~
# 心得：
這道題用递归，就是不停的DFS到叶结点，当遇到叶结点的时候，即没有左右子结点，那么此时一条完整的路径已经形成了，加上当前的叶结点后存入结果res中，然后回溯。
