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

    public:
        linkedtree();
        ~linkedtree();

        bool isEmpty();
        Node* searchBST(int Key);
        bool addBST(Node *newNode);
        bool removeBST(int Key);
        void inorder();
    private:
        Node *DupNode(Node * T);
        void PrintAll(Node *T);
};

