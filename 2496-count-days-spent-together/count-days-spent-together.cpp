
class Solution {
public:
    int fun(string date) {
        int m = stoi(date.substr(0, 2));
        int d = stoi(date.substr(3, 2));

        int month[13] = {0, 31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};

        for (int i = 1; i < m; i++) {
            d += month[i];
        }

        return d;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        int a = fun(arriveAlice);
        int b = fun(leaveAlice);
        int c = fun(arriveBob);
        int d = fun(leaveBob);

        int start = max(a, c);
        int end = min(b, d);

        if (start > end)
            return 0;

        return end - start + 1;
    }
};
