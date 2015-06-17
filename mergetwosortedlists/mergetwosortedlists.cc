ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(-1);
        dummy.next = l1;
        ListNode *prev = &dummy;
        while(l1 && l2) {
            if (l1->val < l2->val) {
                prev = l1;
                l1 = l1->next;
            } else {
                prev->next = l2;
                l2 = l2->next;
                prev = prev->next;
                prev->next = l1;
            }
        }
        if (l2) {
            prev->next = l2;
        }
        return dummy.next;
 }