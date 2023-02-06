class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
  
  if (head->next == NULL) { 
    return NULL;
    }

  ListNode* First = head; 
  ListNode* Second = head; 


  for(int k = n; k>0; k--) { //Makes First be ahead of Second by nth full Nodes
    First = First->next; //moves First from curr node to the next node
    }
  
  while (First->next != NULL) { //since First is nth full nodes ahead, we want to loop till First is = to NULL
    Second = Second->next; 
    First = First->next;
    }
  
  Second->next = Second->next->next; //makes our Second-> next be equal to the node after second-next
  
  return head;
  }
};
