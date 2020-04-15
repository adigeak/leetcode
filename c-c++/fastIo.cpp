#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, cnt = 0;
    long long sum;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        long t;
        cin >> t;
        if (sum % k == 0)
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}