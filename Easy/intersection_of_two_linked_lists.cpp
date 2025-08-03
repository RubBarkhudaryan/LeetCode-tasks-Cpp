
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};

int	list_size(ListNode* list)
{
	int i = 0;

	while (list)
	{
		list = list->next;
		++i;
	}
	return (i);
}

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
{
	int lst1 = list_size(headA);
	int lst2 = list_size(headB);

	if (lst1 > lst2)
	{
		while (lst1 != lst2)
		{
			headA = headA->next;
			--lst1;
		}
	}
	else if (lst1 < lst2)
	{
		while (lst2 != lst1)
		{
			headB = headB->next;
			--lst2;
		}
	}

	while (headA && headB)
	{
		if (headA == headB)
			return headA;
		headA = headA->next;
		headB = headB->next;
	}

	return nullptr;
}
