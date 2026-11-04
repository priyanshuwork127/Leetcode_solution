class Solution {
public:
    string decodeString(string s) {
        int current_value = 0;
        string current_string = "";

        stack<int> st1;
        stack<string> st2;

        for (char c : s) {
            if (isdigit(c)) {
                current_value = current_value * 10 + (c - '0');
            }
            else if (c == '[') {
                st1.push(current_value);
                st2.push(current_string);

                current_value = 0;
                current_string = "";
            }
            else if (isalpha(c)) {
                current_string.push_back(c);
            }
            else if (c == ']') {
                int n = st1.top();
                st1.pop();

                string temp = current_string;

                current_string = st2.top();
                st2.pop();

                while (n--) {
                    current_string += temp;
                }
            }
        }

        return current_string;
    }
};