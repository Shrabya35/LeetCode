class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *dummy = new ListNode(0, head);
        ListNode *prev = dummy;
        ListNode *curr = head;

        while (curr && curr->next)
        {
            ListNode *nextPair = curr->next->next;
            ListNode *second = curr->next;
            second->next = curr;
            curr->next = nextPair;
            prev->next = second;
            prev = curr;
            curr = nextPair;
        }

        return dummy->next;
    }
};
