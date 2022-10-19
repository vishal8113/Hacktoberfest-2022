class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root==NULL){
            return v;
        }
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            root=s.top();
            s.pop();
            v.push_back(root->val);
            if(root->right!=NULL){
                s.push(root->right);
            }
            if(root->left!=NULL){      
            s.push(root->left);
            }
        }
        return v;
    
    }
};
