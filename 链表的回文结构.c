#define _CRT_SECURE_NO_WARNINGS 1

bool chkPalindrome(ListNode* A) 
{
    ListNode* slow, * fast, * tail;//找中间节点
    ListNode* ver, * next, * tmp = NULL;//逆序
    
    slow = fast = A;
    if (A->next == NULL)
        return true;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    ver = slow;
    next = ver->next;
    ver->next = NULL;
    while (next)
    {
        if (next)
        {
            tmp = next->next;
        }
        next->next = ver;
        ver = next;
        next = tmp;
    }
    while (ver)
    {
        if (A->val != ver->val)
            return false;
        A = A->next;
        ver = ver->next;
    }
    return true;
}




