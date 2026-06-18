// Huffman Coding is a Greedy Algorithm used for lossless data compression. It assigns shorter binary codes to frequently occurring characters and longer codes to less frequent characters.

#include <iostream>
using namespace std;

class Node{
public:
    int freq;
    Node* left;
    Node* right;

    Node(int f){
        freq = f;
        left = right = nullptr;
    }
};

class compare{
public:
    bool operator()(Node* a, Node* b){
        return a -> freq > b -> freq;
    }
};


int main(){
    vector<int> freq = {5,9,12,13,16,45};
    priority_queue<Node*, vector<Node*>,compare> pq;

    for(int f : freq){
        pq.push(new Node(f));
    }

    while(pq.size() > 1){
        Node* left = pq.top();
        pq.pop();

        Node* right = pq.top();
        pq.pop();

        Node* parent = new Node(left -> freq + right -> freq);
        parent -> left = left;
        parent -> right = right;

        pq.push(parent);
    };
    cout << "Huffman Tree Created" << endl;
}