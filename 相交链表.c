#define _CRT_SECURE_NO_WARNINGS 1
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
	ListNode* p1, * p2;
	p1 = headA;
	p2 = headB;
	int na = 0, nb = 0;
	int n = 0;//²îÖµ
	while (p1)
	{
		p1 = p1->next;
		na++;
	}
	while (p2)
	{
		p2 = p2->next;
		nb++;
	}
	if (na > nb)
	{
		n = na - nb;
		while (n)
		{
			p1 = p1->next;
			n--;
		}
	}
	else
	{
		n = nb - na;
		while (n)
		{
			p2 = p2->next;
			n--;
		}
	}
	while (p1)
	{
		if (p1 == p2)
			return p1;
	}
	return NULL;
}
