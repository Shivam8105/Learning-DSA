#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int levels(TreeNode* root){
        if(root == nullptr) return 0;

        return 1 + max(levels(root->left), levels(root->right));
    }

    void helper(TreeNode* root, int &maxDia){
        if(root == nullptr) return;

        int dia = levels(root->left) + levels(root->right);

        maxDia = max(maxDia, dia);

        helper(root->left, maxDia);
        helper(root->right, maxDia);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;

        helper(root, maxDia);

        return maxDia;
    }
};

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;

    cout << "Diameter of Binary Tree: " 
         << obj.diameterOfBinaryTree(root) << endl;

    return 0;
}