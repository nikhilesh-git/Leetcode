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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* ptr=head;
        int n=0;
        while(ptr!=NULL){
            ptr=ptr->next;
            n++;
        }     
        k=k%n;
        if(k==0){
            return head;
        }
        ListNode* prev=head;
        ptr=head;
        for(int i=0;i<n-k;++i){
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=NULL;
        ListNode *temp=ptr;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=head;
        head=temp;
        return head;
    }
};