#include <iostream>
#include "linked-list.h"
using namespace std;
//delete every alternate starting from second element
void deletingAlternate(Node* &head){
    Node* temp=head;

    while(temp->next!=NULL){
        Node* temp2=temp->next->next;
        temp->next=temp2;
        temp=temp->next;
    }

}
int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);

    deletingAlternate(head);
    display(head);
    cout<<endl;
    return 0;
}