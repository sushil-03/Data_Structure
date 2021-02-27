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
    node*n=new node(val);
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
node* removeInAlternate(node* head){
    node* curr=head;
    node*prev;
    while(curr!=NULL){
        prev=curr;
        while(prev->next!=NULL){
            if(prev->next->data==curr->data){
                prev->next=prev->next->next;
            }else{
                prev=prev->next;
            }
        }
        curr=curr->next;
    }
    return head;
}
node* removeInAlternateUsingSet(node* head){
    set<int>s;
    node* temp=head;
    s.insert(temp->data);
    while(temp->next!=NULL){
        if(s.find(temp->next->data)!=s.end()){
            temp->next=temp->next->next;
        }else{
            temp=temp->next;
            s.insert(temp->data);
        }
    }
    return head;
}


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,2);
    insertAtTail(head,4);
    print(head);
    cout<<endl;
    // node* newhead= removeInAlternate(head);
    // print(head);
    node* newhead=removeInAlternateUsingSet(head);
    print(newhead);
    return 0;
}
