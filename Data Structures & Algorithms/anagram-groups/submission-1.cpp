class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> strMap;
        vector<vector<string>> strList;
        for (int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            strMap[temp].push_back(strs[i]) ;
        }

        for(auto& str:strMap) {
            strList.push_back(str.second);
        }
        return strList;
    }
};
