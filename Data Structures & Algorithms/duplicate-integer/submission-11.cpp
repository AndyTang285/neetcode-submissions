#include <unordered_map>


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hash_map;
        for (int i : nums) {
            hash_map[i]++;
            if (hash_map[i] > 1) return true;
        }

        return false;
        
    }
};