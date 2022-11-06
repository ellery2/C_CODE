#define _CRT_SECURE_NO_WARNINGS 1


struct ListNode* removeElements(struct ListNode* head, int val) {
	struct ListNode* guard, * tail, * node;
	tail = guard = (struct ListNode*)malloc(sizeof(struct ListNode));
	guard->next = NULL;
	while (head)
	{
		if (head->val != val)
		{
			tail->next = head;
			tail = tail->next;
			head = head->next;
		}
		else
		{
			node = head->next;
			free(head);
			head = node;
		}
	}
	tail->next = NULL;
	head = guard->next;
	free(guard);
	return head;
}

