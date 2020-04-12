#include <bits/stdc++.h>
using namespace std;

void good()
{
    int n, m;
    cin >> n >> m;
    string str(m, 'B');
    vector<string> a(n, str);
    a[0][0] = 'W';
    for (auto i : a)
        cout << i << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        good();
    }
    return 0;
}