//
// Created by Tony Alhwayek on 10/21/2023.
//

#include <algorithm>
#include <string>

using namespace std;

// Runtime:
// Sorting = O(k *logk) where k = length of the string
// Comparing = O(k)
// Total = O(k * logk)

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Sort both strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        // Compare the strings
        return s == t;
    }
};