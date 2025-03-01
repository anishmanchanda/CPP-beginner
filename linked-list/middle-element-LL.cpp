#include <iostream>
#include "linked-list.h"
using namespace std;
int middleElement(Node* head){
    Node* fast=head;
    Node* slow=head;
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->val;
}

int main(){
    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    display(head);

    cout<<endl<<"Middle element is: "<<middleElement(head)<<endl;
    return 0;
}