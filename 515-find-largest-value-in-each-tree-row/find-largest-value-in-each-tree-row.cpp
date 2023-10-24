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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            int max=INT_MIN;
            while(size){
                size--;
                auto q1=q.front();
                q.pop();
                if(q1->left) q.push(q1->left);
                if(q1->right) q.push(q1->right);
                if(q1->val>max) max=q1->val;
            }
            v.push_back(max);
        }
        return v;
        
    }
};