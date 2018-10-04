/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    
    stack<TreeNode*>s;
    vector<int> v;
    
    s.push(A);
    while(s.size()!=0)
    {
        TreeNode* a=s.top();
        
        if(a->left==NULL&&a->right==NULL)
        {
            v.push_back(a->val);
            s.pop();
        }
        else if(a->left==NULL&&a->right!=NULL)
        {
            v.push_back(a->val);
            s.pop();
            s.push(a->right);
        }
        else if(a->left!=NULL&&a->right!=NULL)
        {
            s.pop();
            s.push(a->right);
            a->right=NULL;
            s.push(a);
            s.push(a->left);
            a->left=NULL;
           
        }
        else if(a->left!=NULL&&a->right==NULL)
        {
            
            s.push(a->left);
            a->left=NULL;
           
        }
        
        
    }
    return v;
    }
    
    
    

