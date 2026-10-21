class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int maxWater = INT_MIN;
        while(i<j){
            int area = min(heights[i], heights[j]) * (j-i);
            maxWater = max(maxWater, area);
            if(heights[i] < heights[j]){
                i++;
            }
            else if(heights[i] > heights[j]){
                j--;
            }
            else{i++; j--;}
        }
        return maxWater; 
    }
};
