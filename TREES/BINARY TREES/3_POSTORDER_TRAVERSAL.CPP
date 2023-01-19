// PROGRAM TO TRAVERSE BINARY TREE IN POSTORDER.


#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root = new node(8);
    node* one = new node(1);
    node* two = new node(2);
    node* three = new node(3);
    node* four = new node(4);
    node* seven = new node(7);

    root->left = one;
    root->right = two;
    one->right = four;
    one->left = three;
    four->right = seven;
    inorder(root);

    return 0;
    
}