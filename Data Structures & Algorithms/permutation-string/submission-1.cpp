class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if(n > m) return false;

        vector<int> s1Count(26,0);
        vector<int> windowCount(26,0);

        for(int i = 0; i<n; i++){
            s1Count[s1[i] - 'a']++;
            windowCount[s2[i] - 'a']++;
        }

        if(s1Count == windowCount) return true;

        for(int i = n; i<m; i++){
            windowCount[s2[i] - 'a']++;
            windowCount[s2[i-n] - 'a']--;

            if(s1Count == windowCount){
                return true;
            }
        }

        return false;
    }
};
