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
int getlength(ListNode* head)
{
    int cnt =0;
    while(head != NULL)
    {
        cnt++;
        head = head -> next;
    }
    return cnt;
}
public:
    ListNode* middleNode(ListNode* head) {
        int len = getlength(head);
        int ans = (len/2);
        ListNode* temp = head;
        while(ans--)
        {
            temp=temp->next;
        }
        return temp;
    }
};