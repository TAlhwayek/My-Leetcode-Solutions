//
// Created by Tony Alhwayek on 10/21/2023.
//
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> map;

        // Go through all the strings
        for(string s : strs) {
            string sortedString = s;
            // Sort each string
            sort(sortedString.begin(), sortedString.end());
            // And store it using the sorted string as the key
            // That way each sorted string (key) maps to a vector of anagrams
            map[sortedString].push_back(s);
        }

        // Create 2D vector to store vectors pulled from map
        vector<vector<string>> result;
        for(auto m : map) {
            // Extract each vector from the map
            result.push_back(m.second);
        }
        // Return required 2D vector
        return result;
    }
};