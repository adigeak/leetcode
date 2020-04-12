#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,i;
    cin>>n;
    int denom[] = {1, 5, 10, 20, 100};
    num = 0;
    for(i = 4; i>=0 && n>0;i--)
    {
        while(n - denom[i] >= 0)
        {
            n -= denom[i];
            num++;
        }      
    }
    cout<<num;
}