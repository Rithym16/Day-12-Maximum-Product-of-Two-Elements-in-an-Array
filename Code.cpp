class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest=nums[nums.size()-1]-1;
        int second_largest=nums[nums.size()-2]-1;
        return largest*second_largest;
    }
};
