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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
         vector<vector<int>>res;
        if(root==NULL)return res;
          int idx =1;
      q.push(root);
      bool even =true;
        while(!q.empty()){
            int size =q.size();
          
            vector<int>ans;
         for(int i=0; i<size; i++){
            TreeNode* curr = q.front();
               q.pop();
            ans.push_back(curr->val);
            if(curr->left) q.push(curr->left);
            if(curr->right)q.push(curr->right);
         }
            if(idx==0){reverse(ans.begin(),ans.end()); res.push_back(ans); idx=1;}
            else if(idx==1){res.push_back(ans);idx=0;}
          
          
        }
        return res;
    }
};