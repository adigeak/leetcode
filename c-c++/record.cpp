#include <bits/stdc++.h>
using namespace std;

void correct()
{
    int n, p, c, flag = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int p1, c1;
        cin >> p1 >> c1;
        if (p1 >= c1)
        {
            if (i != 0)
            {
                if (p1 > p)
                {
                    if (c1 < c)
                        flag = 1;
                }
                if (p1 == p)
                {
                    if (c1 != c)
                        flag = 1;
                }
                if (p1 < p)
                    flag = 1;
            }
            p = p1;
            c = c1;
        }
        else
            flag = 1;
    }
    if (flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        correct();
}
