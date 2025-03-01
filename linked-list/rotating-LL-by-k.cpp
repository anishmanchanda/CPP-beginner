#include <iostream>
#include "linked-list.h"
using namespace std;
Node* rotateByk(Node* &head,int k){
    int n=0;
    Node* tail=head;
    while(tail->next){
        n++;
        tail=tail->next;
    }//tail is last node
    n++;
    k=k%n;
    if(k==0){
        return head;
    }  
    tail->next=head;
    Node* temp=head;
    for(int i=0;i<n-k-1;i++){
        temp=temp->next;
    }
    Node* newhead=temp->next;
    temp->next=NULL;
    return newhead;
}

int main(){
    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    display(head);
    display(rotateByk(head,2));
    cout<<endl;

}