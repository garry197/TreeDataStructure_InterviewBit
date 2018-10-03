/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> Solution::preorderTraversal(TreeNode* A) {
    
    vector<int>ans;
    stack<TreeNode*>a;
    
    
    a.push(A);
    
    while(a.size()!=0)
    {
        TreeNode* z=a.top();
        a.pop();
        if(z->right!=NULL)
        a.push(z->right);
        
        if(z->left!=NULL)
        a.push(z->left);
        ans.push_back(z->val);
        
    }
    
    
    
    return ans;
}
