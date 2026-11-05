class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        priority_queue < pair<int, int>, vector<pair<int, int>>, greater < pair < int, int >>> pq;
        for (auto& entry : count) {
            pq.push({entry.second, entry.first});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
