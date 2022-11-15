#define _CRT_SECURE_NO_WARNINGS 1
struct ListNode* detectCycle(struct ListNode* head) {
	struct ListNode* fast, * slow, *p = NULL, *phead = NULL;
	fast = slow = head;
	if ((fast == NULL) || (fast->next == NULL))
		return false;
	while (fast)
	{
		if (fast->next)
			fast = fast->next->next;
		else
			return false;
		slow = slow->next;
		if (slow == fast)
		{
			p = slow;
			break;
		}
	}
	while (1)
	{
		p = p->next;
		phead = phead->next;
		if (phead == p)
			return p;
	}
	if(p == NULL)
		return false;
}
