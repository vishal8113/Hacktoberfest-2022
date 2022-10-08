#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int p= s[i]- 96;
        if(p<=3)
        {
            while(p>=1)
            {
                cout<<"1"<<" ";
                p--;
            }
        }
        else if(p<=6)
        {
            while(p>=4)
            {
                cout<<"2"<<" ";
                p--;
            }
        }
        else if(p<=9)
        {
            while(p>=7)
            {
                cout<<"3"<<" ";
                p--;
            }
        }
        else if(p<=12)
        {
            while(p>=10)
            {
                cout<<"4"<<" ";
                p--;
            }
        }
        else if(p<=15)
        {
            while(p>=13)
            {
                cout<<"5"<<" ";
                p--;
            }
        }
        else if(p<=18)
        {
            while(p>=16)
            {
                cout<<"6"<<" ";
                p--;
            }
        }
        else if(p<=21)
        {
            while(p>=19)
            {
                cout<<"7"<<" ";
                p--;
            }
        }
        else if(p<=24)
        {
            while(p>=22)
            {
                cout<<"8"<<" ";
                p--;
            }
        }
        else if(p<=28)
        {
            while(p>=25)
            {
                cout<<"9"<<" ";
                p--;
            }
        }
        else
        cout<<"0"<<" ";
    }
}