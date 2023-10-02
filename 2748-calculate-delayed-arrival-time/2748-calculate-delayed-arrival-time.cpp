class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int n= arrivalTime+delayedTime;
        n=n%24;
        return n;
    }
};