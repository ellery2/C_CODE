#define _CRT_SECURE_NO_WARNINGS 1
bool hasCycle(struct ListNode* head) {
	struct ListNode* fast, * slow;
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
			return true;
	}
	return false;
}
