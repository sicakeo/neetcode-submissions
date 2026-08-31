class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> intMap;
        vector<pair<int,int>> pair;
       //build map;
        for( auto value : nums ){
            intMap[value] += 1;
            }
        //create vector hold key-value pair
        for (const auto& p: intMap){
            pair.push_back({p.second, p.first});
            }
        //sort them by descending order
        sort (pair.rbegin(), pair.rend());
        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(pair[i].second);
            }
        return result;
        }
    };

