#include<bits/stdc++.h>
using namespace std;
class TreeNode {
     public:
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        reversePostOrderTraversal(root,0,res);
        return res;
    }
    void reversePostOrderTraversal(TreeNode* root, int level, vector<int>& res){
        if(root==NULL){return;}
        if(res.size() == level){
            res.push_back(root->val);
        }
            reversePostOrderTraversal(root->right, level+1, res);
            reversePostOrderTraversal(root->left, level+1,res);
        
    }
};