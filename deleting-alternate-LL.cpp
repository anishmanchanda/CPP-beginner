#include <iostream>
#include "linked-list.h"
using namespace std;
//delete every alternate starting from second element
void deletingAlternate(Node* &head){
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        Node* temp2=temp->next;
        temp->next=temp2->next;
        //temp->next=temp2;
        delete temp2;
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    insertAtHead(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtTail(head,60);
    insertAtTail(head,70);
    insertAtTail(head,80);
    insertAtTail(head,90);
    insertAtTail(head,100);
    insertAtTail(head,110);
    insertAtTail(head,120);
    insertAtTail(head,130);
    display(head);

    deletingAlternate(head);
    display(head);
    cout<<endl;
    return 0;
}