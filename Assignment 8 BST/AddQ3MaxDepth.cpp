#include<bits/stdc++.h>
using namespace std;
class Node{
public:
     int val;
     Node* right;
     Node* left;
     Node(int value){
          val = value;
          left = right = nullptr;
     }
};

int getMaxDepth(Node* root) {
    
	if(root == nullptr) return 0;
	return 1 + max(getMaxDepth(root->left),getMaxDepth(root->right));
}