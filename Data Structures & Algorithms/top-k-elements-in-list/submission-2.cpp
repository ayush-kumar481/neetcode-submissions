class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> min;
        for(auto it: mp){
            min.push({it.second, it.first});
            if(min.size() > k){
                min.pop();
            }
        }
        while(min.size() > 0){
            ans.push_back(min.top().second);
            min.pop();
        }
        return ans;
    }
};
