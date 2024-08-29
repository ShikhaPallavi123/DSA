//
// Created by Shikha Pallavi on 8/28/24.
//

#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left =right= NULL;
    }
};

bool isIdentical(Node* root, Node* subRoot){
    if(root == NULL && subRoot == NULL){
        return true;
    }else if(root == NULL || subRoot == NULL){
        return false;
    }


    if(root->data != subRoot->data){
        return false;
    }
    return isIdentical(root->left, subRoot->left)
           && isIdentical(root->right, subRoot->right);

}

static int idx = -1;
Node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
    return currNode;
}

bool isSubTree(Node* root, Node* subRoot){
    if(root == NULL && subRoot == NULL){
        return true;
    }else if(root == NULL || subRoot == NULL){
        return false;
    }

    if(root->data == subRoot->data){
        if(isIdentical(root, subRoot)){
            return true;
        }
    }

    int isLeftSubTree = isSubTree(root->left, subRoot);
    if(!isLeftSubTree){
        return isSubTree(root->right, subRoot);
    }
    return true;
}



int main(){
    vector<int> nodes = {1,2,4,-1,-1, 5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    Node* subRoot = new Node(2);
    subRoot->left = new Node(4);
    subRoot->right = new Node(5);
    cout << boolalpha;
    cout << isSubTree(root,subRoot) << endl;
    return 0;
}
