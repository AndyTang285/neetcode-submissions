#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        // check size
        if (s.length() != t.length()) return false;
        
        unordered_map<char, int> hash_map; 
        
        for (char i : s) {
            hash_map[i]++;
        }

        for (char i : t) {
            hash_map[i]--;
            if (hash_map[i] < 0) return false;
        }

        return true;
    }
};
