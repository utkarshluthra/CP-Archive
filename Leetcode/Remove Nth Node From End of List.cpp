class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> order;
        for (ListNode* curr = head; curr != NULL; curr = curr->next) {
            order.push_back(curr);
        }
        if (order.size() == 1) {
            return NULL;
        }
        int remove = order.size() - n;
        if (remove - 1 < 0) {
            head = order[1];
        } else if (remove == order.size() - 1) {
            order[remove - 1]->next = NULL;
        } else {
            order[remove - 1]->next = order[remove + 1];
        }
        delete order[remove];
        return head;
    }
};