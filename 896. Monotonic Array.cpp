//ANSWER IS IN THE FORM OF COMMENT BECAUSE IT HAS ONLY CLASS//


// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) {
//         int count1=0,count2=0;
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]<=nums[i+1])count1++;
//             if(nums[i]>=nums[i+1])count2++;}
//         if(count1==nums.size()-1 || count2==nums.size()-1)return true;
//         else return false;
//     }
// };