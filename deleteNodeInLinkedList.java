class Solution {
    public void deleteNode(ListNode node) {
        ListNode temp=node;
        ListNode cur=null;
        while(temp.next!=null){
            temp.val=temp.next.val;
            cur=temp;
            temp=temp.next;
        }
        
        cur.next=null;
    }
}