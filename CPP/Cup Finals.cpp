#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,d;
    cin>>t;
    while(t--){
        cin>>x>>y>>d;
        if(abs(x-y)>d)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
	return 0;
}
