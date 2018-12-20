/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if(A==NULL)
    return 0;
    
    if(A->left==NULL&&A->right==NULL)
    return 1;
    
    return max(1+maxDepth(A->left),1+maxDepth(A->right));


    
    
}
