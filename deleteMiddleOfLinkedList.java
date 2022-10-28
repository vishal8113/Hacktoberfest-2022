class Solution {
    public ListNode deleteMiddle(ListNode head) {
        ListNode fast=head;
        ListNode slow=head;
        ListNode temp=null;
        
        while(fast!=null && fast.next!=null){
            temp=slow;
            slow=slow.next;
            fast=fast.next.next;
        }
        if(temp==null) return null;
        temp.next=slow.next;
        return head;
    }
}