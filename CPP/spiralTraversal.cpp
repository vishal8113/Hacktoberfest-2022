//We need to spirally traverse all the nodes in levelwise order of a binary tree

//Method 1 - Using stack and queue (TC = O(4*n))
void spiralTraversal(Node *root) {
    if(root==NULL) return;
    
    queue<Node *> q;
    stack<int> st;
    bool reverse=false;
    
    q.push(root);
    while(!q.empty()) {
        int c = q.size();
        for(int i=0;i<c;i++) {
            Node *curr = q.front();
            q.pop();
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
            
            if(reverse) {
                st.push(curr->key);
            } else cout << curr->key << " ";
        }
        if(reverse) {
            while(!st.empty()) {cout <<st.top() << " "; st.pop();}
        }
        reverse=!reverse;
        cout << endl;
    }
}


//Method Two - Using 2 stacks (TC = O(n))
void spiralTraversal(Node *root){
    if(root == NULL) return;
    
    stack<Node *> s1, s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()) {
        while(!s1.empty()) {
            Node *curr = s1.top();
            s1.pop();
            if(curr->left!=NULL) s2.push(curr->left);
            if(curr->right!=NULL) s2.push(curr->right);
            cout << curr->key << " ";
        }
        while(!s2.empty()) {
            Node *curr = s2.top();
            s2.pop();
            if(curr->right!=NULL) s1.push(curr->right);
            if(curr->left!=NULL) s1.push(curr->left);
            cout << curr->key << " ";
        }
    }
    return;
}
