/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* tree(vector<int>& preorder,int i,int j)
    {
        if(i>j)
            return NULL;
        TreeNode *root=new TreeNode(preorder[i]);
        if(i==j)
            return root;
        int k=i+1;
        while(k<=j)
        {
            if(preorder[k]>preorder[i])
                break;
            k++;
        }       
        root->left=tree(preorder,i+1,k-1);
        root->right=tree(preorder,k,j);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* inorder;
        
        if(preorder.empty())
            return NULL;
        
        inorder=tree(preorder,0,preorder.size()-1);
        
        return inorder;
        
        
        
        
        
        
        
    }
};
