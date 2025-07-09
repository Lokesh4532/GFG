/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
       Node* zeroh = new Node(-1);
       Node* zero = zeroh;
       Node* oneh = new Node(-1);
       Node* one = oneh;
       Node* twoh = new Node(-1);
       Node* two = twoh;
       
       Node* temp = head;
       
       while(temp!=NULL){
           if(temp->data == 1){
               one->next = temp;
               one=one->next;
           }
           else if(temp->data ==0){
               zero->next=temp;
               zero = zero->next;
           }
           else if(temp->data == 2){
               two->next = temp;
               two=two->next;
           }
           temp=temp->next;
       }
       two->next=NULL;
        one->next = twoh->next;
       zero->next = oneh->next;
     
       
       return zeroh->next;
       
        
        
    }
};