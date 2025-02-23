#include <iostream>
#include "linked-list.h"
using namespace std;

Node* findInterseciton(Node* head1, Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    int l1=getLength(head1);
    int l2=getLength(head2);
    int diff=l1-l2;
    cout<<l1<<" "<<l2<<" "<<diff<<endl;
    //find length  of both lists 
 
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
    //this approach is not possible as its not necessary 
    //if int point is at same distance from start for both lists

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
    insertAtHead(head2, 30);
    insertAtTail(head2, 40);
    insertAtTail(head2, 50);
    insertAtTail(head2, 60);
    findInterseciton(head1,head2);


    return 0;
}