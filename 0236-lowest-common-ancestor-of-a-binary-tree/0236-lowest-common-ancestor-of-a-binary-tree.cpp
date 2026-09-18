class Solution {
public:
    TreeNode* ans = NULL;

    string po(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return "NN";
        string l = po(root->left, p, q);
        string r = po(root->right, p, q);

        string a = "NN";
        if (l[0] == 'Y' || r[0] == 'Y' || root == p) a[0] = 'Y';
        if (l[1] == 'Y' || r[1] == 'Y' || root == q) a[1] = 'Y';
        if (ans == NULL && a == "YY") ans = root;
        return a;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        ans = NULL;
        po(root, p, q);
        return ans;
    }
};