#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main()
{
    vector<int> a = {1,1,2,2};
    set<int> b;
    for(int i: a)
    {
        b.insert(i);
    }
    for(int i: b)
    {
        cout<<i<<endl;
    }
}