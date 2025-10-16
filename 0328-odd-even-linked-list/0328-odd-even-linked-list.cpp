/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL ) return head;
        ListNode*ptr1=head,*head2=head->next,*ptr2=head->next,*prev;
        while(ptr1!=NULL && ptr2!=NULL){
            ptr1->next=ptr2->next;
            prev=ptr1;
            ptr1=ptr1->next;
            if(ptr1!=NULL){
                ptr2->next=ptr1->next;;
                ptr2=ptr2->next;
            }
        }
        if(ptr1==NULL){
            prev->next=head2;
        }
        else{
            ptr1->next=head2;
        }
        
        return head;
    }
};