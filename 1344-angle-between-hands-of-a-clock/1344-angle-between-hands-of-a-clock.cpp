class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourhand= 30 * hour + 0.5*minutes;
        double minutehand= 6*minutes;
        double diff= abs(hourhand - minutehand);

        return min(diff, 360-diff);
    }
};