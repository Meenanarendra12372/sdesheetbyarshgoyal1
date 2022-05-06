/*https://leetcode.com/problems/find-the-duplicate-number/*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0;
       map<int,int> mp;
      for(int i=0;i<(int)nums.size();i++){
          mp[nums[i]]++;
      }
      for(auto it:mp){
          if(it.second>1) ans = it.first;
      }
    return ans;
    }
};