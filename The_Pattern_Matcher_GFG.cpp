// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <stack>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void follPatt(string s)
    {
        stack<char> s1;
        int n = s.length();
        int ans = 1, i = 0;

        if (n % 2 != 0)
        {
            cout << 0 << endl;
            return;
        }
        else if (s.at(0) == 'y')
        {
            cout << 0 << endl;
            return;
        }

        while (i < n)
        {

            while (s.at(i) == 'x')
            {
                s1.push(s.at(i));
                i++;
                if (i == n)
                {
                    cout << 0 << endl;
                    return;
                }
            }
            while (s.at(i) == 'y')
            {
                if (s1.empty() == true)
                {
                    cout << 0 << endl;
                    return;
                }
                s1.pop();
                i++;

                if (i == n)
                {
                    break;
                }
            }
            if (s1.empty() != true)
            {
                ans = 0;
            }
        }
        cout << ans << endl;
        return;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;
        Solution obj;
        // function call
        obj.follPatt(s);
    }

    return 0;
} // } Driver Code Ends

/* ALTERNATIVE SOLUTION

void follPatt(string s)
    {
       //Your code here
       int n=s.size();
       int count=0,i=0,ans=1;
       while(i<n){
           while(s[i]=='x'){
               count++;
               i++;
           }
           while(s[i]=='y'){
               count--;
               i++;
           }
           if(count!=0){
               ans=0;
           }
       }
       cout<<ans<<endl;
    }


*/