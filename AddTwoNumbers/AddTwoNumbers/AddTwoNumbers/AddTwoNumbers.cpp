#include  <iostream>
#include <math.h>
using namespace std;

 struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {};
	
};
//class Solution 
//{
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
//	{
//		int num1 = 0, num2 = 0;
//		int n = 0;
//		int m = 0;
//		while (l1->next)
//		{
//			num1 = num1 + l1->val * (int)(pow(10, n) + 0.5);
//			l1 = l1->next;
//			n++;
//		}
//		while (l2->next)
//		{
//			num2 = num2 + l2->val *  (int)(pow(10, m) + 0.5);
//			l2 = l2->next;
//			m++;
//		}
//		int sum = num1 + num2;
//		cout << sum;
//		ListNode*ret = new ListNode(sum%10);
//		ListNode*tmp2 = ret;
//		sum /= 10;
//		while (sum)
//		{
//			//cout << sum % 10;
//			tmp2->next = new ListNode(sum % 10);
//			tmp2 = tmp2->next;
//			sum /= 10;
//		}
//		return ret;
//	}
//};

 class Solution
 {
 public:
	 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	 {
		 int tmpsum;
		 int tmpnext;
		 int num1;
		 int num2;
		 tmpsum = l1->val + l2->val;
		 l1 = l1->next;
		 l2 = l2->next;
		 tmpnext = tmpsum / 10;
		 ListNode*ret = new ListNode(tmpsum % 10);
		 ListNode*tmp2 = ret;
		 while ((l1 || l2||tmpnext))
		 {
			 if (l1)
				 num1 = l1 -> val;
			 else
				 num1 = 0;
			 if (l2)
				 num2 = l2->val;
			 else
				 num2 = 0;
			 tmpsum = num1 + num2 + tmpnext;
			 tmpnext = 0;
			 if(l1)
			 l1 = l1->next;
			 if(l2)
			 l2 = l2->next;
			 tmpnext = tmpsum / 10;
			 tmp2->next = new ListNode(tmpsum % 10);
			 tmp2 = tmp2->next;
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
	do {
		cout << tmp->val;
		tmp = tmp->next;
	} while (tmp->next);
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
	ShowList(ret);


	/*cout << pow(10,2);*/
	while (1);
}
