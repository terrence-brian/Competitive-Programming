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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {           
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        int sum = l1->val + l2->val; //define sum of linked list nodes
        ListNode* l3 = new ListNode(0); //new node for solution
        l3->next = addTwoNumbers(l1->next, l2->next); 
        if(sum <= 9) l3->val = sum; //addition without carry
        //addition with carry
        else {
            l3->val = sum - 10;
            ListNode* carry = new ListNode(1);
            l3->next = addTwoNumbers(carry, l3->next);
        }
        return l3;
    }
};
