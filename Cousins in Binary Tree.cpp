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
    int level(TreeNode* root,int x,int l)
    {
        
        if(root==NULL)
            return 0;
        if(root->val==x)
            return l;
        int a=level(root->left,x,l+1);
        int b=level(root->right,x,l+1);
            return a+b;
    }
    bool isSibling(TreeNode* root, int x, int y){
        if(root==NULL)
            return false;
        if(!root->left)
            return isSibling(root->right,x,y);
        if(!root->right )
            return isSibling(root->left,x,y);
        if(root->left->val==x && root->right->val==y || root->left->val==y && root->right->val==x)
            return true;
        bool a=isSibling(root->left,x,y);
        bool b=isSibling(root->right,x,y);
        return a||b;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
        int depthx,depthy;
        depthx=level(root,x,0);
        depthy=level(root,y,0);
        if(depthx!=depthy)
            return false;
        return !isSibling(root,x,y);
        
    }
};
