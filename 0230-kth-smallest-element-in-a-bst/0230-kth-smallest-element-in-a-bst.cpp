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
    void preorder(TreeNode* root, vector<int>& out) {
        if (!root) return;

        out.push_back(root->val);  
        preorder(root->left, out);  
        preorder(root->right, out); 
    }
public:
    int kthSmallest(TreeNode* root, int k) {

        vector<int> out;

        preorder(root,out);

        sort(out.begin(),out.end());

        return out[k-1];


        
    }
};