#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> b)
{
    for (int i = 0; i < b.size(); i++)
        cout << b.at(i) << " ";
}
int main()
{
    int i;
    vector<int> v;
    v.push_back(10);
    v.push_back(7);
    printVector(v);
}