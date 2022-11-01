#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,x;
    cin>>t;
    while(t--){
        n=0;
        cin>>x;
        if(x%5!=0)
           cout<<"-1"<<"\n";
        else{
            n=x/10;
            if(x%10!=0)
                n++;
            cout<<n<<"\n";
        }
    }
	return 0;
}
