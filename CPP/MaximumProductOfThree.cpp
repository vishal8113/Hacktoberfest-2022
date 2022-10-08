#include<bits/stdc++.h>
using namespace std;

int maxi(vector<int> &nums){
    int n= nums.size();
    sort(nums.begin(), nums.end());
    int one= nums[0]*nums[1]*nums[n-1];
    int two= nums[n-1]*nums[n-2]*nums[n-3];
    return max(one, two);
}

int main(){
    int n;
    cout<<"Array size= ";
    cin>>n;
    vector<int> nums(n,0);

    for(int i=0;i<n;i++)
    cin>>nums[i];

    int k= maxi(nums);
    cout<<"Max pdt: "<<k;
}