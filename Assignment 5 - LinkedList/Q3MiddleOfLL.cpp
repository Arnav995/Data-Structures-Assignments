#include<bits/stdc++.h>
using namespace std;

class Node{
public:
     int data;
     Node* next;
     Node(int value){
          data = value;
          next = NULL;
     }
};

     // FIND MIDDLE OF LINKED LIST
     Node* MiddleOfLL(Node* head){
          Node* fast = head;
          Node* slow = head;
          while(fast!=NULL && fast->next != NULL){
               slow = slow->next;
               fast = fast->next->next;

          }
          // slow is when we finally reach middle of LL
          return slow;
     }



