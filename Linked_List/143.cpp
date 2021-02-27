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


node* Solve(node* &head){
    node* low=head;
    node* high=head;
    node* res=0;
    while(low!=NULL && high!=NULL && high->next!=NULL){
        low=low->next;
        high=high->next->next;
        if(low==high)
        break;
    }

     if(low!=high)return NULL;


     low =head;
     while(low!=high){
         low=low->next;
         high=high->next;
     }
     return low;
    // if(low==head){
    //     while(high->next!=low){
    //         high=high->next;
    //     }
    //     res= high->next;
    // }
    // low 
    // else if(low==high){
    //     low=head;
    //     while(low->next!=high->next){
    //         low=low->next;
    //         high=high->next;
    //     }
    //    res= high->next;
    // }
    // return res;
}
void print(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
//     node* head = NULL;
//    insertAtTail(head,1);
//    insertAtTail(head,2);
//    insertAtTail(head,3);
//    insertAtTail(head,4);
//    insertAtTail(head,2);
   

   node* head = new node(50);
    head->next = new node(20);
    head->next->next = new node(15);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(10);
       head->next->next->next->next->next = head->next->next;
    // print(head);
    node* res=Solve(head);
    cout<<res->data<<endl;
    return 0;
}