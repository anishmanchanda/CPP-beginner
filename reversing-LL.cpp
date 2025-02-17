#include <iostream>
#include "linked-list.h"
using namespace std;

Node* reverseLL(Node* &head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL ){
        Node* next=curr->next;//similar to temporary variable
        curr->next=prev;  
        prev=curr;
        curr=next;
        //cout<<prev->val<<" "<<curr->val<<" "<<next->val<<endl; 
    }   
    Node* newhead=prev;
    return newhead;
}

int main(){
    Node* head=NULL;
    insertAtHead(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtTail(head,60);
    display(head);

    head=reverseLL(head);
    
    display(head);
    cout<<endl;
    return 0;
}