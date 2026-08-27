/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int best=0;

    int h(TreeNode* root){
        if(!root)return 0;

        int l=h(root->left);
        int r=h(root->right);

        best=max(best,l+r);

        return 1+max(l,r);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
 best=0;
 h(root);
 return best;

        
    }
};