#include  <iostream>
#include <math.h>
using namespace std;

 struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {};
	
};
class Solution 
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
	{
		int num1 = 0, num2 = 0;
		int n = 0;
		int m = 0;
		while (l1->next)
		{
			num1 = num1 + l1->val * (pow(10,n));
			l1 = l1->next;
			n++;
		}
		while (l2->next)
		{
			num2 = num2 + l2->val * (pow(10, m));
			l2 = l2->next;
			m++;
		}
		int sum = num1 + num2;
		cout << sum;
		ListNode*ret = new ListNode(sum%10);
		ListNode*tmp2 = ret;
		sum /= 10;
		while (sum)
		{
			//cout << sum % 10;
			tmp2->next = new ListNode(sum % 10);
			tmp2 = tmp2->next;
			sum /= 10;
		}
		return ret;
	}
};

ListNode* create_list()
{

	int tmp = 0;
	ListNode* tmpList;
	ListNode* head;
	cout << "in put the number" << endl;
	cin >> tmp;
	if (tmp > 0)
	{ 
		head = new ListNode(tmp);
		tmpList = head;
	}
	else
	{
		tmpList = NULL;
		head = NULL;
	}
		
	while (tmp != -1)
	{
		cin >> tmp;
		while (tmpList->next)
		{
			tmpList = tmpList->next;
		}
		tmpList->next = new ListNode(tmp);
	}
	return head;
}

void ShowList(ListNode* list)
{
	ListNode * tmp = list;
	while (1)
	{
		cout << tmp->val;
		tmp = tmp->next;
		if (!tmp->next)
			break;

	}
}
int main()
{
	ListNode* l1 = create_list();
	ListNode* l2 = create_list();
	ShowList(l1);
	cout << endl;
	ShowList(l2);
	cout << endl;
	Solution sol;
	ListNode * ret = sol.addTwoNumbers(l1,l2);
	cout << endl;
	ShowList(ret);
	


	/*cout << pow(10,2);*/
	while (1);
}
