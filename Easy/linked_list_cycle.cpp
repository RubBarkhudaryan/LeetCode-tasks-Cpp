#include <iostream>


struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};



bool hasCycle(ListNode* head)
{
	ListNode* ptr1 = head;
	ListNode* ptr2 = head;

	while (ptr1 && ptr1->next)
	{
		ptr1 = ptr1->next->next;
		ptr2 = ptr2->next;
		if (ptr1 == ptr2)
			return true;
	}
	return false;
}
