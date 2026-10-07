class Solution {
public:
    bool isLeap(int year) {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    int daysFrom1971(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        vector<int> monthDays = {31,28,31,30,31,30,31,31,30,31,30,31};

        int days = 0;

        // Add days of previous years
        for (int y = 1971; y < year; y++) {
            days += isLeap(y) ? 366 : 365;
        }

        // Add days of previous months
        for (int m = 1; m < month; m++) {
            days += monthDays[m - 1];
            if (m == 2 && isLeap(year))
                days++;
        }

        // Add current month's days
        days += day;

        return days;
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(daysFrom1971(date1) - daysFrom1971(date2));
    }
};