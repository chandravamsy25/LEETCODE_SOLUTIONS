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
    void inorder(TreeNode* root,unordered_map<int,int>&mp)
    {
        if(!root)return ;
        inorder(root->left,mp);
        mp[root->val]++;
        inorder(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mp;
        inorder(root,mp);
        vector<int>v;
        int ans=INT_MIN;
        for(auto it=mp.begin();it!=mp.end();++it)
        {
     
            if(it->second > ans)
            {
                ans=it->second;v={it->first};
            }
            
            else if(it->second == ans)
            {     
                v.push_back(it->first);
            }
        }
        return v;
        
    }
};