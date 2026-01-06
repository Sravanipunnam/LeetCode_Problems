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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            int sum=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* dummy=q.front();
                q.pop();
                sum+=dummy->val;
                if(dummy->left){
                    q.push(dummy->left);
                }
                    if(dummy->right){
                    q.push(dummy->right);
                }
            }
            ans.push_back(sum);
        }
        int res=max_element(ans.begin(),ans.end())-ans.begin();
        return res+1;
        
    }
};