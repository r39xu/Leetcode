ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode dummy(-1);
	dummy.next = &head;
	ListNode *l1 = dummy;
	ListNode *l2 = dummy;
	int step = n;
	while (step > 0) {
		l1=l1->next;
		step--;
	}
	while (l1!=NULL) {
		l1=l1->next;
		l2=l2->next;
	}
	l2->next = l2->nett->next;
	return dummy.next;
 }