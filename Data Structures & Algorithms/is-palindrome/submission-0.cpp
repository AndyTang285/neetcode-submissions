#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        // filter the string to only lower case letters
        std::string filtered = "";

        for (int i = 0; i < s.size(); i++) {
            if (std::isalnum(s[i])) {
                filtered += (std::tolower(s[i]));
            }
        }

        for (int i = 0; i < filtered.size() / 2; i++) {
            if (filtered[i] != filtered[filtered.size() - 1 - i]) {
                return false; 
            }
        }

        return true; 

    }
};
