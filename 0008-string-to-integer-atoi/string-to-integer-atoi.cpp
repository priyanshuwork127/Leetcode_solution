
class Solution {
public:
    int myAtoi(string s) {
        int num = 0;
        int sign = 1;
        int i = 0;
        bool signFound = false;
        bool digitStarted = false;

        while (i < s.size()) {
            if (s[i] == ' ' && !signFound && !digitStarted) {
                i++;
            }
            else if (s[i] == '-' && !signFound && !digitStarted) {
                sign = -1;
                signFound = true;
                i++;
            }
            else if (s[i] == '+' && !signFound && !digitStarted) {
                signFound = true;
                i++;
            }
            else if (s[i] >= '0' && s[i] <= '9') {
                signFound = true;
                digitStarted = true;

                if (num > INT_MAX / 10 ||
                    (num == INT_MAX / 10 && s[i] - '0' > 7)) {
                    return sign == 1 ? INT_MAX : INT_MIN;
                }

                num = num * 10 + (s[i] - '0');
                i++;
            }
            else {
                i = s.size();
            }
        }

        return num * sign;
    }
};
