#include <iostream>
#include <cmath>
using namespace std;

class maxHeap
{

private:
    int *arr = NULL;
    int size = 0;
    int capasity = 0;

public:
    maxHeap(int capasity);
    int leftChild(int parent);
    int rightChild(int parent);
    int getParent(int i);
    int getMax();
    void insert(int key);
    void printArr();
    void deleteN();
    int getSize();
};

int maxHeap::getSize()
{
    return size;
}

void maxHeap::printArr()
{
    if (size == 0)
    {
        cout << "In printArr() :: Tree is empty\n";
        return;
    }
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void maxHeap ::deleteN()
{

    if (size == 0)
    {
        cout << "deleteN() :: Tree is empty\n";
        return;
    }
    else
    {
        arr[1] = arr[size];
        size--;

        int i = 1, greatV;

        while (i <= size)
        {
            greatV = arr[rightChild(i)] > arr[leftChild(i)] ? rightChild(i) : leftChild(i);
            if (arr[i] < arr[greatV])
            {
                swap(arr[i], arr[greatV]);
                i = greatV;
            }
            else
            {
                return;
            }
        }
    }
}

void maxHeap ::insert(int key)
{

    if (size >= capasity)
    {
        cout << "In insert() :: tree is full\n";
    }
    else
    {

        if (size == 0)
        {
            size++;
            arr[size] = key;
            return; // If the given node is first element so thats a root of the tree.
        }
        else
        {
            int i = 0;

            size++;
            arr[size] = key;

            i = size;

            while (i > 1)
            {
                if (arr[i] > arr[getParent(i)])
                {
                    swap<int>(arr[i], arr[getParent(i)]);

                    i = getParent(i);
                }
                else
                {
                    return;
                }
            }
        }
    }
}

maxHeap ::maxHeap(int capasity)
{
    this->capasity = capasity;
    arr = new int[capasity];
}

int maxHeap::getMax()
{
    if (size == 0)
    {
        cout << "getMax() :: Tree is empty\n";
        return -1;
    }
    else
    {
        return 1;
    }
}

int maxHeap::getParent(int i)
{
    if (i == 1)
    {
        cout << "Root node does'nt have parent\n";
        return -1;
    }
    else if (i == 2)
    {
        return 1;
    }
    else
    {
        int fVal = floor(i / 2);

        return fVal;
    }
}

int maxHeap::rightChild(int parent)
{
    if (size == 0)
    {
        cout << "In rightChild() :: Tree is empty\n";
        return -1;
    }
    else if (((2 * parent) + 1) > size)
    {
        return -1;
    }
    return (2 * parent) + 1;
}

int maxHeap ::leftChild(int parent)
{
    if (size == 0)
    {
        cout << "In leftChild() :: tree is empty\n";
        return -1;
    }
    else if ((2 * parent) > size)
    {
        return -1;
    }
    return (2 * parent);
}

int main()
{

    maxHeap ob(10);

    ob.insert(70);
    ob.insert(40);
    ob.insert(50);
    ob.insert(30);
    ob.insert(35);
    ob.insert(60);

    ob.printArr();

    ob.deleteN();
    ob.printArr();

    ob.deleteN();
    ob.printArr();

    ob.deleteN();
    ob.printArr();

    ob.deleteN();
    ob.printArr();

    ob.deleteN();
    ob.printArr();

    ob.deleteN();
    ob.printArr();

    return 0;
}

/*

Complete Binary tree :

1) Each node should have at most 2 nodes.
2) last level as possible left.

Heigth = logn

            70
          /    \
        40      60
       /  \     /
     30    35  50


    ||||||||||||||||||



            50
          /    \
        40      35
       /
     30                      60 ,40 ,50 ,30 ,35


*/