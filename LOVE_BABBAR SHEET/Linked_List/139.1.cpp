// Reversing using recursive method
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
void insertAtTail(node* & head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next= n;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

node* reverse(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverse(head->next);
    head->next->next=head;
    head->next = NULL;

    return newhead;
}


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    print(head);
    cout<<endl<<"After Reversing "<<endl;
    node* newhead=reverse(head);
    print(newhead);
    return 0;

}