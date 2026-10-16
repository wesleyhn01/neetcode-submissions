class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> scount, tcount;
        for (int i = 0; i < s.size(); i++) {
            scount[s[i]]++;
            tcount[t[i]]++;
        }
        return scount == tcount;
    }
};
