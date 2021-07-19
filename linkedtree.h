#pragma once
#include <iostream>

using namespace std;

struct Node
{
    int Key;

    Node *left;
    Node *right;
};

class linkedtree
{
    private:
        Node *root; 
        
        Node* show(Node * node);
        void traverse(Node *node);

    public:
        linkedtree();
        ~linkedtree();

        bool isEmpty();
        Node* searchBST(int Key);
        bool addBST(Node *newNode);
        bool addBST(int key);
        bool removeBST(int Key);
        void inorder();   
};

