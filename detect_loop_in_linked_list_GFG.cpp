// { Driver Code Starts
// Initial template code for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node *head, Node *tail, int position)
{
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
     bool detectLoop(Node *head)
    {
        if (head == NULL || head->next == NULL || head->next->next == NULL)
        {
            
            return false;
        }

        Node *slow = head;
        Node *fast = head->next->next;

        while (fast || slow)
        {
            if(slow == fast){
                slow = NULL;
                fast = NULL;
                return true;
            }
            
            if(slow->next == NULL) return false;
            
            if(fast->next == NULL) return false;
            
            if(fast->next->next == NULL) return false;
    
            slow = slow->next;
            fast = fast->next->next;

        }
        slow = NULL;
        fast = NULL;
        return false;
    }
};

//     _____________
//     |            |
//[3] [4] [5] [6] [7]

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num;
        cin >> n;

        Node *head, *tail;
        cin >> num;
        head = tail = new Node(num);

        for (int i = 0; i < n - 1; i++)
        {
            cin >> num;
            tail->next = new Node(num);
            tail = tail->next;
        }

        int pos;
        cin >> pos;
        loopHere(head, tail, pos);

        Solution ob;
        if (ob.detectLoop(head))
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends