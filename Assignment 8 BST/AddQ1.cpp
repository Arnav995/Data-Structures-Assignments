#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
     int val;
     TreeNode* left;
     TreeNode* right;
     TreeNode(int value){
          val = value;
          left = nullptr;
          right = nullptr;
     }
};
class Solution {
public:
    int sum;
    void dfs(TreeNode* node){
        if(node->left!=nullptr){
            if(node->left->left ==nullptr && node->left->right == nullptr){
                sum += node->left->val;
            }
            dfs(node->left);
        }
        if(node->right != nullptr){
            dfs(node->right);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        sum = 0;
        dfs(root);
        return sum;
    }
};