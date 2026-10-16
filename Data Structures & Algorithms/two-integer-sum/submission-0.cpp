class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int dif = target - nums[i];
            if (map.find(dif) != map.end() && map[dif] != i) {
                return {i, map[dif]};
            }
        }
        return {};
    }
};
