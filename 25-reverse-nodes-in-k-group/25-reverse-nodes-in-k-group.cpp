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
    int length(ListNode * node)
    {
        int count=0;
        while(node)
        {
            count++;
            node=node->next;
        }
        return count;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(length(head) < k)
            return head;
        //Base call:
        if(head == NULL)
        {
            return NULL;
        }
        //Step1:Reverse first k nodes
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;
        while( curr != NULL && count < k)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        //Step2: Recursion
        if(next != NULL)
        {
            head->next = reverseKGroup(next,k);
        }
        //Step4: Return head of reversed list
        return prev;
    }
};