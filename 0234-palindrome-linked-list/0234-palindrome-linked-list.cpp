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
    bool func(ListNode* &ptr,ListNode*curr){
        if(curr==NULL) return true;
        if(!func(ptr,curr->next)){
            return false;
        }

        
        if(curr->val==ptr->val) {
            ptr=ptr->next;
            return true;
        }

        return false;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* ptr=head;
        return func(ptr,head);
    }
};