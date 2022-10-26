#include<iostream>
using namespace std;
int main(){
    cout<<"menu";
    cout<<"1.add\n"<<"2.sub\n"<<"3. mul\n"<<"4. div\n";
    int option;
    cout<<"enter yur choice";
    cin>>option;
    int a,b,c;
    cout<<"enter 2 numbers";
    cin>>a>>b;
    switch(option)
    {
        case 1:c=a+b;
           cout<<c;
        break;
        case 2:c=a-b;
           cout<<c;
        break;
        case 3:c=a*b;
           cout<<c;
        break;
        case 4:c=a/b;
           cout<<c;
        break;    }
        return 0;
     
        }
