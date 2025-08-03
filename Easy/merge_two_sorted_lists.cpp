#include <iostream>

struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
	if (!list1)
		return list2;
	if (!list2)
		return list1;

	ListNode* head = nullptr;
	ListNode* tail = nullptr;

	while (list1 && list2)
	{
		ListNode* node;

		if (list1->val <= list2->val)
		{
			node = list1;
			list1 = list1->next;
		}
		else
		{
			node = list2;
			list2 = list2->next;
		}
		if (!head)
		{
			head = node;
			tail = node;
		}
		else
		{
			tail->next = node;
			tail = tail->next;
		}
	}

	while (list1)
	{
		tail->next = list1;
		tail = tail->next;
		list1 = list1->next;
	}
	while (list2)
	{
		tail->next = list2;
		tail = tail->next;
		list2 = list2->next;
	}

	return head;
}

/*
int main()
{
	ListNode* list = new ListNode(0);
	ListNode* head = list;

	for (int i = 1; i <= 5; ++i)
	{
		list->next = new ListNode(i * 2); // even numbers
		list = list->next;
	}

	ListNode* list2 = new ListNode(1);
	ListNode* head2 = list2;
	for (int i = 1; i <= 5; ++i)
	{
		list2->next = new ListNode(i * 2 - 1); // odd numbers
		list2 = list2->next;
	}

	ListNode* result = mergeTwoLists(head, head2);

	while (result)
	{
		std::cout << result->val << " ";
		result = result->next;
	}
	std::cout << '\n';
}
*/