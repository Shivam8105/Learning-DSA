#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
public:
    TreeNode* left;
    TreeNode* right;
    int data;
    TreeNode(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* buildTree(){
    int val;
    cin >> val;

    if(val == -1){
        return nullptr;
    }

    TreeNode* root = new TreeNode(val);
    root -> left = buildTree();
    root -> right = buildTree();
    return root;
}

void levelOrderTraversal(TreeNode* root){
    if(root == nullptr){
        return;
    }
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* current = q.front();
        q.pop();

        cout << current->data << " ";

        if(current -> left){
            q.push(current -> left);
        }

        if(current -> right){
            q.push(current -> right);
        }
    }
}

int main(){
    TreeNode* root = buildTree();
    levelOrderTraversal(root);
}