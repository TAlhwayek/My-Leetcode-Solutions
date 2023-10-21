//
// Created by Tony Alhwayek on 10/21/2023.
//


#include <unordered_map>
#include <vector>

using namespace std;

// Runtime:
// For loop = O(n)
// If = O(1)
// map[nums[i]]++ = O(1)
// Total = O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        // Go through all the values
        for(int i = 0; i < nums.size(); i++) {
            // Check if value already exists
            if(map[nums[i]] >= 1) {
                return true;
            }
            // If not, add it to the map and increment its value
            map[nums[i]]++;
        }
        return false;
    }
};