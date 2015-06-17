ListNode* swapPairs(ListNode* head) {
	ListNode dummy(-1);
	dummy.next = head;
	ListNode *p = &dummy;
	while(p->next && p->next->next) {
		ListNode *tmp = p->next;
		tmp->next = p->next->next->next;
		p->next = p->next->next;
		p->next->next = tmp;
		p = p->next->next;
	}
	return dummy.next;
}