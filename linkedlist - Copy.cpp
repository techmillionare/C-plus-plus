#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
             this->data=data;
             this->next=NULL;
    }
};
void insertAthead(Node* &head,int a){
    Node* new_node=new Node(a);
    new_node->next=head;
    head=new_node;
}

void insertAtend(Node* &head,int a){
    Node* new_node=new Node(a);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
       temp->next=new_node;
       new_node->next=NULL;
}

void insertAtposition(Node* &head,int data,int position){
    if(position==0){
        insertAthead(head,data);
    }
    Node* new_node=new Node(data);
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=position){
        temp=temp->next;
        current_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}

void updateAtposition(Node* &head,int k,int a){
    Node*temp=head;
    int current_pos=0;
    while(current_pos!=k){
        temp=temp->next;
        current_pos++;
    }
    temp->data=a;
}

void deleteAthead(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);
}

void deleteAtend(Node* &head){
    Node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    Node* temp=second_last->next;
    second_last->next=NULL;
    free(temp);
}

void deleteAtposition(Node* &head,int pos){
    int current_pos=0;
    Node* previous=head;
    while(current_pos!=pos-1){
        previous=previous->next;
    }
    Node* temp=previous->next;
    previous->next=previous->next->next;
    // previous->next=temp->next;
    free(temp);
}

void display(Node* head){
   Node* temp=head;
   while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
   }
   cout<<endl;
}

int main(){
    int p,v;
    cout<<"enter position to insert:";
    cin>>p;
    cout<<"enter value to insert:";
    cin>>v;
    int x;
    cout<<"enter position to delete:";
    cin>>x;
    Node*head=NULL;
    insertAthead(head,5);
    display(head);
    insertAthead(head,8);
    display(head);
    insertAthead(head,23);
    display(head);
    insertAtend(head,7);
    display(head);
    insertAtposition(head,v,p);
    display(head);
    updateAtposition(head,2,9);
       display(head);
       deleteAthead(head);
       display(head);
       deleteAtend(head);
       display(head);
       deleteAtposition(head,x);
       display(head);
   // cout<<n->data<<" "<<n->next<<endl;
    return 0;
}


