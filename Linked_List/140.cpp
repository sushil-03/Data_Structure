// Reverse a linked list in a given number of size
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data= val;
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
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
node* reveres(node* &head,int k){
    node* currptr=head;
    node* prevptr=NULL;
    node* nextptr;
    int c=0;
    while(currptr!=NULL && c<k){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
        c++;
    }
    if(nextptr!=NULL){
        head->next=reveres(nextptr,k);
    }
    return prevptr;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    print(head);
    int k=2;
    cout<<endl;
    node* newhead=reveres(head,k);
    print(newhead);
    return 0;
}