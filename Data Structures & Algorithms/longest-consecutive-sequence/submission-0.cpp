class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for(int it: st){
            if(st.find(it - 1) == st.end()){
                int current = it;
                int cnt = 1;
                while(st.find(current + 1) != st.end()){
                    current++;
                    cnt++;
                }
                ans = max(ans, cnt);
            }
        }
        
        return ans;
    }
};
