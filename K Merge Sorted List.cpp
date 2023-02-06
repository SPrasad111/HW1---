class Solution {
public:
ListNode* mergeKLists(vector<ListNode*>& lists) {
  }
ListNode* MergeList(ListNode* listOne, ListNode* listTwo){
  if(listOne == NULL && listTwo == NULL){
    return NULL;
  }

  if(listOne == NULL){
    return listTwo; //if list one is empty, listTwo will be the only list available
  }

  if(listTwo == NULL){
    return listOne; 
  }

  //Edge Cases ^^^^^^^

  ListNode* Head == NULL;
  ListNode* Curr == Head;
  Head == listOne;

  while (listOne !== NULL && listTwo != NULL){ //makes comparison between the values in the lists
    if(listOne -> val <= listTwo->val){
      Curr->next = listOne;
      listOne = listOne->next;
    } else{
      Curr->next = listTwo;
      listTwo = listTwo -> next;
      
    }
    Curr = Curr -> next;
    
  }
  return Head;
  
  }

};