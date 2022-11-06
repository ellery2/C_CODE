#define _CRT_SECURE_NO_WARNINGS 1
#include "slist.h"

SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		exit(-1);
		perror(BuySLTNode);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

SLTNode* CreateSList(int n)
{
	int i = 0;
	SLTNode* phead = NULL, *ptail = NULL;
	for (i = 0; i < n; i++)
	{	
		SLTNode* newnode = BuySLTNode(i);
		if (phead == NULL)
		{
			phead = ptail = newnode;
		}
		else
		{
			ptail->next = newnode;
			ptail = newnode;
		}
	}
	return phead;
}

void SLTPrint(SLTNode* phead)
{
	while (phead)
	{
		printf("%d->", phead->data);
		phead = phead->next	;
	}
	printf("NULL\n");
}

void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
}

void SLTPopBack(SLTNode** pphead)
{
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	SLTNode* ptail = *pphead;
	while (ptail->next->next)
	{
		ptail = ptail->next;
	}
	free(ptail->next);
	ptail->next = NULL;
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	if (*pphead == NULL)
	{
		SLTNode* newnode = BuySLTNode(x);
		*pphead = newnode;
	}
	else
	{
		SLTNode* newnode = BuySLTNode(x);
		SLTNode* t = *pphead;
		*pphead = newnode;
		(*pphead)->next = t;
	}
}

void SLTPopFront(SLTNode** pphead)
{
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* t = (*pphead)->next;
		free(*pphead);
		*pphead = NULL;
		*pphead = t;
	}
}

SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	assert(phead);
	if (phead->next == NULL)
	{
		if (phead->data == x)
		{
			return phead;
		}
		else
		{
			printf("找不到\n");
			return;
		}
	}
	else
	{
		while (phead->next != NULL)
		{
			if (phead->data == x)
			{
				return phead;
			}
			phead = phead->next;
		}
		printf("找不到\n");
		return;
	}
}

void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SListEraseAfter(SLTNode* pos)
{
	assert(pos);
	SLTNode* newnext = pos->next->next;
	free(pos->next);
	pos->next = newnext;
}

void SListDestroy(SLTNode* phead)
{
	SLTNode* node = phead->next;
	while (phead)
	{
		free(phead);
		phead = node;
		if(node)
			node = node->next;
	}
}