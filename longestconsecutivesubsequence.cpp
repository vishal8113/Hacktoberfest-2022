/*Question: Your are given an unsorted array of N integers. Your task is to find the length of longest consecutive subsequence.*/
#include <bits/stdc++.h> 
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here
    sort(arr.begin(),arr.end());
    int maxi=1;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1){
            cnt++;
            maxi=max(maxi,cnt);
        }else if(arr[i]==arr[i-1]){
            continue;
        }else{
            cnt=1;
        }
    }return maxi;
}
int main(){
    vector<int> arr={33,20,34,30,35};
    cout<<lengthOfLongestConsecutiveSequence(arr,5);
}