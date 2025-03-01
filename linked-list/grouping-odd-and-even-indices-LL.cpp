#include <iostream>
using namespace std;
#include "linked-list.h"

Node* groupOddEven(Node* head) {
    if (!head || !head->next) return head;

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;
}

int main() {
    Node* head = NULL;
    insertAtHead(head, 1);
    insertAtTail(head, 2);  
    insertAtTail(head, 3);  
    insertAtTail(head, 4);  
    insertAtTail(head, 5);  
    insertAtTail(head, 6); 
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    insertAtTail(head, 10);
    insertAtTail(head, 11);

    display(head);
    
    display(groupOddEven(head));
    cout << endl;
}