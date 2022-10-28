class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums2.size(), mid;
        float ans;
        for(int i=0; i<m; i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int x=nums1.size();                //nums1= [ 1 2 3] or [1 2 3 7]
        
        for(int i=0;i<x; i++){
            mid=x/2;
            if(x%2==0){
                ans=(nums1[mid]+nums1[mid-1])/2.0;
            }
            else{
                ans=nums1[mid];
            }
        }
        return ans;
    }
};
