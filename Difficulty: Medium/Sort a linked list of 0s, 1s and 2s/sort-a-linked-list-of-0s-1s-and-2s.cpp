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
        int cnt1=0, cnt2=0, cnt3=0;
        
        Node* temp = head;
        
        while(temp!=NULL ){
            if(temp->data== 0){cnt1++; }
           else if (temp->data== 1){cnt2++;}
            else if(temp->data== 2){cnt3++;}
            temp=temp->next;
        }
        
        temp = head;
        while(temp!=NULL ){
            if(cnt1>0){
                temp->data = 0;
                cnt1--;
                
            }
            else if(cnt2>0){
                temp->data = 1;
                cnt2--;
                
            }
            else if(cnt3>0){
                temp->data=2;
                cnt3--;
                
                
            }
            temp= temp->next;
            
        }
        return head;
        
        
    }
};