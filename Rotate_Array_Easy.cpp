#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned int N, K, *Arr;

    cin >> N >> K;
    Arr = (unsigned int *)malloc(N * sizeof(int));

    for (unsigned int i = 0; i < N; i++)
        cin >> Arr[i];

    cout << Arr[N - K];

    for (unsigned int i = 1; i < N; i++)
    {
        cout << " " << Arr[(N - K + i) % N];
        //cout <<"("<<N<<" - "<<K<<" + "<<i<<")"<<"%"<<N<<" = "<<(N - K + i)%N<<endl;}  <-- (Formula)
        free(Arr);
        return 0;
    }
