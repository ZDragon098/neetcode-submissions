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
    ListNode* reverseList(ListNode* head) {
        ListNode *newNode = NULL;
        ListNode *cur = head;
        while(cur){
            pushFront(newNode,cur->val);
            cur = cur->next;
        }
        return newNode;
    }
private:
    ListNode *makeNode(int x){
        ListNode *newNode = new ListNode;
        newNode->val = x;
        newNode->next = NULL;
        return newNode;
    }
    void pushFront(ListNode *&head, int x){
        if(head == NULL){
            head = makeNode(x);
            return;
        }
        ListNode *cur = head;
        ListNode *newNode = makeNode(x);
        newNode->next = cur;
        head = newNode;
    }
};
