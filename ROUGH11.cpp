#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 class Node {
 public:
       int data;
      Node *next;

      Node(int data) {
          this->data = data;
        this->next = NULL;
       }
  };

int lengthOfLoop(Node *head) {
    Node* slow=head;
    Node* fast=head;
    int flag=0;
    int cnt=0;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            flag=1;
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
        }
    }
    while(slow!=fast){
        slow=slow->next;
        cnt++;
    }
    if(flag==0) return 0;
    return cnt;
}