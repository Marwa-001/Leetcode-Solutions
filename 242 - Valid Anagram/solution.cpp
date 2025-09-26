#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;

        for (int i = 0; i < s.length(); i++) {
            map1[s[i]]++;
        }
        for (int j = 0; j < t.length(); j++) {
            map2[t[j]]++;
        }

        return map1 == map2;
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isAnagram("anagram", "nagaram") << endl; // true
    cout << sol.isAnagram("rat", "car") << endl;         // false
    return 0;
}
