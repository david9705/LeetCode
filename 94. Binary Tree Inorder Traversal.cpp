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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        if(!root) return ans;
        
        stack<TreeNode *> st;        
        TreeNode* cur = root;
        
        while(cur || !st.empty())
        {
            if(cur)
            {
                st.push(cur);
                cur = cur -> left;
            }
            else
            {
                TreeNode* tmp = st.top();   
                ans.push_back(tmp -> val);
                st.pop();            
                cur = tmp -> right;
                
            }
        }
            
        
        return ans;
        
        
        
    }
};