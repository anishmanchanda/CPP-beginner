#include<iostream>
#include "linked-list.h" //This pastes all contents of the file
using namespace std;

void UpdateAtPos(Node* &head,int pos,int newval){
    Node* temp=head;//passing by ref cuz modify
    int idx=0;
    while(temp!=NULL){
        if(idx==pos){
            temp->val=newval;
        }
        temp=temp->next;
        idx+=1;
    }
}
int main(){
    Node* head=NULL;
    insertAtHead(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    display(head);

    UpdateAtPos(head,1,25);
    display(head);
    cout<<endl;

    return 0;



}