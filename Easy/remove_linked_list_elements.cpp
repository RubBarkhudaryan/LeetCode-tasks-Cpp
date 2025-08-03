#include <iostream>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};


ListNode* removeElements(ListNode* head, int val)
{
	if (!head)
		return nullptr;

	ListNode* temp;
	ListNode* prev = nullptr;
	ListNode* current = head;

	while (current && current->val == val)
	{
		temp = current;
		current = current->next;
		delete temp;
	}

	if (!current)
		return (nullptr);

	prev = current;
	current = current->next;

	while (current)
	{
		if (current->val == val)
		{
			temp = current;
			prev->next = current->next;
			current = current->next;
			delete temp;
		}
		else
		{
			current = current->next;
			prev = prev->next;
		}
	}

	return head;
}

int main() {
	// Create individual nodes (values: 5, 1, 3, 1, 7, 1, 9)
	ListNode* n7 = new ListNode(6);      // duplicate value
	ListNode* n6 = new ListNode(5, n7);
	ListNode* n5 = new ListNode(4, n6);
	ListNode* n4 = new ListNode(3, n5);
	ListNode* n3 = new ListNode(6, n4);  // duplicate value
	ListNode* n2 = new ListNode(2, n3);
	ListNode* n1 = new ListNode(1, n2);

	// Head of the list
	ListNode* head = n1;

	// Print the list
	ListNode* current = head;
	while (current)
	{
		std::cout << current->val << " -> ";
		current = current->next;
	}
	std::cout << "NULL" << std::endl;

	ListNode* new_list = removeElements(head, 6);

	current = new_list;
	while (current)
	{
		std::cout << current->val << " -> ";
		current = current->next;
	}
	std::cout << "NULL" << std::endl;

	return 0;
}