#include <iostream>
#include "linked-list.h"
using namespace std;
//to delete the kth node from a linked list ONLY TRAVERSE LIST ONCE
void deleteKthNode(Node* &head,int k){
    Node* temp1=head;
    Node* temp2=head;
    while(k>0){
        temp2=temp2->next;
        k--;
    }
    
}
int main(){
    return 0;
}