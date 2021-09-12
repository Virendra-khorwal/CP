/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head){
    ListNode* slow,*fast;
  
        //if linked list is empty it returns true as its entirely null.
  if(head==NULL)
  return false;
        
  slow=head;
  fast=head->next;
  
  while(true)
  { //fast ptr traverses quickly so If its not circular then it reaches or points to null.
    if(fast==NULL||fast->next==NULL)
    {
    return false;
    }
    //when circular fast meets or points to slow pointer while traversing
    else if(slow==fast||fast->next==slow)
    {
    return true;
    }
    //for moving forward through linked list.
    else
    {
    slow=slow->next;
    //fast traverses way ahead so it distinguishes loops out of circular list.
    fast=fast->next->next;
    }
  }      
    }
};

/* simple approach */
bool isCircular(node *head){
 node *temp=head;
 while(temp!=NULL)
 { //if temp points to head then it has completed a circle,thus a circular linked list.
    if(temp->next==head)
        return true;
    temp=temp->next;
}
