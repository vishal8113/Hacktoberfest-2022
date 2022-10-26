#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year";
    cin>>year;
    
    if(year%400==0 && year%100==0)
    cout<<"leap year";
    else if(year%400!=0 && year%100==0)
    cout<<"it is a century year and not a leap year";
    else if(year%4==0 && year%100!=0 && year%400!=0)
    cout<<"leap year";
    else
    cout<<"given year is not a leap year";
    return 0;
}