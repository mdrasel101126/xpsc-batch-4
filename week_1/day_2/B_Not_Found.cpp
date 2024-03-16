#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int a[26] = {0};
    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        a[s[i] - 'a']++;
    }
    bool isExist = false;
    int k;
    for (int i = 0; i < 26; i++)
    {
        if (!a[i])
        {
            isExist = true;
            k = i;
            break;
        }
    }
    if (isExist)
    {
        char ch = 'a' + k;
        cout << ch;
    }
    else
    {
        cout << "None";
    }

    return 0;
}