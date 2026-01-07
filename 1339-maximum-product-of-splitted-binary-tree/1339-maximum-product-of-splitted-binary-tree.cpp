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
long long tsum=0;
const int MOD=1e9+7;
long long maxi=0;
long long sum(TreeNode* root){
    if(!root) return 0;
    return root->val+sum(root->left)+sum(root->right);
}
long long dfs(TreeNode* root){
    if(!root) return 0;
    long long lh=dfs(root->left);
    long long rh=dfs(root->right);
    long long sub=root->val+lh+rh;
    long long product=sub*(tsum-sub);
    maxi=max(maxi,product);
    return sub;
}
    int maxProduct(TreeNode* root) {
        tsum=sum(root);
        dfs(root);
     return maxi%MOD;
    }
};