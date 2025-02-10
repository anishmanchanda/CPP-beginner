#include <iostream>
#include "linked-list.h"
using namespace std;
void DeleteKthElement(Node* &head,int pos){
    Node* temp=head;
    int idx=0;
    while(temp!=NULL){
        if(pos==0){
            head=head->next;
            break;
        }
        if(idx==pos-1){
            Node* temp2=temp->next->next;
            //temp2=temp2->next;
            temp->next=temp2;
            break;

        }
        temp=temp->next;
        idx++;
    }
}
int main(){
    Node* head=NULL;
    insertAtHead(head,100);
    insertAtTail(head,200);
    insertAtTail(head,300);
    insertAtTail(head,400);
    insertAtTail(head,500);
    insertAtTail(head,600);
    display(head);
    DeleteKthElement(head,2);
    display(head);
    cout<<endl;
    
    return 0;
}