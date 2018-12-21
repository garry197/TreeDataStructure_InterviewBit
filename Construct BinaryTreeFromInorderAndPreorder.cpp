/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
 
 
 TreeNode* helper(vector<int> A,int startp,int endp, vector<int> B,int starti, int endi)
 {
     if(startp>endp||starti>endi)
     return NULL;
     
     TreeNode* head=new TreeNode(A[startp]);
     
     int k=-1;
     for(int i=starti;i<endi+1;i++)
     {
         if(A[startp]==B[i])
            {k=i;
            break;}
         
     }
     
    int newstartpl=startp+1;
     int newendpl=newstartpl-starti+k-1;
     int newstartil=starti;
     int newendil=k-1;
     
     int newstartpr=newendpl+1;
     int newendpr=endp;
     int newstartir=k+1;
     int newendir=endi;
     
     
     
     
     head->left=helper(A,newstartpl,newendpl,B,newstartil,newendil);
     head->right=helper(A,newstartpr,newendpr,B,newstartir,newendir);
     return head;
     
     
     
     
     
 }
 
 
 
 
 
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    
    if(A.size()!=B.size())
    return NULL;
    
    int size=A.size();
    
    return helper(A,0,A.size()-1,B,0,B.size()-1);
    
    
    
    
    
    
    
    
    
    
    
    
}
