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
    int xdep=0,ydep=0;
    TreeNode *leftparent=NULL;
    TreeNode *rightparent=NULL;
    void helper(TreeNode *root,int x,int y,int depth,TreeNode* parent)
    {
        if(!root) return;
        else
        {
            depth++;
            if(root->val==x)
            {
                xdep=depth;
                leftparent=parent;
            }
            if(root->val==y)
            {
                ydep=depth;
                rightparent=parent;
            }
            helper(root->left,x,y,depth,root);
            helper(root->right,x,y,depth,root);
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        helper(root,x,y,0,root);
        if(xdep==ydep and leftparent!=rightparent) return true;
        return false;
    }
};
