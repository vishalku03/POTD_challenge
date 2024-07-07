class Solution {
  public:
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
       vector<int> ans;
       solve(root,target,ans);
       return ans;
    }
    bool solve(Node* root,int target,vector<int> &op)
    {
         if(root==NULL)
        return false;
      if(root->data==target)
        return true;
       int b= solve(root->left,target,op);
       int b1= solve(root->right,target,op);
         
      
       if(b||b1){
            op.push_back(root->data);
       return true;
       }
       
        return false;  
    }
}


// gfg