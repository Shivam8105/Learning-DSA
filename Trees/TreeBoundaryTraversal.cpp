#include <iostream>
using namespace std;

class Node{
public:
    Node* left;
    Node* right;
    int data;
    Node(int data){
        this -> data = data;
        this -> left = nullptr;
        this -> right = nullptr;
    }
};

class Solution {
  public:
  
  bool isLeaf(Node* root){
      return root -> right == nullptr && root -> left == nullptr;
  }
  
  void leftBoundary(Node* root,vector<int>& res){
      Node* curr = root -> left;
      while(curr){
          if(!isLeaf(curr)) res.push_back(curr -> data);
          
          if(curr -> left) curr = curr -> left;
          else curr = curr -> right;
      }
  }
  
  void rightBoundary(Node* root,vector<int>& res){
      stack<int> st;
      Node* curr = root -> right;
      while(curr){
          if(!isLeaf(curr)) st.push(curr -> data);
          if(curr -> right) curr = curr -> right;
          else curr = curr -> left;
      }
      while(!st.empty()){
          int val = st.top();
          st.pop();
          res.push_back(val);
      }
  }
  
  void leafNodes(Node* root, vector<int>& res){
     if(root == nullptr) return;
     if(isLeaf(root)){
         res.push_back(root -> data);
         return;
     }
     leafNodes(root -> left,res);
     leafNodes(root -> right,res);
  }
  
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> res;
        if(root == nullptr) return res;
        
        if(!isLeaf(root)) res.push_back(root -> data);
        leftBoundary(root,res);
        leafNodes(root,res);
        rightBoundary(root,res);
        return res;
    }
};


int main(){

}