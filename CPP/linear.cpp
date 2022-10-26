#include<iostream>
using namespace std;
int main(){
    int n,key;
    int A[10];
    cout<<"enter numbers";
    for(int i=0;i<10;i++)
    {
        cin>>A[i];

    }
    cout<<"enter key";
    cin>>key;
    for(int i=0;i<10;i++)
    {
        if(key==A[i])
        {
        cout<<"found at "<<i;
        return 0;}

    }
    cout<<"not found";
    return 0;
}
