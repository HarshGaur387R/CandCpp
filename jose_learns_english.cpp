#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void func()
{

  int S, i, temp;
  char arr[100];
  char arr2[100];
  char l, l2;
  cin >> S;

  for (i = 0; i < S; i++)
  {
    cin >> arr[i];
  }

  arr[i] = '\0';
  i = 0;
  strcpy(arr2, arr);

  for (int h = 0; h < S; h++)
  {
    arr[h] = tolower(arr[h]);
  }

  for (int k = 0; k < S; k++)
  {
    temp = k + 1;

    for (int j = temp; j < S; j++)
    {
      if ((int)arr[k] > (int)arr[j])
      {
        l = (arr[k]);
        arr[k] = (arr[j]);
        arr[j] = l;

        l2 = arr2[k];
        arr2[k] = arr2[j];
        arr2[j] = l2;
      }
    }
    cout << arr2[k] << " ";
  }
}

int main()
{
  func();
}