class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
     int lh,rh;
     if(root==NULL)
     {
         return 0;
        
     }
     else 
     {
         lh=maxDepth(root->left);
         rh=maxDepth(root->right);
         if(lh>rh)
         {
             return 1+lh;
         }
         else
         {
             return 1+rh;
         }
         
     }
    }
};