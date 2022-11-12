#define _CRT_SECURE_NO_WARNINGS 1


struct ListNode* middleNode(struct ListNode* head) {
	//assert(head);
	struct ListNode* slow = head, * fast = head;
	while (fast && fast->next)//���ж�fast����ֹ��ָ������
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

