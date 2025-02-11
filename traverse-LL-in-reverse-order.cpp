#include<iostream>
#include "linked-list.h"
using namespace std;
//doing by recursion
void reverse(Node* head){
    if(head==NULL){
        return;
    }
    reverse(head->next);
    cout<<head->val<<"<-";
}
int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);

    reverse(head);
    cout<<endl;
    return 0;
}