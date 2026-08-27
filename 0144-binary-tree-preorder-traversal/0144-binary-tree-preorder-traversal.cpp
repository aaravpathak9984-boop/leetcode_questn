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
public:
void solve(TreeNode* root,vector<int>&out){
    if(root==NULL)return;
    out.push_back(root->val);
    solve(root->left,out);
    solve(root->right,out);

}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>out;


    solve(root,out);
    return out;

        
    }
};