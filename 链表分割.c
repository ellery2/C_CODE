#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀû��Cѡ����ʹ��cppģ��дC
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        ListNode* pre, * small, * big, *bighead, *smallhead;
        pre = pHead;
        //�����ڱ�λͷ���
        smallhead = small = (ListNode*)malloc(sizeof(ListNode));
        bighead = big = (ListNode*)malloc(sizeof(ListNode));
        while (pre)
        {
            if (pre->val < x)
            {
                small->next = pre;
                pre = pre->next;
                small = small->next;
            }
            else
            {   
                big->next = pre;
                pre = pre->next;
                big = big->next;
            }
        }
        small->next = bighead->next;
        big->next = NULL;
        phead = smallhead->next;
        free(bighead);
        free(smallhead);
        bighead = smallhead = NULL;
        return phead;
    }
};
