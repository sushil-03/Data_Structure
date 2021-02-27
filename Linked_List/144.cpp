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
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
node* removeInSequence(node* head){
    node* curr=head->next;
    node* prev=head;
    while(curr!=NULL){
        if(prev->data==curr->data){
            prev->next=curr->next;
            curr=prev->next;
        }else{
            prev=curr;
            curr=curr->next;
        }
    }
    return head;
}


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    print(head);
   cout<<endl;
    node* newhead =  removeInSequence(head);
    print(newhead);
   
    return 0;
}