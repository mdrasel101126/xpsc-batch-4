#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int chk = 0;
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() || s[i] != st.top())
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
            chk++;
        }
    }
    if (chk % 2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}