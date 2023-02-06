class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
  for (int i = 0; i <= nums.size(); i++) { //outer and inner array starting at index 0
    for (int j = 0; j <= nums.size(); j++) { 
      if (nums[i] != nums[j]) { //prevents using the same element twice
        if(nums[i] + nums[j] == target){ //add the elements 
          return {i, j}; 
          }
        }
      }
    }
  return {-1, -1};
  }
};
