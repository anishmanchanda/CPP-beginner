#include<iostream>
#include "linked-list.h"
using namespace std;
//doing by recursion
void reverseTraverse(Node* head){
    if(head==NULL){
        return;
    }
    reverseTraverse(head->next);
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

    reverseTraverse(head);
    cout<<endl;
    return 0;
}