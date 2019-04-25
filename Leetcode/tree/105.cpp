#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
            return work(preorder,inorder,0,preorder.size()-1,0;inorder.size() - 1);
        }
        TreeNode* work(vector<int>& preorder, vector<int>& inorder, int lp, int rp, int li, int ri) {
            if(lp>rp) return NULL;
            Tree *root = new TreeNode(preorder[lp]);
            for(int k = lp;k<=rp;k++) {
                if(preorder[k] == inorder[li]) {
                    root->left = work(preorder, inorder,lp,k-1,li+1,k);
                    root->right = work(preorder, inorder,k+1,rp,k+1,ri);
                }
            }
            return root;
        }
}

int main() {
    return 0;
}
