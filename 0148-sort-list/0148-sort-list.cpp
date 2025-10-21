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
    ListNode* merge(ListNode *left,ListNode *right){
        ListNode *head=new ListNode(0);
        ListNode*ptr=head;
        while(left!=NULL && right!=NULL){
            if(left->val<right->val){
                ptr->next=left;
                left=left->next;
            }
            else{
                ptr->next=right;
                right=right->next;
            }
            ptr=ptr->next;
        }
        if(left==NULL){
            ptr->next=right;
        }
        else{
            ptr->next=left;
        }
        return head->next;
    }
    ListNode * sort(ListNode * head){
        if(head==NULL || head->next==NULL) return head;
        ListNode *prevslow,*slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            prevslow=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prevslow->next=NULL;
        ListNode* left=sort(head);
        ListNode* right=sort(slow);
        ListNode*res=merge(left,right);
        return res;
    }
    ListNode* sortList(ListNode* head) {
        return sort(head);
    }
};