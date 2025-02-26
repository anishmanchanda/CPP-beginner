#include <iostream>
#include "linked-list.h"
using namespace std;

Node* findInterseciton(Node* head1, Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    int l1=getLength(head1);
    int l2=getLength(head2);
    if(l1>l2){
        int diff=l1-l2;
        while(diff>0){
            temp1=temp1->next;
            diff--;
        }
        while(temp1!=NULL || temp2!=NULL){
            if(temp1->next==temp2->next){
                return temp1->next;
                break;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    else{
        int diff=l2-l1;
        while(diff>0){
            temp2=temp2->next;
            diff--;
        }
        while(temp1!=NULL || temp2!=NULL){
            if(temp1->next==temp2->next){
                return temp1->next;
                break;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    
    //as int ersection node will be at the point of difference in
    /* while(temp1!=NULL){
        temp2=head2;
        while(temp2!=NULL){
            temp2=temp2->next;
            if(temp1->next==temp2->next){
                return temp1->next;
            }
        }
        temp1=temp1->next;
    }*/

    //this approach is not possible as its not necessary if
    //intersection point is at same distance from start for both lists

    //this is why we need to know the length difference bw the 2
    return NULL;
}
int main(){
    Node* head1 = NULL;
    insertAtHead(head1, 10);
    insertAtTail(head1, 20);
    insertAtTail(head1, 30);
    insertAtTail(head1, 40);
    insertAtTail(head1, 50);
    insertAtTail(head1, 60);

    Node* head2 = NULL;
    insertAtHead(head2, 5);
    insertAtTail(head2, 25);
    head2->next->next=head1->next->next;

    //30 must be the intersection node
    display(head1);
    display(head2);

    displayAddresses(head1);
    displayAddresses(head2);
    cout<<endl;
    cout<<findInterseciton(head1,head2)->val<<endl;
    return 0;
}