class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> v,n;
        ListNode* curr=head;
        while(curr!=nullptr){          
            v.push_back(curr->val);
            curr=curr->next;
        }
        for(int i=0;i<v.size();i++){  
            if(x>v[i]){
                n.push_back(v[i]);
            }
        }
        for(int i=0;i<v.size();i++){  
            if(x<=v[i]){
                n.push_back(v[i]);
            }
        }
        ListNode* root=nullptr;
        for(int i=0;i<n.size();i++){
            if(root==nullptr){
                root=new ListNode(n[i]);
                continue;
            }
            ListNode* curr=root;
            while(curr->next!=nullptr){
                curr=curr->next;
            }
            curr->next=new ListNode(n[i]);
        }
        return root;
    }
};
