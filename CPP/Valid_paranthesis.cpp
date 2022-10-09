#include<iostream>
using namespace std;

struct stack
{
    int top;
    int size;
    char data[10000];
};
void push(struct stack &s,char x)
{
    if(s.top==s.size-1)
        return ;
    else
        s.data[++s.top]=x;
}
char pop(struct stack &s)
{
    if(s.top<0)
        return '#';
    return s.data[s.top--];
}
bool isValid(string x) {
    
    struct stack s;
    s.top=-1;
    s.size=x.length();
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='{'||x[i]=='('||x[i]=='[')
            push(s,x[i]);
        else
        {
            char ch=pop(s);
            switch(x[i])
            {
                case('}'): {
                    if(ch!='{')
                        return false;
                    break;
                };
                case(']'): {
                    if(ch!='[')
                        return false;
                    break;
                };
                case(')'): {
                    if(ch!='(')
                        return false;
                    break;
                };
            }
        }
    }
    if(s.top!=-1)
        return false;
    return true;
}

int main()
{
    string str;
    cout<<"enter the input string of paranthesis : ";
    cin>>str;
    if(isValid(str))
        cout<<"Valid string \n";
    else
        cout<<"input string is non valid\n";
}