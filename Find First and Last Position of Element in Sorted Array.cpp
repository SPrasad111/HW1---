class Solution {
public:
vector<int> searchRange(vector<int>& nums, int target) {
  int low = 0;
  int high = nums.size;
  int left, right, mid;

  while(low < high){
    mid = ((low < high)/2); //loops till it reaches mid
    if(nums[mid] >= target)
      left = mid;
    while(left == nums[left-1]){ //have mid = left, then compare left to left-1 to find first occurence, keeps looping until we reach first occurence of the target
        left = left - 1;
      }
    else{
      low = mid + 1; 
    }

  while(left < high){
    mid = ((left < high)/2); //we put left because this is the area where the target number is located, we wouldn't have to waste time in the area that doesn't even have the first occurence of the target number
    if(nums[mid] >= target)
      right = mid; //binary search to mid. sets right = mid
      while(right == nums[right+1]){ //loops until we reach the last occurence of the the target number in the array.
        right = right + 1;
        }
    
    else{
      low = mid + 1; 
      }
  return {left, right};
    }
    return {-1,-1};
}