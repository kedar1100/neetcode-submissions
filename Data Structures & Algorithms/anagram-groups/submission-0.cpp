class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp ;
        for(int i =0;i<strs.size();i++){
            string currStr = strs[i];
            sort(currStr.begin(),currStr.end());
            mp[currStr].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto i:mp){
            res.push_back(i.second);
        }
        return res;
    }
};
