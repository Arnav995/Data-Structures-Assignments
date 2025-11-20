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
   
     Node* reverseList(Node* head){
          Node* prev = NULL;
          Node* current = head;
          Node* next= NULL;
     
          while(current != NULL){
               next =current->next;
               current->next = prev;

               prev = current;
               current = next;
          }
          return prev; // this is new head of LL
     
     }

int main(){
  
     return 0;
}