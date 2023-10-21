//
// Created by Tony Alhwayek on 10/21/2023.
//

#include <unordered_map>
#include <vector>

using namespace std;

 class Solution {
 public:
     vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> map;
         // Go through all the nums
         for(int i = 0; i < nums.size(); i++) {
             // Calculate which number + nums[i] = target
             int value = target - nums[i];

             // Check if the needed number exist in the map
             if(map.count(value)) {
                 // If so, return the required indicies
                 return {i, map[value]};
             }
             // Else, add nums[i] and its index to the map
             // So we know that it exists
             map[nums[i]] = i;
       }
       return {};
     }
 };