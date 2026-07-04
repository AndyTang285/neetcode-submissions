#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) return false; 
        
        std::unordered_map<char, int> letter_t; 
        
        for (char i : t) {
            letter_t[i]++;
        }

        for (char i : s) {
            letter_t[i]--;
            if (letter_t[i] < 0) return false;
        }

        return true;
    }
};
