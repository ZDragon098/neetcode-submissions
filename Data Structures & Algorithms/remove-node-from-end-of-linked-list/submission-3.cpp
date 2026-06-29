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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> nodes;
        ListNode *cur = head;
        while(cur){
            nodes.push_back(cur);
            //if(cur->next == NULL) break;
            cur = cur->next;
        }
        cur = head;
        int x = nodes.size() - n;
         
        if(x == 0){
            head = head->next;
        }
        else if(n == 1){
            nodes[x-1]->next = NULL;
        }
        else{
            nodes[x-1]->next = nodes[x+1];
        }

        return head;
    }
};
