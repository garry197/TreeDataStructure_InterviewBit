/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
 
 int helper(TreeNode* A,int B)
 {
     stack<TreeNode*> s1;
     stack<TreeNode*> s2;
     
     TreeNode* a=A;
     TreeNode* b=A;
     
     int sum1=0;
     int sum2=0;
     
    int d1=0;
    int d2=0;
     while(1)
     {
         while(d1==0)
         {
             if(a!=NULL)
             {
                 s1.push(a);
                 a=a->left;
             }
             else
             {
                 if(s1.size()==0)
                    d1=1;
                else
                {
                    a=s1.top();
                    s1.pop();
                    sum1=a->val;
                    a=a->right;
                    d1=1;
                    
                }
             }
         }
         
         while(d2==0)
         {
             if(b!=NULL)
             {
                 s2.push(b);
                 b=b->right;
             }
             else
             {
                 if(s2.size()==0)
                    d2=1;
                else
                {
                    b=s2.top();
                    s2.pop();
                    sum2=b->val;
                    b=b->left;
                    d2=1;
                }
             }
         }
         
          if(((sum1 + sum2) == B) && (sum1 != sum2)){
            return 1;
        }
        else if((sum1 + sum2) < B){
            d1 = 0;
        }
        else if((sum1 + sum2) > B){
            d2 = 0;
        }
        
        if(sum1 >= sum2){
            return 0;
        }
         
         
         
         
     }
     
     return 0;
 }
 
 
 
 
 
 
 
int Solution::t2Sum(TreeNode* A, int B) {
    
    if(A==NULL)
    return 0;
    return helper(A,B);
    
    
    
    
}
