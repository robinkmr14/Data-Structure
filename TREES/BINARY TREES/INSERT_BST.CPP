// insert the element in binary search tree.


#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void insert(node* &root, int val)
{
    node *n = new node(val);
    if (root == NULL)
    {
        root = n;
        return;
    }

    if (root->data > n->data)
    {
        insert(root->left, val);
        return;
    }
    else if (root->data < n->data)
    {
        insert(root->right, val);
        return;
    }
   
}

void inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node *root = NULL;

    insert(root, 10);
    insert(root, 9);
    insert(root, 30);
    insert(root, 8);
    insert(root, 50);
    //preorder(root);
    cout<<endl;
    inorder(root);

    return 0;
}
