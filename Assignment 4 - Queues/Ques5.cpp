#include<bits/stdc++.h>
#include<queue>
#include<stack>
using namespace std;

class stack{
     queue<int> q;
     
     public:
     void push(int n){
          int size = q.size();
          q.push(n);// push it to the queue.. pushing goes same as pop
          for(int i=0;i<size;i++){
               q.push(q.front());
               q.pop();
          }
     }
     int pop(){
          // fetching the value that is getting popped
          int value = q.front();
          q.pop();
          return value;
     }
     int top(){// fetch top element of stack using queue (obviously)
          return q.front();
     }
     bool empty(){// check if stack is empty
          return q.empty();
     }
};

int main() {
    stack q;
    
    cout << "Pushing 1, 2, 3 to the queue..." << endl;
    q.push(1);
    q.push(2);
    q.push(3);
    
    cout << "Front element (peek): " << q.peek() << endl;  // Should be 1
    
    cout << "Popping: " << q.pop() << endl;  // Should remove 1
    cout << "Front element after pop: " << q.peek() << endl;  // Should be 2
    
    cout << "Popping: " << q.pop() << endl;  // Should remove 2
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;  // Should be No
    
    cout << "Popping: " << q.pop() << endl;  // Should remove 3
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;  // Should be Yes
    
    return 0;
}
