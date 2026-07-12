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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<ListNode*> v;
        ListNode* curr = head;
        while(curr){
            v.push_back(curr);
            curr = curr->next;
        }

        ListNode *dummy = new ListNode(0,head);
        for(int i = 0; i < v.size(); i+=k){
            if(i + k <= v.size()){
                reverse(v.begin()+i,v.begin()+i+k);
            }
        }

        for(int i = 0; i < v.size()-1;i++){
            v[i]->next = v[i+1];
        }
        v.back()->next = NULL;
        return v[0];

    }
};
