#define _CRT_SECURE_NO_WARNINGS 1
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
	struct ListNode* p1 = list1, * p2 = list2, * pre = NULL, * head = NULL;
	head = pre = (struct ListNode*)malloc(sizeof(struct ListNode));
	if (p1 == NULL)
		return p2;
	if (p2 == NULL)
		return p1;
	while (p1 && p2)
	{
		if (p1->val < p2->val)
		{
			pre->next = p1;
			pre = p1;
			p1 = p1->next;
		}
		else
		{
			pre->next = p2;
			pre = p2;
			p2 = p2->next;
		}
		if (p1 == NULL)
		{
			pre->next = p2;
		}
		if (p2 == NULL)
		{
			pre->next = p1;
		}
	}
	pre = head;
	head = head->next;
	free(pre);
	pre = NULL;
	return head;
}