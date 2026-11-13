class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<3)return res;
        sort(nums.begin(),nums.end());
        for(int i = 0 ;i<nums.size();i++){
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            int j = i+1;
            int k = nums.size()-1;
            while(k>j){
                int temAns = nums[i] + nums[j] + nums[k];
                if(temAns == 0){
                    vector<int> tmp = {nums[i],nums[j],nums[k]};
                    res.push_back(tmp);
                    j++;
                    while(nums[j]==nums[j-1] and j<k) j++;
                }
                if(temAns>0){
                    k--;
                }
                if(temAns<0){
                    j++;
                }
            }
        }
        return res;
    }
};


// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> res;
//         if (nums.size() < 3)
//             return res;
//         sort(nums.begin(), nums.end());
//         for (int i = 0; i < nums.size(); i++) {
//             if (i > 0 and nums[i] == nums[i - 1])
//                 continue;
//             int j = i + 1;
//             int k = nums.size() - 1;
//             while (j < k) {
//                 int ress = nums[i] + nums[j] + nums[k];
//                 if (ress == 0) {
//                     vector<int> tm = {nums[i],nums[j],nums[k]};
//                     res.push_back(tm);
//                     j++;
//                     while (nums[j] == nums[j-1] and j<k)
//                         j++;
//                 }
//                 if (ress > 0)
//                     k--;
//                 if (ress < 0)
//                     j++;
//             }
//         }
//         return res;
//     }
// };