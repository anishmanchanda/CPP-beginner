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
void displayAddresses(Node* head){
    cout<<endl;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        cout<<temp<<"->";
    }
    cout<<"NULL"<<endl;
}
int getLength(Node* head){
    Node* temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
Node* reverseLL(Node* head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL ){
        Node* next=curr->next;//similar to temporary variable
        curr->next=prev;  
        prev=curr;
        curr=next;
        //cout<<prev->val<<" "<<curr->val<<" "<<next->val<<endl; 
    }   
    Node* newhead=prev;
    return newhead;
}
bool checkIfEqual(Node* head1,Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->val!=temp2->val){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return (temp1==NULL && temp2==NULL);
}
