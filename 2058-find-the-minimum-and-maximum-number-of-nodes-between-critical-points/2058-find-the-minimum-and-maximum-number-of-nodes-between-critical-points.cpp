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
        ListNode* previousnode = head;
        ListNode* currentnode = head->next;

        int currentindex = 1;
        int firstindex = 0;
        int previousindex = 0;
        
        int minDistance = INT_MAX;
        while(currentnode->next != NULL){
            if((currentnode->val > previousnode->val && currentnode->val > currentnode->next->val )||
            (currentnode->val < previousnode->val && currentnode->val < currentnode->next->val )){
                if(firstindex == 0){
                    firstindex = currentindex;
                    previousindex = currentindex; 
                }
                else{    
                    minDistance = min(minDistance,currentindex - previousindex);
                    previousindex = currentindex;
                }
            }
            currentindex++;
            previousnode = currentnode;
            currentnode= currentnode->next;
        }

        if(minDistance == INT_MAX) return {-1,-1};

        int maxDistance = INT_MIN;
        if(minDistance != INT_MAX){
            maxDistance = previousindex - firstindex;
        }
        return {minDistance,maxDistance};
    }
};