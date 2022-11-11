#define _CRT_SECURE_NO_WARNINGS 1
truct ListNode* reverseList(struct ListNode* head) {
	if (head == NULL)
		return head;
	if (head->next == NULL)
		return head;
	struct ListNode* pre = head, * nextnode = head->next, * tmp = NULL;
	pre->next = NULL;
	tmp = nextnode->next;
	nextnode->next = pre;
	pre = nextnode;
	nextnode = tmp;
	while (nextnode)
	{
		tmp = nextnode->next;
		nextnode->next = pre;
		if (pre != NULL)
			pre = nextnode;
		nextnode = tmp;
	}
	return pre;
}
