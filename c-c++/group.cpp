#include <bits/stdc++.h>

using namespace std;

int countElements(vector<int> &arr)
{
    unordered_map<int, int> a;
    for (int i : arr)
    {
        // cout << i << endl;
        auto x = a.find(i);
        if (x == a.end())
            a.insert(make_pair(i, 1));
        else
            a[i] = x->second + 1;
    }
    unordered_map<int, int>::iterator i;
    // for (i = a.begin(); i != a.end(); i++)
    //     cout << i->first << "  " << i->second << endl;
    int count = 0;
    for (i = a.begin(); i != a.end(); i++)
    {
        auto x = a.find(i->first + 1);
        if (x != a.end())
        {
            int a = i->second;
            int b = x->second;
            count += min(a, b);
        }
    }
    return count;
}

int main()
{
    vector<int> a = {1, 1, 2, 3, 2, 3};
    cout << countElements(a);
}