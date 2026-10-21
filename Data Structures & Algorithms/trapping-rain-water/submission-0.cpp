class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lMax = 0;
        int rMax = 0;
        int l = 0;
        int r = n-1;
        int total = 0;
        while(l<r){
            if(height[l] < height[r]){
                lMax = max(lMax,height[l]);
                total += lMax - height[l];
                l++;
            }
            else if(height[l] > height[r]){
                rMax = max(rMax,height[r]);
                total += rMax - height[r];
                r--;
            }
            else{
                lMax = max(lMax,height[l]);
                total += lMax - height[l];
                l++; 
            }
        }
        return total;
    }
};
