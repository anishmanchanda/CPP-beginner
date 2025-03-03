//INCOMPLETE
#include <iostream>
#include "linked-list.h"
using namespace std;
Node* swapAdjacentNodes(Node* &head){
    Node* curr=head;
    Node* newhead=curr->next;
    Node* prevnext=curr->next;
    while(curr->next->next!=NULL && curr!=NULL){
        Node* nextJump=curr->next->next;

        prevnext= curr->next;
        prevnext->next=curr;//now next is prev
        //cout<<curr->val<<" ";
        //cout<<prevnext->val<<endl<<endl;
    
        curr->next=nextJump->next;
        
        curr=nextJump;
    }
    //cout<<"......"<<endl;
    //cout<<curr->val<<" "<<prevnext->val<<" "<<endl;
    prevnext->next->next->next=curr;
    curr->next=NULL;

    return newhead;
}
int main(){
    Node* head = NULL;
    insertAtHead(head, 1); 
    insertAtTail(head, 2);
    insertAtTail(head, 3);  
    insertAtTail(head, 4);  
    insertAtTail(head, 5);  
    insertAtTail(head, 6); 
    insertAtTail(head, 7); 
    insertAtTail(head, 8); 
    insertAtTail(head, 9); 
    insertAtTail(head, 10); 
    insertAtTail(head, 11);
    insertAtTail(head, 12);
    insertAtTail(head, 13);
    insertAtTail(head, 14);

    display(head);

    display(swapAdjacentNodes(head));
    cout<<endl;
    return 0;
}