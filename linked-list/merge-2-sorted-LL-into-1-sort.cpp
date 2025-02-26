#include <iostream>
#include "linked-list.h"
using namespace std;
Node* mergeSorted(Node* head1, Node* head2){
    //compare last and first elements of both lists
    Node* temp1=head1;
    Node* temp2=head2;
    Node* newHead=NULL;
    if(temp2->val<temp1->val){
        insertAtHead(newHead,temp2->val);
        temp2=temp2->next;
    }
    else{
        insertAtHead(newHead,temp1->val);
        temp1=temp1->next;
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->val<temp2->val){
            insertAtTail(newHead,temp1->val);
            temp1=temp1->next;
        }
        else{
            insertAtTail(newHead,temp2->val);
            temp2=temp2->next;
        }
    }

    if(temp1!=NULL){
        while(temp1){
            insertAtTail(newHead,temp1->val);
            temp1=temp1->next;
        }
    }
    else if(temp2!=NULL){
        while(temp2){
            insertAtTail(newHead,temp2->val);
            temp2=temp2->next;
        }
    }
    return newHead;

}
int main(){
    Node* head1 = NULL;
    insertAtHead(head1, 2);
    insertAtTail(head1, 3);
    
    Node* head2 = NULL;
    insertAtHead(head2, 1);
    insertAtTail(head2, 4);
    insertAtTail(head2, 5);

  
    display(mergeSorted(head1,head2));
    //display(mergeSorted(head2,head1));
    cout<<endl;
    return 0;
}