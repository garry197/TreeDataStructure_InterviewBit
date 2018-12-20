/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 

int Solution::hasPathSum(TreeNode* A, int sum) {
    
    
    if(A==NULL)
    return 0;
    
    
    
    if(A->val==sum&&A->left==NULL&&A->right==NULL)
    return 1;
    
    int a =hasPathSum(A->left,sum-A->val);
    int b =hasPathSum(A->right,sum-A->val);
    
    if(a==1||b==1)
    return 1;
    return 0;
    
}
