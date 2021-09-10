/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* curr = head;
		ListNode* prev = NULL;
		ListNode* nextNode = NULL;

		while(curr){

			// saving next pointer of the current node to nextNode
			nextNode = curr -> next;

			// pointing the current node backwards to previous node 
			curr -> next = prev;

			// advancing prev and curr
			prev = curr;
			curr = nextNode;
		}
		// returning prev which is the head of reversed linked list 
		return prev;
	}
};
