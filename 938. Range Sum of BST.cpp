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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res = 0;
        
        helper(root, low, high, res);
        
        return res;
        
        
    }
    
    void helper(TreeNode* root, int low, int high, int &res)
    {
        if(!root) return ;
        else if(((root -> val) >= low) && ((root -> val) <= high)) res += (root -> val);
        
        helper(root -> left, low, high, res);
        helper(root -> right, low, high, res);
        
    }
};