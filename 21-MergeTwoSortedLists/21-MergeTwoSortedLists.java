// Last updated: 7/27/2026, 3:02:45 PM
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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ArrayList <Integer> arr= new ArrayList <Integer>();

        ListNode head= new ListNode();
        ListNode temp= head;

        while(list1!=null){
            arr.add(list1.val);
            list1= list1.next;
        }

        while(list2!=null){
            arr.add(list2.val);
            list2=list2.next;

        }

        Collections.sort(arr);

        for(int i=0;i<arr.size();i++){
            
            temp.next=new ListNode(arr.get(i));
            temp=temp.next;
           
        }

        return head.next;

        

    }
}