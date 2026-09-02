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

    bool dfs(TreeNode* root,int cs,int ts){

        if(!root)return false;

        cs+=root->val;

        if(!root->left && !root->right){
            return cs==ts;
        }

        return dfs(root->left,cs,ts)||dfs(root->right,cs,ts);



    }
   
public:
    bool hasPathSum(TreeNode* root, int ts) {

        return dfs(root,0,ts);

      

        
    }
};