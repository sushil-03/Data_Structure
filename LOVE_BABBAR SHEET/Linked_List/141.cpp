// Detect loop in linked list
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
        temp= temp->next;
    }
    temp->next=n;
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool detectLoop(node* head){
    if(!head)return false;
    node* high=head;
    node* low=head;
    while(high!=NULL && high->next!=NULL){
        high=high->next->next;
        low=low->next;
        if(low==high){
            return true;
        }
    }
    return false;
}
bool detectThroughMap(node* & head){
    unordered_map<node*,int>m;
    while(head!=NULL){
        if(!m[head]){
            m[head]=1;
            head=head->next;
        }else
        return true;
    }
    return false;

}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    print(head);
    if(detectLoop(head)){
        cout<<"TRUE"<<endl;
    }
    else 
    cout<<"False"<<endl;
    if(detectThroughMap(head)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}