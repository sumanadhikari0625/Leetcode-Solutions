class MyCalendarTwo {
public:
    MyCalendarTwo() {
        
    }
    map<int,int>mpp;
    bool book(int start, int end) {
        mpp[start]++;
        mpp[end]--;
        int ans=0;
        for(auto it:mpp)
        {
            ans+=it.second;
            if(ans>2)
            {
                mpp[start]--;
                mpp[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */