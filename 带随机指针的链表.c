#define _CRT_SECURE_NO_WARNINGS 1
struct Node* copyRandomList(struct Node* head) {
	if (head == NULL)
		return NULL;
	struct Node* pre = head, * next = head->next, * phead = NULL, * ver = NULL;
	while (pre)
	{
		struct Node* node = (struct Node*)malloc(sizeof(struct Node));
		node->val = pre->val;
		pre->next = node;
		node->next = next;
		pre = next;
		if (next)
			next = next->next;
	}
	pre = head;
	struct Node* clone = head->next;
	while (pre)
	{
		if (pre->random == NULL)
		{
			clone->random = NULL;
		}
		else
		{
			clone->random = pre->random->next;
		}
		if (clone->next)
			clone = clone->next->next;
		pre = pre->next->next;
	}
	pre = head;
	phead = clone = pre->next;
	next = clone->next;
	while (pre)
	{
		pre->next = next;
		if (ver == NULL)
		{
			ver = clone;
		}
		else
		{
			ver->next = clone;
			ver = clone;
		}
		pre = next;
		if (next)
		{
			next = next->next->next;
			clone = pre->next;
		}
	}
	return phead;
}

