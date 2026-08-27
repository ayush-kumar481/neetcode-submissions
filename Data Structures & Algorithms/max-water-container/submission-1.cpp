class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int i = 0;
        int j = heights.size()-1;
        while(i<j){
            int current = 1;
            current = (j-i) * min(heights[i], heights[j]);
            ans = max(ans, current);
            if(heights[i] < heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};
