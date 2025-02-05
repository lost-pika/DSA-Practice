class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i<s.length(); i++) {
            char bracket = s[i];

            if (bracket == '(' || bracket == '[' || bracket == '{') {
                st.push(bracket);
            } else {
                if (!st.empty()) {
                    if (bracket == ')' && st.top() == '(') {
                        st.pop();
                    } else if (bracket == ']' && st.top() == '[') {
                        st.pop();
                    } else if (bracket == '}' && st.top() == '{') {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        if (st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};