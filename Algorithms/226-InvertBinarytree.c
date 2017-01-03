struct TreeNode* invertTree(struct TreeNode* root) 
{
 struct node*temp;
 if(root==NULL)
 {
     return 0; 
 }
 else
 {
 temp=root->left;
 root->left=root->right;
 root->right=temp;

 invertTree(root->left);
 invertTree(root->right);
 
return  root;
     
 }
}