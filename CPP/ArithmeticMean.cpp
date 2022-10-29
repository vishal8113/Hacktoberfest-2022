#include<iostream>
using namespace std;
float arithmeticMean(float [], int);
int main()
{
    int n, i;
    float arr[50], armean;
    cout<<"Enter the Size (maz. 50): ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    armean = arithmeticMean(arr, n);
    cout<<"\nArithmetic Mean = "<<armean;
    cout<<endl;
    return 0;
}
float arithmeticMean(float arr[], int n)
{
    int i;
    float sum=0, am;
    for(i=0; i<n; i++)
        sum = sum+arr[i];
    am = sum/n;
    return am;
}
