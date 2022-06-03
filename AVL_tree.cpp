#include <iostream>
#include <cmath>
using namespace std;

class node
{
public:
    int key = 0;
    node *left = NULL;
    node *right = NULL;
    int height = 1;
};

int getheight(node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return n->height;
    }
}

node *createNode(int k)
{
    node *newNode = new node;
    newNode->key = k;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}

int getBalanceFactor(node *n)
{
    if (n == NULL)
        return 0;

    return getheight(n->left) - getheight(n->right);
}

node *rightRotate(node *y)
{
    node *x = y->left;
    node *T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = max(getheight(x->left), getheight(x->right)) + 1;
    y->height = max(getheight(y->left), getheight(y->right)) + 1;

    return x;
}

node *leftRotate(node *x)
{
    node *y = x->right;
    node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getheight(x->left), getheight(x->right)) + 1;
    y->height = max(getheight(y->left), getheight(y->right)) + 1;

    return y;
}

node *insert(node *n, int k)
{
    if (n == NULL)
    {
        return (createNode(k));
    }

    if (k < n->key)
    {
        n->left = insert(n->left, k);
    }
    else if (k > n->key)
    {
        n->right = insert(n->right, k);
        return n;
    }

    n->height = max(getheight(n->left), getheight(n->right)) + 1;
    int bf = getBalanceFactor(n);

    // LEFT LEFT CASE

    if (bf > 1 && k < n->left->key)
    {
        return rightRotate(n);
    }

    // RIGHT RIGHT CASE

    if (bf < -1 && k > n->right->key)
    {
        return leftRotate(n);
    }

    // LEFT RIGHT CASE

    if (bf > 1 && k > n->left->key)
    {
        n->left = leftRotate(n->left);
        return rightRotate(n);
    }

    // RIGHT LEFT CASE

    if (bf < -1 && k < n->right->key)
    {
        n->left = rightRotate(n->right);
        return leftRotate(n);
    }

    return n;
}

void preOrder(node *root1)
{

    node *root = root1;

    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->key;
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    node *root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    preOrder(root);

    delete root;
    return 0;
}

/*          y           ----->        x
          /   \         <-----      /   \
         x    T3                  T1     y
        / \                             / \
       T1  T2                         T2   T3

*/