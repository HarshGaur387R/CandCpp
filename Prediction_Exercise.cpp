#include <iostream>
#include <cstring>
using namespace std;

void func(string s)
{
  int flag = 0;
  char temp;
  temp = s[0];

  for (int i = 0; i < s.length(); i++)
  {

    if (temp == s[i])
    {
      flag++;

      if (flag == 6)
      {
        cout << "Bad";
        exit(0);
      }
    }

    else if (temp != s[i])
    {
      temp = s[i];
    }
  }
  cout << "Good";
}

int main()
{

  string s;

  cin >> s;

  func(s);

  return 0;
}
