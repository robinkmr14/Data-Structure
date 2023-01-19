// PROGRAM TO TRAVERSE BINARY TREE IN PREORDER.
#include<iostream>
#include "pre.h"


int main()
{
    node *root = new node(100);
    root->left = new node(1);
    root->left->left = new node(2);
    root->left->right = new node(10);
    root->right = new node(9);
    root->right->left = new node(4);
    root->right->right = new node(7);
    preorder(root);
    

    return 0;
}