#include <iostream>
#include "linked-list.h"
using namespace std;

void reverseLLKatTime(int k, Node* &head) {


    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prevGroupEnd = dummy;
    Node* curr = head;

    while (curr != NULL) {
        Node* groupStart = curr;
        Node* prev = NULL;
        int count = 0;

        // Reverse k nodes
        while (curr != NULL && count < k) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Connect the previous group with the reversed group
        prevGroupEnd->next = prev;
        groupStart->next = curr;

        // Move prevGroupEnd to the end of the reversed group
        prevGroupEnd = groupStart;

        // If there are less than k nodes left, break

    }
    
    head = dummy->next;
    delete dummy;
}

int main() {
    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);

    display(head);

    reverseLLKatTime(3, head);
    display(head);
    return 0;
}
