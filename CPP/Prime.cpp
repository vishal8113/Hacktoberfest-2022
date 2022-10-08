#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPrime = true;

    for(int i = 2; i < n; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
        }    
            
    }
    if(isPrime)
    {
        cout << "Prime Number" << endl;
    }else{
        cout << "NOt Prime Number" << endl;
    }
    return 0;
}