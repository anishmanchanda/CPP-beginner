#include <iostream>
#include "linked-list.h"
using namespace std;
//we have to break LL into 2 from middle
//then reverse the second list
//and check if they're equal

void isPalindrome(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    Node* second=slow->next;
    slow->next=NULL;

    //display(head);  //first half
    Node* newhead=reverseLL(second);
    //display(newhead);  //second half reversed
    if(checkIfEqual(head,newhead)){
        cout<<endl<<"Palindrome!";
    }
    else{
        cout<<endl<<"NOT Palindrome!";
    }
}
int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,1);

    display(head);
    isPalindrome(head);
    cout<<endl;
    return 0;
}