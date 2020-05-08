# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    x_depth,y_depth=0,0
    a,b=None,None
    def isCousins(self, root: TreeNode, x: int, y: int) -> bool:
        depth=0
        self.dfs(root,x,y,depth,root)
        #Solutin.x_depth,Solutioy_depth
        if(Solution.x_depth==Solution.y_depth and Solution.a!=Solution.b):
            return 1
        else:
            return 0
    def dfs(self,root,x,y,depth,parent):
        if not root:
            return
        else:
            depth+=1
            if(root.val==x):
                Solution.x_depth=depth
                Solution.a=parent
            if(root.val==y):
                Solution.y_depth=depth
                Solution.b=parent
            self.dfs(root.left,x,y,depth,root)
            self.dfs(root.right,x,y,depth,root)
