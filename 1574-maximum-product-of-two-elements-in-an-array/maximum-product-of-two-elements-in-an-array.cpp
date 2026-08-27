class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=(nums[0]>nums[1])?0:1;
        int j=(i==0)?1:0;
        for(int a=2;a<nums.size();a++){
            if(nums[i]<=nums[a]){
                j=i;
                i=a;
            }
            else if(nums[j]<=nums[a]){
                j=a;
            }
        }
        return (nums[i]-1)*(nums[j]-1);
    }
};