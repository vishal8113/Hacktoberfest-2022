#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Array size= ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];                      //10 20 20 30 30 30 
    int c=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[c-1])
        {
            a[c]= a[i];
            c++;
        }
    }
    n=c;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}