/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode temp = head;
        ListNode prevLast = null;

        while(temp!=null){
            ListNode kth = temp;
            int count = 1;

            while(count<k && kth!=null){
                kth = kth.next;
                count++;
            }

            if(kth==null || count<k){
                if(prevLast!=null){
                    prevLast.next = temp;
                }
                break;
            }
            ListNode nextNode = kth.next;
            ListNode prev = nextNode;
            ListNode curr = temp;

            while(curr!= nextNode){
                ListNode next = curr.next;
                curr.next = prev;
                prev = curr;
                curr = next;
            }
            if(temp==head){
                head = kth;
            } else {
                prevLast.next = kth;
            }
            prevLast = temp;
            temp = nextNode;
        }
        return head;
    }
}