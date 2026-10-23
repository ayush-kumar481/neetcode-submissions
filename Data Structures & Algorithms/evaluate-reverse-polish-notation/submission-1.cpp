class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int i = 0;
        int n = tokens.size();
        while (i < n) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                st.push(stoi(tokens[i]));
            } else {
                int t2 = st.top();
                st.pop();
                int t1 = st.top();
                st.pop();

                if (tokens[i] == "+")
                    st.push(t2 + t1);
                else if (tokens[i] == "-")
                    st.push(t1 - t2);
                else if (tokens[i] == "*")
                    st.push(t2 * t1);
                else if (tokens[i] == "/")
                    st.push(t1 / t2);
            }
            i++;
        }
        return st.top();
    }
};
