class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        double mid=0.0;
        vector<int> nums;
        nums.insert(nums.end(),nums1.begin(),nums1.end());
        nums.insert(nums.end(),nums2.begin(),nums2.end());
        sort(nums.begin(),nums.end());

        if((m+n)%2==1){
            mid = nums[(m+n)/2];
        }
        else{
            mid=(nums[(m+n+1)/2]+nums[(m+n-1)/2])/2.0;
        }
        return mid;
    }
};