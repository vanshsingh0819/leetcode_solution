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

    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next == NULL) return {-1,-1};
        ListNode* node = head;
        int maxDistance = 0;
        ListNode* firstnode = NULL;
        ListNode* lastnode = NULL;
        while(node->next->next != NULL){
            if(node->next->val < node->val && node->next->val < node->next->next->val ||
               node->next->val > node->val && node->next->val > node->next->next->val){
                firstnode = node->next;
                break;
            }
            node= node->next;
        }
        node = head;
        while(node->next->next != NULL){
            if(node->next->val < node->val && node->next->val < node->next->next->val ||
               node->next->val > node->val && node->next->val > node->next->next->val){
                lastnode = node->next;
            }
            node= node->next;
        }
        if(firstnode == NULL || lastnode == NULL || firstnode == lastnode) return{-1,-1};
        while(firstnode != NULL){
            if(firstnode == lastnode) break;
            maxDistance++;
            firstnode=firstnode->next;
        }



        node = head; 
        int minDistance =INT_MAX;
        ListNode* currentnode = NULL;
        ListNode* nextnode = NULL;
        while(node->next->next != NULL){
            if(currentnode != NULL && node->next->val < node->val && node->next->val < node->next->next->val ||
               currentnode != NULL && node->next->val > node->val && node->next->val > node->next->next->val){
                nextnode = node->next;
            }
            else if(node->next->val < node->val && node->next->val < node->next->next->val ||
               node->next->val > node->val && node->next->val > node->next->next->val){
                currentnode = node->next;
            }


            if(currentnode != NULL && nextnode != NULL){
            int mini = 0;
            while(currentnode != NULL){
            if(currentnode == nextnode) break;
            mini++;
            currentnode = currentnode->next;
            }
            minDistance = min(mini,minDistance);
            currentnode = nextnode;
            nextnode = NULL;         
        }


        node= node->next;
        }
        return {minDistance, maxDistance};
    }
};