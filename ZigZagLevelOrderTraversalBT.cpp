/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    
vector< vector<int>> ans;
    
    stack<TreeNode*> s1;
    stack<TreeNode*> s2;
    s1.push(A);
    vector<int> v;
    int flag=0;
    while(s1.size()!=0||s2.size()!=0)
    {
        if(flag==0)
       { 
        while(s1.size()!=0)
        {
            TreeNode* t=s1.top();
        s1.pop();
        v.push_back(t->val);
        if(t->left)
        s2.push(t->left);
        if(t->right)
        s2.push(t->right);
            
        }
        flag=1;
        }
        else
        {
            while(s2.size()!=0)
        {
            TreeNode* t=s2.top();
        s2.pop();
        v.push_back(t->val);
        if(t->right)
        s1.push(t->right);
        if(t->left)
        s1.push(t->left);
        
            
        }
        flag=0;
        }
        ans.push_back(v);
        v.clear();
        
        
    }
    
    
    
    
    
    
    
    return ans;
    
    
    
}
