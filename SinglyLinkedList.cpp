#include <bits/stdc++.h>
using namespace std;
int charToNum(char a)
{
	return a - '0';
}
struct SinglyLinkedListNode
{
	int data;
	SinglyLinkedListNode *next;
	SinglyLinkedListNode()
	{
		data = 0;
		next = nullptr;
	}
	SinglyLinkedListNode(int n) : data(n), next(nullptr){};
};
void deleteNode(SinglyLinkedListNode *node)
{
	*node = *node->next;
}
SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *head, int position)
{
	if (head == nullptr)
	{
		return head;
	}
	if (position == 0)
	{
		head = head->next;
		return head;
	}
	SinglyLinkedListNode *newNode = new SinglyLinkedListNode;
	SinglyLinkedListNode *current = head;
	int count = 0;
	while (count != position - 1 && current)
	{
		current = current->next;
		count++;
	}
	newNode = current->next->next;
	current->next = newNode;
	return head;
}
bool detectCycle(SinglyLinkedListNode *head)
{
	SinglyLinkedListNode *fast = head, *slow = head;
	while (fast && slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return true;
	}
	return false;
}
SinglyLinkedListNode *buildSinglyLinkedList(int value)
{
	SinglyLinkedListNode *head = nullptr;
	SinglyLinkedListNode *tail = nullptr;
	for (int i = 0; i < value; i++)
	{
		int x;
		cin >> x;
		SinglyLinkedListNode *newNode = new SinglyLinkedListNode;
		newNode->data = x;
		newNode->next = nullptr;
		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}
	return head;
}
void reversePrint(SinglyLinkedListNode *head)
{
	if (head == nullptr)
		return;
	reversePrint(head->next);
	cout << head->data << endl;
}
SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{
	SinglyLinkedListNode *newNode = new SinglyLinkedListNode;
	newNode->data = data;
	newNode->next = nullptr;
	if (head == nullptr)
		return newNode;
	SinglyLinkedListNode *cur = head;
	while (cur)
	{
		cur = cur->next;
	}
	cur->next = newNode;
	return head;
}
SinglyLinkedListNode *mergeTwoLists(SinglyLinkedListNode *l1, SinglyLinkedListNode *l2)
{
	SinglyLinkedListNode *dummy = new SinglyLinkedListNode;
	SinglyLinkedListNode *tail = dummy;
	while (l1 && l2)
	{
		SinglyLinkedListNode *&currentNode = l1->data < l2->data ? l1 : l2;
		tail = tail->next = currentNode;
		currentNode = currentNode->next;
	}
	tail->next = l1 ? l1 : l2;
	return dummy->next;
}
SinglyLinkedListNode *deleteDuplicates(SinglyLinkedListNode *head)
{
	SinglyLinkedListNode *current = head;
	if (head == nullptr)
		return head;
	while (current->next)
	{
		if (current->data == current->next->data)
			*current = *current->next;
		else
			current = current->next;
	}
	return head;
}
SinglyLinkedListNode *printList(SinglyLinkedListNode *head)
{
	SinglyLinkedListNode *current = head;
	while (current)
	{
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
	return head;
}
ostream &operator<<(ostream &os, SinglyLinkedListNode *head)
{
	printList(head);
	return os;
}
int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
	SinglyLinkedListNode *current1 = head1;
	SinglyLinkedListNode *current2 = head2;
	while (current1 && current2)
	{
		current1 = current1->next;
		current2 = current2->next;
		if (!current1)
			current1 = head2;
		if (!current2)
			current2 = head1;
		if (current1 == current2)
			return current1->data;
	}
	return 0;
}
SinglyLinkedListNode *reverseList(SinglyLinkedListNode *head)
{
	SinglyLinkedListNode *prev = nullptr, *next = nullptr;
	while (head)
	{
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}
	return prev;
}
bool isPalindrome(SinglyLinkedListNode *head)
{
	SinglyLinkedListNode *slow = head, *fast = head;
	while (fast->next && fast->next->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	slow = reverseList(slow->next);
	while (slow)
	{
		if (slow->data != head->data)
			return false;
		head = head->next;
		slow = slow->next;
	}
	return true;
}
int getDecimalValue(SinglyLinkedListNode *head)
{
	string str = "";
	int sum = 0;
	while (head)
	{
		str += to_string(head->data);
		head = head->next;
	}
	for (int i = 0; i < str.size(); i++)
	{
		sum += (str[i] - 48) * pow(2, str.size() - i - 1);
	}
	return sum;
}
string Sum(string min, string max)
{
	int i = max.length() - 1;
	int diff = max.length() - min.length();
	for (int i = 0; i < diff; i++)
	{
		min.insert(0, 1, '0');
	}
	int j = min.length() - 1;
	string str;
	int temp = 0;
	while (j >= 0)
	{
		temp = temp + charToNum(max[i]) + charToNum(min[j]);
		str.insert(0, 1, (char)temp % 10 + 48);
		temp = temp / 10;
		i--;
		j--;
	}
	if (temp > 0)
	{
		str.insert(0, 1, (char)temp + 48);
	}
	return str;
}
SinglyLinkedListNode *addTwoNumbers(SinglyLinkedListNode *l1, SinglyLinkedListNode *l2)
{
	l1 = reverseList(l1);
	l2 = reverseList(l2);
	string str1, str2;
	while (l1)
	{
		str1 += to_string(l1->data);
		l1 = l1->next;
	}
	while (l2)
	{
		str2 += to_string(l2->data);
		l2 = l2->next;
	}
	string ans = str1.size() > str2.size() ? Sum(str2, str1) : Sum(str1, str2);
	SinglyLinkedListNode *head = nullptr;
	SinglyLinkedListNode *tail = nullptr;
	for (int i = 0; i < ans.size(); i++)
	{
		int x = ans[i] - 48;
		SinglyLinkedListNode *newNode = new SinglyLinkedListNode;
		newNode->data = x;
		newNode->next = nullptr;
		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}
	return reverseList(head);
}
SinglyLinkedListNode *deleteDuplicates(SinglyLinkedListNode *head, int time)
{
	if (!head || !head->next)
		return head;
	SinglyLinkedListNode dummy(0), *pre(&dummy), *cur(head);
	dummy.next = head;
	while (cur)
	{
		if (cur->next && cur->data == cur->next->data)
		{
			int cur_val = cur->data;
			while (cur && cur->data == cur_val)
				cur = cur->next;
			pre->next = cur;
		}
		else
		{
			pre = cur;
			cur = cur->next;
		}
	}
	return dummy.next;
}
int getSize(SinglyLinkedListNode *head)
{
	if (!head)
		return 0;
	if (!head->next)
		return 1;
	int count = 0;
	while (head)
	{
		head = head->next;
		count++;
	}
	return count;
}
SinglyLinkedListNode *rotateRight(SinglyLinkedListNode *head, int k)
{
	int size = getSize(head);

	for (int i = 0; i < k % size; i++)
	{
		SinglyLinkedListNode *prev = nullptr;
		SinglyLinkedListNode *current = head;
		while (current->next)
		{
			prev = current;
			current = current->next;
		}
		prev->next = nullptr;
		current->next = head;
		head = current;
	}
	return head;
}
SinglyLinkedListNode *reverseBetween(SinglyLinkedListNode *head, int m, int n)
{
	SinglyLinkedListNode *dummy(0), *pre = dummy, *cur;
	dummy->next = head;
	for (int i = 0; i < m - 1; i++)
	{
		pre = pre->next;
	}
	cur = pre->next;
	for (int i = 0; i < n - m; i++)
	{
		SinglyLinkedListNode *temp = pre->next;
		pre->next = cur->next;
		cur->next = cur->next->next;
		pre->next->next = temp;
	}
	return dummy->next;
}
int main()
{
	int a, b;
	cin >> a;
	SinglyLinkedListNode *l1 = buildSinglyLinkedList(a);
	auto l2 = reverseBetween(l1,2,4);
	cout << l2;

	system("pause");
}
