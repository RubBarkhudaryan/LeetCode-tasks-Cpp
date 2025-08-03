#include <iostream>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head)
{
	ListNode* temp = head;

	while (temp && temp->next)
	{
		ListNode* tmp;
		if (temp->val == temp->next->val)
		{
			tmp = temp->next;
			temp->next = temp->next->next;
			delete tmp;
		}
		else
			temp = temp->next;
	}

	return head;
}

/*
int main()
{
	ListNode* list = new ListNode(1);
	ListNode* head = list;

	ListNode* item1 = new ListNode(2);
	head->next = item1;

	ListNode* item2 = new ListNode(2);
	item1->next = item2;

	ListNode* result = deleteDuplicates(head);

	while (result)
	{
		std::cout << result->val << " ";
		result = result->next;
	}
	std::cout << '\n';
}
*/