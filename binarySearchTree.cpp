#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int d) 
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

class BinarySearchTree 
{
    Node* Add(Node *root, int value) 
    {
        if(!root)
        {
            return new Node(value);
        }

        if(value > root->data)
        {
            root->right = Add(root->right, value);
        }

        else
        {
            root->left = Add(root->left, value);
        }
        return root;
    }

    void Print(Node *root)
    {
        if(!root)
        {
            return;
        }
        Print(root->left);
        cout << root->data << endl;
        Print(root->right);
    }
};