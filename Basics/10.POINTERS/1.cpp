#include <string>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    string ans;
    int len = 0;
    map<string, bool> mp; // Use string as key for memoization

    bool ispalindrome(const string& s) { 
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }

    void recr(const string& s) {
        mp[s] = true;
        if (s.size() == 0) return;
        if (ispalindrome(s)) {
            if ((int)s.size() > len) {
                ans = s;
                len = s.size();
            }
            return;
        }
        for (int i = 1; i < s.size(); i++) {
            string left = s.substr(0, i);
            string right = s.substr(i);
            if (!mp[left]) {
                recr(left);
            }
            if (!mp[right]) {
                recr(right);
            }
        }
    }

    string longestPalindrome(string s) { 
        ans = "";
        len = 0;
        mp.clear();
        recr(s); 
        return ans;
    }
};