class Solution {
public:

    int maxEle(vector<int>& arr){
        int maxNo = INT_MIN;

        for(int i = 0; i<arr.size(); i++){
            if(arr[i] > maxNo){
                maxNo = arr[i];
            }
        }

        return maxNo;
    }

    long long totalHrs(vector<int>& arr, int hourly){
        long long totalH = 0;

        for(int i = 0; i<arr.size(); i++){
            totalH += ceil((double)arr[i]/(double)hourly);
        }

        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = maxEle(piles);

        while(low <= high){
            int mid = (low + high) / 2;
            long long totalHr = totalHrs(piles, mid);
            if(totalHr <= h){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
