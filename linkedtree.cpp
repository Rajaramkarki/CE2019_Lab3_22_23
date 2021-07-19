#include <iostream>
#include "linkedtree.h"

using namespace std;

linkedtree::linkedtree()
{
    root = NULL;
    return;
}


linkedtree::~linkedtree()
{
    delete root;
}


bool linkedtree::isEmpty()
{
    return(root==NULL);
}


Node *linkedtree::show(Node * node)
{
    Node *dNode;

    dNode = new Node();
    *dNode = *node;    
    dNode->left = NULL;   
    dNode->right = NULL;
    return dNode;
}


Node *linkedtree::searchBST(int Key)
{
    Node *temp;

    temp = root;
    while((temp != NULL) && (temp->Key != Key))
    {
        if(Key < temp->Key)
            temp = temp->left;  
        else
            temp = temp->right; 
    }
    if(temp == NULL) 
        return temp;   
    else
        return(show(temp));    
}


bool linkedtree::addBST(Node *newNode)
{
    Node *temp;
    Node *back;

    temp = root;
    back = NULL;

    while(temp != NULL)  
    {
        back = temp;
        if(newNode->Key < temp->Key)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if(back == NULL) 
        root = newNode;
    else
    {
        if(newNode->Key < back->Key)
            back->left = newNode;
        else
            back->right = newNode;
    }
   return true ;
}


bool linkedtree::removeBST(int Key)
{
    Node *back;
    Node *temp;
    Node *prev;    
    Node *dltKey;      

    temp = root;
    back = NULL;

    while((temp != NULL) && (Key != temp->Key))
    {
        back = temp;
        if(Key < temp->Key)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if(temp == NULL) 
    {
        cout<<"The number doesn't exist in the tree."<<endl;   
        return false;
    }
    else
    {
        if(temp == root) 
        {
            dltKey = root;
            prev = NULL; 
        }                
        else
        {
            dltKey = temp;
            prev = back;
        }
    }

    if(dltKey->right == NULL)
    {
        if(prev == NULL)      
        {
            root = dltKey->left;
            delete dltKey;
            return true;
        }
        else
        {
            if(prev->left == dltKey)
                prev->left = dltKey->left;
            else
                prev->right = dltKey->left;
                delete dltKey;
            return true;
        }
    }
    else
    {
        if(dltKey->left == NULL)    
        {
            if(prev == NULL)        
            {
                root = dltKey->right;
                delete dltKey;
                return true;
            }
            else
            {
                if(prev->left == dltKey)
                    prev->left = dltKey->right;
                else
                    prev->right = dltKey->right;

                delete dltKey;
                return true;
            }
        }
        else  
        {          
            temp = dltKey->left;
            back = dltKey;
            while(temp->right != NULL)
            {
                back = temp;
                temp = temp->right;
            }
            
            dltKey->Key = temp->Key;
          
            if(back == dltKey)
                back->left = temp->left;
            else
                back->right = temp->left;
            delete temp;
            return true;
        }
    }
}


void linkedtree::traverse(Node *node)
{
    if(node != NULL)
    {
        traverse(node->left);
        cout<< node->Key <<"  ";
        traverse(node->right);
    }
}


void linkedtree::inorder()
{
    cout<<"The inorder traversal of the tree is: "<<endl;
    traverse(root);
}
