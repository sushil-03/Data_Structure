// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
// };
// void printlist(node* n){
//     while(n!=NULL){
//         cout<<n->data<<"->";
//         n=n->next;
//     }
//     cout<<"NULL";
// }
// int main(){
//     node* head=NULL;
//     node* second =NULL;
//     node* third=NULL;
//     head =new node();
//     second =new node();
//     third =new node();
//     head->data=1;
//     head->next=second;
//     second->data=2;
//     second->next=third;
//     third->data=3;
//     third->next=NULL;
//     printlist(head);
//     return 0;

// }




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
void insertAtHead(node* &head,int val){
    node *n=new node(val);
    n->next=head;
    head=n;
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key)return true;
        temp=temp->next;
    }
    return false;
}
int main(){
    node* head =NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    print(head);
    cout<<search(head,8);
}
















