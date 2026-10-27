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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || left == right) {
            return head;
        }
        int cnt1 = 1;
        ListNode* temp = head;
        ListNode* beforeleft = NULL;

        while(temp != NULL && cnt1 < left){
            beforeleft = temp;
            temp = temp->next;
            cnt1++;
        }
        if (temp == NULL) return head; //

        ListNode* leftt = temp;
        while(temp != NULL && cnt1 < right){
            temp=temp->next;
            cnt1++;
        }

        if (temp == NULL) return head;//
        
        ListNode* rightt = temp;
        ListNode* afterright = rightt->next;//

        ListNode* prev = afterright; //
        ListNode* temp1 = leftt;

        while(temp1 != afterright && temp1 != NULL){
            ListNode* front = temp1->next;
            temp1->next = prev;
            prev=temp1;
            temp1 = front;
            }
        if(beforeleft != NULL){
            beforeleft->next =rightt;
        }
        else{
            head = rightt;
        }
        leftt ->next = afterright;    
        return head;
    }
};