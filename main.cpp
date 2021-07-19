#include <iostream>
#include "linkedtree.h"

using namespace std;

int main()
{
    linkedtree* theTree;
    Node* newNode;
    
    theTree = new linkedtree();

    cout <<"adding 8,4,12,2,6,19";
    newNode = new Node();
    newNode->Key = 8;
    newNode->left = newNode->right = NULL;
    theTree->addBST(newNode);

    newNode = new Node();
    newNode->Key = 4;
    newNode->left = newNode->right = NULL;
    theTree->addBST(newNode);

    newNode = new Node();
    newNode->Key = 12;
    newNode->left = newNode->right = NULL;
    theTree->addBST(newNode);

    newNode = new Node();
    newNode->Key = 2;
    newNode->left = newNode->right = NULL;
    theTree->addBST(newNode);

    newNode = new Node();
    newNode->Key = 6;
    newNode->left = newNode->right = NULL;
    theTree->addBST(newNode);

    newNode = new Node();
    newNode->Key = 19;
    newNode->left = newNode->right = NULL;
    theTree->addBST(newNode);

    cout <<"All nodes addBSTed"<<endl;

    theTree->inorder();

cout<<"\n";

//Search Function
    cout <<"Search function\n";
    newNode = theTree->searchBST(13);
    if(newNode != NULL)
    {
        cout<< newNode->Key<<" found"<<endl;
        delete newNode; 
    }
    else
        cout << 13 <<" not found."<<endl;

    newNode = theTree->searchBST(6);
    if(newNode != NULL)
    {
        cout<< newNode->Key<<" found"<<endl;
        delete newNode;
    }
    else
        cout << 6 <<" not found."<<endl;

    cout<<"\n";

//delete function
    cout <<"Delete function"<<endl;
    cout<<"deleting 4 from the tree:"<<endl;
    theTree->removeBST(4);    
    theTree->inorder();
    cout<<"\n";

    cout<<"deleting 8 from the tree:"<<endl;
    theTree->removeBST(8);    
    theTree->inorder();
    cout<<"\n";

    cout<<"deleting 6 from the tree:"<<endl;
    theTree->removeBST(6);    
    theTree->inorder();
    cout<<"\n";

    cout<<"deleting 12 from the tree:"<<endl;
    theTree->removeBST(12);    
    theTree->inorder();
    cout<<"\n";

    cout<<"deleting 22 from the tree:"<<endl;
    theTree->removeBST(22);    
    theTree->inorder();
    cout<<"\n";

    return 0;
}