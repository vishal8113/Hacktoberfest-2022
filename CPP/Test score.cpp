#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,n;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        if(y%x==0)
           cout<<"YES"<<"\n";
        else
           cout<<"NO"<<"\n";
    }
	return 0;
}
