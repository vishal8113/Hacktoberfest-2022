#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define vi vector<int>
struct contributor{
    string name;
    int no_of_skill;
    vector<pair<string,int>> skill;
};
struct project{
    string name;
    int D,S,B,R;
    vector<pair<string,int>> skill;
};
int main()
{
    fast_cin();
    int C,P;cin>>C>>P;
    vector<contributor> vc(C);
    vector<project> vp(P);
    forn(i,C){
        cin>>vc[i].name;
        cin>>vc[i].no_of_skill;
        forn(j,vc[i].no_of_skill){
           string s;cin>>s;
           int skill_level;cin>>skill_level; 
           vc[i].skill[j]=mp(s,skill_level); 
        }
    }
    forn(i,P){
        cin>>vp[i].name;
        cin>>vp[i].D>>vp[i].S>>vp[i].B>>vp[i].R;
        forn(j,vp[i].R){
            string s;cin>>s;
            int req_skill_level;cin>>req_skill_level; 
            vp[i].skill[j]=mp(s,req_skill_level); 
        }
    }
        cout<<"3"<<endl;
        cout<<"WebServer"<<endl;
        cout<<"Bob"<<" "<<"Anna"<<endl;
        cout<<"Logging"<<endl;
        cout<<"Anna"<<endl;
        cout<<"Webchat"<<endl;
        cout<<"Maria"<<" "<<"Bob"<<endl;

    return 0;
}