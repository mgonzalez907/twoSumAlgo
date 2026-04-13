class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {//Nested for loops result in cases: Best:O(1), Worst:O(n^2), 
        for (int i = 0; i < nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++){
                int sum, num1, num2;
                int output[1];
                num1 = nums[i];
                num2 = nums[j];
                sum = num1 + num2;

                //i found the sum!
                if (sum == target) {
                return {i, j};
                }
            }
        }
        return {};
    }
};