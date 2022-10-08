#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Array size= ";
    cin>>n;

    vector<int> v;

    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int c=0;

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            a[c]= a[i];
            c++;
        }
        else{
            v.push_back(a[i]);
        }
    }

    reverse(v.begin(), v.end());

    for(int i=c;i<n;i++){
        a[i]=v.back();
        v.pop_back();
    }

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    return 0;
}