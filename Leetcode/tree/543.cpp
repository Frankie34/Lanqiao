class Solution {
    public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return ans;
    }
    private:
    int ans = 0;
    int dfs (TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        int l = dfs(root->left);
        int r = dfs(root->right);
        ans = max(ans, l+r);
        return max(l,r)+1;
    }

}