#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
     int val;
     TreeNode* right;
     TreeNode* left;
     TreeNode(int value){
          val = value;
          left = right = nullptr;
     }
};


//PART A -> SEARCH in BST
bool Search(TreeNode* root, int target){
     if(!root){ return 0; }
     if(root->val == target){
          return 1;
     }
     if(root->val > target){
          return Search(root->left, target);
     }
     else{
          return Search(root->right, target);
     }
}



// PART  B & C--> Maximum and Minimum of BST
void inOrder(TreeNode* root, vector<int>& arr){
     if(root==NULL) return;
     inOrder(root->left,arr);
     arr.push_back(root->val);
     inOrder(root->right,arr);
}
int Maximum(TreeNode* root){

     vector<int> maxArray;
     inOrder(root,maxArray);
     int max = maxArray[maxArray.size()-1];
     
     return max;
}
int Minimum(TreeNode* root){
     vector<int> array;
     inOrder(root,array);
     int min = array[0];
     return min;
}

// Part D --> Inorder Predecessor in BST
TreeNode* inOrderPredecessor(TreeNode* root, TreeNode* k){
     int Predecessor = NULL;


}





// Part E --> Inorder Successor in BST


TreeNode* inOrderSuccessor(TreeNode* root, TreeNode* k){
     TreeNode* successor = NULL;
     while(root!=NULL){
          // when we find key element 
          if(k->val == root->val){
               root = root->right;// for successor we move right of key element
          }
          else{
               successor = root;
               root = root->left;
          }
     }
     return successor;
}
