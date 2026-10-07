class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;
        for (int num : nums) {
            if (set.count(num) == true) {
                set.insert(num);
                return true;
            } else {
                set.insert(num);
            }
        }
        return false;
    }
};