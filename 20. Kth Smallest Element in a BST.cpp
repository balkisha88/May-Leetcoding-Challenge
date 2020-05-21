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
    void inorder(TreeNode *root,int k,vector<int>& result)
    {
        if(root==NULL)
            return;

        inorder(root->left,k,result);

        result[0]+=1;
        if(result[0]==k)
        {
           result[1]=root->val;
           return;
        }
        inorder(root->right,k,result);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int> result(2,0);
        inorder(root,k,result);
        return result[1]; 
        
        
    }
};
