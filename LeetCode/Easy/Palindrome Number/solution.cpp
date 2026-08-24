class Solution {
    bool checkPalindrome(int i, string& s) {
        if (i >= s.size() / 2) return true;
        if (s[i] != s[s.size() - i - 1]) return false; 
        return checkPalindrome(i + 1, s);
    }

public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string s = to_string(x);
        return checkPalindrome(0, s);
    }
};

