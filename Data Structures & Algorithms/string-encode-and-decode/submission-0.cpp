class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string str: strs){
            res += to_string(str.length()) + "#" + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // Find the delimiter
            while (s[j] != '#') {
                j++;
            }

            // Extract the length
            int len = stoi(s.substr(i, j - i));

            // Extract the actual string
            string word = s.substr(j + 1, len);
            result.push_back(word);

            // Move to the next encoded string
            i = j + 1 + len;
        }

        return result;
    }
};
