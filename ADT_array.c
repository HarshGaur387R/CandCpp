#include <stdio.h>
#include <stdlib.h>

 /* array */
#define Array(T) struct{T* data;int size;}*
#define ArraySize(A) A->size
#define CreateArray(A, S) {A = malloc(sizeof(*A));A->data = malloc((S) * sizeof(*A->data));ArraySize(A) = S;}
#define DestroyArray(A) {free(A->data); free(A);}
#define ArrayMember(A, I) A->data[I]
#define ResizeArray(A, S){A->data = realloc(A->data, (S) * sizeof(*A->data));ArraySize(A) = S;}
#define CopyDyncamicToStaticArray(D, S){CreateArray(S, DynamicArraySize(D));memcpy(S->data, D->array->data, ArraySize(S) * sizeof(*S->data));}

/* dynamic array */
#define DynamicArray(T) struct{Array(T) array;int used;}*
#define DynamicArraySize(A) A->used
#define CreateDynamicArray(A, S) {A = malloc(sizeof(*A));CreateArray(A->array, S);DynamicArraySize(A) = 0;}
#define DestroyDynamicArray(A) {DestroyArray(A->array);free(A);}
#define DynamicArrayMember(A, I) ArrayMember(A->array, I)
#define AddDynamicArrayMember(A, M){DynamicArrayMember(A, DynamicArraySize(A)) = M;if(++DynamicArraySize(A) >= ArraySize(A->array)) ResizeArray(A->array, ArraySize(A->array) * 2);}
#define RemoveDynamicArrayMember(A, I){if(I >= DynamicArraySize(A) || I < 0){printf("%d is outside of the dynamic array bounds!\n", I);}else{for(int _da_i = I; _da_i < DynamicArraySize(A) - 1; ++_da_i){DynamicArrayMember(A, _da_i) = DynamicArrayMember(A, _da_i + 1);}DynamicArraySize(A)--;}}

int main(){
  DynamicArray(int) arr;
  CreateDynamicArray(arr, 8); /* this creates the dynamic array, the second argument is the initial array size */
  AddDynamicArrayMember(arr, 10); /* this is like push() for vectors, it adds 10 to the dynamic array of integers */
  RemoveDynamicArrayMember(arr, 0);  /* this is kinda like pop(), it removes anything at the index given (the previous 10 would be stored at index 0 so it's removed now) */
  DestroyDynamicArray(arr); /* this deallocates and removes the dynamic array from memory (make sure to not forget to remove the dynamic array) */
  /* NOTES */
  /* DynamicArraySize(arr) is used to get the size of slots currently in use by the dynamic array */
  /* this would remove the first member of the array: RemoveDynamicArrayMember(arr, 0); */
  /* this would remove the last member of the array: RemoveDynamicArrayMember(arr, DynamicArraySize(arr) - 1); */
}