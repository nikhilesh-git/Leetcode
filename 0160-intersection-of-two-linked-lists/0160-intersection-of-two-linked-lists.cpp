/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0;
        ListNode* ptr1=headA,*ptr2=headB;
        while(ptr1!=NULL || ptr2!=NULL){
            if(ptr1!=NULL){
                l1++;
                ptr1=ptr1->next;
            }
            if(ptr2!=NULL){
                l2++;
                ptr2=ptr2->next;
            }
        }
        ptr1=headA,ptr2=headB;
        if(l1<l2){
            for(int i=l1;i<l2;++i){
                ptr2=ptr2->next;
            }
        }
        else{
            for(int i=l2;i<l1;++i){
                ptr1=ptr1->next;
            }
        }
        while(ptr1!=ptr2){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return ptr1;
    }
};