#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void printlist(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
// node* reverse(node* &head){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;

//     while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next=prevptr;

//         prevptr=currptr;
//         currptr=nextptr;
//     }
//     return prevptr;
// }

node* reverse(node* &head){

    node* currptr=head;
    node* prevptr=NULL;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}






















int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    printlist(head);

    cout<<endl<<"Reversing list"<<endl;
    node* newhead=reverse(head);
    printlist(newhead);
}