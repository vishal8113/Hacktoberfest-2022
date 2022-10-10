//Time required to burn a binary tree from a given node
int res=0;
int burnTree(Node *root, int leaf, int &dist) {
    if(root == NULL) {dist=-1; return 0;}
    if(root->val == leaf) {dist=0; return 0;}
    
    int ldist = -1, rdist = -1;
    
    int lh = burnTree(root->left, leaf, ldist);
    int rh = burnTree(root->right, leaf, rdist);
    
    if(ldist!=-1) {
        dist = ldist+1;
        res = max(res, rh+dist);
    } else if(rdist!=-1) {
        dist = rdist+1;
        res = max(res, lh+dist);
    }
    
    return max(lh, rh)+1;
}
