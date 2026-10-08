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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* temp = head;
        while(temp != NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return true;
        if(head->next == NULL) return true;
        if(head ->next ->next == NULL && head->val != head->next->val){
            return false;
        }
        if(head ->next ->next == NULL && head->val == head->next->val){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
       
        ListNode* reversehead = reverse(slow->next);
        ListNode* temp = head;
        while(temp != NULL && reversehead != NULL){
            if(temp ->val != reversehead->val){
                return false;
            }
            temp= temp->next;
            reversehead = reversehead->next;
        }
        return true;
    }
};