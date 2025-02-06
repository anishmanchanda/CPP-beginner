#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;//node* is pointer variable (address)
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
}
int main(){

    return 0;
}