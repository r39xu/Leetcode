#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

 	int carry = 0;
 	ListNode dummy(-1);
 	ListNode *cur = &dummy;
 	while(l1!=NULL || l2!=NULL) {

 		int num1 = l1==NULL? 0 : l1->val;
 		int num2 = l2==NULL? 0 : l2->val;

 		int sum = num1 + num2 + carry;
 		carry = sum/10;
 		int val = sum%10;

 		ListNode *newNode = new ListNode(val);
 		cur->next = newNode;
 		cur = cur->next;
 		l1 = l1==NULL? NULL : l1->next;
 		l2 = l2==NULL? NULL : l2->next;
 	}

 	if (carry)
 	{
 		ListNode *newNode = new ListNode(1);
 		cur->next = newNode;

 	}

 	return dummy.next;
 }


 int main() {

 }