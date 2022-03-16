#include <stdio.h>
#include <stdlib.h>

//Custom array

typedef struct ADT_Array
{
    int *ptr;
    int used_size;
    int total_size;

} ADT_Array;

void create(ADT_Array *a, int u, int t)
{
    a->ptr = (int *)malloc(t * sizeof(int));
    a->used_size = u;
    a->total_size = t;
}

void set(ADT_Array *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        scanf("%d", &a->ptr[i]);
    }
}

void show(ADT_Array *a)
{
    // Code For Traversal

    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d ", a->ptr[i]);
    }
}

int insertion(ADT_Array *a, int ele, int index)
{
    // Code For Insertion

    if (a->used_size >= a->total_size)
    {
        return -1;
    }

    for (int i = a->used_size - 1; i >= index; i--)
    {
        a->ptr[i + 1] = a->ptr[i];
    }

    a->ptr[index] = ele;
    a->used_size++;
    return 1;
}

int deletion(ADT_Array *a, int index)
{
    if (a->used_size >= a->total_size && a->used_size > index)
    {
        return -1;
    }

    for (int i = index; i < a->used_size - 1; i++)
    {
        a->ptr[i] = a->ptr[i + 1];
    }

    a->used_size--;
    return 1;
}

int linearSearch(ADT_Array *a, int element)
{
    for (int i = 0; i < a->used_size; i++)
    {
        if (a->ptr[i] == element)
        {
            return i;
        }
    }

    return -1;
}

int binarySearch(ADT_Array *a, int element)
{

    int high = a->used_size - 1;
    int low = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a->ptr[mid] == element)
        {
            return mid;
        }

        if (a->ptr[mid] < element)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }

    return -1;
    // 13 20 33 50 55
}

int main()
{
    ADT_Array arr;

    create(&arr, 5, 50);

    // set(&arr);

    // unsorted array
    arr.ptr[0] = 3;
    arr.ptr[1] = 50;
    arr.ptr[2] = 34;
    arr.ptr[3] = 16;
    arr.ptr[4] = 20;

    int result = linearSearch(&arr, 34);
    printf("linear search result : %d\n", result);

    // sorted array

    arr.ptr[0] = 3;
    arr.ptr[1] = 16;
    arr.ptr[2] = 20;
    arr.ptr[3] = 34;
    arr.ptr[4] = 50;

    result = binarySearch(&arr, 34);
    printf("Binary search result : %d\n", result);

    // show(&arr);

    // deletion(&arr, 2);

    /* int flag = insertion(&arr, 41, 1);

     if (flag == -1)
     {
         printf("\nERROR INSERTION FAILED!\n");
         exit(0);
     }
     else
     {
         show(&arr);
     } */

    return 0;
}