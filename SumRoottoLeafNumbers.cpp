/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
 
 vector<int> v;
 
 void helper(TreeNode* A,int sum)
 {
     if(A==NULL)
     {
         
         return;
     }
     
     
    if(A->left==NULL&&A->right==NULL)
    {v.push_back((sum*10+A->val)%1003);
    return;
        
    }
    
    
//      if(A->left==NULL&&A->right!=NULL)
        helper(A->right,(sum*10+A->val)%1003);
    
   // if(A->left!=NULL&&A->right==NULL)
    helper(A->left,(sum*10+A->val)%1003);
     
     
     
     
     
 }
 
int Solution::sumNumbers(TreeNode* A) {
    v.clear();
    helper(A,0);
    
    long long int total=0;
    
    for(int i=0;i<v.size();i++)
    {
        total=(total+v[i]%1003)%1003;
        
        
        
    }
    
    return total;
    
    
    
}
