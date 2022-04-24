#include <iostream>
using namespace std;

class Node
{
private:
public:
    int data = 0;
    static Node *createNode(int data);
    static void preorderTraversal(Node *root);
    static void postorderTraversal(Node *root);
    static void inOrderTraversal(Node *root);
    static bool isBST(Node *root); //Checkinig if binary tree is BST
    static Node *search(Node *root, int key);
    static Node *iterativeSearch(Node *root, int key);
    void insert(int key); // BST insertion
    Node *left = NULL;
    Node *right = NULL;
    Node();
    ~Node();
};

void Node ::insert(int key)
{
    Node *root = this;
    Node *perv = NULL;

    while (root)
    {
        perv = root;

        if (root->data == key)
        {
            cout << key << " : already exist in BST" << endl;
            return;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else if (root->data < key)
        {
            root = root->right;
        }
    }

    if (perv->data > key)
    {
        perv->left = Node::createNode(key);
    }
    else if (perv->data < key)
    {
        perv->right = Node::createNode(key);
    }
}

Node *Node ::iterativeSearch(Node *root, int key)
{

    Node *temp = root;

    if (root->data == key)
    {
        return root;
    }

    while (temp)
    {
        if (temp->data == key)
        {
            return temp;
        }
        else if (temp->data > key)
        {
            temp = temp->left;
        }
        else if (temp->data < key)
        {
            temp = temp->right;
        }
    }
    return NULL;
}

Node *Node ::search(Node *root, int key)
{

    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else if (key > root->data)
    {
        return search(root->right, key);
    }
    else
    {
        return NULL;
    }
}

bool Node ::isBST(Node *root)
{
    static Node *prev = NULL;

    if (root != NULL)
    {
        if (!isBST(root->left)) // This cond. should be False if subtree is BST
        {
            return false;
        }
        if (prev != NULL && root->data <= prev->data) // This cond. should be false is subtree is BST
        {
            return false;
        }
        else
        {
            prev = root;
            return isBST(root->right);
        }
    }
    else
    {
        return true;
    }
}

void Node ::inOrderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    else
    {
        inOrderTraversal(root->left);
        cout << root->data;
        inOrderTraversal(root->right);
    }
}

void Node ::postorderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    else
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data;
    }
}

void Node ::preorderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->data;
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

Node *Node::createNode(int d)
{
    Node *p = new Node;
    p->data = d;
    return p;
}

Node::Node()
{
}

Node::~Node()
{
}

int main()
{

    Node *p1 = Node::createNode(5);
    Node *p2 = Node::createNode(3);
    Node *p3 = Node::createNode(6);

    p1->left = p2;
    p1->right = p3;

    Node *p4 = Node::createNode(1);
    Node *p5 = Node::createNode(4);

    p2->left = p4;
    p2->right = p5;

    Node *grt = Node::iterativeSearch(p1, 1);

    // cout << p4 << endl;
    // cout << grt << endl;
    
    p1->insert(12);
    p1->insert(7);
    p1->insert(8);
    p1->insert(0);


    Node::inOrderTraversal(p1);


    delete grt;
    delete p1;

    return 0;
}

// left-subtree  root  right-subtree

/*
        BST - > 13456

        (5)
       /   \
     (3)   (6)
    /  \  /    \
  (1) (4) NULL  NULL
 /   \
NUll NULL
*/

// 7381259 preorder
// 8135927 postorder
// 8317529 inorder
