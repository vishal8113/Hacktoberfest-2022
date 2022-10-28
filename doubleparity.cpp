#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    string s1;
    int l=k;
    int net=0;
    for(int i=0;i<s.size();i++){
        if(l==0){
            if(net%2==0){
                s1.push_back('0');
            }
            else{
                s1.push_back('1');
            }
            net=0;
            l=k;
        }
        if(s[i]=='1'){
            net++;
        }
            l--;
            s1.push_back(s[i]);
    }

    
               if(l==0){
            if(net%2==0){
                s1.push_back('0');
            }
            else{
                s1.push_back('1');
            }
            net=0;
            l=k;
        }
    cout<<s1<<endl;
 

}