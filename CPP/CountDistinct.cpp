#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Array size= ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    unordered_set <int> m;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(m.find(a[i])==m.end())
        {
            count++;
            m.insert(a[i]);
        }
    }
    cout<<count;
}