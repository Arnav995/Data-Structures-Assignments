#include <bits/stdc++.h>
#include<stack>
#include<string>

using namespace std;


string reverseStringByStack(string str) {
     // Creating stack for all original characters of string
     stack<char> stackDSA;
     string reversedString = "";
     // pushing all characters of string onto the stack
     for(char c : str){
          stackDSA.push(c);
     }
//Now, popping all characters of stack and puting them into reversed string
// This will finally put these into reverse order
     while(!stackDSA.empty()){
          reversedString = reversedString + stackDSA.top();
          stackDSA.pop(); // Pops the top element
     }     

     return reversedString;

}

int main(){

     string OG = "DataStructure";
     string rev = reverseStringByStack(OG);

     // Printing the original string first

     // Now printing the new reversed string via stacks
     cout << "Original String:  " << OG << endl;
     cout << "Reversed String: " << rev << endl;

     return 0;
}