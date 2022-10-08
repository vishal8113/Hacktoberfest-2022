#include<bits/stdc++.h>
using namespace std;

class A
{
    int a, b;
    public:
        void get(int i, int j)
        {
            a=i;
            b=j;
        }
        void display()
        {
            cout<<a<<" "<<b;
        }
        friend void operator + (A ob, A &ob1)
        {
            ob1.a= ob1.a+ ob.a;
            ob1.b= ob1.b+ ob.b;
        }
};
int main()
{
    A x, y;
    x.get(10, 10);
    y.get(10, 20);
    x+y;
    y.display();
}