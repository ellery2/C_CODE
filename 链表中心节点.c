#define _CRT_SECURE_NO_WARNINGS 1


struct ListNode* middleNode(struct ListNode* head) {
	//assert(head);
	struct ListNode* slow = head, * fast = head;
	while (fast && fast->next)//先判断fast，防止空指针引用
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

