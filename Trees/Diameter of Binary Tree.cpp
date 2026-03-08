#include <iostream>
using namespace std;

class Solution {
public:
    int levels(TreeNode* root) {
        if (root == nullptr)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    void helper(TreeNode* root , int& maxDia){
        if(root == nullptr) return;
        int dia = levels(root -> left) + levels(root -> right);
        maxDia = max(dia,maxDia);
        helper(root -> left,maxDia);
        helper(root -> right,maxDia);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxdia = 0;
        helper(root,maxdia);
        return maxdia;
    }
};

int main(){

}