bool isSameTree(struct TreeNode* p, struct TreeNode* q) 
{
    
    if(p==q)
    return true;
    if(p==NULL||q==NULL)
    return false;
    
    return ((p->val==q->val)&& isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
    
  }
    