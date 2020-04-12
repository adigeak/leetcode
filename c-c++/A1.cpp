#include <iostream>
using namespace std;

void miss()
{
    int num, n, c = -1;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> num;
        if (num != i && c == -1)
        {
            c = i;
        }
    }
    cout << c << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        miss();
    return 0;
}