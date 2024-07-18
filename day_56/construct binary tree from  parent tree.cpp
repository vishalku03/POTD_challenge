class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        // Your code here
        Node* root = NULL;
        int n = parent.size();
        vector<Node*> vec(n, NULL);
        vector<bool> lef(n, true);
        
        for(int i=0; i<n; i++){
            Node* ch = new Node(i);
            vec[i] = ch;
        }
        
        for(int i=0; i<n; i++){
            if(parent[i] == -1){
                root = vec[i];
            }
            else if(lef[parent[i]]){
                vec[parent[i]]->left = vec[i];
                lef[parent[i]] = false;
            }
            else{
                vec[parent[i]]->right = vec[i];
            }
        }
        
        return root;
    }
};
// gfg