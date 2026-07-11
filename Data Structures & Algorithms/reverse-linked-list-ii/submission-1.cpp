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
    bool cmp(ListNode *a, ListNode *b){
        return a->val > b->val;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<ListNode*> v;
        ListNode* curr = head;
        while(curr){
            v.push_back(curr);
            curr = curr->next;
        }
        reverse(v.begin() + (left - 1), v.begin() + right);
        
        for(int i = 0; i < v.size() - 1; i++){
            v[i]->next = v[i+1];
        }
        v.back()->next = NULL;

        return v[0];
    }
private:
    
};