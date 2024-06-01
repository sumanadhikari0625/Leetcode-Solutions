class Solution {
public:
    int scoreOfString(string s) {
        int size = s.size();
        int score = 0;
        for(int ind = 1; ind < size; ind++)
        {
            score += abs(s[ind] - s[ind - 1]);
        }
        return score;
    }
};