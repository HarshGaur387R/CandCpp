#include <iostream>
#include <cmath>
using namespace std;

class maxHeap
{

private:
    int *Harr = NULL;
    int size = 0;
    int capasity = 0;

public:
    maxHeap(int capasity);
    maxHeap(int *ptr, int n, int capsity);
    int leftChild(int parent);
    int rightChild(int parent);
    int getParent(int i);
    int getMax();
    void insert(int key);
    void printArr();
    void deleteN();
    int getSize();
    void heapify(int arr[], int i, int n);
    void buildHeap(int arr[], int n);
    int *getRoot();
    void heapSort();
};

void maxHeap::heapSort()
{

    for (int i = size; i > 0; i--)
    {
        swap(Harr[1], Harr[i]);
        heapify(Harr, 1, i - 1);
    }
}

int *maxHeap::getRoot()
{

    return Harr;
}

maxHeap::maxHeap(int *ptr, int n, int capasity)
{
    Harr = new int[capasity];
    size = n;
    this->capasity = capasity;

    for (int i = 1; i <= n; i++)
    {
        Harr[i] = ptr[i - 1];
    }
}

void maxHeap::heapify(int *arr, int i, int n)
{

    int r = (2 * i) + 1;
    int l = (2 * i);
    int largest = i;

    if (l <= n && arr[largest] < arr[l])
    {
        largest = l;
    }
    if (r <= n && arr[largest] < arr[r])
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, largest, n);
    }
}

void maxHeap::buildHeap(int arr[], int n)
{

    for (int i = floor(n / 2); i > 0; i--)
    {
        heapify(arr, i, n);
    }
}

/*
        3,5,4,10,6  // Unsorted tree

            (3)
          /     \
        (5)     (4)
       /   \
    (10)   (6)


           (10)
         /      \
      (6)       (4)
     /    \
   (5)    (3)
*/

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
        cout << Harr[i] << " ";
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
        Harr[1] = Harr[size];
        size--;

        int i = 1, greatV;

        while (i <= size)
        {
            greatV = Harr[rightChild(i)] > Harr[leftChild(i)] ? rightChild(i) : leftChild(i);
            if (Harr[i] < Harr[greatV])
            {
                swap(Harr[i], Harr[greatV]);
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
            Harr[size] = key;
            return; // If the given node is first element so thats a root of the tree.
        }
        else
        {
            int i = 0;

            size++;
            Harr[size] = key;

            i = size;

            while (i > 1)
            {
                if (Harr[i] > Harr[getParent(i)])
                {
                    swap<int>(Harr[i], Harr[getParent(i)]);

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
    Harr = new int[capasity];
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

void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[]{3, 5, 4, 10, 6};

    maxHeap ob(arr, 5, 10);

    ob.printArr();

    ob.buildHeap(ob.getRoot(), 5);

    ob.printArr();

    ob.heapSort();

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