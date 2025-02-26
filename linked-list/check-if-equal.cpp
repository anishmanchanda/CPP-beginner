#include <iostream>
#include "linked-list.h"
using namespace std;
bool checkIfEqual(Node* head1,Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->val!=temp2->val){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return (temp1==NULL && temp2==NULL);
}
int main(){
    Node* head1 = NULL;
    insertAtHead(head1, 10);
    insertAtTail(head1, 20);
    insertAtTail(head1, 30);
    insertAtTail(head1, 40);
    insertAtTail(head1, 50);
    //insertAtTail(head1, 60);
    
    Node* head2 = NULL;
    insertAtHead(head2, 10);
    insertAtTail(head2, 20);
    insertAtTail(head2, 30);
    insertAtTail(head2, 40);
    insertAtTail(head2, 50);
    insertAtTail(head2, 60);

    display(head1);
    display(head2);
    cout<<endl<<checkIfEqual(head1,head2)<<endl<<endl;
    return 0;
}