class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> nums_map;
        vector<pair<int, int>> pair;
        for(auto num : nums){
            nums_map[num]++;
        }

        for (const auto& p: nums_map){
            pair.push_back({p.second, p.first});
        }

        sort (pair.rbegin(), pair.rend());
        vector<int> result;
        for(int i = 0; i < k; i++) {
            result.push_back(pair[i].second);
        }

        return result;
    }
};
