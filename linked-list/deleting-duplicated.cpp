#include <iostream>
#include "linked-list.h"
using namespace std;
//linked list is sorted
void deleteDuplicates(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        while(temp->next!=NULL &&temp->val==temp->next->val){
            Node* temp2=temp->next;
            temp->next=temp2->next;
            delete temp2;
            //temp=temp->next;
        }
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,2);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,3);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,4);
    insertAtTail(head,4);
    insertAtTail(head,4);
    display(head);
    
    deleteDuplicates(head);
    display(head);
    cout<<endl;
    return 0;
}
