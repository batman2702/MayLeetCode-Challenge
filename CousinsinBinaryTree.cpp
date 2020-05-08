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
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            bool A_exist=false;
            bool B_exist=false;
            for(int i=0;i<size;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(temp->val==x) A_exist=true;
                if(temp->val==y) B_exist=true;
                if(temp->left!=NULL and temp->right!=NULL)
                {
                    if(temp->left->val==x and temp->right->val==y)
                    {
                        return false;
                    }
                    if(temp->left->val==y and temp->right->val==x) return false;
                }
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            if(A_exist and B_exist) return true;
        }
        return false;
    }
};
