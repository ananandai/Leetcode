#include<iostream>
using namespace std;

// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

		ListNode* NowNode = new ListNode(0);
		ListNode* head = NowNode;
		while ((l1 != NULL) && (l2 != NULL))
		{
			if (l1->val <= l2->val)
			{
				NowNode->next = l1;
				NowNode = NowNode->next;
				l1 = l1->next;
			}
			else
			{
				NowNode->next = l2;
				NowNode = NowNode->next;
				l2 = l2->next;
			}
		}
		if (l1 == NULL)
			NowNode->next = l2;
		if (l2 == NULL)
			NowNode->next = l1;
		return head->next;
	}
};