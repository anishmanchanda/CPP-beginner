#include <iostream>
#include "linked-list.h"
using namespace std;
//to delete the kth node from a linked list ONLY TRAVERSE LIST ONCE
void deleteKthNode(Node* &head,int k){
    Node* temp1= head;
    Node* temp2= head;
    while(k>0){
        temp2=temp2->next;
        k--;
    }
    while(temp2->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    temp2=temp1->next;
    temp1->next=temp2->next;
}
int main(){
    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);
    display(head);

    deleteKthNode(head,2);
    display(head);
    
    return 0;
}