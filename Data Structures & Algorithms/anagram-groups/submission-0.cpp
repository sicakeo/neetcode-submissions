class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string sortedStr[strs.size()];
        vector<vector<string>> strAnagrams;
        unordered_map<string, vector<string>> strMap;
        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            strMap[temp].push_back(strs[i]);
        }
        for (auto& pair : strMap){
            strAnagrams.push_back(pair.second);
        }
        return strAnagrams;
    }
};
