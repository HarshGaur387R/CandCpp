#include <iostream>
using namespace std;

class Node
{
private:
    int data = 0;

public:
    Node *createNode(int data);

    void preorderTraversal(Node *root);
    void postorderTraversal(Node *root);
    void inOrderTraversal(Node *root);

    bool isBST(Node *root); // Checkinig if binary tree is BST
    static Node *search(Node *root, int key);
    static Node *iterativeSearch(Node *root, int key);
    void insert(int key); // BST insertion
    Node *deleteNode(int key, Node *root);
    Node *inorderPredecessor(Node *root);
    Node *left = NULL;
    Node *right = NULL;
    Node(int key);
    ~Node();
};

Node *Node ::inorderPredecessor(Node *root1)
{

    Node *root = root1;

    while (root && root->right != NULL)
    {
        root = root->right;
    }

    return root;
}

Node *Node ::deleteNode(int key, Node *root1)
{
    Node *ipre = NULL;

    if (root1 == NULL)
    {
        return NULL;
    }

    else if (root1->data > key)
    {
        root1->left = deleteNode(key, root1->left);
    }
    else if (root1->data < key)
    {
        root1->right = deleteNode(key, root1->right);
    }
    else
    {
        if (root1->right == NULL && root1->left == NULL)
        {
            delete root1;
            return NULL;
        }
        else if (root1->left == NULL && root1->right != NULL)
        {
            Node *temp = root1->right;
            delete root1;
            return temp;
        }
        else if (root1->left != NULL && root1->right == NULL)
        {
            Node *temp = root1->left;
            delete root1;
            return temp;
        }
        ipre = inorderPredecessor(root1->left);
        root1->data = ipre->data;
        root1->left = deleteNode(ipre->data, root1->left);
    }
    return root1;
}

void Node ::insert(int key)
{
    Node *root = this;
    Node *perv = NULL;

    if (root == NULL)
    {
        root = createNode(key);
    }
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

    if (root != NULL)
    {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

void Node ::postorderTraversal(Node *root1)
{

    Node *root = root1;

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

void Node ::preorderTraversal(Node *root1)
{

    Node *root = root1;

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
    Node *p = new Node(d);
    p->data = d;
    p->right = p->left = NULL;
    return p;
}

Node::Node(int key)
{
    this->data = key;
}

Node::~Node()
{
}

int main()
{

    Node *p1 = new Node(50);

    p1->insert(30);
    p1->insert(20);
    p1->insert(40);
    p1->insert(70);
    p1->insert(60);
    p1->insert(80);

    p1->inOrderTraversal(p1);
    cout << endl;

    p1->deleteNode(20, p1);
    p1->inOrderTraversal(p1);
    cout << endl;

    p1->deleteNode(30, p1);
    p1->inOrderTraversal(p1);
    cout << endl;

    p1->deleteNode(5, p1);
    p1->inOrderTraversal(p1);
    cout << endl;

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
