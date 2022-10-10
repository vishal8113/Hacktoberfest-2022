//Given a binary search tree with two nodes swapped... Find the two nodes

Node *prev = NULL, *first=NULL, *second=NULL;
void fixBST(Node *root) {
    if(root==NULL) return;
    fixBST(root->left);
    if(prev!=NULL && root->val<=prev->val) {
        if(first==NULL) first = prev;
        second = root;
    }
    prev = root;
    fixBST(root->right);
}
