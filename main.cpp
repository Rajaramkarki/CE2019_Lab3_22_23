#include <iostream>
#include "linkedtree.h"

using namespace std;

int main()
{
    linkedtree* theTree;
    Node* newNode;
    theTree = new linkedtree();

    cout <<"adding 8,4,12,2,6,19 into the tree:"<<endl;
    
    theTree->addBST(8);

    theTree->addBST(4);

    theTree->addBST(12);

    theTree->addBST(2);

    theTree->addBST(6);

    theTree->addBST(19);

    cout <<"All nodes added to the tree\n"<<endl;

    theTree->inorder();

cout<<"\n";

//Search Function
    cout <<"\nSearch function"<<endl;
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

    cout<<"\ndeleting 8 from the tree:"<<endl;
    theTree->removeBST(8);    
    theTree->inorder();
    cout<<"\n";

    cout<<"\ndeleting 6 from the tree:"<<endl;
    theTree->removeBST(6);    
    theTree->inorder();
    cout<<"\n";

    cout<<"\nbdeleting 12 from the tree:"<<endl;
    theTree->removeBST(12);    
    theTree->inorder();
    cout<<"\n";

    cout<<"\ndeleting 22 from the tree:"<<endl;
    theTree->removeBST(22);    
    theTree->inorder();
    cout<<"\n";

    return 0;
}