#include <bits/stdc++.h>
using namespace std;
int socksMerc(vector<int> &a)
{
    unordered_map<int, int> p;
    for (int i : a)
    {
        if (p.find(i) == p.end())
            p.insert(make_pair(i, 1));
        else
            p[i] = p.find(i)->second + 1;
    }
    for (auto i = p.begin(); i != p.end(); i++)
        cout << i->first << i->second << endl;
}
int main()
{
    vector<int> a = {1, 1, 1, 2, 4, 5, 2, 3};
    socksMerc(a);
}