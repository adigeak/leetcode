#include <bits/stdc++.h>
using namespace std;

void correct()
{
    int n;
    long x, t, sum = 0, count = 0;
    cin >> n >> x;
    vector<long> a;
    for (int i = 1; i <= n; ++i)
    {
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end(), greater<int>());
    int ind = 1;
    for (auto i : a)
    {
        sum += i;
        if (int(sum / ind) >= x)
        {
            count += 1;
        }
        ind++;
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        correct();
}
