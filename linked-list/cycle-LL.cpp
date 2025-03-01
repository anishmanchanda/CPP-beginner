//INCOMPLETE
#include <iostream>
#include "linked-list.h"
using namespace std;
bool cycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    if(!head){
        return false;ll
    }
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}
int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    display(head);
    head->next->next->next->next->next->next->next=
    return 0;
}