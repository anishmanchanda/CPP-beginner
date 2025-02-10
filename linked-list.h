//PRE-REQS of linked list, no main function.
#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
void insertAtHead(Node* &head,int val){
        //passing by ref. so changes can be made in LL
    Node* n=new Node(val);
    n->next=head;
    head=n; 
}
void insertAtTail(Node* &head, int val){
        //passing by ref.
    Node* n=new Node(val);
    Node* temp=head;
    while(temp!=NULL){
        if((temp->next)==NULL){
            temp->next=n;
            n->next=NULL;
            break;
        }
        temp=temp->next;
    }
}
void insertAtArbitrary(Node* &head,int val,int pos){
                        //pos is index(start from 0)
    Node* n=new Node(val);
    Node* temp=head;
    int idx=0;
    while(temp!=NULL){
        if(pos==0){
            n->next=head;
            head=n;
            break;      
        }
        if(idx==pos-1){
            Node* temp2=temp->next;
            temp->next=n;
            n->next=temp2;
            break;
        }
        temp=temp->next;
        idx++;
        
    }
}
void display(Node* head){
    cout<<endl;
    //passing by value bcs no change
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
