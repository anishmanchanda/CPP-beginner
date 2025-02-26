#include <iostream>
#include "linked-list.h"
using namespace std;
int middleElement(Node* head){
    Node* fast=head;
    Node* slow=head;
    int count=0;
    while(fast!=NULL){
        count++;
        if(count%2==0){
            slow=slow->next;
        }
        fast=fast->next;
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

    cout<<endl<<middleElement(head)<<endl;
    return 0;
}