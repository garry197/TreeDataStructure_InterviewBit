/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* A) {
    
    if(A==NULL)
    return NULL;
    
    
    
    
    TreeNode* l=A->left;
    TreeNode* r=A->right;
    A->left=invertTree(r);
    A->right=invertTree(l);
    
    return A;
}

