class Solution {
public:
    string digitSum(string s, int k) {
         while (s.size() > k) {
            string ans = "";
            for (int i = 0; i < s.size(); i += k) {
                int a = 0;
                for (int j = i; j < i + k && j < s.size(); j++) {
                    a += s[j] - '0';
                }
                ans += to_string(a);
            }
            s = ans;
        }
        return s;
    }
};